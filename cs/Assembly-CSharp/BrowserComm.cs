/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Scripting;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BrowserComm : MonoBehaviour
{
	// Fields
	public static bool enableExternalCall;
	public static bool enableBrowserRequest;
	private static string browserName;
	private static int browserVersion;
	private static Dictionary<int, Callback> callbacks;
	public Action<int, int> OnGoldPurchasedFromWeb;

	// Properties
	public static string BrowserName { get; }
	public static int BrowserVersion { get; }

	// Nested types
	private class JsonGoldUpdateData
	{
		// Fields
		public int goldAmountDelta;
		public int currentGold;

		// Constructors
		[Preserve]
		public JsonGoldUpdateData();
	}

	private class JsonMuteData
	{
		// Fields
		public bool muteState;

		// Constructors
		[Preserve]
		public JsonMuteData();
	}

	private class JsonReturnData
	{
		// Fields
		public int callbackId;
		public string data;
		public string error;

		// Constructors
		[Preserve]
		public JsonReturnData();

		// Methods
		public bool Validate();
	}

	public static class ToJavaScript
	{
		// Fields
		private static int callbackIdCounter;
		private static string prefix;

		// Constructors
		static ToJavaScript();

		// Methods
		public static void GetBrowserVersion();
		public static void ExternalCall(string functionName);
		public static void ExternalCall(string functionName, params object[] args);
		public static void ExternalCall(string functionName, Action<bool, string> callback);
		private static string ToNameSpace(string functionName);
	}

	private class Callback
	{
		// Fields
		private Action<bool, string> callbackFunction;

		// Constructors
		public Callback(Action<bool, string> callbackFunction);

		// Methods
		public void Execute(bool success, string data);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Action<string> __9__12_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _PublishPlanetFromWeb_b__12_0(string error);
	}

	// Constructors
	public BrowserComm();
	static BrowserComm();

	// Methods
	public static void ExecuteBrowserRequest(string url);
	public void CreatePlanetScreenshot();
	public void PublishPlanetFromWeb();
	public void GiveBrowserInfo(string browserinfo);
	public void UserGoldUpdate(string data);
	public void SetMute(string data);
	public void ExternalCallback(string jsonData);
	public void Exit();
}

