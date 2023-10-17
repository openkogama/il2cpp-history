/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal interface IEditModeObjectPicker
{
	// Methods
	bool Pick(ref VoxelHit hit, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	bool DrawPlanePick(ref Vector3 hit);
}

