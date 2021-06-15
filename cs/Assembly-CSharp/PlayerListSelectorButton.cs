/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListSelectorButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image buttonImage;
	[SerializeField]
	public Button button;
	[SerializeField]
	private UnityEngine.UI.Text playerCount;
	[SerializeField]
	private UnityEngine.UI.Text score;
	[SerializeField]
	private Image teamImage;

	// Constructors
	public PlayerListSelectorButton();

	// Methods
	public void Initialize(MVTeam team);
}

