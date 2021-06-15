/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjExportHandler : MonoBehaviour
{
	// Fields
	private static bool picking;
	private const int defaultMask = -262149;
	private static HashSet<int> ignoreIds;

	// Constructors
	public ObjExportHandler();
	static ObjExportHandler();

	// Methods
	public static void InitializePicking();
	public static void ExportSelfAvatar();
	private void Update();
	private static bool Pick(ref VoxelHit hit, HashSet<int> ignoreWoIds = null, int layerMask = -262149);
	private static bool MVObjectIsType(Transform t, Type type, out int woId);
}

