/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XPProgress
{
	// Fields
	public OnXPProgressDataDelegate OnXPProgressData;
	private XPProgressData xpProgressData;

	// Properties
	public XPProgressData XPProgressData { get; }
	public int XP { get; }

	// Nested types
	public delegate void OnXPProgressDataDelegate(XPProgressData xpProgress);

	// Constructors
	public XPProgress(MVLocalPlayer player, InitialLevelData initialLevelData);

	// Methods
	public void Update(int currentPlayerXP, XPRewardType xpId, int XPdelta, int memberCount);
	private void UpdateLevel(int level);
	public void Destroy();
	private void XPLimitsCallback(UnityWebRequest result);
	private void OnXPLevelLimitsUpdated(XPLevelLimits xpLevelLimits);
}

