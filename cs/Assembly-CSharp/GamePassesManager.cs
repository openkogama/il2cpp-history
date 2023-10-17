/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.GamePasses;
using MV.Common;
using MV.WorldObject.GamePassSystem;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class GamePassesManager
{
	// Fields
	private static bool showGamePassDataInConsole;
	public static PlayerTierStateCalculator playerTierStateCalculator;
	public static Action OnPlayerPlanetDataUpdated;
	[CompilerGenerated]
	private static bool _GamePassesActive_k__BackingField;
	private static PlayerPlanetData playerPlanetData;
	private static TogglePreviewState togglePreviewState;

	// Properties
	public static bool ShowGamePassDataInConsole { get; set; }
	public static bool GamePassesActive { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static PlayerPlanetData PlayerPlanetData { get; set; }
	public static TogglePreviewState TogglePreviewState { get; }

	// Methods
	public static void UpdatePlayerPlanetData(PlayerPlanetData playerPlanetData);
	private static void UpdateToggleState();
	public static void SendCompleteStatus();
	private static void HandleNewTierUnlocked(PlayerPlanetData newPlayerPlanetData);
	private static void SendTierUnlockedNotification(GamePassTier unlockedTier);
}

