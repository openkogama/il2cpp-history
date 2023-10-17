/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeltaCubes
{
	// Fields
	private readonly Queue<KeyValuePair<IntVector, CubeAction>> cubeChange;

	// Properties
	public Queue<KeyValuePair<IntVector, CubeAction>> CubeChange { get; }
	public int Count { get; }

	// Constructors
	public DeltaCubes();
	public DeltaCubes(IEnumerable<KeyValuePair<IntVector, CubeAction>> cubeChangeOriginal);

	// Methods
	public void Clear();
	public void Enqueue(IntVector iVector, CubeAction cubeAction);
	public byte[] Dequeue(RuntimePrototypeCubeModel rpcm);
}

