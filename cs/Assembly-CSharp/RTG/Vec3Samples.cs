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
	public class Vec3Samples
	{
		// Fields
		private int _maxNumSamples;
		private List<Vector3> _samples;
	
		// Properties
		public int NumSamples { get; }
		public int MaxNumSamples { get; }
	
		// Constructors
		public Vec3Samples();
	
		// Methods
		public void AddSample(Vector3 sample);
		public void SetMaxNumSamples(int maxNumSamples);
		public Vector3 GetAverage();
	}
}
