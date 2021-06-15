/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RequirementPanel : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image canUseSprite;
	[SerializeField]
	private UnityEngine.UI.Text requirementCost;

	// Constructors
	public RequirementPanel();

	// Methods
	public void SetRequirementCostText(int cost);
	public void SetCanAfford(Sprite canAffordSprite);
}

