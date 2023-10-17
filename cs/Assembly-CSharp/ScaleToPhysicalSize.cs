/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScaleToPhysicalSize : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform moveTarget;
	private static float dpiScale;
	private const float baseValueInches = 4.9f;
	private const int baseDPI = 96;
	private static bool debugging;

	// Properties
	public static float DpiScale { get; }

	// Constructors
	public ScaleToPhysicalSize();
	static ScaleToPhysicalSize();

	// Methods
	private static void PrintLog(string s);
	protected void Start();
	private static float GetScreenScaleValue();
}

