/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OwnerToolController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text playerName;
	[SerializeField]
	private UnityEngine.UI.Text text;

	// Constructors
	public OwnerToolController();

	// Methods
	public void Initialize(string playerNameString);
	public void OnKickClicked();
	private static MVPlayer GetPlayer(string userName);
}

