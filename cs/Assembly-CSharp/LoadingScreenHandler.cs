/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LoadingScreenHandler : MonoBehaviour
{
	// Fields
	private const float WaitBeforeStartingAnimationTime = 0.1f;
	private readonly Dictionary<MVGameMode, int> eventCountLookup;
	[Header("References")]
	[SerializeField]
	private RectTransform centerTransform;
	[SerializeField]
	private GameObject sceneObjects;
	[SerializeField]
	private LoadingCube cube;
	[SerializeField]
	private ProgressBar loadingBar;
	[SerializeField]
	private UnityEngine.UI.Text planetNameText;
	[SerializeField]
	private UnityEngine.UI.Text loadingTextMessage;
	[Header("Settings")]
	[SerializeField]
	private float targetFadeInTime;
	[SerializeField]
	private float startCenterScale;
	[SerializeField]
	private float endCenterScale;
	[SerializeField]
	private float startObjectsScale;
	[SerializeField]
	private float endObjectsScale;
	[SerializeField]
	private float targetLoadingBarTime;
	private CanvasGroup centerCanvasGroup;
	private Coroutine loadingBarCoroutine;
	private int eventsCount;
	private int currentEventCount;
	private float targetProgress;
	private bool hasCapturedSessionData;

	// Nested types
	[CompilerGenerated]
	private sealed class _FadeInAnimation_d__24 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LoadingScreenHandler __4__this;
		private float _fadeInTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FadeInAnimation_d__24(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _LoadingBarAnimation_d__23 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LoadingScreenHandler __4__this;
		private float _startProgress_5__2;
		private float _loadingBarTime_5__3;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _LoadingBarAnimation_d__23(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LoadingScreenHandler();

	// Methods
	private void Start();
	private void OnJoinStateChanged(MVJoinState joinState);
	private void OnGameMessageReceived(MVGameMsgType gameMsgType, Dictionary<object, object> gameMsgData);
	[IteratorStateMachine(typeof(_LoadingBarAnimation_d__23))]
	private IEnumerator LoadingBarAnimation();
	[IteratorStateMachine(typeof(_FadeInAnimation_d__24))]
	private IEnumerator FadeInAnimation();
	private void OnDestroy();
}

