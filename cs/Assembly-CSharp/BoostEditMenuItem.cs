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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _ShowEditPopup_c__AnonStorey0
	{
		// Fields
		internal BoostEditIntPopup boostEditIntPopup;

		// Constructors
		public _ShowEditPopup_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowEditPopup_c__AnonStorey1
	{
		// Fields
		internal BoostEditFloatPopup boostEditFloatPopup;

		// Constructors
		public _ShowEditPopup_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowEditPopup_c__AnonStorey2
	{
		// Fields
		internal BoostEditPopup boostEditPopup;

		// Constructors
		public _ShowEditPopup_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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

