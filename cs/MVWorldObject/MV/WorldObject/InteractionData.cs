/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.Common;
using UnityEngine;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public struct InteractionData
	{
		// Fields
		private static Dictionary<InteractionPackageType, InteractionData> sharedStaticValues;
		private float damage;
		private Vector3 impulse;
		private InteractionPackageType interactionType;
		private PlayerKilledByType playerKilledByType;
	
		// Properties
		public float Damage { get; }
		public Vector3 Impulse { get; }
		public InteractionPackageType InteractionType { get; }
		public PlayerKilledByType PlayerKilledByType { get; }
	
		// Nested types
		[Flags]
		private enum ByteFlags : byte
		{
			InteractionType = 1,
			Damage = 2,
			Impulse = 4,
			PlayerKilledByType = 8
		}
	
		// Constructors
		public InteractionData(InteractionPackageType interactionType);
		public InteractionData(InteractionPackageType interactionType, Vector3 impulse);
		public InteractionData(InteractionPackageType interactionType, float damage, Vector3 impulse);
		public InteractionData(InteractionPackageType interactionType, PlayerKilledByType playerKilledByType);
		public InteractionData(InteractionPackageType interactionType, Vector3 impulse, PlayerKilledByType playerKilledByType);
		public InteractionData(InteractionPackageType interactionType, float damage, Vector3 impulse, PlayerKilledByType playerKilledByType);
		private InteractionData(InteractionPackageType interactionType, float damage, Vector3 impulse, PlayerKilledByType playerKilledByType, bool isShared);
		public InteractionData(byte[] byteArray);
		static InteractionData();
	
		// Methods
		private static InteractionData GetSharedData(InteractionPackageType interactionType);
		private static void Validate(InteractionData sharedInteractionData, InteractionPackageType interactionType, float damage, Vector3 impulse, PlayerKilledByType playerKilledByType);
		private static bool ValidateVector3(Vector3 validateVector);
		public byte[] ToByteArray();
		public override string ToString();
	}
}
