/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Plugins
{
	public class CirclePlugin : ABSTweenPlugin<Vector2, Vector2, CircleOptions>
	{
		// Constructors
		public CirclePlugin();
	
		// Methods
		public override void Reset(TweenerCore<Vector2, Vector2, CircleOptions> t);
		public override void SetFrom(TweenerCore<Vector2, Vector2, CircleOptions> t, bool isRelative);
		public static ABSTweenPlugin<Vector2, Vector2, CircleOptions> Get();
		public override Vector2 ConvertToStartValue(TweenerCore<Vector2, Vector2, CircleOptions> t, Vector2 value);
		public override void SetRelativeEndValue(TweenerCore<Vector2, Vector2, CircleOptions> t);
		public override void SetChangeValue(TweenerCore<Vector2, Vector2, CircleOptions> t);
		public override float GetSpeedBasedDuration(CircleOptions options, float unitsXSecond, Vector2 changeValue);
		public override void EvaluateAndApply(CircleOptions options, Tween t, bool isRelative, DOGetter<Vector2> getter, DOSetter<Vector2> setter, float elapsed, Vector2 startValue, Vector2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice);
		public Vector2 GetPositionOnCircle(CircleOptions options, float degrees);
	}
}
