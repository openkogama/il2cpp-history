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

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Doors
{
	public class DoorSettings : MonoBehaviour, IHandleSettingChanged
	{
		// Fields
		[SerializeField]
		private SettingsBase settingsBase;
		[SerializeField]
		private SettingsInputField nameInputField;
		[SerializeField]
		private SettingsToggle toggleBeginOpen;
		[SerializeField]
		private SettingsToggle togglePlayersCanOpen;
		[SerializeField]
		private SettingsToggle toggleReverseOpenDirection;
	
		// Constructors
		public DoorSettings();
	
		// Methods
		public void Initialize(int woID, GameObject root);
		public void OnSettingChanged(string key, object value);
		private Dictionary<object, object> ReadWorldObjectData(Dictionary<object, object> woData);
	}
}
