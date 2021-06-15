/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.MetaData;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameEventManager
{
	// Fields
	private GameEventSubscribableVariable<int> gameEventSubscribableVariable;
	public readonly AvatarCommandsPlayModeManager AvatarCommandsPlayMode;
	public readonly AvatarCommandsBuildModeManager AvatarCommandsBuildMode;
	public readonly GameStateManager GameState;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Action<FirstTimeEvent> OnFirstTimeEvent;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Action<int> OnXPRewarded;

	// Events
	public event Action<FirstTimeEvent> OnFirstTimeEvent {
		add;
		remove;
	}
	public event Action<int> OnXPRewarded {
		add;
		remove;
	}

	// Nested types
	private class GameEventSubscribableVariable<T> : SubscribableVariableBase<T>
	{
		// Properties
		public T ValueSet { set; }

		// Constructors
		public GameEventSubscribableVariable(T value);
	}

	public class GameStateManager
	{
		// Fields
		public Action OnEnableLobbyState;
		public Action OnDisableLobbyState;
		private GameEventSubscribableVariable<MVGameStateType> gameStateType;

		// Properties
		public SubscribableVariableBase<MVGameStateType> GameStateType { get; }

		// Constructors
		public GameStateManager();

		// Methods
		public void NotifyGameStateType(MVGameStateType gameState);
	}

	public class AvatarCommandsPlayModeManager
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnKillSelf;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSetRespawnWhenPossible;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnReadyScreenShot;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnEnterPlaymode;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSetToSpawnPoint;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<WinningConditionType> OnWinningConditionIntermediateDebriefing;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnRemoveFromGame;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnRespawn;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSetToDeadMode;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<int> OnMoveBodyToSafeSpot;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<int> OnSpawnAtSafeSpot;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSpawnAsGhost;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnReviveTimeElapsed;

		// Events
		public event Action OnKillSelf {
			add;
			remove;
		}
		public event Action OnSetRespawnWhenPossible {
			add;
			remove;
		}
		public event Action OnReadyScreenShot {
			add;
			remove;
		}
		public event Action OnEnterPlaymode {
			add;
			remove;
		}
		public event Action OnSetToSpawnPoint {
			add;
			remove;
		}
		public event Action<WinningConditionType> OnWinningConditionIntermediateDebriefing {
			add;
			remove;
		}
		public event Action OnRemoveFromGame {
			add;
			remove;
		}
		public event Action OnRespawn {
			add;
			remove;
		}
		public event Action OnSetToDeadMode {
			add;
			remove;
		}
		public event Action<int> OnMoveBodyToSafeSpot {
			add;
			remove;
		}
		public event Action<int> OnSpawnAtSafeSpot {
			add;
			remove;
		}
		public event Action OnSpawnAsGhost {
			add;
			remove;
		}
		public event Action OnReviveTimeElapsed {
			add;
			remove;
		}

		// Constructors
		public AvatarCommandsPlayModeManager();

		// Methods
		public void KillSelf();
		public void ReviveTimeElapsed();
		public void EnterPlayingState();
		public void SetToDeadMode();
		public void Respawn();
		public void SetToSpawnPoint();
		public void SpawnAsGhost();
		public void SetRespawnWhenPossible();
		public void MoveBodyToSafeSpot(int index);
		public void SpawnAtSafeSpot(int safeSpotIndex);
		public void SetIntermediateDebriefing(WinningConditionType winningConditionType);
		public void RemoveFromGame();
		public void ReadyScreenShot();
	}

	public class AvatarCommandsBuildModeManager
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<EditorEvent, object> OnEnterBuildStateEvent;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<EditorEvent, object> OnExitBuildStateEvent;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<Vector3, Quaternion> OnSetSpawn;
		public readonly LaserCommandsManager LaserCommands;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSetToEditMode;

		// Events
		public event Action<EditorEvent, object> OnEnterBuildStateEvent {
			add;
			remove;
		}
		public event Action<EditorEvent, object> OnExitBuildStateEvent {
			add;
			remove;
		}
		public event Action<Vector3, Quaternion> OnSetSpawn {
			add;
			remove;
		}
		public event Action OnSetToEditMode {
			add;
			remove;
		}

		// Nested types
		public class LaserCommandsManager
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Action<bool> OnLaserActiveChanged;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Action<byte> OnCubeMaterialChanged;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Action<LaserPointerState> OnChangeState;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Action<Vector3> OnUpdatePosition;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Action<float> OnActivateLaserForDuration;

			// Events
			public event Action<bool> OnLaserActiveChanged {
				add;
				remove;
			}
			public event Action<byte> OnCubeMaterialChanged {
				add;
				remove;
			}
			public event Action<LaserPointerState> OnChangeState {
				add;
				remove;
			}
			public event Action<Vector3> OnUpdatePosition {
				add;
				remove;
			}
			public event Action<float> OnActivateLaserForDuration {
				add;
				remove;
			}

			// Constructors
			public LaserCommandsManager();

			// Methods
			public void SetLaserActiveState(bool isActive);
			public void SetCurrentCubeMaterial(byte cubeMaterial);
			public void ChangeState(LaserPointerState newState);
			public void UpdatePosition(Vector3 to);
			public void ActivateLaserForDuration(float duration);
		}

		// Constructors
		public AvatarCommandsBuildModeManager();

		// Methods
		public void SetSpawn(Vector3 position, Quaternion rotation);
		public void SetToEditMode();
		public void EnterBuildStateEvent(EditorEvent editorEvent, object eventData);
		public void ExitBuildStateEvent(EditorEvent editorEvent, object eventData);
	}

	// Constructors
	public GameEventManager();

	// Methods
	public void NotifyFirstTimeEvent(FirstTimeEvent firstTimeEvent);
	public void NotifyXPDeltaAmount(int xp);
}

