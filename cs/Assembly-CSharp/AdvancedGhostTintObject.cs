/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostTintObject : TintObject
{
	// Fields
	[SerializeField]
	private List<OculusTeamGameObject> teamIrisObjects;

	// Constructors
	public AdvancedGhostTintObject();

	// Methods
	public override void TeamTint(MVTeam team);
	public override void Tint(Color c);
}

