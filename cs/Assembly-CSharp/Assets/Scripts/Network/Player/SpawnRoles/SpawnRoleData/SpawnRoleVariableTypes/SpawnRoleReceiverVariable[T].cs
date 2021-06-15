/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.SpawnRoleVariableTypes
{
	public class SpawnRoleReceiverVariable<T>
	{
		// Fields
		private readonly SpawnRoleDataReceiver spawnRoleDataReceiver;
		private readonly SubscribableVariable<T> subscribableVariableExternal;
		protected readonly SubscribableVariable<T> subscribableVariable;
	
		// Properties
		public T Value { get; set; }
	
		// Constructors
		public SpawnRoleReceiverVariable(SubscribableVariable<T> subscribableVariableExternal, SpawnRoleDataReceiver spawnRoleDataReceiver);
	
		// Methods
		private void OnChange(T newValue);
	}
}
