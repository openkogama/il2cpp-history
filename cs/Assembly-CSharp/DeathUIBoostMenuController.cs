/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeathUIBoostMenuController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image timerFill;
	[SerializeField]
	private UnityEngine.UI.Text restartText;
	[SerializeField]
	private NotificationFade fader;
	[SerializeField]
	private NotificationFade buttonFader;
	[SerializeField]
	private NotificationFade resetButtonFader;
	[SerializeField]
	private NotificationFade boostFader;
	[SerializeField]
	private NotificationFade menuButtonFader;
	[SerializeField]
	private Image readyToPlayTimerFill;
	[SerializeField]
	private GameObject readyToPlayTimerObject;
	[SerializeField]
	private PointerDownController respawnButton;
	[SerializeField]
	private PointerDownController resetButton;
	[SerializeField]
	private BoostMenuController boostMenu;
	[SerializeField]
	private ContinueTierBoostPopup continueTierBoostPopupPrefab;
	[SerializeField]
	private ContinueButtonLockCursor continueButtonLockCursor;
	[SerializeField]
	private Image adIcon;
	[SerializeField]
	private Image playIcon;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private float startTime;
	private readonly float timeUntilGhostMode;
	private bool shouldPop;
	private bool wantsToPlay;
	private bool isGhost;
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

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal bool readyForAd;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal void __m__0(IDeathPromotionSelector x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey1
	{
		// Fields
		internal bool isBlocked;
		internal DeathUIBoostMenuController _this;

		// Constructors
		public _Update_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public DeathUIBoostMenuController();

	// Methods
	public void Initialize();
	public void OpenMenu();
	private void OnDestroy();
	private void Update();
	private void OnEnable();
	private void OnResetToSpawnPoint();
	private void OnRespawn();
	private void ReadyToSpawn(bool promotionPushedToStack, bool withAd);
	private void LockCursorAndPop();
	private void OnAvatarStateChanged(SpawnRoleModeType mode);
	[CompilerGenerated]
	private static void _OpenMenu_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Update_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Update_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _OnRespawn_m__3(IDeathPromotionSelector x, BaseEventData y);
	[CompilerGenerated]
	private static void _ReadyToSpawn_m__4(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _LockCursorAndPop_m__5(IUIStack x, BaseEventData y);
}

