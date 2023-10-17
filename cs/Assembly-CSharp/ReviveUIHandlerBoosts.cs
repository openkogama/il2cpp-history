/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ReviveUIHandlerBoosts : ReviveUIHandlerBase
{
	// Fields
	[SerializeField]
	private GameObject defaultUI;
	[SerializeField]
	private GameObject tempClassUI;
	[SerializeField]
	private CurrentSpawnRolePreviewer spawnRolePreviewer;
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private BoostImageController boostImageSelector;
	[SerializeField]
	private GameObject boostContent;
	private GamePassTier tier;

	// Properties
	protected override AdContext AdContext { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnAdFinishedContinue_b__13_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public bool isBlocked;
		public ReviveUIHandlerBoosts __4__this;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public NotificationPopup popup;
		public ReviveUIHandlerBoosts __4__this;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _OnRewardedAdWatched_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ReviveUIHandlerBoosts();

	// Methods
	public override void Initialize(UnityAction onContinueClicked);
	private void ChangeBackground();
	protected override void OnAdFinishedContinue();
	private bool IsInTempClass();
	private bool IsInTempTier();
	protected override void Update();
	protected override void OnRewardedAdWatched(RewardedAdResult result);
	[CompilerGenerated]
	private void _OnRewardedAdWatched_b__17_1();
}

