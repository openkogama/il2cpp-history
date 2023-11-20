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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChunkInstances : IEnumerator, IEnumerable
{
	// Fields
	private readonly Dictionary<IntVector, ChunkInstanceVariables> chunkInstances;
	[CompilerGenerated]
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
		public Guid guid;
		public GameObject gameObject;
		public BoxCollider collider;
		public MeshRenderer renderer;
		public MeshFilter filter;
		public bool transparent;
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<string, KeyValuePair<IntVector, ChunkInstanceVariables>, string> __9__19_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal string _Guids_b__19_0(string current, KeyValuePair<IntVector, ChunkInstanceVariables> keyValuePair);
	}

	// Constructors
	public ChunkInstances();

	// Methods
	public void Add(object sender, IntVector intVector, ChunkInstanceVariables chunkInstanceVariables);
	public void SetTransparent(bool t);
	public void Remove(IntVector intVector);
	public bool Contains(IntVector intVector);
	public bool TryGetValue(IntVector intVector, out ChunkInstanceVariables gameObject);
	public ChunkInstanceVariables GetChunk(IntVector intVector);
	public void Clear();
	IEnumerator IEnumerable.GetEnumerator();
	public bool MoveNext();
	public void Reset();
	public string Guids();
}

