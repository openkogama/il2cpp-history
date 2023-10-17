/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.SpawnRoleVariableTypes
{
	public class SpawnRoleVariable<T>
	{
		// Fields
		protected readonly SubscribableVariable<T> subscribableVariable;
		[CompilerGenerated]
		private SubDelegate OnChange;
	
		// Properties
		public T Value { get; }
	
		// Events
		public event SubDelegate OnChange {
			add;
			remove;
		}
	
		// Nested types
		public delegate void SubDelegate(T value);
	
		// Constructors
		protected SpawnRoleVariable(T value);
	
		// Methods
		public override bool Equals(object obj);
		public override int GetHashCode();
		private void SubscribableVariableOnOnChange(T value);
		public static implicit operator T(SpawnRoleVariable<T> s);
		public bool Equals(SpawnRoleVariable<T> other);
		public static bool operator ==(SpawnRoleVariable<T> a, SpawnRoleVariable<T> b);
		public static bool operator !=(SpawnRoleVariable<T> a, SpawnRoleVariable<T> b);
		public static bool operator !=(SpawnRoleVariable<T> a, T b);
		public static bool operator ==(SpawnRoleVariable<T> a, T b);
		public static bool operator !=(T b, SpawnRoleVariable<T> a);
		public static bool operator ==(T b, SpawnRoleVariable<T> a);
	}
}
