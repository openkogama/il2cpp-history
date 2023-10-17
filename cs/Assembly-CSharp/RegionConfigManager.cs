/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[CreateAssetMenu]
public class RegionConfigManager : ScriptableObject
{
	// Fields
	[SerializeField]
	private RegionConfig local;
	[SerializeField]
	private RegionConfig dev;
	[SerializeField]
	private RegionConfig test;
	[SerializeField]
	private RegionConfig friends;
	[SerializeField]
	private RegionConfig br;
	[SerializeField]
	private RegionConfig www;
	[SerializeField]
	private RegionConfig ut;
	[SerializeField]
	private TextAsset regionTag;

	// Properties
	private string RegionTag { get; }
	public RegionConfig RegionConfig { get; }

	// Constructors
	public RegionConfigManager();
}

