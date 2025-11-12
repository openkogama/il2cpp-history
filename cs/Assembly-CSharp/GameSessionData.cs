/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using MV.Common;
using UnityEngine.Scripting;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameSessionData
{
	// Fields
	public const string DataServerIP = "serverIP";
	public const string DataProfileID = "profileID";
	public const string DataPlanetID = "planetID";
	public const string DataGameMode = "gameMode";
	public const string DataLanguage = "language";
	public const string DataEmbedded = "embedded";
	public const string DataEmbeddedSite = "embeddedSite";
	public const string DataToken = "token";
	public const string DataSessionToken = "sessionToken";
	public const string DataPlayButtonAdsEnabledDefault = "playButtonAdsEnabledDefault";
	public const string DataBoostersEnabledDefault = "boostersEnabledDefault";
	public const string DataInterstitialsAdsEnabledDefault = "interstitialsAdsEnabledDefault";
	public const string DataRewardedAdsEnabledDefault = "rewardedAdsEnabledDefault";
	public const string DataSessionID = "newPlanetName";
	public const string DataPlanetName = "planetName";
	public const string DataPlanetImageURL = "planetImageURL";
	public string serverIP;
	public int profileID;
	public int planetID;
	public MVGameMode gameMode;
	public string language;
	public bool embedded;
	public string embeddedSite;
	public string token;
	public string sessionToken;
	public string newPlanetName;
	public string planetName;
	public string planetImageURL;
	public string pingURL;
	public string disconnectURL;
	public string gameRewardURL;
	public string gamePublishedURL;
	public string purchaseGoldURL;
	public string loginURL;
	public string signupURL;
	public string idleURL;
	public string disconnectedURL;
	public string playerProfileURL;
	public string eliteUpgradeURL;
	public string region;
	public string ezKey;
	public string reauthURL;
	public string gameRewardDataURL;
	public string referrer;
	public bool detailedStats;
	public bool playButtonAdsEnabledDefault;
	public bool boostersEnabledDefault;
	public bool interstitialsAdsEnabledDefault;
	public bool rewardedAdsEnabledDefault;

	// Properties
	public ConnectionProtocol ConnectionProtocol { get; }

	// Constructors
	[Preserve]
	public GameSessionData();
	public GameSessionData(Dictionary<string, object> gameSessionData);

	// Methods
	public bool GetIsRedirectAllowed();
	public override string ToString();
}

