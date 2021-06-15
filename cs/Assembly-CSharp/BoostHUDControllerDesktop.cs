/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostHUDControllerDesktop : MonoBehaviour
{
	// Fields
	[SerializeField]
	private HorizontalLayoutGroup content;
	[SerializeField]
	private BoostImageController boostImageController;
	private List<GameObject> currentBoosts;

	// Constructors
	public BoostHUDControllerDesktop();

	// Methods
	private void Start();
	private void CreateActiveBoosts();
	private void OnDestroy();
}

