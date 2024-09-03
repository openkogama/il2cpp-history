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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.UGUI.Desktop.Scripts.EditMode.SettingsBoxes
{
	public abstract class SettingsUI : MonoBehaviour, IHandleSettingChanged
	{
		// Fields
		[Header("Base settings serialized fields")]
		[SerializeField]
		[Space(15f)]
		protected RectTransform canvas;
		[SerializeField]
		protected SettingsBase settingsBase;
		[SerializeField]
		protected GameObject content;
		[SerializeField]
		protected GameObject colorPicker;
		[SerializeField]
		protected UnityEngine.UI.Text colorText;
		[SerializeField]
		protected Image colorPickerPreview;
		[SerializeField]
		protected SettingsSlider colorR;
		[SerializeField]
		protected SettingsSlider colorG;
		[SerializeField]
		protected SettingsSlider colorB;
		[SerializeField]
		protected SettingsSlider colorA;
		protected Dictionary<object, object> data;
		protected string editingColorKey;
		protected Dictionary<object, object> itemData;
		[CompilerGenerated]
		private Dictionary<object, object> _DefaultItemData_k__BackingField;
	
		// Properties
		protected virtual Vector2 NormalEditingCanvasSize { get; }
		protected virtual Vector2 ColorEditingCanvasSize { get; }
		protected virtual Dictionary<object, object> DefaultItemData { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		protected SettingsUI();
	
		// Methods
		public abstract void Initialize(int woID, GameObject root);
		protected abstract Dictionary<object, object> ReadWorldObjectItemData(Dictionary<object, object> woData);
		protected void InitializeSlider(SettingsSlider slider, string key, Func<string, ValueTuple<int, int>> minMax);
		public virtual void OnSettingChanged(string key, object value);
		public virtual void OnColorPressed(string colorKey);
		private void UpdateColorPickerPreview();
		public virtual void OnColorEdited();
		protected List<int> GetAcceptableIndexes(int size);
	}
}
