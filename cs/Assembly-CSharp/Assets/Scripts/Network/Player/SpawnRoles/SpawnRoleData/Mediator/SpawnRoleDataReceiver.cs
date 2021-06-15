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
	public class SpawnRoleDataReceiver
	{
		// Fields
		public SpawnRoleReceiverVariable<int> woId;
		public SpawnRoleReceiverVariable<SpawnRoleModeType> spawnRoleMode;
		public SpawnRoleReceiverVariable<bool> isSeated;
		public SpawnRoleReceiverVariable<float> health;
		public SpawnRoleReceiverVariable<int> maxHealth;
		public SpawnRoleReceiverVariable<float> shield;
		public SpawnRoleReceiverVariable<bool> isInGunMode;
		public SpawnRoleReceiverVariable<bool> pickupItemIsInHand;
		public SpawnRoleReceiverVariable<bool> isInVehicle;
		public SpawnRoleReceiverVariable<Vector3> position;
		public SpawnRoleReceiverVariable<Quaternion> rotation;
		public SpawnRoleReceiverVariable<Vector3> defaultScale;
		public SpawnRoleReceiverVariable<Vector3> scale;
		public SpawnRoleReceiverVariable<float> size;
		public SpawnRoleReceiverVariable<ReviveState> reviveState;
		public SpawnRoleReceiverVariable<LastRespawnType> lastRespawnType;
		public SpawnRoleReceiverVariable<GamePassTier> tierRequirement;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action<int, int, PlayerKilledByType> OnKilled;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Action OnSuicide;
		protected bool isActive;
	
		// Properties
		public bool IsActive { get; }
	
		// Events
		public event Action<int, int, PlayerKilledByType> OnKilled {
			add;
			remove;
		}
		public event Action OnSuicide {
			add;
			remove;
		}
	
		// Constructors
		public SpawnRoleDataReceiver();
	
		// Methods
		public void NotifyKilled(int localPlayerActorNr, int dmgDealerActorNr, PlayerKilledByType damageType);
		public void NotifySuicide();
	}
}
