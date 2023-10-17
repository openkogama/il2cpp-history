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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _GetStackTraces_d__20 : IEnumerable<StackTraceSpec>, IEnumerator<StackTraceSpec>
	{
		// Fields
		private int __1__state;
		private StackTraceSpec __2__current;
		private int __l__initialThreadId;
		private string stackTrace;
		public string __3__stackTrace;
		private string[] _stackList_5__2;
		private int _i_5__3;

		// Properties
		StackTraceSpec IEnumerator<Sentry.StackTraceSpec>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GetStackTraces_d__20(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
		[DebuggerHidden]
		IEnumerator<StackTraceSpec> IEnumerable<StackTraceSpec>.GetEnumerator();
		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator();
	}

	[CompilerGenerated]
	private sealed class _ContinueSendingEvent_d__23<T> : IEnumerator<UnityWebRequestAsyncOperation>
		where T : SentryEvent
	{
		// Fields
		private int __1__state;
		private UnityWebRequestAsyncOperation __2__current;
		public SentrySdk __4__this;
		public T @event;
		private UnityWebRequest _www_5__2;

		// Properties
		UnityWebRequestAsyncOperation IEnumerator<UnityEngine.Networking.UnityWebRequestAsyncOperation>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ContinueSendingEvent_d__23(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public SentrySdk();

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
	[IteratorStateMachine(typeof(_GetStackTraces_d__20))]
	private static IEnumerable<StackTraceSpec> GetStackTraces(string stackTrace);
	public void OnLogMessageReceived(string condition, string stackTrace, LogType type, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
	private void PrepareEvent(SentryEvent @event);
	[IteratorStateMachine(typeof(_ContinueSendingEvent_d__23<T>))]
	private IEnumerator<UnityWebRequestAsyncOperation> ContinueSendingEvent<T>(T @event)
		where T : SentryEvent;
}

