/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Subscription
{
	public class SubscriberCooldownsManager : MonoBehaviour
	{
		// Fields
		private static readonly int nrOfCooldownTypes;
		private static readonly Dictionary<CooldownType, float> cooldownTimes;
		private readonly Cooldown[] cooldowns;
	
		// Nested types
		private struct Cooldown
		{
			// Fields
			public float LastUseTime;
		}
	
		// Constructors
		public SubscriberCooldownsManager();
		static SubscriberCooldownsManager();
	
		// Methods
		private void Awake();
		public void Use(CooldownType type);
		public float CooldownTimeLeft(CooldownType type);
		public bool IsInCooldown(CooldownType type);
		public float CooldownFraction(CooldownType type);
	}
}
