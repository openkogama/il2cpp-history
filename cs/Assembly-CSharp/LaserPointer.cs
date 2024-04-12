/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LaserPointer : MonoBehaviour, ILaserPointer
{
	// Fields
	private const float syncInverval = 0.4f;
	[SerializeField]
	private Vector3 offset;
	[SerializeField]
	private Transform cube;
	[SerializeField]
	private LineRenderer lineRenderer;
	[SerializeField]
	private Material insertingMaterial;
	[SerializeField]
	private Material deleteMaterial;
	[SerializeField]
	private Material transformingMaterial;
	[SerializeField]
	private Color beamObjectColor;
	[SerializeField]
	private Color beamDeleteColor;
	[SerializeField]
	private Color beamEditColor;
	[SerializeField]
	private Renderer cubeRenderer;
	[SerializeField]
	private MeshFilter cubeMeshFilter;
	private Material currentCubeMaterial;
	private byte currentCubeMaterialId;
	private Color beamColor;
	private LaserPointerState state;
	private Vector3 relativeTargetPosition;
	private Vector3 relativeCurrentTargetPosition;
	private bool isFiring;
	private float activeDuration;
	private float currentLaserAlpha;
	private float lastSyncTime;
	private Dictionary<object, object> syncBuffer;
	public Action<bool, bool> OnLaserActive;
	private bool isActive;
	private bool isLocal;
	private MVRuntimeDataVariable currentItem;

	// Properties
	public Renderer CubeRenderer { get; }
	public MeshFilter CubeMeshFilter { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoDeactivateLaserAfterDuration_d__46 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LaserPointer __4__this;
		private float _t_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoDeactivateLaserAfterDuration_d__46(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LaserPointer();

	// Methods
	public void SetLaserActiveState(bool isActive);
	public void Initialize(bool isLocal, MVRuntimeDataVariable currentItem, Transform parent);
	private void OnChange(object newvalue);
	public void SetCurrentCubeMaterial(byte cubeMaterial);
	public void SetLaserCubeVisible(bool visible);
	public void ChangeState(LaserPointerState newState);
	public void UpdatePosition(Vector3 to);
	public void ActivateLaserForDuration(float duration);
	public void OnStateChanged(Dictionary<object, object> newState);
	public void OnEquip();
	public void SubscribeToCommands();
	private void OnEnable();
	private void OnDisable();
	private void Start();
	private void LateUpdate();
	[IteratorStateMachine(typeof(_DoDeactivateLaserAfterDuration_d__46))]
	private IEnumerator DoDeactivateLaserAfterDuration();
	private void ApplyMaterialForState();
	protected void SyncState(Dictionary<object, object> newState);
	protected void IntervalSyncState(Dictionary<object, object> newState, float interval);
}

