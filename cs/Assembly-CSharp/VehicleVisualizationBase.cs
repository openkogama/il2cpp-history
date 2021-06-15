/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleVisualizationBase : MonoBehaviour
{
	// Fields
	public List<GameObject> lodGameObjects;
	protected float disableVisualizationDistance;
	protected float cullDistance;
	protected bool isInSpawner;
	private bool disabledByLod;

	// Constructors
	public VehicleVisualizationBase();

	// Methods
	public virtual void ChangeLOD(float distance);
	protected static void ParentHullTransformToVisualizationRoot(Transform hullTransform, Transform visualizationRoot);
}

