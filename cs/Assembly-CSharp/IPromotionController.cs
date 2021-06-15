/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IPromotionController
{
	// Properties
	bool ReadyForAd { get; }
	bool IsPromotionAvailable { get; }

	// Methods
	void Initialize();
	void ShowPromotion(UnityAction<bool, bool> onPop);
}

