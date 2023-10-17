/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ContextMenu : MonoBehaviour
{
	// Fields
	private bool linkMenu;
	private Vector3 worldPosition;
	private int woID;
	[SerializeField]
	private ContextMenuButton contextMenuButtonPrefab;
	[SerializeField]
	private ContextMenuButton contextMenuLockedButtonPrefab;
	[SerializeField]
	private RectTransform rectTransform;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Pop_b__9_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public ContextMenu();

	// Methods
	public void Initialize(int woID, Vector3 worldPosition);
	public void InitializeLink(int linkID, Vector3 worldPosition);
	private void PopWoDestroyed(object obj, WorldObjectDestroyedEventArgs args);
	private void Pop();
	public void AddButton(string buttonText, UnityAction onClickCallback);
	public void AddLockedButton(string buttonText);
	private void Update();
	private void SetToScreenPoint();
	private void LateUpdate();
	private void OnDestroy();
}

