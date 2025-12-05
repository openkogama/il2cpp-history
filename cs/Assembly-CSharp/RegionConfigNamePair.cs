/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
public class RegionConfigNamePair
{
	// Fields
	[SerializeField]
	private RegionConfigType regionType;
	[SerializeField]
	private RegionConfig regionConfig;

	// Properties
	public RegionConfigType RegionType { get; }
	public RegionConfig RegionConfig { get; }

	// Nested types
	public enum RegionConfigType
	{
		none = 0,
		local = 1,
		dev = 2,
		test = 3,
		friends = 4,
		br = 5,
		www = 6,
		ut = 7
	}

	// Constructors
	public RegionConfigNamePair();

	// Methods
	public static RegionConfigType RegionNameToType(string regionName);
}

