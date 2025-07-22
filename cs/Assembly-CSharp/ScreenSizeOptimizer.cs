/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScreenSizeOptimizer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Camera cam;
	private RenderTexture renderTarget;
	public static Vector2 originalSize;
	public static bool IsInHalfResolution;
	public static Action OnHalfResolution;
	private int minWidthInPixels;

	// Constructors
	public ScreenSizeOptimizer();

	// Methods
	private static void DebugLogWeb(string s);
	protected void Awake();
	protected void OnDestroy();
	private void HalfResolution();
	public void SetResolution(int newWidth, int newHeight);
	public void OnPreRender();
	private void OnPostRender();
	public static void UpdateOriginalSizeIfNecessary();
}

