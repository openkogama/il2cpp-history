/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EditableCubeModelWrapper
{
	// Fields
	private MVCubeModelInstance cubeModelBase;

	// Properties
	public MVCubeModelInstance CubeModel { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public EditableCubeModelWrapper __4__this;
		public IntVector min;
		public IntVector max;
		public int minCubeCount;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal IModelingConstraint _SetConstraints_b__0();
	}

	// Constructors
	public EditableCubeModelWrapper(MVCubeModelInstance cubeModelBase);
	public EditableCubeModelWrapper(MVCubeModelInstance cubeModelBase, IntVector min, IntVector max, int minCubeCount);

	// Methods
	public virtual bool OnEnterObject(EditorStateMachine e);
	public virtual bool OnExitObject(EditorStateMachine e);
	protected void SetConstraints(IntVector min, IntVector max, int minCubeCount);
}

