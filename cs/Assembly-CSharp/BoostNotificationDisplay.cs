/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostNotificationDisplay : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text boostsActive;
	[SerializeField]
	private Image backgroundColor;
	[SerializeField]
	private Color boostActiveColor;
	[SerializeField]
	private Color boostInactiveColor;

	// Constructors
	public BoostNotificationDisplay();

	// Methods
	private void Start();
	private void OnBoostCountChanged();
	private void OnDestroy();
}

