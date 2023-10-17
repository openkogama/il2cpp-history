/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace ThemeSettings
{
	public abstract class SettingsWrapper
	{
		// Fields
		protected Dictionary<object, object> settingsData;
		private List<ThemeAttribute> attributes;
		private int activeAttributeGroup;
		private IMenu menu;
	
		// Properties
		public Dictionary<object, object> Data { get; }
		public int ActiveAttributeGroup { get; }
		public RectTransform[] SettingsUI { get; }
	
		// Constructors
		protected SettingsWrapper();
	
		// Methods
		public abstract void CommitChanges();
		public void Initialize();
		public void Add(ThemeAttribute attrib);
		public T GetValueForAttribute<T>(ThemeAttribute attrib);
		public void UpdateData(string key, object val);
		public void DisableAttributeGroups(int groupsFlag);
		public void EnableAttributeGroups(int groupsFlag);
		public void SetAttributeGroups(int groupsFlag);
		public void SubscribeToSettingsUI(IMenu menu);
		public void UnsubscribeToSettingsUI();
		[CompilerGenerated]
		private bool _get_SettingsUI_b__9_0(ThemeAttribute attrib);
	}
}
