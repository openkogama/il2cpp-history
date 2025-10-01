/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterGamePoints : GameMeterBase
{
	// Fields
	private const float createGamePointDelayMax = 0.2f;
	private const float createGamePointDelayMin = 0.1f;
	private const int maxAmountOfQueuedGainEffects = 10;
	[SerializeField]
	private GameObject gamePointMeterMainObject;
	[SerializeField]
	private Transform gamePointEffectSpawnPoint;
	[SerializeField]
	private Transform gamePointEffectTarget;
	[SerializeField]
	private GamePointGainEffectCountController countController;
	[SerializeField]
	private GamePointGainEffect gamePointGainEffectPrefab;
	[SerializeField]
	private bool disableSpawnOffset;
	private readonly Vector3 gainEffectSpawnOffset;
	private readonly List<GamePointGainEffect> gamePointGainEffectPool;
	private readonly List<GamePointGainEffect> gamePointGainEffectCurrentlyUsed;
	private int currentGamePoints;
	private int gamePointsToInstantiate;
	private float createGamePointTime;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterGamePoints();

	// Methods
	public override void Initialize();
	public override void SetShowGameMeter(bool show);
	public override void UpdateValue();
	public override bool SetGameMeterVisibility();
	private void OnDestroy();
	private void OnDisable();
	private void Update();
	private void OnPlayerPlanetDataUpdated();
	private void OnFakeGainEffect(int newGamePoints);
	private void OnInGameGainEffectShown(int gamePointAmountShown);
	private void OnHaveShownGainEffect(int gamePointAmountShown);
	private void SetGamePoints(int newGamePoints);
	private void AddGamePoints(int addedGamePoints);
	private void GamePointsModified();
	private void StartGamePointGainEffect();
	private void CreateGamePointGainEffect();
	private void OnGamePointReached(int id);
	private void OnGainEffectsDone();
	private void StopAllGainEffects();
}

