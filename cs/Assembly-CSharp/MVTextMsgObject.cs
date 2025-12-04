/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTextMsgObject : ObjectPrefab, StreamedTextMeshProFont.IReceiver
{
	// Fields
	[SerializeField]
	private TextMeshProUGUI textMesh;
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private RoundedRectangle background;
	[SerializeField]
	private Canvas canvas;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private StreamedTextMeshProFontTriggered fontStream;
	[SerializeField]
	private StreamedTextMeshProFontList fontList;
	private LookAtMainCamera billboardScript;
	private Coroutine timeout;
	private int storedFontIndex;
	private bool storedFontHasOutline;
	private bool hasTimedOut;
	private bool isFontStreamed;
	private float storedWidth;
	private float storedPadding;

	// Properties
	public GameObject VisualObject { get; }
	public TextMeshProUGUI TextMesh { get; }
	public RoundedRectangle Background { get; }
	public StreamedTextMeshProFontList FontList { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _FullFadeInAnimation_d__33 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public TMP_FontAsset fontAsset;
		public MVTextMsgObject __4__this;
		private float _fadeTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FullFadeInAnimation_d__33(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _SwitchFadeAnimation_d__34 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public MVTextMsgObject __4__this;
		public TMP_FontAsset fontAsset;
		private float _fadeTime_5__2;
		private RectTransform _canvasTransform_5__3;
		private Vector2 _targetCanvasSize_5__4;
		private Vector2 _oldCanvasSize_5__5;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _SwitchFadeAnimation_d__34(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _TimeoutRoutine_d__31 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public MVTextMsgObject __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _TimeoutRoutine_d__31(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public MVTextMsgObject();

	// Methods
	private void Awake();
	private void Start();
	public void SetBillboard(bool billboard);
	public void SetSize(float width, float padding);
	private Vector2 CalculateSizeDeltas();
	public void SetFontIndex(int fontIndex);
	public void SetFontStyle(bool isSet, FontStyles style);
	public void SetFontHasOutline(bool hasOutline);
	[IteratorStateMachine(typeof(_TimeoutRoutine_d__31))]
	private IEnumerator TimeoutRoutine();
	public void OnFontReceived(TMP_FontAsset fontAsset);
	[IteratorStateMachine(typeof(_FullFadeInAnimation_d__33))]
	private IEnumerator FullFadeInAnimation(TMP_FontAsset fontAsset = null);
	[IteratorStateMachine(typeof(_SwitchFadeAnimation_d__34))]
	private IEnumerator SwitchFadeAnimation(TMP_FontAsset fontAsset);
	private void SetFont(TMP_FontAsset fontAsset);
}

