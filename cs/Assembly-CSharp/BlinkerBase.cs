/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BlinkerBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected Material blinkMaterial;
	protected int layerMask;
	protected bool visible;
	protected MeshFilter[] meshFilters;
	protected Dictionary<BlinkType, Blinker> blinkers;
	protected Camera targetCamera;

	// Properties
	public bool Visible { get; set; }
	public MeshFilter[] MeshFilters { get; set; }

	// Constructors
	public BlinkerBase();

	// Methods
	private void Awake();
	public void StartBlinking(BlinkType type, float duration = 1F / 0F);
	public void StopBlinking(BlinkType type);
	public virtual void LateUpdate();
	protected void DoBlinking();
	protected virtual void BeforeDraw();
	private void OnDestroy();
}

