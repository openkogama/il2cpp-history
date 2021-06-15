/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialDescription
{
	// Fields
	public static readonly MaterialDescription[] materialDescriptions;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _Name_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _Description_k__BackingField;
	private BitArray specialProperties;

	// Properties
	public string Name { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string Description { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public BitArray SpecialProperties { get; private set; }

	// Nested types
	public enum MaterialSpecialProperty
	{
		Burning = 0,
		Poisonous = 1,
		Slippery = 2,
		Bouncy = 3,
		Destructable = 4,
		Healing = 5,
		Lethal = 6,
		Speeding = 7,
		Slowing = 8,
		Crumbling = 9,
		Size = 10
	}

	// Constructors
	public MaterialDescription(string name, string description, params MaterialSpecialProperty[] specialProperties);
	static MaterialDescription();
}

