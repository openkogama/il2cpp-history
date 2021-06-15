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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[Tooltip]
	private bool checkForStackBlocking;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsShowing_k__BackingField;
	private bool waitingForDelay;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IFirstTimeElementActivator> __f__am_cache0;

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
	[CompilerGenerated]
	private sealed class _ShowDelay_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal FirstTimeActivatableElementBase _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ShowDelay_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class __c__AnonStorey1
	{
		// Fields
		internal bool isBlocked;
		internal FirstTimeActivatableElementBase _this;

		// Constructors
		public __c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	protected FirstTimeActivatableElementBase();

	// Methods
	public void Show();
	[DebuggerHidden]
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
	private void _OnFirstTimeState_m__0(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _UnRegister_m__1(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private static void _UnRegister_m__2(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _SkipEvent_m__3(IFirstTimeElementActivator x, BaseEventData y);
}

