/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeleporterTintObject : TintObject
{
	// Fields
	[SerializeField]
	private MeshRenderer meshRendererToTint;
	[SerializeField]
	private Material materialCylinderToTint;
	[SerializeField]
	private ParticleSystem particleCircleToTint;
	[SerializeField]
	private Light lightToTint;

	// Constructors
	public TeleporterTintObject();

	// Methods
	private void Awake();
	private void OnDestroy();
	public override void TeamTint(MVTeam team);
	public override void Tint(Color c);
}

