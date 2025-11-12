/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Plugins
{
	public struct CircleOptions : IPlugOptions
	{
		// Fields
		public float endValueDegrees;
		public bool relativeCenter;
		public bool snapping;
		internal Vector2 center;
		internal float radius;
		internal float startValueDegrees;
		internal bool initialized;
	
		// Methods
		public void Reset();
		public void Initialize(Vector2 startValue, Vector2 endValue);
	}
}
