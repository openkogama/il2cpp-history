/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RequirementNotification : Notification
{
	// Fields
	[SerializeField]
	private Sprite OnSprite;
	[SerializeField]
	private Sprite OffSprite;
	[SerializeField]
	private RectTransform Layout;
	[SerializeField]
	private NotificationRequirementPanel LevelPanel;
	[SerializeField]
	private NotificationRequirementPanel GamecoinPanel;
	[SerializeField]
	private NotificationRequirementPanel StarPanel;
	[SerializeField]
	private NotificationRequirementPanel TeamPanel;
	[SerializeField]
	private NotificationRequirementPanel GameTierPanel;
	private List<GameObject> PanelsToDestroy;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Action<GameObject> __9__11_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Initialize_b__11_0(GameObject x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public int gameCoins;
		public Sprite checkMark;
		public bool enabled;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _ShowGameCoinRequirement_b__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public int stars;
		public Sprite checkMark;
		public bool enabled;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _ShowStarRequirement_b__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public MVTeam team;
		public Sprite checkMark;
		public bool enabled;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _ShowTeamRequirement_b__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public int level;
		public Sprite checkMark;
		public bool enabled;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _ShowLevelRequirement_b__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public GamePassTier tier;
		public Sprite checkMark;
		public bool enabled;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _ShowGameTierRequirement_b__0(INotificationRequirementPanel x, BaseEventData y);
	}

	// Constructors
	public RequirementNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void ShowGameCoinRequirement(int gameCoins);
	private void ShowStarRequirement(int stars);
	private void ShowTeamRequirement(MVTeam team);
	private void ShowLevelRequirement(int level);
	private void ShowGameTierRequirement(GamePassTier tier);
	private GameObject InstantiatePanel(NotificationRequirementPanel panel);
}

