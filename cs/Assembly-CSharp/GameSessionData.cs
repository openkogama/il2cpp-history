/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameSessionData
{
	// Fields
	public string serverIP;
	public int profileID;
	public int planetID;
	public MVGameMode gameMode;
	public string language;
	public bool embedded;
	public string token;
	public string newToken;
	public string newPlanetName;
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

	// Properties
	public ConnectionProtocol ConnectionProtocol { get; }

	// Constructors
	public GameSessionData();
	public GameSessionData(Dictionary<string, object> gameSessionData);

	// Methods
	public bool GetIsRedirectAllowed();
	public override string ToString();
}

