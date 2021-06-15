/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameCoinManager
{
	// Fields
	private ObscuredFloat startTime;
	private ObscuredFloat interval;
	private ObscuredInt intervalAmount;
	private int currentBoostMultiplier;
	private ObscuredBool boostEnabled;
	private ObscuredFloat boostedInterval;
	private ObscuredInt gameCoinPickupValue;
	private ObscuredInt gameCoins;
	private ObscuredBool isActive;
	private ObscuredInt totalPurchaseAmount;
	public OnActivationChangeDelegate OnActivationChange;
	public OnGameCoinAmountChangeDelegate OnGameCoinAmountChange;
	public Action<bool> BoostStateChanged;

	// Properties
	public int GameCoinAmount { get; }
	public int TotalPurchaseAmount { get; }
	public bool Active { get; }
	public bool BoostEnabled { get; }

	// Nested types
	public delegate void OnActivationChangeDelegate(bool active);

	public delegate void OnGameCoinAmountChangeDelegate(int amount);

	// Constructors
	public MVGameCoinManager();

	// Methods
	public void OnGameBoostChanged(bool boostEnabled);
	public void Update(MVNetworkGame game);
	private int GetBoostedGameCoinCount(int defaultAmount);
	public void Reset(MVNetworkGame game);
	public void GameCoinCollect();
	public void GameCoinChestCollect(int amount);
	public bool Consume(GameCoinLogic gameCoinLogic);
	public void ReportPurchaseAmountInEditor(int amount);
	public void ReportPickupChangeInEditor();
	private void Evaluate();
	private void HandleActivationChange(bool active);
	private void LateInitialize();
	private void Initialize();
	private void OnGameCoinBoostChanged();
}

