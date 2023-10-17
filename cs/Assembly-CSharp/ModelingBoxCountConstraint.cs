/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModelingBoxCountConstraint : ModelingBoxConstraint
{
	// Fields
	private MVCubeModelBase cubeModel;
	private int minCubesCount;

	// Constructors
	public ModelingBoxCountConstraint(MVCubeModelBase cubeModel, IntVector minCorner, IntVector maxCorner, int minCubeCount);

	// Methods
	public override bool CanAddCubeAt(IntVector pos);
	public override bool CanRemoveCubeAt(IntVector pos);
	public override bool CanEditCubeAt(IntVector pos);
	private void CubeModel_Changed(object sender, CubeModelChangedEventArgs e);
}

