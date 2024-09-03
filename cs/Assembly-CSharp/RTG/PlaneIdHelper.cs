/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class PlaneIdHelper
	{
		// Fields
		private static List<PlaneInfo> _planeInfo;
		private static PlaneId[] _allPlaneIds;
	
		// Properties
		public static PlaneId[] AllPlaneIds { get; }
	
		// Nested types
		private struct PlaneQuadrantInfo
		{
			// Fields
			public PlaneQuadrantId Quadrant;
			public AxisSign FirstAxisSign;
			public AxisSign SecondAxisSign;
		}
	
		private struct PlaneInfo
		{
			// Fields
			public PlaneId PlaneId;
			public List<PlaneQuadrantInfo> QuadrantInfo;
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass10_0
		{
			// Fields
			public PlaneQuadrantId planeQuadrant;
	
			// Constructors
			public __c__DisplayClass10_0();
	
			// Methods
			internal bool _GetSecondAxisSign_b__0(PlaneQuadrantInfo item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass11_0
		{
			// Fields
			public AxisSign firstAxisSign;
			public AxisSign secondAxisSign;
	
			// Constructors
			public __c__DisplayClass11_0();
	
			// Methods
			internal bool _GetQuadrantFromAxesSigns_b__0(PlaneQuadrantInfo item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			public PlaneQuadrantId planeQuadrant;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal bool _GetFirstAxisSign_b__0(PlaneQuadrantInfo item);
		}
	
		// Constructors
		static PlaneIdHelper();
	
		// Methods
		public static AxisDescriptor GetFirstAxisDescriptor(PlaneId planeId, PlaneQuadrantId planeQuadrant);
		public static AxisDescriptor GetSecondAxisDescriptor(PlaneId planeId, PlaneQuadrantId planeQuadrant);
		public static AxisSign GetFirstAxisSign(PlaneId planeId, PlaneQuadrantId planeQuadrant);
		public static AxisSign GetSecondAxisSign(PlaneId planeId, PlaneQuadrantId planeQuadrant);
		public static PlaneQuadrantId GetQuadrantFromAxesSigns(PlaneId planeId, AxisSign firstAxisSign, AxisSign secondAxisSign);
		public static int PlaneIdToFirstAxisIndex(PlaneId planeId);
		public static int PlaneIdToSecondAxisIndex(PlaneId planeId);
		public static PlaneId NormalAxisIndexToPlaneId(int axisIndex);
	}
}
