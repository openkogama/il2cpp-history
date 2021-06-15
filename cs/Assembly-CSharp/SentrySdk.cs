/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Sentry;
using UnityEngine;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SentrySdk : MonoBehaviour
{
	// Fields
	private float _timeLastError;
	private const float MinTime = 0.5f;
	private Breadcrumb[] _breadcrumbs;
	private int _lastBreadcrumbPos;
	private int _noBreadcrumbs;
	private Dsn _dsn;
	private bool _initialized;
	private bool sendDefaultPii;
	private bool Debug;
	private static SentrySdk _instance;

	// Nested types
	[CompilerGenerated]
	private sealed class _GetStackTraces_c__Iterator0 : IEnumerable<StackTraceSpec>, IEnumerator<StackTraceSpec>
	{
		// Fields
		internal string stackTrace;
		internal string[] _stackList___0;
		internal int _i___1;
		internal string _item___2;
		internal int _closingParen___2;
		internal string _functionName___3;
		internal string _filename___4;
		internal int _lineNo___4;
		internal bool _inApp___5;
		internal StackTraceSpec _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		StackTraceSpec IEnumerator<Sentry.StackTraceSpec>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GetStackTraces_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator();
		[DebuggerHidden]
		IEnumerator<StackTraceSpec> IEnumerable<StackTraceSpec>.GetEnumerator();
	}

	[CompilerGenerated]
	private sealed class _ContinueSendingEvent_c__Iterator1<T> : IEnumerator<UnityWebRequestAsyncOperation>
		where T : SentryEvent
	{
		// Fields
		internal T @event;
		internal string _s___0;
		internal string _sentryKey___0;
		internal string _sentrySecret___0;
		internal string _timestamp___0;
		internal string _authString___0;
		internal UnityWebRequest _www___0;
		internal SentrySdk _this;
		internal UnityWebRequestAsyncOperation _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		UnityWebRequestAsyncOperation IEnumerator<UnityEngine.Networking.UnityWebRequestAsyncOperation>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ContinueSendingEvent_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public SentrySdk();
	static SentrySdk();

	// Methods
	public void Initialize(SentryConfig sentryConfig);
	public static void AddBreadcrumb(string message);
	public static void CaptureMessage(string message, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
	public static void CaptureEvent(SentryEvent @event);
	private void DoCaptureMessage(string message, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
	private void DoCaptureEvent(SentryEvent @event);
	private void DoAddBreadcrumb(string message);
	private List<Breadcrumb> GetBreadcrumbs();
	public void ScheduleError(string condition, string stackTrace, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
	public void ScheduleException(string condition, string stackTrace, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
	[DebuggerHidden]
	private static IEnumerable<StackTraceSpec> GetStackTraces(string stackTrace);
	public void OnLogMessageReceived(string condition, string stackTrace, LogType type, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
	private void PrepareEvent(SentryEvent @event);
	[DebuggerHidden]
	private IEnumerator<UnityWebRequestAsyncOperation> ContinueSendingEvent<T>(T @event)
		where T : SentryEvent;
}

