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

public class SettingsBase : MonoBehaviour
{
	// Fields
	public const string InfinitySign = "\u221E";
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	private int woID;
	private Dictionary<object, object> result;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__10_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public UIGroupFlags GroupFlags;
		public SettingsBase __4__this;
		public UIPushOption PushOptions;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _InitializeHierarchy_b__0(IUIStack handler, BaseEventData data);
		internal void _InitializeHierarchy_b__1(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public SettingsBase();

	// Methods
	public void Initialize(int woID, GameObject root, MVWorldObjectDocumentationType documentationType);
	public void Initialize(int woID, GameObject root, string header);
	private void InitializeHierarchy(int woID, GameObject root);
	private void OnPop();
	public void RemoveData(string key);
	public void OnSettingChanged(string key, object value);
	private void Update();
}

