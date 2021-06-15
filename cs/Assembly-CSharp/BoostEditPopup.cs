/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostEditPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform boostImageParent;
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	[SerializeField]
	private Slider priceSlider;
	[SerializeField]
	private InputField priceInputField;
	[SerializeField]
	private List<BoosterDef> boosterList;
	protected int originalPrice;
	protected bool isInitialized;
	protected GameBoosterSettingWithGoldSetting boostSetting;
	protected UnityAction<object> settingChangedCallback;
	protected UnityAction<int> priceChangedCallback;
	protected UnityAction submitDataCallback;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[Serializable]
	private struct BoosterDef
	{
		// Fields
		public BoostType type;
		public GameObject iconPrefab;
	}

	// Constructors
	public BoostEditPopup();

	// Methods
	public virtual void Initialize(Boost boost, GameBoosterSettingWithGoldSetting boostSetting, UnityAction<object> settingChangedCallback, UnityAction<int> priceChangedCallback, UnityAction submitDataCallback);
	public virtual void OnConfirmButtonPressed();
	public virtual void OnCancelBoostEdit();
	private void CreateBoostImage(Boost boost);
	private void UpdatePriceTextInputFieldWithPriceSliderValue();
	private void UpdatePriceSliderValueWithPriceInputFieldText();
	private void UpdatePriceData();
	public void PriceSliderValueChanged();
	public void PriceInputFieldChange();
	[CompilerGenerated]
	private static void _OnConfirmButtonPressed_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnCancelBoostEdit_m__1(IUIStack x, BaseEventData y);
}

