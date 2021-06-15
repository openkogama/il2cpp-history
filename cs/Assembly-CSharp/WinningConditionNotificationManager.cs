/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class WinningConditionNotificationManager
{
	// Methods
	public static void UpdateNotification(int actorNumber, GameStatCounterType counterType, int scoreCount);
	public static void SendNotification(NotificationType type, Dictionary<object, object> data);
	private static int GetScoreLeftToWin(GameStatCounterType counterType, int scoreCount);
	private static bool ShouldShowNotification(int actorNumber, GameStatCounterType counterType, int scoreLeftToWin, out NotificationType notificationType);
	private static string GenerateNotificationText(int actorNumber, GameStatCounterType counterType, int scoreLeftToWin);
	private static string GetContestantName(int actorNumber);
	private static string GetPlayerName(int actorNumber);
	private static bool IsFlagScoreBestInGame(int score, int actorNumber);
	private static int GetPlayerRanking(GameStatCounterType statType, int actorNumber, int score);
}

