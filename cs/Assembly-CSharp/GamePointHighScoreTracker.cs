/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePointHighScoreTracker : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text gamePointHighScoreAmountText;

	// Constructors
	public GamePointHighScoreTracker();

	// Methods
	private void Start();
	private void OnDestroy();
	private void UpdateHighScoreText();
	private void OnPlayerPlanetDataUpdated();
}

