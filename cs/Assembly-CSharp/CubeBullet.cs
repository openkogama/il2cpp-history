/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CubeBullet : MonoBehaviour
{
	// Fields
	[SerializeField]
	private MeshFilter meshFilter;
	[SerializeField]
	private MeshRenderer meshRenderer;
	[CompilerGenerated]
	private byte _MaterialID_k__BackingField;

	// Properties
	public byte MaterialID { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public MeshFilter MeshFilter { get; }
	public MeshRenderer MeshRenderer { get; }

	// Constructors
	public CubeBullet();

	// Methods
	private void Update();
	public void SetCubeMaterial(byte id);
}

