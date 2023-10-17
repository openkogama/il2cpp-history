/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleMenu : LobbyFlowMenu, IDragInputReciever
{
	// Fields
	[SerializeField]
	private RectTransform elementContainer;
	[SerializeField]
	private Scrollbar scrollbar;
	[SerializeField]
	private ScrollRect scrollRect;
	[SerializeField]
	private DragInputHandler dragInputReciever;
	[SerializeField]
	private SpawnRoleSelectionButtonController buttonController;
	[SerializeField]
	private GameObject backButton;
	[SerializeField]
	private DefaultSpawnRoleSelectionElement defaultSelectionElementPrefab;
	[SerializeField]
	private SpawnRoleSelectionElement selectionElementPrefab;
	[SerializeField]
	private TierUnlockDetailsPopup tierUnlockPopupPrefab;
	[SerializeField]
	private TierTestDetailsPopup tierTestPopupPrefab;
	[SerializeField]
	private TierLockedDetailsPopup tierLockedPopupPrefab;
	[SerializeField]
	private float selectionElementWidth;
	[SerializeField]
	private float elementSpacing;
	[SerializeField]
	private int maxSelectionElementsOnScreen;
	private List<DefaultSpawnRoleSelectionElement> SelectionElementsList;
	private int selectedSpawnRole;
	private float interpolateToPositionX;
	private float interpolationStartTime;
	private bool shouldInterpolate;
	private float menuHalfWidth;
	private float dragStartPositionX;
	private int currentSelectionStartIndex;
	private bool awaitingSpawn;
	private MVTeam shownTeam;
	public static Action<int> OnNewSpawnRoleSelected;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass56_0
	{
		// Fields
		public TierUnlockDetailsPopup tierPurchasePopup;

		// Constructors
		public __c__DisplayClass56_0();

		// Methods
		internal void _ShowTierPurchase_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass57_0
	{
		// Fields
		public TierLockedDetailsPopup tierLockedPopup;

		// Constructors
		public __c__DisplayClass57_0();

		// Methods
		internal void _ShowLockedTierPurchase_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass58_0
	{
		// Fields
		public TierTestDetailsPopup tierTestPopup;

		// Constructors
		public __c__DisplayClass58_0();

		// Methods
		internal void _ShowTestTier_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__62_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Close_b__62_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public SpawnRoleMenu();

	// Methods
	public void OnBeginDrag();
	public void OnEndDrag();
	public void OnDrag();
	public void OnScrollValueChange();
	private void UpdateShownElements();
	private bool IsIndexWithinBounds(int index);
	private void ShowElements(int startElementIndex);
	private void HideElements(int previousStartElement, int amountOfElements, int newStartElement);
	public void OnSelectButtonPressed();
	public void OpenTierShopButtonPressed();
	public void LockedButtonPressed();
	public void HideBackButton();
	public override void Start();
	public void Initialize(MVTeam team);
	protected override void OnDestroy();
	private void Update();
	private void LateUpdate();
	private void CreateSpawnRoleSelectionElement(int startIndex, int index, List<ISpawnRolePreviewObject> sortedSpawnRoles, List<MVWorldObjectClient> sortedWorldObjects);
	private void CreateDefaultAvatarElement();
	private void OnSpawnRoleSelected(int newSelectedSpawnRole);
	private void OnSpawnRoleActivated(int newSelectedSpawnRole);
	private void RecalculateInterpolation(int index);
	private float CalculateElementPosition(int index);
	private int CalculateNewSelectedItem();
	protected override void StartPlaying();
	private void PrepareForSpawnRoleActivating();
	private List<ISpawnRolePreviewObject> GetSortedList(List<ISpawnRolePreviewObject> unsortedList);
	private List<MVWorldObjectClient> GetSortedWorldObjectList(List<MVWorldObjectClient> wos, List<ISpawnRolePreviewObject> unsortedList);
	private void HandleTeamSwitching(int spawnRoleId);
	private void ShowTierPurchase();
	private void ShowLockedTierPurchase();
	private void ShowTestTier();
	private void OnPurchaseGamePassTier();
	private void OnPlayerPlanetDataUpdated();
	private void AwaitSpawnThenClose();
	private void Close(int spawnRoleID = 0);
}

