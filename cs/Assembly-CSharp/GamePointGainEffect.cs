/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePointGainEffect : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float targetSpeedAccelerationPerSec;
	[SerializeField]
	private float randomOffsetMaxSpeed;
	[SerializeField]
	private float randomOffsetMinSpeed;
	private float targetSpeed;
	private float offsetSpeed;
	private Vector3 offsetDirection;
	private Transform targetTransform;
	private UnityAction<int> onReachCallbackCallback;
	private int id;

	// Properties
	public int ID { get; }

	// Constructors
	public GamePointGainEffect();

	// Methods
	public void Initialize(UnityAction<int> onReachCallbackCallback, int id);
	public void StartEffect(Transform tr, float offsetDirectionXMin = -0.6f, float offsetDirectionXMax = 0.6f, float offsetDirectionYMin = -0.8f, float offsetDirectionYMax = 0.8f);
	private void Update();
	private void UpdateOffsetSpeed();
	private void UpdateTargetSpeed();
}

