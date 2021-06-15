/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		public JsonGoldUpdateData();
	}

	private class JsonReturnData
	{
		// Fields
		public int callbackId;
		public string data;
		public string error;

		// Constructors
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

	// Constructors
	public BrowserComm();
	static BrowserComm();

	// Methods
	public static void ExecuteBrowserRequest(string url);
	public void CreatePlanetScreenshot();
	public void PublishPlanetFromWeb();
	public void GiveBrowserInfo(string browserinfo);
	public void UserGoldUpdate(string data);
	public void ExternalCallback(string jsonData);
	public void Exit();
}

