/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoogleMobileAdsDemoScript : MonoBehaviour
{
	// Fields
	private BannerView bannerView;
	private InterstitialAd interstitial;
	private RewardedAd rewardedAd;
	private float deltaTime;
	private static string outputMessage;

	// Properties
	public static string OutputMessage { set; }

	// Constructors
	public GoogleMobileAdsDemoScript();
	static GoogleMobileAdsDemoScript();

	// Methods
	public void Start();
	public void Update();
	public void OnGUI();
	private AdRequest CreateAdRequest();
	private void RequestBanner();
	private void RequestInterstitial();
	public void CreateAndLoadRewardedAd();
	private void ShowInterstitial();
	private void ShowRewardedAd();
	public void HandleAdLoaded(object sender, EventArgs args);
	public void HandleAdFailedToLoad(object sender, AdFailedToLoadEventArgs args);
	public void HandleAdOpened(object sender, EventArgs args);
	public void HandleAdClosed(object sender, EventArgs args);
	public void HandleAdLeftApplication(object sender, EventArgs args);
	public void HandleInterstitialLoaded(object sender, EventArgs args);
	public void HandleInterstitialFailedToLoad(object sender, AdFailedToLoadEventArgs args);
	public void HandleInterstitialOpened(object sender, EventArgs args);
	public void HandleInterstitialClosed(object sender, EventArgs args);
	public void HandleInterstitialLeftApplication(object sender, EventArgs args);
	public void HandleRewardedAdLoaded(object sender, EventArgs args);
	public void HandleRewardedAdFailedToLoad(object sender, AdErrorEventArgs args);
	public void HandleRewardedAdOpening(object sender, EventArgs args);
	public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args);
	public void HandleRewardedAdClosed(object sender, EventArgs args);
	public void HandleUserEarnedReward(object sender, Reward args);
	private void Print(string s);
}

