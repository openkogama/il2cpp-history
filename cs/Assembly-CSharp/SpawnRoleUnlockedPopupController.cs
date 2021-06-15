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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _SeeTierReward_c__AnonStorey0
	{
		// Fields
		internal TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public _SeeTierReward_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _Close_m__0(IUIStack handler, BaseEventData data);
}

