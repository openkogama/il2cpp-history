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
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouchEditModeController : ModeControllerBase, IEditStateCommands, IEditModeUI, IGridSnapHandler, IEditModeController
{
	// Fields
	[SerializeField]
	private EditorWorldObjectCreation editorWorldObjectCreation;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private InEditMenu inEditMenuPrefab;
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
	private CanvasScaler canvasScaler;
	[SerializeField]
	private EditMode3DController editMode3DControllerPrefab;
	[SerializeField]
	private FirstTimeSetupTerrainEditTutorial firstTimeSetupTerrainEditTutorial;
	[SerializeField]
	private SetupCubeModelTutorialUI setupCubeModelTutorialUI;
	[SerializeField]
	private GoldPurchasedTracker goldPurchasedTracker;
	private bool enterPlayModeOnceGuard;
	private bool enterBuildModeOnceGuard;
	private bool isInPlayInEditMode;
	private Action<EditModeChangeArgs> editModeChange;
	private bool gridSnap;
	private TouchPlayModeController mobilePlayModeController;
	private InEditMenu inEditMenu;
	[CompilerGenerated]
	private EditorStateMachine _EditModeStateMachine_k__BackingField;
	[CompilerGenerated]
	private PlayerShopInventoryRepository _PlayerShopInventoryRepository_k__BackingField;
	private float focusTime;
	private bool focusSuppressInput;
	private const float focusTimeInputSupressTimeOut = 5f;

	// Properties
	public EditorStateMachine EditModeStateMachine { [CompilerGenerated] get; [CompilerGenerated] set; }
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
		public static ExecuteEvents.EventFunction<IUIStack> __9__65_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _DeleteWoid_b__65_1(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass65_0
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass65_0();

		// Methods
		internal void _DeleteWoid_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _HandleCursorVisible_d__56 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _HandleCursorVisible_d__56(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public TouchEditModeController();

	// Methods
	private void Awake();
	protected void OnDestroy();
	private void Start();
	private void HandleFocusInputSupress();
	private void Update();
	private void OnApplicationFocus(bool focus);
	public void RegisterPlayModeController(TouchPlayModeController mobilePlayModeController);
	public override void Initialize();
	private void HideUI();
	public void DisableEditMode();
	public void EnterPlayMode();
	private void LeaveEditPlayMode();
	public void EnterBuildMode();
	public IState GetCurrentState();
	public void SetState(EditorEvent editorEvent);
	public void ClearStateStack();
	[IteratorStateMachine(typeof(_HandleCursorVisible_d__56))]
	private IEnumerator HandleCursorVisible();
	public bool IsGridSnap();
	public void Set(bool snap);
	private void RegisterShortcuts();
	public void Respawn();
	public void MoveToSelectedObject();
	public void DeleteWoid(int woid);
	public void SetUIReady();
	[CompilerGenerated]
	private void _RegisterShortcuts_b__62_0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _RegisterShortcuts_b__62_1(IShortcutKeyRegister x, BaseEventData y);
}

