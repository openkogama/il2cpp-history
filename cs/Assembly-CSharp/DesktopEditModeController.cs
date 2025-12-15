/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.EditMode.Inventories;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopEditModeController : ModeControllerBase, IEditStateCommands, IEditModeUI, IGridSnapHandler, IEditModeController
{
	// Fields
	private const float focusTimeInputSupressTimeOut = 5f;
	[SerializeField]
	private EditorWorldObjectCreation editorWorldObjectCreation;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private InEditMenu inEditMenuPrefab;
	[SerializeField]
	private GameObject stackBottom;
	[SerializeField]
	private GameObject playModeButton;
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
	private float focusTime;
	private bool enterPlayModeOnceGuard;
	private bool enterBuildModeOnceGuard;
	private bool isInPlayInEditMode;
	private bool gridSnap;
	private bool canEdit;
	private bool canEnterPlayMode;
	private bool storedRenderLogicState;
	private bool focusSuppressInput;
	private Action<EditModeChangeArgs> editModeChange;
	private DesktopPlayModeController desktopPlayModeController;
	private PlayModeOnlyStateMachine playModeOnlyStateMachine;
	private InEditMenu inEditMenu;
	private FSMEntity stateMachine;
	[CompilerGenerated]
	private EditorStateMachine _EditModeStateMachine_k__BackingField;
	[CompilerGenerated]
	private PlayerShopInventoryRepository _PlayerShopInventoryRepository_k__BackingField;

	// Properties
	public EditorStateMachine EditModeStateMachine { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool IsInPlayInEditMode { get; }
	public PlayerShopInventoryRepository PlayerShopInventoryRepository { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Action<EditModeChangeArgs> EditModeChange { get; set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__77_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _DeleteWoid_b__77_1(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass77_0
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass77_0();

		// Methods
		internal void _DeleteWoid_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _HandleCursorVisible_d__68 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _HandleCursorVisible_d__68(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public DesktopEditModeController();

	// Methods
	private void Awake();
	protected void OnDestroy();
	private void Start();
	private void OnStackChanged();
	private void HandleFocusInputSuppress();
	private void Update();
	private void HandleInput();
	private void OnApplicationFocus(bool focus);
	public void RegisterPlayModeController(DesktopPlayModeController desktopPlayModeController);
	private bool CanEdit();
	private bool CanEnterPlayMode();
	public override void Initialize();
	private void InitializeEditSystems();
	private void InitializePlayModeSystems();
	private void DestroyFirstTimeEditTutorials();
	private void HideUI();
	public void DisableEditMode();
	public void EnterPlayMode();
	private void LeaveEditPlayMode();
	public void EnterBuildMode();
	public IState GetCurrentState();
	public void SetState(EditorEvent editorEvent);
	public void SetState(PlayModeOnlyEvent playModeOnlyEvent);
	public void ClearStateStack();
	[IteratorStateMachine(typeof(_HandleCursorVisible_d__68))]
	private IEnumerator HandleCursorVisible();
	public bool IsGridSnap();
	public void Set(bool snap);
	private void RegisterShortcuts();
	public void Respawn();
	public void MoveToSelectedObject();
	public void DeleteWoid(int woid);
	public void SetUIReady();
	[CompilerGenerated]
	private void _HandleInput_b__50_0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _RegisterShortcuts_b__74_0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _RegisterShortcuts_b__74_1(IShortcutKeyRegister x, BaseEventData y);
}

