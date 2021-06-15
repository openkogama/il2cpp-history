/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RoundTimer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text timeLeftText;
	[SerializeField]
	private ProgressBar progressBar;
	private WorldObjectClientRef<MVRoundCube> roundCube;
	private List<int> timeNotifications;
	public Action<NotificationType, Dictionary<object, object>> OnTimeNotificationSend;

	// Constructors
	public RoundTimer();

	// Methods
	public void Initialize(WorldObjectClientRef<MVRoundCube> roundCube);
	public void ResetOnRoundEnd();
	private void Update();
	private void HandleTimeNotifications(int timeLeft);
	private void ResetTimeNotifications();
	private void OnDestroy();
}

