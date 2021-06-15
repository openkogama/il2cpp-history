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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SettingsBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	private int woID;
	private Dictionary<object, object> result;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

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
	private static void _Initialize_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _Initialize_m__1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Initialize_m__2(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _Initialize_m__3(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Update_m__4(IUIStack handler, BaseEventData data);
}

