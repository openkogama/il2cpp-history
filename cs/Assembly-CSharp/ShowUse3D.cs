/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.PlayMode.InGameUI.Use;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShowUse3D : ShowUse
{
	// Fields
	[SerializeField]
	private GameObject canAfford;
	[SerializeField]
	private GameObject canNotAfford;
	[SerializeField]
	private TextWithIcon textWithIcon;
	private const ShowUseOption useButtonInsufficientOptions = ShowUseOption.Normal | ShowUseOption.GameCoinsInsufficient | ShowUseOption.LevelInsufficient | ShowUseOption.StarsInsufficient | ShowUseOption.TeamRestricted;

	// Constructors
	public ShowUse3D();

	// Methods
	public override void CalculateUseGraphics(ShowUseOption useOption, int woID = 0);
	public override void Hide();
	public override void Show();
}

