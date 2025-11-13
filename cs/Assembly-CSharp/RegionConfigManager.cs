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
	private string region;
	[SerializeField]
	private List<RegionConfigNamePair> expectedRegionValues;

	// Properties
	public RegionConfig RegionConfig { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<RegionConfigNamePair, bool> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _DetectRegionFromEnvironment_b__4_0(RegionConfigNamePair p);
	}

	// Constructors
	public RegionConfigManager();

	// Methods
	private string DetectRegionFromEnvironment();
	[CompilerGenerated]
	private bool _get_RegionConfig_b__3_0(RegionConfigNamePair p);
}

