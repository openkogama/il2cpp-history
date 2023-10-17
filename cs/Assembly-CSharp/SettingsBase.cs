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
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__5_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Initialize_b__4_0(IUIStack handler, BaseEventData data);
		internal void _Initialize_b__5_0(IUIStack handler, BaseEventData data);
		internal void _Update_b__9_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public SettingsBase();

	// Methods
	public void Initialize(int woID, GameObject root, MVWorldObjectDocumentationType documentationType);
	public void Initialize(int woID, GameObject root, string header);
	private void OnPop();
	public void RemoveData(string key);
	public void OnSettingChanged(string key, object value);
	private void Update();
	[CompilerGenerated]
	private void _Initialize_b__4_1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _Initialize_b__5_1(IUIStack handler, BaseEventData data);
}

