/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.Accessories;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryTimeLimitDisplayer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text timeLeftText;
	private AccessoryTimelimit accessoryTimeLimitData;
	private static readonly string format;

	// Constructors
	public AccessoryTimeLimitDisplayer();
	static AccessoryTimeLimitDisplayer();

	// Methods
	public void Initialize(AccessoryTimelimit accessoryData);
	private void Update();
}

