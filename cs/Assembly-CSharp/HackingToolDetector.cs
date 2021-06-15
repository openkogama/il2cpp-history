/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.AntiCheat;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HackingToolDetector : MonoBehaviour
{
	// Fields
	[SerializeField]
	private HackingToolDetectorSO sharedProperties;
	public static readonly string CheatWarning;
	public Action<HackingToolReport> onHackToolDetected;
	private BitArray alreadyReported;
	private ApplicationDesc[] banList;
	private static HackingToolDetector instance;
	private bool _quitRequest;
	private object _quitLock;
	public ThreadSafeQueue<HackingToolReport> detectedHackingTools;

	// Properties
	public static bool InstallTracesDetected { get; }
	public static bool ProcessDetected { get; }
	private static HackingToolDetector Instance { get; }
	private static float WaitTime { get; }
	private bool QuitRequest { get; set; }

	// Nested types
	public enum ReportCategory
	{
		process = 0,
		regKey = 1,
		unknown = 2,
		SIZE = 3
	}

	public class HackingToolReport
	{
		// Fields
		public Kind kind;
		public ApplicationDesc app;
		public ApplicationDesc.RegistryKey foundKey;
		public string exactFind;

		// Nested types
		public enum Kind
		{
			process = 0,
			suspectProcess = 1,
			regKey = 2,
			suspectKey = 3,
			debugLog = 4
		}

		// Constructors
		public HackingToolReport(ApplicationDesc app);
		public HackingToolReport(ApplicationDesc app, string exactFind);
		public HackingToolReport(ApplicationDesc app, ApplicationDesc.RegistryKey foundKey);
		public HackingToolReport(ApplicationDesc app, ApplicationDesc.RegistryKey foundKey, string exactFind);
	}

	[CompilerGenerated]
	private sealed class _Scan_Coroutine_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _waitDuration___0;
		internal HackingToolDetector _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Scan_Coroutine_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _HandleReports_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal float _waitDuration___0;
		internal HackingToolDetector _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _HandleReports_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public HackingToolDetector();
	static HackingToolDetector();

	// Methods
	private static void DebugLogToChat(string str);
	public void TemporaryReportHandler(HackingToolReport a);
	public void InjectionDetectedCallback(string msg);
	protected void Start();
	public static void Initialize(ApplicationDesc[] banList);
	private void InitiateDetection();
	protected void OnDestroy();
	[DebuggerHidden]
	private IEnumerator Scan_Coroutine();
	private static void ScanForForbiddenProcesses();
	[DebuggerHidden]
	private IEnumerator HandleReports();
	public static void Report(HackingToolReport report);
}

