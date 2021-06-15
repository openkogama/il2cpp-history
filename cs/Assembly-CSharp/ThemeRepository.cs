/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeRepository : ScriptableObject
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static ThemeRepository _Instance_k__BackingField;
	[SerializeField]
	private List<Theme> themePrefabs;
	private Dictionary<string, Theme> IdentifierToTheme;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _ThemesEnabled_k__BackingField;

	// Properties
	public static ThemeRepository Instance { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool ThemesEnabled { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int CurrentThemeWoid { get; }
	public Theme CurrentThemeVisualization { get; }
	public string CurrentThemeIdentifier { get; }
	public bool SkyboxOverride { get; }
	public bool ThemeIsActive { get; }
	private ThemeWorldObject CurrentTheme { get; }

	// Constructors
	public ThemeRepository();

	// Methods
	public void Initialize();
	public static void Destroy();
	public Theme GetThemePrefab(string identifier);
	public Theme CreateTemporaryThemeVisualization(string identifier);
	public void DestroyTemporary(Theme theme);
}

