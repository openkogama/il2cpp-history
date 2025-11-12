/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Plugins.Core.PathCore
{
	internal class CubicBezierDecoder : ABSPathDecoder
	{
		// Fields
		private static readonly ControlPoint[] _PartialControlPs;
		private static readonly Vector3[] _PartialWps;
	
		// Properties
		internal override int minInputWaypoints { get; }
	
		// Constructors
		public CubicBezierDecoder();
		static CubicBezierDecoder();
	
		// Methods
		internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath);
		internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints);
		internal void SetTimeToLengthTables(Path p, int subdivisions);
		internal void SetWaypointsLengths(Path p, int subdivisions);
	}
}
