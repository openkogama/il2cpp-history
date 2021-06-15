/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XPProgressData
{
	// Fields
	private XPLevelLimits xpLevelLimits;
	private int playerCurrentXP;
	private XPRewardType xpId;
	private int memberCount;
	private int xpDelta;

	// Properties
	public XPLevelLimits XPLevelLimits { set; }
	public int NextXP { get; }
	public int PrevXP { get; }
	public XPRewardType XpID { get; set; }
	public int XP { get; set; }
	public int MemberCount { get; set; }
	public string XPString { get; }
	public int XPDelta { get; set; }
	public int XpRel { get; }
	public int XpNextRel { get; }
	public bool XPLimitExceeded { get; }
	public int Level { get; }

	// Constructors
	public XPProgressData(int playerCurrentXP, XPLevelLimits xpLevelLimits);
}

