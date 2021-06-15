/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface ICubeModelCollider
{
	// Properties
	int Id { get; }
	GameObject GameObject { get; }
	Transform Transform { get; }
	InteractionFlags InteractionFlags { get; }
	ChunkInstances ChunkInstances { get; }
	Vector3 Scale { get; }
	Quaternion WorldRotation { get; }
	RuntimePrototypeCubeModel PrototypeCubeModel { get; }

	// Methods
	Cube GetCube(IntVector pos);
	void CubePosToChunkPos(ref IntVector pos);
}

