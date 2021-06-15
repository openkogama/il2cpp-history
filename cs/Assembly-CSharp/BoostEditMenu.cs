/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem.GamePassEarnings;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostEditMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private BoostEditMenuItem boostPrefab;
	[SerializeField]
	private RectTransform boostItemsScrollRect;
	[SerializeField]
	private RectTransform boostItemsContent;
	private List<BoostEditMenuItem> boostItems;

	// Constructors
	public BoostEditMenu();

	// Methods
	public void Start();
	private void UpdateEarningsData(ProjectEarningsReport projectEarningsReport);
	private void OnProjectEarningsUpdatedCallback(ProjectEarningsReport projectEarningsReport);
	private void OnDestroy();
}

