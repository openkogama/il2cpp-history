/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class MoveCubeFromCoarseToFine
{
	// Fields
	private static IntVector[] intCubeCorners;

	// Nested types
	private class ValidPos
	{
		// Fields
		public bool valid;
		public Vector3 pos;

		// Constructors
		public ValidPos(bool valid, Vector3 pos);
	}

	// Constructors
	static MoveCubeFromCoarseToFine();

	// Methods
	public static void MoveCube(ICubeModel from, ICubeModel to, IntVector fromPos);
	private static void AddUnindentedCube(ICubeModel from, ICubeModel to, IntVector fromPos);
	private static void AddIndentedCube(ICubeModel from, ICubeModel to, IntVector fromPos);
	private static List<Plane> GetTestPlanes(ICubeModel from, IntVector fromPos);
	private static List<ValidPos> CreateValidPosGrid(int scaleFactor);
	private static List<IntVector> GetValidCubes(List<ValidPos> validPoses, int scaleFactor);
	private static int IntVectorToValidPosIndex(IntVector intVector, int validPosSize);
	private static void SetValidPoints(List<Plane> testPlanes, List<ValidPos> validPoses);
	private static bool IsFaceIndented(Face face, ref Vector3[] faceCorners);
}

