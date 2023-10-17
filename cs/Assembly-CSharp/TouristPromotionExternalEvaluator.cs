/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristPromotionExternalEvaluator : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TouristPromotion creyGamesPrefab;
	[SerializeField]
	private TouristPromotion customPromotionPrefab;
	private List<TouristPromotionExternalDef> availablePromotions;

	// Nested types
	private class TouristPromotionExternalDef
	{
		// Fields
		[CompilerGenerated]
		private TouristPromotion _Promotion_k__BackingField;
		[CompilerGenerated]
		private int _FrequencyPercent_k__BackingField;

		// Properties
		public TouristPromotion Promotion { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int FrequencyPercent { [CompilerGenerated] get; [CompilerGenerated] private set; }

		// Constructors
		public TouristPromotionExternalDef(TouristPromotion promotion, int frequencyPercent);
	}

	// Constructors
	public TouristPromotionExternalEvaluator();

	// Methods
	public void Start();
	public bool TryGetExternalPromotion(out TouristPromotion externalPromotion);
}

