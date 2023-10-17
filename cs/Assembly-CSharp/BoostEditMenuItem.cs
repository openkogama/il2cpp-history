/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem.GamePassEarnings;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostEditMenuItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform boostTypeImageParent;
	[SerializeField]
	private UnityEngine.UI.Text boostDescription;
	[SerializeField]
	private UnityEngine.UI.Text goldPriceText;
	[SerializeField]
	private UnityEngine.UI.Text earningsAmountText;
	[SerializeField]
	private ToggleButtonAnimation activeToggleButton;
	[SerializeField]
	private BoostEditPopup boostEditPopupPrefab;
	[SerializeField]
	private BoostEditIntPopup boostEditIntPopupPrefab;
	[SerializeField]
	private BoostEditFloatPopup boostEditFloatPopupPrefab;
	[SerializeField]
	private List<BoosterDef> boosterList;
	private Boost boost;
	private GameBoosterSettingWithGoldSetting boosterSetting;
	private bool isActive;

	// Nested types
	[Serializable]
	private struct BoosterDef
	{
		// Fields
		public BoostType type;
		public GameObject iconPrefab;
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public BoostEditIntPopup boostEditIntPopup;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _ShowEditPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_1
	{
		// Fields
		public BoostEditFloatPopup boostEditFloatPopup;

		// Constructors
		public __c__DisplayClass14_1();

		// Methods
		internal void _ShowEditPopup_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_2
	{
		// Fields
		public BoostEditPopup boostEditPopup;

		// Constructors
		public __c__DisplayClass14_2();

		// Methods
		internal void _ShowEditPopup_b__2(IUIStack x, BaseEventData y);
	}

	// Constructors
	public BoostEditMenuItem();

	// Methods
	public void Initialize(Boost boost);
	public void UpdateEarningsText(ProjectEarningsReport projectEarningsReport);
	public void ShowEditPopup();
	public void OnActiveToggle();
	private int GetBoostEarning(ProjectEarningsReport projectEarningsReport);
	private void OnBoostSettingChange(object newValue);
	private void OnPriceSettingChanged(int newPrice);
	private void OnSubmitData();
}

