/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DynamicCullingHandler
{
	// Fields
	private CullingSubscriberDynamic cullingSubscriberDynamic;
	private float cullingRadius;

	// Constructors
	public DynamicCullingHandler(float cullingRadius);

	// Methods
	public void ActivateCulling(GameObject cullingObject);
	public void DeActivateCulling();
	public void UpdateCullingRadius(MVWorldObjectClient objArg, ScaleChangedEventArgs scaleArg);
}

