/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostImageController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<BoosterImageDef> boosterImages;

	// Nested types
	[Serializable]
	private struct BoosterImageDef
	{
		// Fields
		public BoostType type;
		public Image image;
	}

	// Constructors
	public BoostImageController();

	// Methods
	public Image GetBoostVisualization(BoostType type);
}

