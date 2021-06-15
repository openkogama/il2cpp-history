/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LocalPlayerScore : MonoBehaviour
{
	// Fields
	[SerializeField]
	private int scoreBoardCount;
	[SerializeField]
	private Image background;
	[SerializeField]
	private UnityEngine.UI.Text playerNameText;
	[SerializeField]
	private UnityEngine.UI.Text scoreText;
	[SerializeField]
	private UnityEngine.UI.Text rankingText;
	[SerializeField]
	private GameObject memberUI;
	[SerializeField]
	private UnityEngine.UI.Text memberRankingText;
	[SerializeField]
	private GameStatCounterType statTypeToShow;

	// Constructors
	public LocalPlayerScore();

	// Methods
	public void Initialize();
	public void Activate();
	private int GetLocalPlayerRanking(GameStatCounterType statType, MVTeam localTeam, int localActorNumber, int localScore);
	private void Show(GameStatCounterType statType, MVTeam localTeam, int currentRanking, int localScore);
}

