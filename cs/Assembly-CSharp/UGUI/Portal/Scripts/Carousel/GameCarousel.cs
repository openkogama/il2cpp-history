/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UGUI.Portal.Scripts;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Carousel
{
	public class GameCarousel : MonoBehaviour
	{
		// Fields
		[Header("References")]
		[SerializeField]
		private GameTile gameTilePrefab;
		[SerializeField]
		private GameObject carouselContent;
		[SerializeField]
		private GameCarouselError gameCarouselError;
		[SerializeField]
		private TMP_Text titleText;
		[SerializeField]
		private GameObject[] dummyGameTiles;
		[Header("Settings")]
		[SerializeField]
		private string title;
		[SerializeField]
		private string url;
		[SerializeField]
		private int count;
		private bool loading;
	
		// Constructors
		public GameCarousel();
	
		// Methods
		private void Awake();
		private void Start();
		public void LoadGames();
		private void GetMoreGames(string fullUrl);
		private void OnGetMoreGames(WebResponse response);
		private void CleanUpDummyTiles();
	}
}
