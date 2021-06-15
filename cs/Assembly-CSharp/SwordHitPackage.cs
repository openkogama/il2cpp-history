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

public class SwordHitPackage : InteractionPackage
{
	// Fields
	private const PlayerKilledByType killedByType = PlayerKilledByType.Sword;

	// Constructors
	public SwordHitPackage();

	// Methods
	public static InteractionData Create(Vector3 impulse);
	public override void ParseAndHandlePackage(MVWorldObjectClient worldObjectClient, MVPlayer shooter, InteractionData interactionStruct);
}

