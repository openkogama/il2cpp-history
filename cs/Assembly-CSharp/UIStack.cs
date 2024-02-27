/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UIStack : MonoBehaviour, IUIStack
{
	// Fields
	private Action uiStackChangedPublisher;
	[SerializeField]
	private GameObject root;
	[SerializeField]
	private GameObject blockingObject;
	[SerializeField]
	private DisableInput inputBlocker;
	[SerializeField]
	private Image blockingObjectImage;
	private float origBlockerAlpha;
	private bool stackReady;
	private List<StackElement> stackableUiElements;

	// Properties
	public bool StackReady { get; }

	// Nested types
	private class StackElement
	{
		// Fields
		public readonly GameObject gameObject;
		public readonly bool blockingObject;
		public readonly bool hideAll;
		public readonly bool invisibleBlocker;
		public readonly bool hideAllExceptStackbottom;
		public readonly bool suppressInput;
		public readonly UnityAction onPop;
		public readonly UIGroupFlags group;
		public readonly string name;

		// Constructors
		public StackElement(GameObject gameObject, UIPushOption pushOption, UnityAction onPop, UIGroupFlags group);
	}

	// Constructors
	public UIStack();

	// Methods
	private void Start();
	private void LateUpdate();
	public void SubscribeToStackChanges(Action onStackChanged);
	public void UnSubscribeToStackChanges(Action onStackChanged);
	public void Push(GameObject gameObject, UIPushOption pushOption = UIPushOption.None, UnityAction onPop = null, UIGroupFlags group = UIGroupFlags.None | UIGroupFlags.Default);
	public void Pop();
	public void PopGroups(UIGroupFlags popGroups);
	public bool PopToStackElement(GameObject gameObject);
	public void SetStackReady();
	public void PopToGroup(UIGroupFlags group);
	public bool IsUIElementBlocked(GameObject uiElement);
	public GameObject Peak();
	public void DebugStack();
	public bool IsStackEmpty();
	private void HideAll();
	private void HideAllExceptStackBottom();
	private void UpdateStack();
	private void UpdateBlocking();
	private void RemoveElement(int index);
	private void FindStackParent(Transform uiElement, ref int index);
	private void SetStackVisible();
}

