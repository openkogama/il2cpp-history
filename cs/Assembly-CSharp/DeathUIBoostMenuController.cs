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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeathUIBoostMenuController : MonoBehaviour
{
	// Fields
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
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private float startTime;
	private readonly float timeUntilGhostMode;
	private bool shouldPop;
	private bool wantsToPlay;
	private bool isGhost;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__20_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__26_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__27_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OpenMenu_b__20_0(IUIStack x, BaseEventData y);
		internal void _Update_b__22_1(IUIStack x, BaseEventData y);
		internal void _Update_b__22_2(IUIStack x, BaseEventData y);
		internal void _ReadyToSpawn_b__26_0(IUIStack x, BaseEventData y);
		internal void _LockCursorAndPop_b__27_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public bool readyForAd;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _Initialize_b__0(IDeathPromotionSelector x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass22_0
	{
		// Fields
		public bool isBlocked;
		public DeathUIBoostMenuController __4__this;

		// Constructors
		public __c__DisplayClass22_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
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
	private void _OnRespawn_b__25_0(IDeathPromotionSelector x, BaseEventData y);
}

