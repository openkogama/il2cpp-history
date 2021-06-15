/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class BrowserCommGotoRequests
{
	// Fields
	private const string eliteUpgrade = "goToEliteUpgrade_v2";
	private const string purchaseGold = "gotoPurchaseGold_v2";
	private const string playerProfile = "gotoPlayerProfile_v2";
	private const string login = "gotoLogin_v2";
	private const string signup = "gotoSignup_v2";
	private const string signout = "gotoSignout";
	private const string idle = "gotoIdlePage";
	private const string disconnected = "gotoDisconnectedPage";

	// Nested types
	private struct Options
	{
		// Fields
		public bool openInNewTab;
		public bool openInModal;

		// Constructors
		public Options(bool newTab = false, bool modalPopup = false);
	}

	// Methods
	public static void GotoPurchaseGold(bool newTab = false, bool modalPopup = false);
	public static void GotoEliteUpgrade(bool newTab = false, bool modalPopup = false);
	public static void GotoPlayerProfile(int profileId, bool newTab = false, bool modalPopup = false);
	public static void GotoLogin(bool newTab = false, bool modalPopup = false);
	public static void GotoMainpage(bool newTab = false, bool modalPopup = false);
	public static void GotoURL(string URL, bool newTab = false, bool modalPopup = false);
	public static void GotoSignup(bool newTab = false, bool modalPopup = false);
	public static void GotoSignout();
	public static void GotoIdle();
	public static void GotoDisconnected();
}

