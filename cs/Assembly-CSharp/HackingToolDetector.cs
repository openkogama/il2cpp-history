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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _HandleReports_d__30 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public HackingToolDetector __4__this;
		private float _waitDuration_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _HandleReports_d__30(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _Scan_Coroutine_d__28 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public HackingToolDetector __4__this;
		private float _waitDuration_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Scan_Coroutine_d__28(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
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
	[IteratorStateMachine(typeof(_Scan_Coroutine_d__28))]
	private IEnumerator Scan_Coroutine();
	private static void ScanForForbiddenProcesses();
	[IteratorStateMachine(typeof(_HandleReports_d__30))]
	private IEnumerator HandleReports();
	public static void Report(HackingToolReport report);
}

