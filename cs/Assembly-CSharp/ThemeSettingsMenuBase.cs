/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeSettings;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ThemeSettingsMenuBase : MonoBehaviour, IMenu
{
	// Fields
	[SerializeField]
	protected ThemeSettingsSideBar sideBarPrefab;
	[SerializeField]
	protected RectTransform settingsArea;
	[SerializeField]
	protected RectTransform controllerArea;
	private Theme theme;
	private RectTransform content;

	// Constructors
	protected ThemeSettingsMenuBase();

	// Methods
	protected void Initialize(Theme theme, RectTransform content);
	public void Refresh();
	protected void OnDestroy();
}

