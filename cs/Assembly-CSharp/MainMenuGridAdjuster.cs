/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(RectTransform))]
public class MainMenuGridAdjuster : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float bottomPaddingWithoutGamePasses;
	[SerializeField]
	private float bottomPaddingWithGamePasses;

	// Constructors
	public MainMenuGridAdjuster();

	// Methods
	private void Start();
	private void OnValidate();
	private void SetRectTransformBottom();
}

