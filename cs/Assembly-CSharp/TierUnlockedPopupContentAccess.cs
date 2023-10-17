/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedPopupContentAccess : TierUnlockedPopupContentBase
{
	// Fields
	private GamePassTier unlockedGamePassTier;

	// Constructors
	public TierUnlockedPopupContentAccess();

	// Methods
	public override void Initialize(GamePassTier unlockedGamePassTier, UnityAction onDisplayDoneCallback);
	private void UpdateItemAmountText();
	private int GetItemAmount();
	private bool IsTierItemAnAccessItem(MVWorldObjectDocumentationType worldObjectType, MVWorldObjectClient item);
}

