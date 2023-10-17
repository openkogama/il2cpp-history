/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public MVMovingPlatform __4__this;
		public IntVector min;
		public IntVector max;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal IModelingConstraint _Initialize_b__0();
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

