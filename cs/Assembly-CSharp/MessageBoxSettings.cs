/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MessageBoxSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	public const string TextKey = "text";
	public const string TextSizeKey = "textSize";
	public const string TextColorKey = "textColor";
	public const string BillboardKey = "billboard";
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider sizeSlider;
	[SerializeField]
	private UnityEngine.UI.Text sizeLabel;
	[SerializeField]
	private SettingsInputField inputField;
	[SerializeField]
	private SettingsSlider colorR;
	[SerializeField]
	private SettingsSlider colorG;
	[SerializeField]
	private SettingsSlider colorB;
	[SerializeField]
	private Image preview;
	[SerializeField]
	private SettingsToggle billboardToggle;
	private float[] color;
	public static readonly float[] defaultColor;

	// Constructors
	public MessageBoxSettings();
	static MessageBoxSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
	private static object RemoveQuadFromText(string key, object val);
	private void SetTextSize(float value);
}

