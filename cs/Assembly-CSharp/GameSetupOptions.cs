/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameSetupOptions : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ToggleButtonAnimation reviveToggleButton;
	private static bool isReviveEnabled;
	private static bool reviveUpdated;

	// Properties
	public static bool IsReviveEnabled { get; }

	// Constructors
	public GameSetupOptions();
	static GameSetupOptions();

	// Methods
	private void Start();
	public void ToggleRevive();
}

