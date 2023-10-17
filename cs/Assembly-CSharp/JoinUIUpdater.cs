/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class JoinUIUpdater
{
	// Fields
	public static Queue<MVEventCodes> JoinEventCodes;
	private static MVEventCodes latestJoinEvent;

	// Constructors
	static JoinUIUpdater();

	// Methods
	public static void UpdateJoinStateForUI(MVEventCodes eventCode);
}

