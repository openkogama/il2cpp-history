/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface ILockCursorManager
{
	// Properties
	Action<bool> OnCursorLockChanged { get; set; }
	bool CursorLock { get; set; }
	bool CursorLockWithoutCallback { set; }
}

