/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(RectTransform))]
public class TeritiaryNotificationsOffsetAdjuster : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float topPaddingInMenu;
	[SerializeField]
	private float topPaddingInGame;

	// Constructors
	public TeritiaryNotificationsOffsetAdjuster();

	// Methods
	private void Start();
	private void OnIsPausedStateChange(bool isPaused);
}

