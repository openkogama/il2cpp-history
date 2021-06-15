/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EditableCubeModelWrapper
{
	// Fields
	private MVCubeModelInstance cubeModelBase;

	// Properties
	public MVCubeModelInstance CubeModel { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _SetConstraints_c__AnonStorey0
	{
		// Fields
		internal IntVector min;
		internal IntVector max;
		internal int minCubeCount;
		internal EditableCubeModelWrapper _this;

		// Constructors
		public _SetConstraints_c__AnonStorey0();

		// Methods
		internal IModelingConstraint __m__0();
	}

	// Constructors
	public EditableCubeModelWrapper(MVCubeModelInstance cubeModelBase);
	public EditableCubeModelWrapper(MVCubeModelInstance cubeModelBase, IntVector min, IntVector max, int minCubeCount);

	// Methods
	public virtual bool OnEnterObject(EditorStateMachine e);
	public virtual bool OnExitObject(EditorStateMachine e);
	protected void SetConstraints(IntVector min, IntVector max, int minCubeCount);
}

