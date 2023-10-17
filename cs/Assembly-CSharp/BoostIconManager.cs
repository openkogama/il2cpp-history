/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostIconManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<BoosterIcon> boosterIconPrefabs;

	// Constructors
	public BoostIconManager();

	// Methods
	public GameObject CreateBoosterIcon(BoostType type);
}

