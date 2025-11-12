/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class TweenSettingsExtensions
	{
		// Methods
		private static bool ValidateAddToSequence(Sequence s, Tween t, bool ignoreTween = false);
	
		// Extension methods
		public static T SetTarget<T>(this T t, object target)
			where T : Tween;
		public static T SetLoops<T>(this T t, int loops, LoopType loopType)
			where T : Tween;
		public static T SetEase<T>(this T t, Ease ease)
			where T : Tween;
		public static T SetUpdate<T>(this T t, UpdateType updateType)
			where T : Tween;
		public static T OnStart<T>(this T t, TweenCallback action)
			where T : Tween;
		public static T OnUpdate<T>(this T t, TweenCallback action)
			where T : Tween;
		public static Sequence Append(this Sequence s, Tween t);
		public static Sequence Join(this Sequence s, Tween t);
		public static T SetRelative<T>(this T t)
			where T : Tween;
		public static Tweener SetOptions(this TweenerCore<float, float, FloatOptions> t, bool snapping);
		public static Tweener SetOptions(this TweenerCore<Vector2, Vector2, VectorOptions> t, bool snapping);
		public static Tweener SetOptions(this TweenerCore<Vector2, Vector2, VectorOptions> t, AxisConstraint axisConstraint, bool snapping = false);
		public static Tweener SetOptions(this TweenerCore<Vector3, Vector3, VectorOptions> t, bool snapping);
		public static Tweener SetOptions(this TweenerCore<Vector3, Vector3, VectorOptions> t, AxisConstraint axisConstraint, bool snapping = false);
		public static Tweener SetOptions(this TweenerCore<Color, Color, ColorOptions> t, bool alphaOnly);
		public static Tweener SetOptions(this TweenerCore<string, string, StringOptions> t, bool richTextEnabled, ScrambleMode scrambleMode = ScrambleMode.None, string scrambleChars = null);
		public static Tweener SetOptions(this TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, bool snapping);
		public static Tweener SetOptions(this TweenerCore<Vector2, Vector2, CircleOptions> t, float endValueDegrees, bool relativeCenter = true, bool snapping = false);
	}
}
