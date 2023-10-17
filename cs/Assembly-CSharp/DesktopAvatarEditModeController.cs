/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopAvatarEditModeController : ModeControllerBase, IActivateUIElement, IAvatarEditUIState, IEditStateCommands, IAvatarSetBodyGroup, IGetCurrentBody, IAccessoryPopupHandler
{
	// Fields
	private EditorStateMachine editorStateMachine;
	[SerializeField]
	private AvatarEditModeBodyController avatarEditModeBodyController;
	[SerializeField]
	private AvatarSelectionController avatarSelectionController;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private GameObject stackBottom;
	[SerializeField]
	private AccessoryShopController accessoryShopController;
	[SerializeField]
	private DrawPlaneControllerUUI drawPlaneController;
	[SerializeField]
	private MaterialsController materialsController;
	[SerializeField]
	private AvatarShopController avatarShopController;
	[SerializeField]
	private NotificationsManager notificationsManager;
	[SerializeField]
	private SetupCubeModelTutorialUI setupCubeModelTutorialUI;
	[SerializeField]
	private GoldPurchasedTracker goldPurchasedTracker;
	private int firstTimeActiveAvatar;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<MVWorldObjectClient, bool> __9__23_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _InitializeLocalAvatar_b__23_0(MVWorldObjectClient wo);
	}

	// Constructors
	public DesktopAvatarEditModeController();

	// Methods
	private void Awake();
	private void FirstTimeSetActiveAvatar(int activeAvatarId);
	protected void Update();
	protected void OnDestroy();
	public override void Initialize();
	public void Activate(ActivateUIElement element);
	public void Set(ActiveEditStateUI activeUIElements);
	private void OnPopCubeModelingController();
	public void SetState(EditorEvent editorEvent);
	public void ClearStateStack();
	private void InitializeLocalAvatar();
	public void SelectEditorStateMachineToBodyGroup();
	public void SetBodyGroup(MVBody bodyGroup);
	public void GetCurrentBody(Action<MVBody> callback);
	public void SetUIReady();
	public void OpenInventoryAtItem(UIPushOption pushOption, AccessoryDataClient displayShopItems);
}

