/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InEditMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GamePassesUI gamePassesUIPrefab;
	[SerializeField]
	private GameObject claimGoldRewardPopupPrefab;
	[SerializeField]
	private GameObject adminObserveButton;
	private GamePassesUI gamePassesUI;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CloseInEditMenu_b__7_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public GameObject claimGoldRewardPopup;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _OnEnable_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public InEditMenu();

	// Methods
	public void Initialize();
	private void Update();
	private void OnEnable();
	public void CloseInEditMenu();
}

