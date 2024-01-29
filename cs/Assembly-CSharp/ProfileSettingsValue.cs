/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ProfileSettingsValue : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ProfileSettingKey profileSettingKey;
	private UnityEngine.UI.Text text;

	// Constructors
	public ProfileSettingsValue();

	// Methods
	public void Start();
	private void OnChange(object value);
	private string TargetFrameRateValueToString(TargetFrameRateValue value);
	private void OnDestroy();
}

