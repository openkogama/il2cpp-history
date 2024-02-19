/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Mediation.AppLovin.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Mediation.AppLovin.Api
{
	public class AppLovin
	{
		// Fields
		internal static readonly IAppLovinClient client;
	
		// Constructors
		public AppLovin();
		static AppLovin();
	
		// Methods
		public static void Initialize();
		public static void SetHasUserConsent(bool hasUserConsent);
		public static void SetIsAgeRestrictedUser(bool isAgeRestrictedUser);
		public static void SetDoNotSell(bool doNotSell);
		internal static IAppLovinClient GetAppLovinClient();
	}
}
