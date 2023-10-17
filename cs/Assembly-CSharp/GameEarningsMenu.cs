/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.GamePassSystem.GamePassEarnings;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameEarningsMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text totalEarningsAmount;
	[SerializeField]
	private UnityEngine.UI.Text boostEarningPercentage;
	[SerializeField]
	private UnityEngine.UI.Text tier1EarningPercentage;
	[SerializeField]
	private UnityEngine.UI.Text tier2EarningPercentage;
	[SerializeField]
	private UnityEngine.UI.Text tier3EarningPercentage;
	[SerializeField]
	private Image boostCircularImage;
	[SerializeField]
	private Image tier1CircularImage;
	[SerializeField]
	private Image tier2CircularImage;
	[SerializeField]
	private Image tier3CircularImage;
	[SerializeField]
	private UnityEngine.UI.Text displayedEarningsDescriptionText;
	[SerializeField]
	private UnityEngine.UI.Text displayedEarningsAmountText;
	[SerializeField]
	private GameObject displayedSmallGoldIcon;
	[SerializeField]
	private GameObject displayedLargeGoldIcon;
	[SerializeField]
	private List<RectTransform> transformsToExpand;
	[SerializeField]
	private List<RectTransform> pieChartsToEnlargen;
	[SerializeField]
	private float widthExpandAmount;
	[SerializeField]
	private float pieChartSizeIncreasePercentage;
	private List<int> tierEarnings;
	private List<float> originalWidthPositionsList;
	private List<float> originalSizeList;
	private float interpolationStartTime;
	private int currentFocusedEarning;
	private const float outlineInterpolationSpeed = 2f;

	// Constructors
	public GameEarningsMenu();

	// Methods
	private void Start();
	private void OnDisable();
	private void Update();
	private void SetUpWaitingForProjectEarningsReportUI();
	private void OnProjectEarningsUpdatedCallback(ProjectEarningsReport projectEarningsReport);
	private void UpdateEarningsData(ProjectEarningsReport projectEarningsReport);
	private int GetTotalEarnings(ProjectEarningsReport projectEarningsReport);
	private int GetTotalBoostEarnings(ProjectEarningsReport projectEarningsReport);
	private int GetTierEarnings(ProjectEarningsReport projectEarningsReport, GamePassTier tier);
	private void UpdateEarningsText(int boostersEarnings, int tier1Earnings, int tier2Earnings, int tier3Earnings, int totalEarnings);
	private int GetPercentage(int earnings, int totalEarnings);
	private bool IsPercentageWhole(int tierEarnings, int totalEarnings);
	private void UpdateEarningPieChart(int boostersEarnings, int tier1Earnings, int tier2Earnings, int tier3Earnings, int totalEarnings);
	private void UpdateDisplayedText();
	private void ResetHighlightEffects();
	public void OnHighlightEarning(int earningEntered);
	public void OnStopHighlightEarning(int earningExited);
}

