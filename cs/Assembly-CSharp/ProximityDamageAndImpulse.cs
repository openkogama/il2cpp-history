/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ProximityDamageAndImpulse : InteractionPackage
{
	// Constructors
	public ProximityDamageAndImpulse();

	// Methods
	public static InteractionData Create(float damage, Vector3 impulse, PlayerKilledByType playerKilledByType = PlayerKilledByType.None);
	public override void ParseAndHandlePackage(MVWorldObjectClient worldObjectClient, MVPlayer shooter, InteractionData interactionStruct);
}

