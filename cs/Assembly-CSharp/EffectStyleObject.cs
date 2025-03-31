/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gamestrap;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Graphic))]
[RequireComponent(typeof(ShadowEffect))]
[RequireComponent(typeof(GradientEffect))]
[RequireComponent(typeof(Outline))]
public class EffectStyleObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private EffectStyle effectStyle;
	[SerializeField]
	public Graphic graphic;
	[SerializeField]
	public ShadowEffect shadow;
	[SerializeField]
	public Outline outline;
	[SerializeField]
	public GradientEffect gradient;

	// Constructors
	public EffectStyleObject();

	// Methods
	private void Awake();
	private void Reset();
	private void OnValidate();
}

