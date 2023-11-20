/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleUnlockedPopupController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image Background;
	[SerializeField]
	private UnityEngine.UI.Text titleText;
	[SerializeField]
	private RectTransform spawnRoleContentTransform;
	[SerializeField]
	private RawImage spawnRolePreviewImage;
	[SerializeField]
	private ContinueButtonHandler continueButtonHandler;
	[SerializeField]
	private ContinueButtonHandler backgroundContinueButtonHandler;
	[SerializeField]
	private SpawnRolePreviewer spawnRolePreviewPrefab;
	[SerializeField]
	private TierUnlockedPopupController TierUnlockedPopupControllerPrefab;
	[SerializeField]
	protected int previewWidth;
	[SerializeField]
	protected int previewHeight;
	[SerializeField]
	private float bounceEffectDuration;
	[SerializeField]
	private AnimationCurve bounceEffect;
	private SpawnRolePreviewer spawnRolePreviewer;
	private GamePassTier unlockedTier;
	private bool wasPurchased;
	private bool wasTempUnlocked;
	private int spawnRoleWoId;
	private MVTeam team;
	private float bounceEffectStartTime;
	private bool awaitingSpawn;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__28_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Close_b__28_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass22_0
	{
		// Fields
		public TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public __c__DisplayClass22_0();

		// Methods
		internal void _SeeTierReward_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleUnlockedPopupController();

	// Methods
	public void Initialize(GamePassTier unlockedTier, bool wasPurchased, bool wasTempUnlocked, int spawnRoleWoId);
	public void OnPressedPlay();
	public void SeeTierReward();
	private void SetupPreviewImage(GameObject spawnRolePreviewObject);
	private void SetupColor(MVTeam spawnRoleTeam);
	private Color GetColor(MVTeam spawnRoleTeam);
	private void StartEffect();
	private void HandleTeamSwitching();
	private void Close(int spawnRoleID = 0);
	private void AwaitSpawnThenClose();
	private void StartPlaying();
	private void Update();
	private void OnDestroy();
}

