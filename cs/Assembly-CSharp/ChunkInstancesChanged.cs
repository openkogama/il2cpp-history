/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChunkInstancesChanged : EventArgs
{
	// Fields
	public readonly ChangeType changeType;
	public readonly IntVector chunkPos;

	// Nested types
	public enum ChangeType
	{
		Added = 0,
		Removed = 1,
		Clear = 2
	}

	// Constructors
	public ChunkInstancesChanged(ChangeType changeType, IntVector chunkPos);
}

