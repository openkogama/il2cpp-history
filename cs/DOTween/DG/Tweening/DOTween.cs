/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public class DOTween
	{
		// Fields
		public static readonly string Version;
		public static bool useSafeMode;
		public static SafeModeLogBehaviour safeModeLogBehaviour;
		public static NestedTweenFailureBehaviour nestedTweenFailureBehaviour;
		public static bool showUnityEditorReport;
		public static float timeScale;
		public static float unscaledTimeScale;
		public static bool useSmoothDeltaTime;
		public static float maxSmoothUnscaledTime;
		internal static RewindCallbackMode rewindCallbackMode;
		private static LogBehaviour _logBehaviour;
		public static Func<LogType, object, bool> onWillLog;
		public static bool drawGizmos;
		public static bool debugMode;
		private static bool _fooDebugStoreTargetId;
		public static UpdateType defaultUpdateType;
		public static bool defaultTimeScaleIndependent;
		public static AutoPlay defaultAutoPlay;
		public static bool defaultAutoKill;
		public static LoopType defaultLoopType;
		public static bool defaultRecyclable;
		public static Ease defaultEaseType;
		public static float defaultEaseOvershootOrAmplitude;
		public static float defaultEasePeriod;
		public static DOTweenComponent instance;
		private static bool _foo_isQuitting;
		internal static int maxActiveTweenersReached;
		internal static int maxActiveSequencesReached;
		internal static SafeModeReport safeModeReport;
		internal static readonly List<TweenCallback> GizmosDelegates;
		internal static bool initialized;
		private static int _isQuittingFrame;
	
		// Properties
		public static LogBehaviour logBehaviour { get; set; }
		public static bool debugStoreTargetId { get; set; }
		internal static bool isQuitting { get; set; }
	
		// Constructors
		static DOTween();
	
		// Methods
		private static void AutoInit();
		private static IDOTweenInit Init(DOTweenSettings settings, bool? recycleAllByDefault, bool? useSafeMode, LogBehaviour? logBehaviour);
		internal static void Clear(bool destroy, bool isApplicationQuitting);
		public static TweenerCore<float, float, FloatOptions> To(DOGetter<float> getter, DOSetter<float> setter, float endValue, float duration);
		public static TweenerCore<int, int, NoOptions> To(DOGetter<int> getter, DOSetter<int> setter, int endValue, float duration);
		public static TweenerCore<string, string, StringOptions> To(DOGetter<string> getter, DOSetter<string> setter, string endValue, float duration);
		public static TweenerCore<Vector2, Vector2, VectorOptions> To(DOGetter<Vector2> getter, DOSetter<Vector2> setter, Vector2 endValue, float duration);
		public static TweenerCore<Vector3, Vector3, VectorOptions> To(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 endValue, float duration);
		public static TweenerCore<Quaternion, Vector3, QuaternionOptions> To(DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, Vector3 endValue, float duration);
		public static TweenerCore<Color, Color, ColorOptions> To(DOGetter<Color> getter, DOSetter<Color> setter, Color endValue, float duration);
		public static TweenerCore<T1, T2, TPlugOptions> To<T1, T2, TPlugOptions>(ABSTweenPlugin<T1, T2, TPlugOptions> plugin, DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration)
			where TPlugOptions : struct, IPlugOptions;
		public static TweenerCore<Color, Color, ColorOptions> ToAlpha(DOGetter<Color> getter, DOSetter<Color> setter, float endValue, float duration);
		public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Punch(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 direction, float duration, int vibrato = 10, float elasticity = 1f);
		public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, float strength = 3f, int vibrato = 10, float randomness = 90f, bool ignoreZAxis = true, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full);
		public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato = 10, float randomness = 90f, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full);
		private static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut, ShakeRandomnessMode randomnessMode);
		public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> ToArray(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3[] endValues, float[] durations);
		public static Sequence Sequence();
		public static int Complete(object targetOrId, bool withCallbacks = false);
		internal static int CompleteAndReturnKilledTot(object targetOrId);
		public static int Flip(object targetOrId);
		public static int Goto(object targetOrId, float to, bool andPlay = false);
		public static int Kill(object targetOrId, bool complete = false);
		public static int Pause(object targetOrId);
		public static int Play(object targetOrId);
		public static int PlayBackwards(object targetOrId);
		public static int PlayForward(object targetOrId);
		public static int Restart(object targetOrId, bool includeDelay = true, float changeDelayTo = -1f);
		public static int Rewind(object targetOrId, bool includeDelay = true);
		public static int SmoothRewind(object targetOrId);
		public static int TogglePause(object targetOrId);
		private static void InitCheck();
		private static TweenerCore<T1, T2, TPlugOptions> ApplyTo<T1, T2, TPlugOptions>(DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, ABSTweenPlugin<T1, T2, TPlugOptions> plugin = null)
			where TPlugOptions : struct, IPlugOptions;
	}
}
