/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeElementActivator : MonoBehaviour, IFirstTimeElementActivator
{
	// Fields
	private bool evaluateActivatableElements;
	private bool isReady;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private FirstTimeEventSkipPopup firstTimeSkipPopup;
	private Dictionary<FirstTimeEvent, IActivatableFirstTimeUiElement> activatableUiElements;
	private List<FirstTimeEvent> elementsToRemove;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public FirstTimeEventSkipPopup popup;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _SkipFirstTimeEvent_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__15_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _SkipFirstTimeEvent_b__15_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeElementActivator();

	// Methods
	protected void Start();
	protected void OnDestroy();
	private void OnJoinStateChanged(MVJoinState mvJoinState);
	private void FirstTimeStateReceiver(FirstTimeState firstTimeState, FirstTimeEvent firstTimeEvent);
	private void OnStackChange();
	private void OnXPRewarded();
	private void LateUpdate();
	private void EvaluateActivatableElements();
	public void RegisterActivatableElement(IActivatableFirstTimeUiElement firstTimeEventHandlerListener);
	public void SkipFirstTimeEvent(FirstTimeEvent firstTimeEvent, FirstTimeActivatableElementBase firstTimeActivatable);
	public void UnRegisterActivatableElement(IActivatableFirstTimeUiElement firstTimeEventHandlerListener);
	public void RequestEvaluateActivatableElements();
}

