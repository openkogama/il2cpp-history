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
	public class CameraBoxDepthOfFieldSettings : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private CameraBoxSettings cameraBoxSettings;
		[SerializeField]
		private SettingsToggle featureOnToggle;
		[SerializeField]
		private SettingsSlider focusDistanceSlider;
		[SerializeField]
		private SettingsInputFieldSlider focusDistanceInputField;
		[SerializeField]
		private SettingsSlider apertureSlider;
		[SerializeField]
		private SettingsInputFieldSlider apertureInputField;
		[SerializeField]
		private SettingsSlider focalLengthSlider;
		[SerializeField]
		private SettingsInputFieldSlider focalLengthInputField;
		[SerializeField]
		private SettingsSlider maxBlurSizeSlider;
		[SerializeField]
		private SettingsInputFieldSlider maxBlurSizeInputField;
	
		// Nested types
		public static class DataKeys
		{
			// Fields
			public const string DepthOfFieldOn = "ppDofOn";
			public const string FocusDistance = "ppDofPFDist";
			public const string Aperture = "ppDofApert";
			public const string FocalLength = "ppDofFLen";
			public const string MaxBlurSize = "ppDofMBlur";
		}
	
		public static class DefaultValues
		{
			// Fields
			public const bool DepthOfField = false;
			public const int FocusDistance = 10;
			public const int Aperture = 56;
			public const int FocalLength = 50;
			public const int MaxBlurSize = 2;
		}
	
		private static class MinMaxValues
		{
			// Fields
			public const int FocusDistanceMin = 29;
			public const int FocusDistanceMax = 1500;
			public const int ApertureMin = 1;
			public const int ApertureMax = 320;
			public const int FocalLengthMin = 1;
			public const int FocalLengthMax = 300;
			public const int MaxBlurSizeMin = 1;
			public const int MaxBlurSizeMax = 4;
		}
	
		// Constructors
		public CameraBoxDepthOfFieldSettings();
	
		// Methods
		private void Start();
		public void OnSavePressed();
		public static void InitData(Dictionary<object, object> data);
		public static bool IsKey(string key);
		public object ValueToSend(string key, object value);
	}
}
