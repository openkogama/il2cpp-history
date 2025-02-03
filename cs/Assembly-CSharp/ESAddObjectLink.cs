/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESAddObjectLink : ESStateBase
{
	// Fields
	private ObjectLink tempLink;
	private WorldObjectClientRef woRef;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass3_0
	{
		// Fields
		public VoxelHit hit;

		// Constructors
		public __c__DisplayClass3_0();

		// Methods
		internal bool _Execute_b__0(ObjectLink o);
	}

	// Constructors
	public ESAddObjectLink();

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine esm);
	private void LeaveAddLinkAndDeSelectAll(EditorStateMachine esm);
	private void LeaveAddLink(EditorStateMachine esm);
	public override void Exit(EditorStateMachine esm);
	private bool DoAddLink();
}

