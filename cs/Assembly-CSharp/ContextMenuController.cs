/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ContextMenuController : MonoBehaviour, IHandlePointerDownOnContextMenuButton
{
	// Fields
	private int woID;
	private EditorStateMachine editorStateMachine;
	private bool rightClickGizmoSelect;
	[SerializeField]
	private ContextMenu contextMenuPrefab;
	[SerializeField]
	private SettingsFactory settingsFactory;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache6;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache7;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache8;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache9;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheA;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheB;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheC;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheD;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheE;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheF;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache10;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache11;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditModeController> __f__am_cache12;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache13;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache14;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache15;

	// Properties
	public bool MouseDown { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowContextMenu_c__AnonStorey0
	{
		// Fields
		internal ContextMenu contextMenu;
		internal ContextMenuController _this;

		// Constructors
		public _ShowContextMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowContextMenuLink_c__AnonStorey1
	{
		// Fields
		internal int linkID;
		internal bool isObjectLink;
		internal ContextMenu contextMenu;
		internal ContextMenuController _this;

		// Constructors
		public _ShowContextMenuLink_c__AnonStorey1();

		// Methods
		internal void __m__0();
		internal void __m__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CloneRoot_c__AnonStorey2
	{
		// Fields
		internal MVWorldObjectClient root;

		// Constructors
		public _CloneRoot_c__AnonStorey2();

		// Methods
		internal void __m__0(ICloneHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class _Delete_c__AnonStorey3
	{
		// Fields
		internal string errorText;

		// Constructors
		public _Delete_c__AnonStorey3();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public ContextMenuController();

	// Methods
	public void Initialize(EditorStateMachine editorStateMachine);
	public void ShowContextMenu(int woID, Vector3 worldPos);
	public void ShowContextMenuLink(int linkID, bool isObjectLink, Vector3 worldPos);
	public void PopGizmos();
	private void DeleteLink(int linkID, bool isObjectLink);
	private void ShowStarsDialog();
	private void ShowGameRankDialog();
	private void ShowGamePointsDialog();
	private void ShowMinorGamePointsDialog();
	private void ShowRespawnDialog();
	private void ShowTeamDialog();
	private void ShowGameCoinsDialog();
	private void ShowLevelsDialog();
	private void ShowSettingsDialog();
	private void ShowSoundsDialog();
	private void ShowGlobalSoundsDialog();
	private void EnterCubeEdit();
	private void ResetLogic();
	private void Clone();
	private void CloneRoot();
	private void AddToInventory();
	private void EnterPlay();
	private void OnClosedStandaloneError(bool confirmed, ConfirmationPopup popup);
	private void ItemImageUploaded(int woId);
	private void OnFailedToAddItem();
	private void Delete();
	private bool CanClone();
	private bool CanCloneRoot();
	public void PointerIsDown();
	private void OnContextMenuPop();
	[CompilerGenerated]
	private static void _PopGizmos_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _DeleteLink_m__1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowStarsDialog_m__2(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowGameRankDialog_m__3(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowGamePointsDialog_m__4(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowMinorGamePointsDialog_m__5(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowRespawnDialog_m__6(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowTeamDialog_m__7(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowGameCoinsDialog_m__8(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowLevelsDialog_m__9(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowSettingsDialog_m__A(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowSoundsDialog_m__B(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowGlobalSoundsDialog_m__C(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ResetLogic_m__D(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Clone_m__E(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _Clone_m__F(ICloneHandler handler, BaseEventData data);
	[CompilerGenerated]
	private static void _CloneRoot_m__10(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _AddToInventory_m__11(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _AddToInventory_m__12(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _AddToInventory_m__13(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _EnterPlay_m__14(IEditModeController x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnClosedStandaloneError_m__15(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnFailedToAddItem_m__16(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Delete_m__17(IUIStack handler, BaseEventData data);
}

