/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ConstraintVisualizer : MonoBehaviour
{
	// Fields
	private IModelingConstraint constraint;

	// Constructors
	public ConstraintVisualizer();

	// Methods
	public void Init(MVCubeModelBase targetCubeModel, IModelingConstraint constraint, string layer = "UIItems");
	private void OnDestroy();
	private void Constraint_BoxChanged(object sender, ConstraintBoxChangedEventArgs e);
	private void CreateInsideOutCube();
	private void BuildMesh(Vector3[] vertices);
}

