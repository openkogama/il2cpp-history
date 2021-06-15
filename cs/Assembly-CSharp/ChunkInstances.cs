/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChunkInstances : IEnumerator, IEnumerable
{
	// Fields
	private Dictionary<IntVector, ChunkInstanceVariables> chunkInstances;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<ChunkInstancesChanged> Changed;

	// Properties
	public int Count { get; }
	public object Current { get; }

	// Events
	public event EventHandler<ChunkInstancesChanged> Changed {
		add;
		remove;
	}

	// Nested types
	public struct ChunkInstanceVariables
	{
		// Fields
		public GameObject gameObject;
		public BoxCollider collider;
		public MeshRenderer renderer;
		public MeshFilter filter;
	}

	// Constructors
	public ChunkInstances();

	// Methods
	public void Add(IntVector intVector, ChunkInstanceVariables gameObject);
	public void Remove(IntVector intVector);
	public bool Contains(IntVector intVector);
	public bool TryGetValue(IntVector intVector, out ChunkInstanceVariables gameObject);
	public ChunkInstanceVariables GetChunk(IntVector intVector);
	public void Clear();
	IEnumerator IEnumerable.GetEnumerator();
	public bool MoveNext();
	public void Reset();
}

