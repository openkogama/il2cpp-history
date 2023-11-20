/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes
{
	public class ObjectTransparencySettings : MonoBehaviour, IHandleSettingChanged
	{
		// Fields
		[SerializeField]
		private SettingsBase settingsBase;
		[SerializeField]
		private SettingsToggle toggle;
		[SerializeField]
		private SettingsSlider alphaSlider;
		[SerializeField]
		private SettingsInputFieldSlider alphaInputField;
	
		// Constructors
		public ObjectTransparencySettings();
	
		// Methods
		public void Initialize(int woID, GameObject root);
		private Dictionary<object, object> ReadWorldObjectData(Dictionary<object, object> woData);
		public void OnSettingChanged(string key, object value);
	}
}
