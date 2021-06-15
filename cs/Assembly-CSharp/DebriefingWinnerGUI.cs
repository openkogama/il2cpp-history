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

public class DebriefingWinnerGUI : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text winnerName;
	[SerializeField]
	private UnityEngine.UI.Text timer;
	[SerializeField]
	private UnityEngine.UI.Text winValue;
	[SerializeField]
	private RawImage winnerImage;
	[SerializeField]
	private ImageAnimator backgroundImage;
	[SerializeField]
	private List<WinningConditionData> winConImages;

	// Nested types
	[Serializable]
	private struct WinningConditionData
	{
		// Fields
		public WinningConditionType ScoreType;
		public Image ScoreImage;
		public GameObject WinningConditionImage;
		public UnityEngine.UI.Text AdditionalInfo;
		public GameObject InfoBG;
	}

	// Constructors
	public DebriefingWinnerGUI();

	// Methods
	public void SetWinnerImage(Color startColor, RenderTexture image);
	public void SetAdditionalInformation(string text, WinningConditionType winConType);
	public void SetWinValue(string winVal);
	public void SetTimerText(string time);
	public void SetWinnerText(string winner);
	public void ActivateScoreImage(WinningConditionType statType);
}

