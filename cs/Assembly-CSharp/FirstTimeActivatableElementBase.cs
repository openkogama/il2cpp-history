/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class FirstTimeActivatableElementBase : FirstTimeEventHandler, IActivatableFirstTimeUiElement, IFirstTimeEventSkip
{
	// Fields
	protected bool isRegistered;
	[SerializeField]
	private SoundStyle onShowSound;
	[SerializeField]
	private FirstTimeEvent prerequisiteEvent;
	[SerializeField]
	private int priority;
	[SerializeField]
	private MVGameMode eventAllowedForMode;
	[SerializeField]
	private bool eventAllowedInAnyMode;
	[SerializeField]
	protected float delayBeforeShown;
	[SerializeField]
	[Tooltip("Set false to avoid checking for blocking elements in the stack.")]
	private bool checkForStackBlocking;
	[CompilerGenerated]
	private bool _IsShowing_k__BackingField;
	private bool waitingForDelay;

	// Properties
	public FirstTimeEvent FirstTimeEvent { get; }
	public FirstTimeEvent PrerequisiteEvent { get; }
	public int Priority { get; }
	public bool IsRegistered { get; }
	protected bool IsEventAllowedInMode { get; }
	public abstract bool CanShow { get; }
	public bool IsShowing { [CompilerGenerated] get; [CompilerGenerated] private set; }
	protected bool IsBlocked { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IFirstTimeElementActivator> __9__37_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _UnRegister_b__37_1(IFirstTimeElementActivator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass35_0
	{
		// Fields
		public bool isBlocked;
		public FirstTimeActivatableElementBase __4__this;

		// Constructors
		public __c__DisplayClass35_0();

		// Methods
		internal void _get_IsBlocked_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowDelay_d__26 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public FirstTimeActivatableElementBase __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ShowDelay_d__26(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	protected FirstTimeActivatableElementBase();

	// Methods
	public void Show();
	[IteratorStateMachine(typeof(_ShowDelay_d__26))]
	private IEnumerator ShowDelay();
	private void DoShow();
	public virtual void OnShow();
	public virtual void OnActivate();
	protected virtual void OnEnable();
	protected virtual void OnDisable();
	protected virtual void Start();
	protected virtual void OnFirstTimeState(FirstTimeState firstTimeState, FirstTimeEvent latestFirstTimeEvent);
	protected virtual void OnDestroy();
	protected void UnRegister();
	public void SkipEvent();
	[CompilerGenerated]
	private void _OnFirstTimeState_b__33_0(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _UnRegister_b__37_0(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _SkipEvent_b__38_0(IFirstTimeElementActivator x, BaseEventData y);
}

