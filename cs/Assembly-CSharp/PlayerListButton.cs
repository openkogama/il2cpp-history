/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PlayerListsLayout playerListsPrefab;
	[SerializeField]
	private Button button;
	[SerializeField]
	private UnityEngine.UI.Text playersCount;
	[SerializeField]
	private Image notification;
	private GameObject currPlayerLists;
	private Dictionary<int, MVPlayer> prevPlayerListState;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public PlayerListButton();

	// Methods
	private void Awake();
	private void OnPlayerListReady();
	private void PendingCountChanged(int pending);
	private void ViewNotification();
	public void CreatePlayerList();
	private void UpdateButton();
	private void UpdatePlayersCount();
	private void UpdateTeamColor();
	[CompilerGenerated]
	private static void _CreatePlayerList_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _CreatePlayerList_m__1(IUIStack x, BaseEventData y);
}

