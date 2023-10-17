/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StartGoldRewardPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text goldRewardAmountText;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _StartGoldRewardCountdown_b__2_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public StartGoldRewardPopup();

	// Methods
	private void Start();
	public void StartGoldRewardCountdown();
}

