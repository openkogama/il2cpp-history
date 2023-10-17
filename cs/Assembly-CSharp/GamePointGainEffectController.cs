/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePointGainEffectController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform gamePointEffectContainer;
	[SerializeField]
	private Transform gamePointEffectTargetTransform;
	[SerializeField]
	private GamePointGainEffectCountController countController;
	[SerializeField]
	private GamePointGainEffect gamePointGainEffectPrefab;
	[SerializeField]
	private bool disableSpawnOffset;
	private int currentGamePoints;
	private int gamePointsToInstantiate;
	private float createGamePointTime;
	private const float createGamePointDelayMax = 0.2f;
	private const float createGamePointDelayMin = 0.1f;
	private const int maxAmountOfQueuedGainEffects = 10;
	private readonly Vector3 gainEffectSpawnOffset;
	private readonly List<GamePointGainEffect> gamePointGainEffectPool;
	private readonly List<GamePointGainEffect> gamePointGainEffectCurrentlyUsed;

	// Constructors
	public GamePointGainEffectController();

	// Methods
	private void Start();
	private void OnDestroy();
	private void OnDisable();
	private void Update();
	private void OnPlayerPlanetDataUpdated();
	private void OnFakeGainEffect(int newGamePoints);
	private void OnHaveShownGainEffect(int gamePointAmountShown);
	private void OnInGameGainEffectShown(int gamePointAmountShown);
	private void HandleNewGamePointAmount(int newGamePointsAmount);
	private void HandleAddedGamePoints(int newAddedGamePoints);
	private void StartGamePointGainEffect();
	private void CreateGamePointGainEffect();
	private void OnGamePointReached(int id);
	private void OnGainEffectsDone();
	private void StopAllGainEffects();
}

