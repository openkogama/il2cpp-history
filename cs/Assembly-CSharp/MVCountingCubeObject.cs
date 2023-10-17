/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCountingCubeObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private MVCountingCubeDigits digitManager;

	// Properties
	public AudioSource AudioSource { get; }
	public MVCountingCubeDigits DigitManager { get; }
	public GameObject VisualObject { get; }

	// Constructors
	public MVCountingCubeObject();

	// Methods
	protected override void OnValidate();
}

