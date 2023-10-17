/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XPLevelLimits
{
	// Fields
	[CompilerGenerated]
	private int _PrevXP_k__BackingField;
	[CompilerGenerated]
	private int _NextXP_k__BackingField;
	[CompilerGenerated]
	private int _Level_k__BackingField;

	// Properties
	public int PrevXP { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int NextXP { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int Level { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int XPNextRel { get; }

	// Constructors
	public XPLevelLimits();
	public XPLevelLimits(int prevXp, int nextXp, int level);

	// Methods
	public int XpRel(int currentXp);
	public bool Validate(int currentXp);
	public override string ToString();
}

