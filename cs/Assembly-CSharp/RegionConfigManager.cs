/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[CreateAssetMenu]
public class RegionConfigManager : ScriptableObject
{
	// Fields
	private RegionConfigNamePair.RegionConfigType regionConfigType;
	[SerializeField]
	private List<RegionConfigNamePair> expectedRegionValues;

	// Properties
	public RegionConfig RegionConfig { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public RegionConfigNamePair.RegionConfigType regionFromSessionData;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal bool _DetectRegionFromEnvironment_b__0(RegionConfigNamePair p);
	}

	// Constructors
	public RegionConfigManager();

	// Methods
	private RegionConfigNamePair.RegionConfigType DetectRegionFromEnvironment();
	[CompilerGenerated]
	private bool _get_RegionConfig_b__3_0(RegionConfigNamePair p);
}

