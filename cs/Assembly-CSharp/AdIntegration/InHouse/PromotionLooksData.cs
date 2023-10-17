/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AdIntegration.InHouse
{
	public class PromotionLooksData : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private List<LooksData> promotionData;
		private int promotionIndex;
		private bool initialized;
		private List<int> portalsIndices;
		private List<int> embeddedIndices;
	
		// Nested types
		[Serializable]
		private struct LooksData
		{
			// Fields
			public Image promotionImage;
			public string promotionText;
			public bool validOnKogamaPortal;
			public bool validOnAnonymousExternalPortal;
			[FormerlySerializedAs("inHouseActionType")]
			public PromotionActionType promotionActionType;
		}
	
		// Constructors
		public PromotionLooksData();
	
		// Methods
		public void RandomizePromotion(bool embedded);
		public Image GetPromotionImage();
		public string GetPromotionText();
		public PromotionActionType GetActionType();
		public string GetActionText(PromotionActionType promotionActionType);
	}
}
