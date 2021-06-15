/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using Assets.Scripts.AdIntegration.Mobile;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MobileAdManagerTestScript : MonoBehaviour
{
	// Fields
	private MobileAdManager mobileAdManager;
	private const int maxOutMessage = 3;
	private Queue<string> outputMessages;

	// Constructors
	public MobileAdManagerTestScript();

	// Methods
	private void Start();
	private void ApplicationOnLogMessageReceived(string condition, string stacktrace, LogType type);
	public void OnGUI();
	private void InterstitialCallback(InterstitialAdResult obj);
	private void RewardedAdCallback(RewardedAdResult obj);
}

