/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeSelectionButton : TextButton
{
	// Fields
	[SerializeField]
	private RawImage background;
	[SerializeField]
	private GameObject nameLabel;
	[SerializeField]
	private RectTransform previewImageArea;
	[Header("Configuration")]
	[SerializeField]
	private Color selectedColor;
	private Color normalColor;
	private ThemeSelection selectionMenu;
	private Theme themePrefab;
	private bool themeInUse;
	private string themeName;

	// Constructors
	public ThemeSelectionButton();

	// Methods
	public void Initialize(ThemeSelection selectionMenu, Theme themePrefab, UnityAction buttonClickedCB, int price, int levelReq, bool alreadyInUse);
	public void EventTriggerCB_MouseEnter();
	public void EventTriggerCB_MouseExit();
	private void LocalizeAndSetThemeName();
}

