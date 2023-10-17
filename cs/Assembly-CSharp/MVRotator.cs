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

public class MVRotator : MVMovable
{
	// Fields
	[CompilerGenerated]
	private Vector3 _InitAngularVelocity_k__BackingField;
	protected CullingSubscriberBase cullingSubscriberBase;
	private static HashSet<MVRotator> selectedRotators;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public Vector3 InitAngularVelocity { [CompilerGenerated] get; [CompilerGenerated] private set; }
	private MVWorldObjectClientManager WOCM { get; }
	public bool Horizontal { get; }
	public bool Vertical { get; }
	public override Vector3 WorldPivot { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public MVRotator __4__this;
		public IntVector min;
		public IntVector max;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal IModelingConstraint _Initialize_b__0();
	}

	// Constructors
	public MVRotator(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	static MVRotator();

	// Methods
	public override void Initialize();
	private void SetupCulling();
	private void OnPositionChanged(object sender, PositionChangedEventArgs positionChangedEventArgs);
	private void SetupCullingSphere();
	private void Changed(CubeModelChangedEventArgs cubeModelChangedEventArgs);
	private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	protected override void OnSelectedChanged(bool selected);
	private void MVCubeModelBase_BeingEditedChanged(object sender, EditStateEventArgs e);
	private void WorldObjectClient_SelectedChangedHandler(object sender, SelectedEventArgs e);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Destroy();
	public override void SetWorldObjectToPurchased();
	public override void AddPreviewBox();
}

