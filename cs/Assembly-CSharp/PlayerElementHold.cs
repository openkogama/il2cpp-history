/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerElementHold : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text playerName;
	[SerializeField]
	private UnityEngine.UI.Text rank;
	[SerializeField]
	private UnityEngine.UI.Text score;
	[SerializeField]
	private GameObject memberUI;
	[SerializeField]
	private UnityEngine.UI.Text memberRank;
	[SerializeField]
	private Image nonMemberUI;
	[SerializeField]
	private List<Image> backgrounds;
	[SerializeField]
	private Image redDot;

	// Constructors
	public PlayerElementHold();

	// Methods
	public void Initialize(MVPlayer player, GameStatCounterType typeToDisplay, int scoreValue);
	public void UpdateScoreIndex();
	private void ActivateSubscriberUI(bool isFriend);
}

