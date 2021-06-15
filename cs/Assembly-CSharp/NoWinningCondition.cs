/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NoWinningCondition : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RoundTimer roundTimerPrefab;
	private RoundTimer roundTimer;

	// Constructors
	public NoWinningCondition();

	// Methods
	public void Initialize(RectTransform lobbyStateUI);
	public void TryInitializeRoundCube();
	public virtual void RoundEndReset();
	public void Clear();
	private void CreateRoundTimer(WorldObjectClientRef<MVRoundCube> roundCube);
}

