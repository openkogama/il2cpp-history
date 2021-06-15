/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class GamePointAmountManager
{
	// Fields
	private static Dictionary<int, int> gamePointRewardWorldObjects;

	// Constructors
	static GamePointAmountManager();

	// Methods
	public static void UpdateRewardData(int woid, int gamePointRewardAmount);
	public static int GetTotalGamePointAmount();
}

