/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelRewardsLobbyState : MonoBehaviour, IPointerDownHandler, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private LevelRewardAnimation levelRewardAnimation;
	private bool isMouseOver;
	private static int previousNextLevelRewardShown;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public LevelRewardAnimation levelReward;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal void _ShowRewards_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public LevelRewardsLobbyState();

	// Methods
	private void Start();
	private void OnEnable();
	private void ShowRewards();
	private void ShowLevelNotification();
	private void OnDestroy();
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void OnPointerEnter(PointerEventData eventData);
}

