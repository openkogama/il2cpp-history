/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostEditIntPopup : BoostEditPopup
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text boostSliderDescription;
	[SerializeField]
	private Slider boostSlider;
	[SerializeField]
	private InputField boostInputField;
	private int originalSettingValue;

	// Constructors
	public BoostEditIntPopup();

	// Methods
	public override void Initialize(Boost boost, GameBoosterSettingWithGoldSetting boostSetting, UnityAction<object> settingChangedCallback, UnityAction<int> priceChangedCallback, UnityAction submitDataCallback);
	public override void OnCancelBoostEdit();
	private void UpdateBoostTextInputFieldWithBoostSliderValue();
	private void UpdateBoostSliderValueWithBoostInputFieldText();
	private void UpdateSettingData();
	public void BoostSliderValueChanged();
	public void BoostInputFieldChange();
}

