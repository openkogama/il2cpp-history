/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public struct PlaneDescriptor
	{
		// Fields
		private PlaneId _id;
		private PlaneQuadrantId _quadrant;
		private AxisDescriptor _firstAxisDescriptor;
		private AxisDescriptor _secondAxisDescriptor;
	
		// Properties
		public PlaneId Id { get; }
		public PlaneQuadrantId Quadrant { get; }
		public AxisSign FirstAxisSign { get; }
		public AxisSign SecondAxisSign { get; }
		public int FirstAxisIndex { get; }
		public int SecondAxisIndex { get; }
		public AxisDescriptor FirstAxisDescriptor { get; }
		public AxisDescriptor SecondAxisDescriptor { get; }
	
		// Constructors
		public PlaneDescriptor(PlaneId planeId, PlaneQuadrantId planeQuadrant);
	}
}
