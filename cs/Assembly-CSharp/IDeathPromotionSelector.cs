/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal interface IDeathPromotionSelector : IEventSystemHandler
{
	// Properties
	bool ReadyForAd { get; }

	// Methods
	void TryShowPromotion(UnityAction<bool, bool> onPromotionPopped);
}

