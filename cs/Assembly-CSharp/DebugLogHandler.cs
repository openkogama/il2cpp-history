/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DebugLogHandler : MonoBehaviour
{
	// Fields
	private const int maxErrorBeforeReport = 50;
	private const int sampleErrorFrequency = 100;
	private static List<string> sanitizeLogSubstrings;
	private static HashSet<string> ignoreLogStrings;
	private int maxLogContextQueueCount;
	private ProxyLogHandler kogamaLogHandler;
	private StatHatErrorCount statHatErrorCount;
	[SerializeField]
	private SentrySdk sentrySdk;
	private int timeFrameCount;
	private int errorCount;
	private bool logErrorHasBeenSendOnce;
	private Queue<Dictionary<string, object>> logContextQueue;
	private string sanitizedString;
	private bool isSampling;
	private bool isInBrokenState;
	private static bool didConnectToGameServer;
	private static string firstError;

	// Properties
	public static bool DidConnectToGameServer { get; set; }
	private bool SendOnGoingError { get; }
	private bool AlwaysSampling { get; }

	// Nested types
	private class StatHatErrorCount
	{
		// Fields
		private bool reportedError;
		private bool reportedOngoingError;

		// Constructors
		public StatHatErrorCount();

		// Methods
		public void Increment(bool errorDetected, bool onGoingErrorDetected);
		private void IncrementErrorCountOnGoing();
		private void IncrementErrorCount();
	}

	// Constructors
	public DebugLogHandler();
	static DebugLogHandler();

	// Methods
	public void Initialize(DebugLogHandlerConfig debugLogHandlerConfig, SentryConfig sentryConfig);
	private void KogamaLogHandlerOnOnLogReceived(object sender, ProxyLogHandler.LogFormatData e);
	public void Destroy();
	private void HandleLog(string logString, string stackTrace, LogType type);
	private static string CleanStackTrace(string stackTrace);
	private void HandleLogExecute(string logString, string stackTrace, LogType type);
	private void ReportError(string logString, string stackTrace, LogType type);
	private string SanitizeLogStringForUniqueErrors(string logString);
	private static void SendToConsole(string logString, string stackTrace);
	private static bool IsIgnored(string logString);
	private bool AddLogToLogContext(string logString, LogType type);
	private void Update();
	private Dictionary<string, object> GetExtraSentryData();
	private static Dictionary<string, string> GetTags();
	private static string GetIsTouristSession();
	private static string GetPlanetID();
	private static string GetProfileID();
	private static string GetGameMode();
	private static string GetJoinState();
	private static string GetPlayersCount();
	private static string GetPendingPlayersCount();
	private static string TryGetExtraString(Func<string> getFunc);
	private static string GetSystemInfo();
	private static string GenerateSystemInfoString(Dictionary<string, string> systemInfo);
	private string GetLogContext();
	private static string GetBrowserInfo();
}

