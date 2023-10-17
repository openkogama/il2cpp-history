/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostBehaviour : MonoBehaviour
{
	// Fields
	private const float advancedGhostBodyMaxRadius = 4f;
	private CullingSubscriberBase cullingSubscriberBase;
	private const int behaviourOnlyDistanceBand = 3;
	private bool behaviourOnlyEnabled;
	private bool allVisible;
	private bool wantsVisible;
	private IGhostBehaviourState currentState;
	private AdvancedGhostMotor advancedGhostMotor;
	private NetworkedValues networkedValues;
	private AdvancedGhostPerception perception;
	private Transform transformParent;
	private Vector3 nextPosition;
	private int lives;
	private int maxLives;
	private Func<bool> deathCheckFunc;
	private ObscuredFloat speed;
	private float radius;
	private float perceptionRadius;
	private float minPerceptionRadius;
	private float speedPerceptionFactor;
	private bool respawn;
	private bool clearEffectsBecauseOfReset;
	private AdvancedGhostBodyRotateWeapon weapon;
	public AdvancedGhostVisualizaton GhostVisualization;

	// Properties
	public int Lives { set; }
	private bool IsDead { get; }
	private float RoamRadius { get; }
	public float Speed { set; }
	public float Radius { set; }
	public MVTeam Team { get; set; }
	public CullingSubscriberBase CullingSubscriberBase { get; }

	// Nested types
	private interface IGhostBehaviourState
	{
		// Methods
		void Enter(AdvancedGhostBehaviour ghostBehaviour);
		System.Type Update(AdvancedGhostBehaviour ghostBehaviour);
		void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private abstract class GhostBehaviourState : IGhostBehaviourState
	{
		// Constructors
		protected GhostBehaviourState();

		// Methods
		public abstract void Enter(AdvancedGhostBehaviour ghostBehaviour);
		public System.Type Update(AdvancedGhostBehaviour ghostBehaviour);
		protected abstract System.Type UpdateState(AdvancedGhostBehaviour ghostBehaviour);
		public abstract void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class Idle : GhostBehaviourState
	{
		// Fields
		private float idleRotationSpeed;

		// Constructors
		public Idle();

		// Methods
		public override void Enter(AdvancedGhostBehaviour ghostBehaviour);
		protected override System.Type UpdateState(AdvancedGhostBehaviour ghostBehaviour);
		public override void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class Die : IGhostBehaviourState
	{
		// Fields
		private float dieTime;
		private float currentDieTime;
		private float deathRotationSpeed;

		// Constructors
		public Die();

		// Methods
		public void Enter(AdvancedGhostBehaviour ghostBehaviour);
		public System.Type Update(AdvancedGhostBehaviour ghostBehaviour);
		public void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class Dead : IGhostBehaviourState
	{
		// Constructors
		public Dead();

		// Methods
		public void Enter(AdvancedGhostBehaviour ghostBehaviour);
		public System.Type Update(AdvancedGhostBehaviour ghostBehaviour);
		public void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class ResetState : IGhostBehaviourState
	{
		// Constructors
		public ResetState();

		// Methods
		public void Enter(AdvancedGhostBehaviour ghostBehaviour);
		public System.Type Update(AdvancedGhostBehaviour ghostBehaviour);
		public void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class Alert : GhostBehaviourState
	{
		// Fields
		private float alertRotationSpeed;
		private float alertMultiplier;

		// Constructors
		public Alert();

		// Methods
		public override void Enter(AdvancedGhostBehaviour ghostBehaviour);
		protected override System.Type UpdateState(AdvancedGhostBehaviour ghostBehaviour);
		public override void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class Attack : GhostBehaviourState
	{
		// Fields
		private float attackRotationSpeed;

		// Constructors
		public Attack();

		// Methods
		public override void Enter(AdvancedGhostBehaviour ghostBehaviour);
		protected override System.Type UpdateState(AdvancedGhostBehaviour ghostBehaviour);
		public override void Exit(AdvancedGhostBehaviour ghostBehaviour);
	}

	private class AdvancedGhostPerception
	{
		// Fields
		public MVTeam alliedTeam;
		private AdvancedGhostBehaviour ghostBehaviour;
		private OptimizedPerception perception;
		private int currentWoID;
		private int perceptionIntervalMilliseconds;
		private DeterministicSyncedInterval syncedInterval;

		// Properties
		public MVTeam AlliedTeam { get; set; }

		// Constructors
		public AdvancedGhostPerception(AdvancedGhostBehaviour ghostBehaviour, int woID);

		// Methods
		public void Reset();
		public void Update();
		public bool TryGetCurrentTarget(out MVWorldObjectClient worldObjectClient);
		public bool TryGetNewTarget(out MVWorldObjectClient worldObjectClient);
		private bool TryGetTarget(List<WorldObjectClientRef> targets, out MVWorldObjectClient target);
		private bool CanSense(Vector3 targetPosition);
		private bool IsWithinRoamRadius(Vector3 targetPosition);
		private bool IsWithinPerceptionRadius(Vector3 targetPosition);
		private float DistanceToTargetPosition(Vector3 targetPosition);
	}

	private class NetworkedValues
	{
		// Fields
		private const float pi2 = 6.2831855f;
		private Vector3 lookDir;
		private float minLookDeltaOffset;
		private const float idleTargetPosMoveSpeedFactor = 0.2f;
		private AdvancedGhostBehaviour ghostBehaviour;
		private Vector3 nextPosition;
		private Func<int, float, float, Transform, Vector3> patrolPattern;
		private int prevServertime;
		private bool didMeasure;

		// Properties
		public Vector3 SyncPosition { get; }
		public Vector3 SyncLookDir { get; }

		// Constructors
		public NetworkedValues(AdvancedGhostBehaviour ghostBehaviour);

		// Methods
		public void Update();
		public Vector3 GetPosition(float delta);
		private void GetNextLookAt(Vector3 curPosition, int serverTimeInMilliSeconds);
		private void Test(double serverTimeNormalizedToPeriod);
		private Vector3 EaseInEaseOutBackAndForward(int serverTimeInMilliSeconds, float speed, float radius, Transform transform);
		private Vector3 Circle(int serverTimeInMilliSeconds, float speed, float radius, Transform transform);
		private float GetX(float serverTimeWithSpeedFactor, float radius);
		private float GetY(float serverTimeWithSpeedFactor, float radius);
		private Vector3 BackAndForward(int serverTimeInMilliSeconds, float speed, float radius, Transform transform);
	}

	// Constructors
	public AdvancedGhostBehaviour();

	// Methods
	private void Awake();
	public void Init(MVCubeModelBase body, AdvancedGhostMotor advancedGhostMotor, Func<bool> deathCheckFunc, int woID);
	public void EditModeUpdateCulling();
	private void SetupCulling();
	private void OnStateChange(CullingGroupEvent cullingGroupEvent);
	private void OnDestroy();
	private void InitBody(MVCubeModelBase body);
	private void SetVisible();
	public void SetGameMode(bool isPlayMode);
	public void Reset();
	public void ReceivedDamage();
	public void ReceivedHealing();
	protected void Update();
	protected void FixedUpdate();
	private void DoRespawn();
	private void SetInitialState();
	private void UpdatePositionAndRotation();
	private void UpdateBehaviourState();
	private void SetCurrentState(System.Type type);
	private Vector3 GetMoveVector(Vector3 targetPos);
	private void SetDesiredPosition(Vector3 position);
}

