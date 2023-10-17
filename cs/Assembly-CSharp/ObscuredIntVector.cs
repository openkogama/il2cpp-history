/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public struct ObscuredIntVector
{
	// Fields
	public ObscuredShort x;
	public ObscuredShort y;
	public ObscuredShort z;
	public static readonly ObscuredIntVector One;

	// Properties
	public short this[int key] { get => default; set {} }

	// Constructors
	public ObscuredIntVector(short x, short y, short z);
	public ObscuredIntVector(int x, int y, int z);
	public ObscuredIntVector(IntVector intVector);
	public ObscuredIntVector(float x, float y, float z);
	static ObscuredIntVector();

	// Methods
	public override bool Equals(object obj);
	public bool Equals(ObscuredIntVector iV);
	public override int GetHashCode();
	public static bool operator ==(ObscuredIntVector a, ObscuredIntVector b);
	public static bool operator !=(ObscuredIntVector a, ObscuredIntVector b);
	public Vector3 ToVector3();
	public override string ToString();
	public static ObscuredIntVector operator +(ObscuredIntVector i1);
	public static ObscuredIntVector operator -(ObscuredIntVector i1);
	public static ObscuredIntVector operator +(ObscuredIntVector i1, ObscuredIntVector i2);
	public static ObscuredIntVector operator -(ObscuredIntVector i1, ObscuredIntVector i2);
	public static ObscuredIntVector operator *(int i, ObscuredIntVector iV);
	public static ObscuredIntVector operator *(ObscuredIntVector iV, int i);
	public static Vector3 operator *(ObscuredIntVector iV, Vector3 vector3);
	public static ObscuredIntVector operator /(ObscuredIntVector iV, int i);
	public int SquareMagnitude();
	public static int ObscuredIntVectorToIndex(ObscuredIntVector ObscuredIntVector, int chunkSize);
	public static ObscuredIntVector IndexToObscuredIntVector(int index, int chunkSize);
}

