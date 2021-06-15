/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Boost
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private BoostType _Type_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _BoostKey_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _ValueDescription_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _EditTitle_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _AllowedForGame_k__BackingField;
	private string description;

	// Properties
	public BoostType Type { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public object Value { get; }
	public string BoostKey { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string Description { get; private set; }
	public string ValueDescription { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string EditTitle { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool AllowedForGame { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public Boost(BoostType type, string boostKey, string desc, string valueDesc, string title, bool allowedForGame);
}

