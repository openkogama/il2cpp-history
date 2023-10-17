/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockAccessItemsPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform itemElementContainer;
	[SerializeField]
	private TierUnlockedItemElement tierUnlockedItemElementPrefab;
	public const string teamKey = "team";

	// Nested types
	private struct AccessItemData
	{
		// Fields
		public MVWorldObjectDocumentationType type;
		public List<MVWorldObjectClient> worldObjects;
		public MVTeam teamRequirement;
	}

	// Constructors
	public TierUnlockAccessItemsPopup();

	// Methods
	public void Initialize(GamePassTier tier, Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	private List<AccessItemData> GetSortedData(Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	private bool HasAccessItemDataTeamAndObjectType(MVTeam teamRequirement, MVWorldObjectDocumentationType objectType, List<AccessItemData> accessItemsData);
	private AccessItemData CreateAccessItemData(MVTeam teamRequirement, MVWorldObjectDocumentationType objectType);
}

