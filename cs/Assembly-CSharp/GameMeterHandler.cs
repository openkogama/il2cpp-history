/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<GameMeterBase> gameMeters;

	// Constructors
	public GameMeterHandler();

	// Methods
	private void OnEnable();
	private void Awake();
	private void OnDestroy();
	private void UpdateValue();
	private void ConditionCountChanged(object sender, EventArgs args);
	private void OnGameStatUpdated(object sender, OnCounterTypeChangedArgs args);
	private void CounterChanged(object sender, OnCounterTypeChangedArgs args);
}

