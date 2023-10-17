/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingSubscriberVehicle : CullingSubscriberBase
{
	// Fields
	private GameObject visualRoot;
	private const int vehicleDistanceBandIndex = 2;

	// Constructors
	public CullingSubscriberVehicle(GameObject visualRoot);

	// Methods
	public override void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public void PositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
}

