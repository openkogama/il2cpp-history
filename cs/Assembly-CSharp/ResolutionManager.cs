/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class ResolutionManager
{
	// Fields
	public static UnityAction<Vector2> OnReferenceResolution;
	private static CanvasScaler canvasScaler;
	[CompilerGenerated]
	private static bool _Initialized_k__BackingField;

	// Properties
	public static Vector2 ReferenceResolution { get; }
	public static bool Initialized { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static Vector2 PhysicalDistanceToPixels { get; }
	public static Vector2 PixelsToPhysicalDistance { get; }
	public static float Scale { get; }
	public static float InverseScale { get; }

	// Methods
	public static void Init(CanvasScaler canvasScaler);
	public static void Destroy();
	public static void PostDestroyCleanup();
}

