/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesHighScoreList : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GamePassesHighScoreElement highScoreElementPrefab;
	[SerializeField]
	private GameObject touristInformationPopup;
	[SerializeField]
	private Transform contentList;
	[SerializeField]
	private GameObject waitForHighScore;
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	[SerializeField]
	private UnityEngine.UI.Text loadingText;
	[SerializeField]
	private int scoreElementShowCapacity;
	[SerializeField]
	private int middlePosition;
	[SerializeField]
	private float moveAmountPerElement;
	[SerializeField]
	private float topPadding;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private Dictionary<GamePassesHighScoreListState, HighScoreListData> highScoreListDatas;
	private GamePassesHighScoreListState currentState;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	private enum GamePassesHighScoreListState
	{
		Inactive = 0,
		LoadingLocalPlayerHighScoreList = 1,
		LoadingTopPlayerHighScoreList = 2,
		ShowingLocalPlayerHighScoreList = 3,
		ShowingTopPlayersHighScoreList = 4
	}

	private struct HighScoreListData
	{
		// Fields
		public List<HighScoreEntry> scoreList;
		public int topRank;
	}

	[CompilerGenerated]
	private sealed class _Start_c__AnonStorey0
	{
		// Fields
		internal GameObject informationPopup;

		// Constructors
		public _Start_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesHighScoreList();

	// Methods
	private void Start();
	private void OnDestroy();
	private void SetToLocalPlayerHighScore();
	private void LoadLocalPlayerHighScore();
	private void SetToTopPlayerHighScore();
	private void LoadTopPlayerHighScore();
	private void OnHighScoreUpdate(HighScoreDatas newHighScoreData);
	private void LoadDone();
	private void CreateHighScoreListData(HighScoreDatas newHighScoreData);
	private List<HighScoreEntry> SortHighScoreEntry(List<HighScoreEntry> listToSort);
	private void CreateHighScoreList();
	private int CalculateRealTopRank(int playerRank, List<HighScoreEntry> highScoresEntries);
	private int GetPlayerPosition(List<HighScoreEntry> highScoresEntries);
	private void HandlePlayerNotCentered();
	private void CreateHighScoreElements(List<HighScoreEntry> listOfScores, int topRank);
	private void ClearHighScoreElements();
	public void Exit();
	[CompilerGenerated]
	private static void _Exit_m__0(IUIStack x, BaseEventData y);
}

