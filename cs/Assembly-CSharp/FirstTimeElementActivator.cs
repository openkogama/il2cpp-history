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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _SkipFirstTimeEvent_c__AnonStorey0
	{
		// Fields
		internal FirstTimeEventSkipPopup popup;

		// Constructors
		public _SkipFirstTimeEvent_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _SkipFirstTimeEvent_m__0(IUIStack x, BaseEventData y);
}

