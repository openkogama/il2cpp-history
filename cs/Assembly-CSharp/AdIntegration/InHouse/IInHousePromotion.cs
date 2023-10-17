/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AdIntegration.InHouse
{
	public interface IInHousePromotion : IEventSystemHandler
	{
		// Methods
		void ShowPromotionRewarded(Action<bool> onPromotionFinished);
		void ShowPromotionInterstitial(Action<bool> onPromotionFinished);
	}
}
