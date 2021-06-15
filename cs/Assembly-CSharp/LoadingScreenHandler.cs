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

public class LoadingScreenHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ProgressBarAndroid loadingBar;
	[SerializeField]
	private UnityEngine.UI.Text uiText;
	private Dictionary<MVGameMode, int> eventCountLookup;
	private int currentEventCount;
	private int eventsCount;
	private const float lerpSpeed = 1f;
	private float currentProgress;
	private float targetProgress;
	private float currentTime;

	// Constructors
	public LoadingScreenHandler();

	// Methods
	private void Start();
	private void Update();
	private void OnGameMessageReceived(MVGameMsgType gameMsgType, Dictionary<object, object> gameMsgData);
	private void OnDestroy();
}

