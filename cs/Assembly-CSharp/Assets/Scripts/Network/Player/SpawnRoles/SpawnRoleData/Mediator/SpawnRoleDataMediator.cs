/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.SpawnRoleVariableTypes;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator
{
	public class SpawnRoleDataMediator
	{
		// Fields
		protected SpawnRoleDataReceiverInternal spawnRoleDataReceiver;
		public readonly SpawnRoleModeTypeWrapper SpawnRoleModeTypeWrapper;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<int, int, PlayerKilledByType> OnKilled;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSuicide;
		protected readonly SpawnRoleVariableInternal<int> woId;
		protected readonly SpawnRoleVariableInternal<SpawnRoleModeType> spawnRoleMode;
		protected readonly SpawnRoleVariableInternal<bool> isSeated;
		protected readonly SpawnRoleVariableInternal<float> health;
		protected readonly SpawnRoleVariableInternal<int> maxHealth;
		protected readonly SpawnRoleVariableInternal<float> shield;
		protected readonly SpawnRoleVariableInternal<bool> isInGunMode;
		protected readonly SpawnRoleVariableInternal<bool> isInVehicle;
		protected readonly SpawnRoleVariableInternal<Vector3> position;
		protected readonly SpawnRoleVariableInternal<Quaternion> rotation;
		protected readonly SpawnRoleVariableInternal<Vector3> scale;
		protected readonly SpawnRoleVariableInternal<Vector3> defaultScale;
		protected readonly SpawnRoleVariableInternal<float> size;
		protected readonly SpawnRoleVariableInternal<LastRespawnType> lastRespawnType;
		protected readonly SpawnRoleVariableInternal<bool> pickupItemIsInHand;
		protected readonly SpawnRoleVariableInternal<ReviveState> reviveState;
		protected readonly SpawnRoleVariableInternal<GamePassTier> tierRequirement;
	
		// Properties
		public SpawnRoleVariable<int> WoId { get; }
		public SpawnRoleVariable<SpawnRoleModeType> SpawnRoleMode { get; }
		public SpawnRoleVariable<bool> IsSeated { get; }
		public SpawnRoleVariable<float> Health { get; }
		public SpawnRoleVariable<int> MaxHealth { get; }
		public SpawnRoleVariable<float> Shield { get; }
		public SpawnRoleVariable<bool> IsInGunMode { get; }
		public SpawnRoleVariable<bool> IsInVehicle { get; }
		public SpawnRoleVariable<Vector3> Position { get; }
		public SpawnRoleVariable<Quaternion> Rotation { get; }
		public SpawnRoleVariable<bool> PickupItemIsInHand { get; }
		public SpawnRoleVariable<Vector3> DefaultScale { get; }
		public SpawnRoleVariable<Vector3> Scale { get; }
		public SpawnRoleVariable<GamePassTier> TierRequirement { get; }
		public SpawnRoleVariable<float> Size { get; }
		public SpawnRoleVariable<ReviveState> ReviveState { get; }
		public SpawnRoleVariable<LastRespawnType> LastAvatarRespawnType { get; }
	
		// Events
		public event Action<int, int, PlayerKilledByType> OnKilled {
			add;
			remove;
		}
		public event Action OnSuicide {
			add;
			remove;
		}
	
		// Nested types
		protected class SpawnRoleDataReceiverInternal : SpawnRoleDataReceiver
		{
			// Constructors
			public SpawnRoleDataReceiverInternal();
	
			// Methods
			public void DeActivate();
		}
	
		protected class SpawnRoleVariableInternal<T> : SpawnRoleVariable<T>
		{
			// Properties
			public SubscribableVariable<T> SubscribableVariable { get; }
	
			// Constructors
			public SpawnRoleVariableInternal(T value);
		}
	
		// Constructors
		public SpawnRoleDataMediator();
	
		// Methods
		public void ActivateSpawnRole(ISpawnRoleLocal currentSpawnRole, ISpawnRoleLocal prevSpawnRole, Vector3 newPosition, Quaternion newRotation);
		private void DeActivatePrevSpawnRoleDataReceiver(ISpawnRoleLocal prevSpawnRole);
		private void SetupNewSpawnRoleDataReceiver();
		protected void SpawnRoleDataReceiverOnOnKilled(int localPlayerActorNr, int dmgDealerActorNr, PlayerKilledByType damageType);
		protected void SpawnRoleDataReceiverOnOnSuicide();
	}
}
