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
	public class CameraBoxLensDistortionSettings : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private CameraBoxSettings cameraBoxSettings;
		[SerializeField]
		private SettingsToggle featureOnToggle;
		[SerializeField]
		private SettingsSlider intensitySlider;
		[SerializeField]
		private SettingsInputFieldSlider intensityInputField;
		[SerializeField]
		private SettingsSlider xMultiplierSlider;
		[SerializeField]
		private SettingsInputFieldSlider xMultiplierInputField;
		[SerializeField]
		private SettingsSlider yMultiplierSlider;
		[SerializeField]
		private SettingsInputFieldSlider yMultiplierInputField;
	
		// Nested types
		public static class DataKeys
		{
			// Fields
			public const string LensDistortionOn = "ppLensDistOn";
			public const string Intensity = "ppLensDistInt";
			public const string XMultiplier = "ppLensDistXmult";
			public const string YMultiplier = "ppLensDistYmult";
		}
	
		public static class DefaultValues
		{
			// Fields
			public const bool LensDistortion = false;
			public const int Intensity = 0;
			public const int XMultiplier = 100;
			public const int YMultiplier = 100;
		}
	
		private static class MinMaxValues
		{
			// Fields
			public const int IntensityMin = -75;
			public const int IntensityMax = 75;
			public const int XMultiplierMin = 0;
			public const int XMultiplierMax = 100;
			public const int YMultiplierMin = 0;
			public const int YMultiplierMax = 100;
		}
	
		// Constructors
		public CameraBoxLensDistortionSettings();
	
		// Methods
		private void Start();
		public void OnSavePressed();
		public static void InitData(Dictionary<object, object> data);
		public static bool IsKey(string key);
		public object ValueToSend(string key, object value);
	}
}
