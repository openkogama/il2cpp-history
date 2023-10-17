/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierTempUnlockedInformationPopupContent : TierUnlockedPopupContentBase
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tempUnlockInformationText;
	private string tempUnlockInformation;

	// Constructors
	public TierTempUnlockedInformationPopupContent();

	// Methods
	public override void Initialize(GamePassTier unlockedGamePassTier, UnityAction onDisplayDoneCallback);
}

