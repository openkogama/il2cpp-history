/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedItemsPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform itemElementContainer;
	[SerializeField]
	private TierUnlockedItemElement tierUnlockedItemElementPrefab;

	// Constructors
	public TierUnlockedItemsPopup();

	// Methods
	public void Initialize(GamePassTier tier, Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
}

