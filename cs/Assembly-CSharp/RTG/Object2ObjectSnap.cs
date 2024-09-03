/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class Object2ObjectSnap
	{
		// Fields
		private static List<GameObject> _nearbyObjectBuffer;
		private static Config _defaultConfig;
	
		// Properties
		public static int MaxSourceObjects { get; }
		public static Config DefaultConfig { get; }
	
		// Nested types
		[Flags]
		public enum Prefs
		{
			None = 0,
			TryMatchArea = 1,
			All = 1
		}
	
		public enum SnapFailReson
		{
			None = 0,
			MaxObjectsExceeded = 1,
			InvalidSourceObjects = 2,
			NoDestinationFound = 3
		}
	
		public struct SnapResult
		{
			// Fields
			private bool _success;
			private Vector3 _snapPivot;
			private Vector3 _snapDestination;
			private float _snapDistance;
			private SnapFailReson _failReason;
	
			// Properties
			public bool Success { get; }
			public Vector3 SnapPivot { get; }
			public Vector3 SnapDestination { get; }
			public float SnapDistance { get; }
			public SnapFailReson FailReason { get; }
	
			// Constructors
			public SnapResult(SnapFailReson failReson);
			public SnapResult(Vector3 snapPivot, Vector3 snapDestination, float snapDistance);
		}
	
		public struct Config
		{
			// Fields
			private float _areaMatchEps;
			public List<GameObject> IgnoreDestObjects;
			public int DestinationLayers;
			public float SnapRadius;
			public Prefs Prefs;
	
			// Properties
			public float AreaMatchEps { get; set; }
		}
	
		private struct SnapSortData
		{
			// Fields
			public GameObject SrcObject;
			public GameObject DestObject;
			public BoxFace SrcSnapFace;
			public BoxFace DestSnapFace;
			public bool FaceAreasMatch;
			public float FaceAreaDiff;
			public Vector3 SnapPivot;
			public Vector3 SnapDest;
			public float SnapDistance;
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Comparison<SnapSortData> __9__14_0;
			public static Comparison<SnapSortData> __9__14_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal int _CalculateSnapResult_b__14_0(SnapSortData s0, SnapSortData s1);
			internal int _CalculateSnapResult_b__14_1(SnapSortData s0, SnapSortData s1);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass14_0
		{
			// Fields
			public GameObject root;
			public Config snapConfig;
			public Predicate<GameObject> __9__2;
	
			// Constructors
			public __c__DisplayClass14_0();
	
			// Methods
			internal bool _CalculateSnapResult_b__2(GameObject item);
		}
	
		// Constructors
		static Object2ObjectSnap();
	
		// Methods
		public static SnapResult Snap(List<GameObject> roots, Config snapConfig);
		public static SnapResult Snap(GameObject root, Config snapConfig);
		public static SnapResult CalculateSnapResult(GameObject root, Config snapConfig);
	}
}
