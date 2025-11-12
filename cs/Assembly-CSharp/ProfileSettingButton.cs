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

public class ProfileSettingButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ProfileSettingButtonType profileSettingButtonType;
	[SerializeField]
	private ProfileSettingKey profileSettingKey;
	private UnityEngine.UI.Button button;
	private bool isIncrease;
	private int minValue;
	private int maxValue;

	// Nested types
	private enum ProfileSettingButtonType
	{
		Increase = 0,
		Decrease = 1
	}

	// Constructors
	public ProfileSettingButton();

	// Methods
	private void Start();
	private int GetTextureQualityLimit();
	public void OnClick();
	private void OnChange(object value);
	private object ProfileSettingValueToObj(int value);
	private void OnDestroy();
}

