/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Camera
{
	public class CameraBoxColorsSettings : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private CameraBoxSettings cameraBoxSettings;
		[SerializeField]
		private SettingsToggle colorsOnToggle;
		[SerializeField]
		private SettingsSlider postExposureSlider;
		[SerializeField]
		private SettingsInputFieldSlider postExposureInputField;
		[SerializeField]
		private SettingsSlider temperatureSlider;
		[SerializeField]
		private SettingsInputFieldSlider temperatureInputField;
		[SerializeField]
		private SettingsSlider saturationSlider;
		[SerializeField]
		private SettingsInputFieldSlider saturationInputField;
		[SerializeField]
		private SettingsSlider contrastSlider;
		[SerializeField]
		private SettingsInputFieldSlider contrastInputField;
	
		// Nested types
		public static class DataKeys
		{
			// Fields
			public const string ColorsOn = "ppColorsOn";
			public const string PostExposure = "ppColorsPExp";
			public const string Temperature = "ppColorsTemp";
			public const string Saturation = "ppColorsSatur";
			public const string Contrast = "ppColorContr";
		}
	
		public static class DefaultValues
		{
			// Fields
			public const bool Colors = false;
			public const int PostExposure = 0;
			public const int Temperature = 0;
			public const int Saturation = 0;
			public const int Contrast = 0;
		}
	
		private static class MinMaxValues
		{
			// Fields
			public const int PostExposureMin = -15;
			public const int PostExposureMax = 15;
			public const int TemperatureMin = -100;
			public const int TemperatureMax = 100;
			public const int SaturationMin = -100;
			public const int SaturationMax = 100;
			public const int ContrastMin = -40;
			public const int ContrastMax = 100;
		}
	
		// Constructors
		public CameraBoxColorsSettings();
	
		// Methods
		private void Start();
		public void OnSavePressed();
		public static void InitData(Dictionary<object, object> data);
		public static bool IsKey(string key);
		public static object ValueToSend(string key, object value);
	}
}
