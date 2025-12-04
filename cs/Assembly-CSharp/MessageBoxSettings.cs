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

public class MessageBoxSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	public const float FontSizeConversion = 10f;
	private const int MIN = 0;
	private const int MAX = 1;
	public const float DefaultFontSize = 0.5f;
	public const float DefaultTextThickness = 0f;
	public const float DefaultBackgroundWidth = 30f;
	public const float DefaultTextOutlineThickness = 0.1f;
	public const float DefaultBackgroundRadius = 10f;
	public const float DefaultBackgroundOutlineThickness = 2f;
	public static readonly float[] DefaultTextColor;
	public static readonly float[] DefaultTextOutlineColor;
	public static readonly float[] DefaultBackgroundColor;
	public static readonly float[] DefaultBackgroundOutlineColor;
	private static readonly float[] FontSizeMinMax;
	private static readonly float[] TextThicknessMinMax;
	private static readonly float[] BackgroundWidthMinMax;
	private static readonly float[] TextOutlineThicknessMinMax;
	private static readonly float[] BackgroundRadiusMinMax;
	private static readonly float[] BackgroundOutlineThicknessMinMax;
	public const string TextKey = "text";
	public const string FontSelectionKey = "fontSelection";
	public const string TextSizeKey = "textSize";
	public const string TextThicknessKey = "textThickness";
	public const string TextColorKey = "textColor";
	public const string TextOutlineToggleKey = "textOutline";
	public const string TextOutlineThicknessKey = "textOutlineThickness";
	public const string TextOutlineColorKey = "textOutlineColor";
	public const string TextItalicToggleKey = "textItalic";
	public const string TextUnderscoredToggleKey = "textUnderscored";
	public const string BackgroundToggleKey = "background";
	public const string BackgroundWidthKey = "backgroundWidth";
	public const string BackgroundColorKey = "backgroundColor";
	public const string BackgroundRadiusKey = "backgroundRadius";
	public const string BackgroundOutlineToggleKey = "backgroundOutline";
	public const string BackgroundOutlineThicknessKey = "backgroundOutlineThickness";
	public const string BackgroundOutlineColorKey = "backgroundOutlineColor";
	public const string BillboardToggleKey = "billboard";
	public const string FontShaderPath = "TextMeshPro/Mobile/Distance Field";
	private static readonly Vector2 NormalCanvasSize;
	private static readonly Vector2 ColorEditingCanvasSize;
	public static readonly Dictionary<object, object> DefaultData;
	[Header("Base settings serialized fields")]
	[SerializeField]
	[Space(15f)]
	private SettingsBase settingsBase;
	[SerializeField]
	protected RectTransform canvas;
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
	[SerializeField]
	[Space(15f)]
	private SettingsInputField messageInputField;
	[SerializeField]
	private SettingsTMPDropdown fontSelectionDropdown;
	[SerializeField]
	private SettingsInputFieldSlider fontSizeSlider;
	[SerializeField]
	private SettingsInputFieldSlider textThicknessSlider;
	[SerializeField]
	private SettingsInputFieldSlider bakgroundWidthSlider;
	[SerializeField]
	private SettingsInputFieldSlider textOutlineThicknessSlider;
	[SerializeField]
	private SettingsInputFieldSlider backgroundRadiusSlider;
	[SerializeField]
	private SettingsInputFieldSlider backgroundOutlineThicknessSlider;
	[SerializeField]
	private SettingsToggle billboardToggle;
	[SerializeField]
	private SettingsToggle textOutlineToggle;
	[SerializeField]
	private SettingsToggle textItalicToggle;
	[SerializeField]
	private SettingsToggle textUnderscoredToggle;
	[SerializeField]
	private SettingsToggle backgroundToggle;
	[SerializeField]
	private SettingsToggle backgroundOutlineToggle;
	[SerializeField]
	private Image textColorPreview;
	[SerializeField]
	private Image textOutlineColorPreview;
	[SerializeField]
	private Image backgroundColorPreview;
	[SerializeField]
	private Image backgroundOutlineColorPreview;
	[SerializeField]
	private TMPSettingsDropdownItemFont selectedFontItem;
	[SerializeField]
	private StreamedTextMeshProFontList fontList;
	private Dictionary<object, object> data;
	private string editingColorKey;
	private float[] color;

	// Constructors
	public MessageBoxSettings();
	static MessageBoxSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	private Dictionary<object, object> ReadData(int woID);
	public void OnSettingChanged(string key, object value);
	private void UpdateUI();
	private static object RemoveQuadFromText(string key, object val);
	public void OnColorPressed(string colorKey);
	public void OnColorEdited();
	private void UpdateColorPickerPreview();
}

