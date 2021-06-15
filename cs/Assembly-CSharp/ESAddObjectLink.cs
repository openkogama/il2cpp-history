/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESAddObjectLink : ESStateBase
{
	// Fields
	private ObjectLink tempLink;
	private WorldObjectClientRef woRef;

	// Nested types
	[CompilerGenerated]
	private sealed class _Execute_c__AnonStorey0
	{
		// Fields
		internal VoxelHit hit;

		// Constructors
		public _Execute_c__AnonStorey0();

		// Methods
		internal bool __m__0(ObjectLink o);
	}

	// Constructors
	public ESAddObjectLink();

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine e);
	private void LeaveAddLink(EditorStateMachine e);
	public override void Exit(EditorStateMachine esm);
	private bool DoAddLink();
}

