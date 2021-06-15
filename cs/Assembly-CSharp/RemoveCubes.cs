/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class RemoveCubes
{
	// Nested types
	public static class RemoveCubesWithinRadius
	{
		// Fields
		private const float SQRT_3_DIV_2 = 0.8660254f;
		private const float SQRT_3 = 1.7320508f;
		private static float localRadiusExtendedSquared;
		private static float localRadiusReducedSquared;
		private static IntVector iterationBounds;
		private static IntVector localMin;
		private static Vector3 localPosition;
		private static float centerDamage;
		private static DamageFallOffType damageFallOffType;

		// Nested types
		private enum DestructionState
		{
			CompletelyDestroyed = 0,
			OnEdgeOfDestruction = 1,
			NotDestroyed = 2
		}

		private enum RemoveStyle
		{
			OnEdgeLeftUp = 0,
			OnEdgeRightUp = 1,
			OnEdgeRightDown = 2,
			OnEdgeLeftDown = 3,
			Completely = 4
		}

		private static class FallOffValues
		{
			// Fields
			private const int maxNumFallOffValues = 20;
			private static int numFallOffValues;
			private static FallOffValue[] fallOffValues;
			private static int noDamageSquaredDistance;

			// Nested types
			private struct FallOffValue
			{
				// Fields
				public float squaredDistance;
				public float damage;

				// Methods
				public override string ToString();
			}

			// Constructors
			static FallOffValues();

			// Methods
			public static void TestFallOffValues(float radius, float centerDamage);
			public static void SetFallOffValues(float localRadius, float centerDamage);
			public static DestructionState GetDestructionState(float squaredDistance, float toughness);
		}

		private static class CornerCubes
		{
			// Fields
			private static readonly byte[][] cornerCubes;

			// Constructors
			static CornerCubes();

			// Methods
			public static byte[] GetCornerCube(int index);
		}

		// Methods
		public static void TestFallOffValues(float radius, float centerDamage);
		public static bool HandleRemoveCubes(MVCubeModelBase cm, float radius, IntVector fineGrainedTerrainLocalPos, float centerDamage, DamageFallOffType damageFallOffType, MVCubeModelBase fineGrainedTerrainWorldObject, Func<byte, PhysicalProperties> getPhysicalProperites);
		private static void CalculateLocalValues(MVCubeModelBase cm, float radius, IntVector localCenterPosition);
		private static bool RemoveCubesTerrain(MVCubeModelBase wo, MVCubeModelBase fineGrainedTerrain, Func<byte, PhysicalProperties> getPhysicalProperites);
		private static bool RemoveCube(DestructionState destructionState, MVCubeModelBase wo, MVCubeModelBase fineGrainedTerrain, IntVector testPosition);
		private static bool RemoveCubesSmooth(MVCubeModelBase wo, Func<byte, PhysicalProperties> getPhysicalProperites);
		private static bool CubeCornersEqual(byte[] corners0, byte[] corners1);
		private static RemoveStyle HandleCubeOnRadiusLimit(MVCubeModelBase wo, int x, IntVector pos, bool fromDestroyToNotDestroy, Func<byte, PhysicalProperties> getPhysicalProperites);
		private static DestructionState CalculateCubeDestruction(IntVector cubePos, CubeBase cubeBase, Func<byte, PhysicalProperties> getPhysicalProperites);
		private static DestructionState NoFallOffDestruction(float testDistSqr, float toughness);
		private static DestructionState LinearDestruction(float testDistSqr, float toughness);
	}

	public static class RemoveOneCube
	{
		// Methods
		public static bool HandleRemoveOneCube(IntVector fineGrainedPosition, ICubeModel terrainWorldObject, ICubeModel fineGrainedTerrainWorldObject);
		public static CubeDamageState CanRemoveCube(CubeBase cubeBase, float damage, Func<byte, PhysicalProperties> getPhysicalProperites);
		private static bool TryRemoveCubeFromTerrain(IntVector fineGrainedPosition, ICubeModel terrainWorldObject, ICubeModel fineGrainedTerrainWorldObject);
		private static bool TryRemoveCubeFromFineGrainedTerrain(IntVector fineGrainedPosition, ICubeModel fineGrainedTerrainWorldObject);
	}
}

