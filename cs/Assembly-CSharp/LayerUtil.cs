/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class LayerUtil
{
	// Methods
	public static string GetName(LayerFlags layers);
	public static int GetLayerNumber(LayerFlags layer);
	public static LayerMask GetMask(LayerFlags layerFlags);
	public static bool HasFlags(LayerFlags layersMask, int layerFlags);
	public static bool HasFlags(int layersMask, LayerFlags layerFlags);
	public static bool HasFlags(LayerFlags layersMask, LayerFlags layerFlags);
	public static bool HasFlags(int layersMask, int layerFlags);
	public static void SetLayerRecursively(Transform transfrom, string layer);
	public static void SetLayerRecursively(Transform transfrom, LayerMask layersToChange, int layer);
	public static void SetLayerRecursively(Transform transfrom, string layerToChange, string layer);

	// Extension methods
	public static void SetLayerRecursively(this Transform transfrom, int layer);
	public static void SetLayerRecursively(this GameObject gameObject, int layer);
}

