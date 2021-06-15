/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelRewardsLobbyState : MonoBehaviour, IPointerDownHandler, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private LevelRewardAnimation levelRewardAnimation;
	private bool isMouseOver;
	private static int previousNextLevelRewardShown;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowRewards_c__AnonStorey0
	{
		// Fields
		internal LevelRewardAnimation levelReward;

		// Constructors
		public _ShowRewards_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public LevelRewardsLobbyState();
	static LevelRewardsLobbyState();

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

