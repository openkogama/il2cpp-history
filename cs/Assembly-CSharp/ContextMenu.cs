/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ContextMenu : MonoBehaviour
{
	// Fields
	private bool linkMenu;
	private Vector3 worldPosition;
	private int woID;
	[SerializeField]
	private ContextMenuButton contextMenuButtonPrefab;
	[SerializeField]
	private RectTransform rectTransform;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public ContextMenu();

	// Methods
	public void Initialize(int woID, Vector3 worldPosition);
	public void InitializeLink(int linkID, Vector3 worldPosition);
	private void PopWoDestroyed(object obj, WorldObjectDestroyedEventArgs args);
	private void Pop();
	public void AddButton(string buttonText, UnityAction onClickCallback);
	private void Update();
	private void SetToScreenPoint();
	private void LateUpdate();
	private void OnDestroy();
	[CompilerGenerated]
	private static void _Pop_m__0(IUIStack handler, BaseEventData data);
}

