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

public class ContextMenuController : MonoBehaviour, IHandlePointerDownOnContextMenuButton
{
	// Fields
	private int woID;
	private EditorStateMachine editorStateMachine;
	private bool rightClickGizmoSelect;
	private MVWorldObjectClient selectedWorldObject;
	private ContextMenu currentContextMenu;
	[SerializeField]
	private ContextMenu contextMenuPrefab;
	[SerializeField]
	private SettingsFactory settingsFactory;

	// Properties
	public bool MouseDown { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<bool> __9__13_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__16_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__17_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__18_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__19_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__20_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__21_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__23_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__25_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__26_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__27_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__28_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__29_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__31_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__32_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__33_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__34_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__35_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__35_1;
		public static ExecuteEvents.EventFunction<IEditModeController> __9__36_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__37_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__39_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__40_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _AddMenuButtonForFlag_b__13_0();
		internal void _PopGizmos_b__16_0(IUIStack handler, BaseEventData data);
		internal void _DeleteLink_b__17_0(IUIStack handler, BaseEventData data);
		internal void _ShowStarsDialog_b__18_0(IUIStack handler, BaseEventData data);
		internal void _ShowGameRankDialog_b__19_0(IUIStack handler, BaseEventData data);
		internal void _ShowGamePointsDialog_b__20_0(IUIStack handler, BaseEventData data);
		internal void _ShowMinorGamePointsDialog_b__21_0(IUIStack handler, BaseEventData data);
		internal void _ShowRespawnDialog_b__22_0(IUIStack handler, BaseEventData data);
		internal void _ShowTeamDialog_b__23_0(IUIStack handler, BaseEventData data);
		internal void _ShowGameCoinsDialog_b__24_0(IUIStack handler, BaseEventData data);
		internal void _ShowLevelsDialog_b__25_0(IUIStack handler, BaseEventData data);
		internal void _ShowRewardedAdDialog_b__26_0(IUIStack handler, BaseEventData data);
		internal void _ShowSettingsDialog_b__27_0(IUIStack handler, BaseEventData data);
		internal void _ShowSoundsDialog_b__28_0(IUIStack handler, BaseEventData data);
		internal void _ShowGlobalSoundsDialog_b__29_0(IUIStack handler, BaseEventData data);
		internal void _ShowChangeScaleDialog_b__31_0(IUIStack handler, BaseEventData data);
		internal void _ResetLogic_b__32_0(IUIStack handler, BaseEventData data);
		internal void _Clone_b__33_0(IUIStack handler, BaseEventData data);
		internal void _CloneRoot_b__34_0(IUIStack handler, BaseEventData data);
		internal void _AddToInventory_b__35_0(IModalPopupCreator x, BaseEventData y);
		internal void _AddToInventory_b__35_1(IUIStack x, BaseEventData y);
		internal void _EnterPlay_b__36_0(IEditModeController x, BaseEventData y);
		internal void _OnClosedStandaloneError_b__37_0(IUIStack x, BaseEventData y);
		internal void _OnFailedToAddItem_b__39_0(IUIStack handler, BaseEventData data);
		internal void _Delete_b__40_1(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public bool isPreview;
		public bool isPendingPrototype;
		public ContextMenuController __4__this;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal bool _ShowContextMenu_b__0();
		internal bool _ShowContextMenu_b__1();
		internal bool _ShowContextMenu_b__2();
		internal void _ShowContextMenu_b__3(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public ContextMenuController __4__this;
		public int linkID;
		public bool isObjectLink;
		public ContextMenu contextMenu;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _ShowContextMenuLink_b__0();
		internal void _ShowContextMenuLink_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass34_0
	{
		// Fields
		public MVWorldObjectClient root;

		// Constructors
		public __c__DisplayClass34_0();

		// Methods
		internal void _CloneRoot_b__1(ICloneHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass40_0
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass40_0();

		// Methods
		internal void _Delete_b__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public ContextMenuController();

	// Methods
	public void Initialize(EditorStateMachine editorStateMachine);
	public void ShowContextMenu(int woID, Vector3 worldPos);
	private void ShowInfoDialog();
	private bool IsPendingPrototypeSelected();
	private void AddMenuButtonForFlag(InteractionFlags flag, string buttonText, UnityAction onClickCallback);
	private void AddMenuButtonForFlag(InteractionFlags flag, string buttonText, UnityAction onClickCallback, Func<bool> canHaveButtonCheck);
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
	private void ShowRewardedAdDialog();
	private void ShowSettingsDialog();
	private void ShowSoundsDialog();
	private void ShowGlobalSoundsDialog();
	private void EnterCubeEdit();
	private void ShowChangeScaleDialog();
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
	private void _Clone_b__33_1(ICloneHandler handler, BaseEventData data);
	[CompilerGenerated]
	private void _AddToInventory_b__35_2(IModalPopupCreator x, BaseEventData y);
}

