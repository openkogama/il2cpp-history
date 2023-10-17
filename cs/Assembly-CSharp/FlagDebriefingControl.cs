/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlagDebriefingControl
{
	// Fields
	public float RunStartTime;
	public bool IsInFlagDebriefing;
	public Action<int> OnFlagDebriefing;
	public Action OnFlagCountDown;
	public Action OnFlagDebriefingEnd;
	public Action OnFlagCountDownEnd;

	// Constructors
	public FlagDebriefingControl();

	// Methods
	public void StartFlagDebriefing(int captureTime);
	public void StartFlagCountDown();
	public void EndFlagDebriefing();
	public void EndFlagCountDown();
	public void ResetToSpawnPoint();
}

