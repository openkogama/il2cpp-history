/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionControl : MonoBehaviour
{
	// Constructors
	public WinningConditionControl();

	// Methods
	public static bool TryGetPrioritizedWinCondition(out WinningConditionType condition);
	public static bool TryGetPrioritizedStat(out GameStatCounterType statType);
	public static int GetPrioritizedStatLimit(GameStatCounterType gameStatType);
	public static bool IsNewScoreBetter(int newScore, int oldScore, GameStatCounterType statType);
	public static string MakeIntoScoreText(int score, GameStatCounterType statType);
}

