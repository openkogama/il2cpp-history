/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using WorldObjectTypes.HoverCraft.Shared;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Vehicles
{
	public class HoverCraftSettings : VehicleBaseSettings, IHandleSettingChanged
	{
		// Fields
		public static readonly Vector2 NormalEditingCanvasSize;
		private static readonly Vector2 ColorEditingCanvasSize;
		public const string Health = "overrideHealth";
		public const string RandomLeaveVehicle = "randomLeaveVehicle";
		public const string Speed = "speed";
		public const string JumpHeight = "jumpHeight";
		public const string ThrustersOn = "thrustersOn";
		public const string TurningSpeed = "turningSpeed";
		public const string ThrustersSize = "thrustersSize";
		public const string ThrustersColor = "thrustersColor";
		[SerializeField]
		private SettingsSlider healthSlider;
		[SerializeField]
		private SettingsInputFieldSlider healthInputField;
		[SerializeField]
		private SettingsSlider randomLeaveVehicleSlider;
		[SerializeField]
		private SettingsInputFieldSlider randomLeaveVehicleInputField;
		[SerializeField]
		private SettingsSlider speedSlider;
		[SerializeField]
		private SettingsInputFieldSlider speedInputField;
		[SerializeField]
		private SettingsSlider jumpHeightSlider;
		[SerializeField]
		private SettingsInputFieldSlider jumpHeightInputField;
		[SerializeField]
		private SettingsSlider turningSpeedSlider;
		[SerializeField]
		private SettingsInputFieldSlider turningSpeedInputField;
		[SerializeField]
		private SettingsToggle enginesOnToggle;
		[SerializeField]
		private SettingsSlider thrustersSizeSlider;
		[SerializeField]
		private SettingsInputFieldSlider thrustersSizeInputField;
		[SerializeField]
		private Image thrustersColorImage1;
		[SerializeField]
		private Image thrustersColorImage2;
		[SerializeField]
		private Image thrustersColorImage3;
		[SerializeField]
		private Image thrustersColorImage4;
		[SerializeField]
		private GameObject colorPicker;
		[SerializeField]
		private Image colorPickerPreview;
		[SerializeField]
		private SettingsSlider thrustersColorR;
		[SerializeField]
		private SettingsSlider thrustersColorG;
		[SerializeField]
		private SettingsSlider thrustersColorB;
		[SerializeField]
		private SettingsSlider thrustersColorAlpha;
		private int editingThrusterColor;
		public static readonly VehicleEnergyForVehicleSettingsConfig VehicleEnergyForVehicleSettingsConfig;
	
		// Properties
		protected override Vector2 DefaultCanvasSize { get; }
	
		// Constructors
		public HoverCraftSettings();
		static HoverCraftSettings();
	
		// Methods
		public override void Initialize(GameObject root);
		public override Dictionary<object, object> FillDefaultBlueprintData();
		public override void BlueprintDataRetrieved();
		public override VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig();
		private static Color GetColorFromThrustersColor(ThrustersColor thrustersColor, int pos);
		public void OnSettingChanged(string key, object value);
		public void OnColorPressed(int pos);
		public void OnColorEdited();
	}
}
