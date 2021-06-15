/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeleportGroup : MonoBehaviour
{
	// Fields
	public LineRenderer lineRenderer;
	private MVTeleportGroup worldObject;

	// Constructors
	public TeleportGroup();

	// Methods
	public void Initialize(MVTeleportGroup owner);
	private void OnDestroy();
	private void PositionChanged(object sender, PositionChangedEventArgs args);
}

