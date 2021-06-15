/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeFogTypeSelector : IntAttribute.Setter
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text settingNameLabel;
	[SerializeField]
	private UnityEngine.UI.Text presetNameLabel;
	private Action<int> onChange;
	private int modeIndex;
	private NamedFogMode[] availableModes;

	// Nested types
	private class NamedFogMode
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private FogMode _Mode_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Name_k__BackingField;

		// Properties
		public FogMode Mode { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Name { [CompilerGenerated] get; [CompilerGenerated] set; }

		// Constructors
		public NamedFogMode();
	}

	// Constructors
	public ThemeFogTypeSelector();

	// Methods
	public override void Initialize(IntAttribute attrib, Action<int> onChange);
	public void Decrement();
	public void Increment();
	private int Constrain(int value);
	public void OnSettingChanged();
}

