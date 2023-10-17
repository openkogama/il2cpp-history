/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristAdStateHandler
{
	// Fields
	private static readonly float adRateLimitTimer;
	private float adRateLimitCurrentTime;
	private Action OnAdShown;

	// Constructors
	public TouristAdStateHandler();
	static TouristAdStateHandler();

	// Methods
	public void ShowAd(Action OnAdFinished);
	private void InterstitialCallback(InterstitialAdResult obj);
}

