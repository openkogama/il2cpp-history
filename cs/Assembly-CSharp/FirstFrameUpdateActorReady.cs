/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstFrameUpdateActorReady : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private bool localPlayerIsReady;
	private bool firstFrameCallbackDone;
	public Action callbacks;

	// Constructors
	public FirstFrameUpdateActorReady();

	// Methods
	private void OnLocalPlayerReady();
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
}

