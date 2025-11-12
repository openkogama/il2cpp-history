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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PlayerListsLayout playerListsPrefab;
	[SerializeField]
	private UnityEngine.UI.Button button;
	[SerializeField]
	private UnityEngine.UI.Text playersCount;
	[SerializeField]
	private Image notification;
	[SerializeField]
	private ColorStyleObject colorStyleObject;
	private GameObject currPlayerLists;
	private Dictionary<int, MVPlayer> prevPlayerListState;
	private bool useColorStyle;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CreatePlayerList_b__13_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public PlayerListButton();

	// Methods
	private void Awake();
	private void OnDestroy();
	private void OnPlayerListReady();
	private void PendingCountChanged(int pending);
	private void ViewNotification();
	public void CreatePlayerList();
	private void UpdateButton();
	private void UpdatePlayersCount();
	private void UpdateTeamColor();
	[CompilerGenerated]
	private void _CreatePlayerList_b__13_1(IUIStack x, BaseEventData y);
}

