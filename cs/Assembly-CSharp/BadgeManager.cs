/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class BadgeManager
{
	// Fields
	public const int defaultMaxFriendsLimit = 200;
	private static Dictionary<int, BadgeUrlData> badgeUrls;
	private static int maxLevelBadge;
	private const string fromUnityArgument = "?Unity=2";

	// Constructors
	static BadgeManager();

	// Methods
	public static void Initialize(List<BadgeUrlData> badgeUrlDatas);
	public static int GetFriendsLimit(int level);
	public static void UnsubscribeGetBadgeRequest(Action<UnityWebRequest> callback);
	public static void GetBadgeTexture(int level, Action<UnityWebRequest> callback);
	public static void Reset();
}

