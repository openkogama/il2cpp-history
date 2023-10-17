/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSelectionButtonController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject selectButton;
	[SerializeField]
	private GameObject buyTierButton;
	[SerializeField]
	private GameObject lockedTierButton;
	[SerializeField]
	private UnityEngine.UI.Text buyTierButtonText;
	[SerializeField]
	private UnityEngine.UI.Text lockedTierButtonText;
	[SerializeField]
	private GameObject FreeTryUI;
	private GamePassTier currentSpawnRoleGamePassTier;

	// Constructors
	public SpawnRoleSelectionButtonController();

	// Methods
	public void OnNewSelectedSpawnRole(GamePassTier spawnRoleTier);
	private void OnEnable();
}

