/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlagTintObject : TintObject
{
	// Fields
	[SerializeField]
	private MeshRenderer meshRenderer;
	[SerializeField]
	private Material materialToTint;
	[SerializeField]
	private Material materialBlack;

	// Constructors
	public FlagTintObject();

	// Methods
	private void Awake();
	private void OnDestroy();
	public override void Tint(Color c);
}

