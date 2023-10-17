/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class PlayerPrefsManager
{
	// Fields
	private const string signInStateKey = "signInState";
	private static bool playerHasChangedFromTouristToRegistered;
	private static bool isReturningPlayer;
	private const string playedGamesListKey = "playedGamesList";
	private const int maxPlayGamesListCount = 50;
	private static bool isFirstTimeSession;
	private const string isFirstTimeSessionKey = "isFirstTimeSession";

	// Properties
	public static bool IsFirstTimeSession { get; }
	public static bool IsReturningAsSignedUp { get; }
	public static bool IsReturningPlayer { get; }

	// Methods
	private static void HandleSignInState(bool isRegistered);
	public static void EarlyInitialize();
	public static void Initialize(GameSessionData gameSessionData);
	private static void HandlePlayedGames(int gameId);
}

