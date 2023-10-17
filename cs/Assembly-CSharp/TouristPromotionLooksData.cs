/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristPromotionLooksData : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<PromotionLooksData> promotionData;
	private int promotionIndex;
	private bool initialized;
	private List<int> portalsIndices;
	private List<int> embeddedIndices;

	// Nested types
	[Serializable]
	private struct PromotionLooksData
	{
		// Fields
		public Image PromotionImage;
		public string PromotionText;
		public bool ValidOnKogamaPortal;
		public bool ValidOnAnonymousExternalPortal;
	}

	// Constructors
	public TouristPromotionLooksData();

	// Methods
	public void RandomizePromotion(bool embedded);
	public Image GetPromotionImage();
	public string GetPromotionText();
}

