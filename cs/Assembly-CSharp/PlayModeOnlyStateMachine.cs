/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayModeOnlyStateMachine : FSMEntity
{
	// Fields
	private readonly MainCameraManager weCamera;
	private readonly GameObject gameObject;

	// Properties
	public MainCameraManager MainCameraManager { get; }
	public PlayModeOnlyEvent CurEvent { get; }
	public PlayModeOnlyEvent PrevEvent { get; }
	public PlayModeOnlyEvent NextEvent { get; }
	public GameObject GameObject { get; }

	// Constructors
	public PlayModeOnlyStateMachine(GameObject gameObject);

	// Methods
	public override void Update();
}

