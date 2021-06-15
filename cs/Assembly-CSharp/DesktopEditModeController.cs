/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopEditModeController : ModeControllerBase, IEditStateCommands, IEditModeUI, IGridSnapHandler, IEditModeController
{
	// Fields
	private bool enterPlayModeOnceGuard;
	private bool enterBuildModeOnceGuard;
	private bool isInPlayInEditMode;
	private Action<EditModeChangeArgs> editModeChange;
	private bool gridSnap;
	private DesktopPlayModeController desktopPlayModeController;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EditorStateMachine _EditModeStateMachine_k__BackingField;
	[SerializeField]
	private EditorWorldObjectCreation editorWorldObjectCreation;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private GameObject stackBottom;
	[SerializeField]
	private ChatControllerUGUI chatController;
	[SerializeField]
	private DrawPlaneControllerUUI drawPlaneController;
	[SerializeField]
	private MaterialsControllerEditMode materialsController;
	[SerializeField]
	private ContextMenuController contextMenuController;
	[SerializeField]
	private GizmoController gizmoController;
	[SerializeField]
	private EditModeRepositoryController repositoryController;
	[SerializeField]
	private EditModeClientShopController clientShopController;
	[SerializeField]
	private PlayerInventoryController playerInventoryController;
	[SerializeField]
	private CreateCubeModelController createCubeModelController;
	[SerializeField]
	private RectTransform notificationsManager;
	[SerializeField]
	private ChatBubbleController chatBubbleController;
	[SerializeField]
	private FirstTimeSetupTerrainEditTutorial firstTimeSetupTerrainEditTutorial;
	[SerializeField]
	private SetupCubeModelTutorialUI setupCubeModelTutorialUI;
	[SerializeField]
	private GoldPurchasedTracker goldPurchasedTracker;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private ClientShopRepository _ClientShopRepository_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private PlayerInventoryRepository _PlayerInventoryRepository_k__BackingField;
	private float focusTime;
	private bool focusSuppressInput;
	private const float focusTimeInputSupressTimeOut = 5f;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	public EditorStateMachine EditModeStateMachine { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool IsInPlayInEditMode { get; }
	public ClientShopRepository ClientShopRepository { [CompilerGenerated] get; [CompilerGenerated] set; }
	public PlayerInventoryRepository PlayerInventoryRepository { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Action<EditModeChangeArgs> EditModeChange { get; set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _HandleCursorVisible_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _HandleCursorVisible_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _DeleteWoid_c__AnonStorey1
	{
		// Fields
		internal string errorText;

		// Constructors
		public _DeleteWoid_c__AnonStorey1();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public DesktopEditModeController();

	// Methods
	private void Awake();
	protected void OnDestroy();
	private void Start();
	private void HandleFocusInputSupress();
	private void Update();
	private void OnApplicationFocus(bool focus);
	private void ToggleHD();
	public void RegisterPlayModeController(DesktopPlayModeController desktopPlayModeController);
	public override void Initialize();
	private void HideUI();
	public void DisableEditMode();
	public void EnterPlayMode();
	private void LeaveEditPlayMode();
	public void EnterBuildMode();
	public void SetState(EditorEvent editorEvent);
	public void ClearStateStack();
	[DebuggerHidden]
	private IEnumerator HandleCursorVisible();
	public bool IsGridSnap();
	public void Set(bool snap);
	private void RegisterShortcuts();
	public void Respawn();
	public void MoveToSelectedObject();
	public void DeleteWoid(int woid);
	public void SetUIReady();
	[CompilerGenerated]
	private void _RegisterShortcuts_m__0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _RegisterShortcuts_m__1(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private static void _DeleteWoid_m__2(IUIStack handler, BaseEventData data);
}

