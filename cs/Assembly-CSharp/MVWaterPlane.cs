/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVWaterPlane : MVLogicObject
{
	// Fields
	protected WaterPlaneManager waterManager;
	private Bounds localBounds;
	private bool addedToWPManager;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 WorldPivot { get; }

	// Constructors
	public MVWaterPlane(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override bool IsSingletonObject();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Initialize();
	public override void OnDataUpdate();
	public override void Destroy();
}

