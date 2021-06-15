/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModelingDynamicBoxConstraint : ModelingBoxConstraint
{
	// Fields
	private MVCubeModelBase cubeModel;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private ObscuredIntVector _Size_k__BackingField;

	// Properties
	public ObscuredIntVector Size { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public ModelingDynamicBoxConstraint(MVCubeModelBase cubeModel, IntVector constraintSize);

	// Methods
	public void DetachFromCubeModel();
	public override bool CanAddCubeAt(IntVector pos);
	public override bool CanRemoveCubeAt(IntVector pos);
	public override bool CanEditCubeAt(IntVector pos);
	private void CubeModel_Changed(CubeModelChangedEventArgs e);
	private Vector3 CalcConstraintBoxCenter(MVCubeModelBase model);
}

