/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimeAttackFlagDebriefing : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ScoreBoardSingleBase scoreBoardSingle;
	[SerializeField]
	private ScoreBoardTeamBase scoreBoardTeam;
	[SerializeField]
	private LocalPlayerScore localPlayerScore;
	[SerializeField]
	private GameObject sunshineObject;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private CanvasGroup scoreBoardCanvasGroup;
	[SerializeField]
	private Image countdownFill;
	[SerializeField]
	private Button playButton;
	private bool isDebriefingOn;
	private bool isWaitingForStart;
	private bool isExitingDebriefing;
	private bool shouldStartFlagCountdown;
	private float waitStartTime;
	private SpawnRoleModeType previousAvatarModeType;
	private float countdownEndTime;
	private const float waitDuration = 4f;

	// Constructors
	public TimeAttackFlagDebriefing();

	// Methods
	private void Start();
	private void OnDestroy();
	private void Update();
	public void Initialize(int captureTime);
	public void InitializeCountDown();
	public void OnPressPlay();
	public void OnLeavePlayMode();
	public void OnRoundEnd();
	private void HandleScoreBoardVisibility(int score);
	private void SendNotification(int captureTime, bool isBestTime);
	private void SendCountDownNotification();
	private string GetDebriefingText(int captureTime, bool isBestTime);
	private int GetTopPlayerScore();
	private void OnAvatarStateChanged(SpawnRoleModeType mode);
	private void UpdateButton();
	private void ExitDebriefing();
	private void EndDebriefingEarly();
	private void LockCursor();
}

