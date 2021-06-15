/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMovingPlatform : MVMovable
{
	// Fields
	private MVMovingPlatformNode start;
	private MVMovingPlatformNode end;

	// Properties
	public MVMovingPlatformNode Start { get; }
	public MVMovingPlatformNode End { get; }
	protected override Vector3 WorldVelocity { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal IntVector min;
		internal IntVector max;
		internal MVMovingPlatform _this;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal IModelingConstraint __m__0();
	}

	// Constructors
	public MVMovingPlatform(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public void MoveBetweenNodes(MVMovingPlatformNode start, MVMovingPlatformNode end);
	public void RecalculateMovement();
	private void MVCubeModelBase_BeingEditedChanged(object sender, EditStateEventArgs e);
	protected override void OnSelectedChanged(bool selected);
}

