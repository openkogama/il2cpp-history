/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LockCursorManager3DMode : MonoBehaviour, ILockCursorManager
{
	// Fields
	[CompilerGenerated]
	private Action<bool> _OnCursorLockChanged_k__BackingField;

	// Properties
	public Action<bool> OnCursorLockChanged { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool CursorLock { get; set; }
	public bool CursorLockWithoutCallback { set; }

	// Constructors
	public LockCursorManager3DMode();

	// Methods
	private static void CursorLog(string s);
	protected void OnApplicationFocus(bool focus);
	protected void LockCursor();
	protected void LockCursorWithoutCallback();
	protected void UnlockCursor();
	protected void UnlockCursorWithoutCallback();
}

