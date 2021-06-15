/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class MVClientSettings
{
	// Fields
	private static ClientSettingFlags flags;
	private static bool flagsSet;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static int _PostGameInterstitialIntervalInSeconds_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static int _ReviveFlags_k__BackingField;

	// Properties
	public static ClientSettingFlags ClientSettingFlags { get; set; }
	public static int PostGameInterstitialIntervalInSeconds { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static int ReviveFlags { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static bool TouristChatAllowed { get; }
	public static bool EnableSentry { get; }
	public static bool ShowTouristPromotion { get; }
	public static bool SpinEnabled { get; }
	public static bool PostGameInterstitialEnabled { get; }
	public static bool SeekAdConsent { get; }
	public static bool JoinFlowAdsEnabled { get; }
	public static bool WebAdSDKsEnabled { get; }
	public static bool GameDistributionAdsEnabled { get; }
	public static bool PokiAdsEnabled { get; }
	public static bool PlayButtonAdsRegisteredUsers { get; }
	public static bool FirstPreviewTierFreeEnabled { get; }
	public static bool ReviveEnabled { get; }
	public static bool PlayButtonAdsEnabled { get; }
	public static bool BoostersEnabled { get; }
	public static bool InterstitialsAdsEnabled { get; }
	public static bool RewardedAdsEnabled { get; }
	public static bool EnableStathat { get; }

	// Constructors
	static MVClientSettings();

	// Methods
	public static bool IsFlagSet(ClientSettingFlags flag);
	private static bool IsReviveFlagEnabledForSessionType();
	public static bool IsSubscriber();
}

