/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESAddLink : ESStateBase
{
	// Fields
	private Link tempLink;
	private WorldObjectClientRef woRef;
	private Color originalRedConnectorColor;
	private Color originalBlueConnectorColor;
	public float FadeDuration;
	private Color startColor;
	private Color endColor;
	private float lastColorChangeTime;
	private Material materialToPulse;

	// Constructors
	public ESAddLink();

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine e);
	private void LeaveAddLink(EditorStateMachine e);
	private bool DoAddLink();
	public override void Exit(EditorStateMachine esm);
	private void PulseColor();
}

