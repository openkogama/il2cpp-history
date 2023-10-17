/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Borodar.FarlandSkies.CloudyCrownPro.DotParams;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DayNightCycleColorPresets : ScriptableObject
{
	// Fields
	[SerializeField]
	private Preset[] presets;

	// Properties
	public int Length { get; }
	public Preset this[int i] { get => default; }

	// Nested types
	[Serializable]
	public class Preset
	{
		// Fields
		[SerializeField]
		private string name;
		[SerializeField]
		private SkyParamsList skyParamList;
		[SerializeField]
		private CelestialParamsList sunParamsList;
		[SerializeField]
		private CelestialParamsList moonParamsList;
		[SerializeField]
		private StarsParamsList starsParamList;
		private bool initialized;

		// Properties
		public string Name { get; }
		public SkyParamsList Sky { get; }
		public CelestialParamsList Sun { get; }
		public CelestialParamsList Moon { get; }
		public StarsParamsList Stars { get; }
		public bool IsInitialized { get; }

		// Constructors
		public Preset();

		// Methods
		public void Initialize();
		public void TranslateName();
		public void Cleanup();
		private void LanguageLoadedCallback();
	}

	// Constructors
	public DayNightCycleColorPresets();

	// Methods
	protected void OnEnable();
	protected void OnDisable();
	protected void TranslatePresetNames();
}

