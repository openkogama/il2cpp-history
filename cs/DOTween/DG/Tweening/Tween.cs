/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public abstract class Tween : ABSSequentiable
	{
		// Fields
		public float timeScale;
		public bool isBackwards;
		internal bool isInverted;
		public object id;
		public string stringId;
		public int intId;
		public object target;
		internal UpdateType updateType;
		internal bool isIndependentUpdate;
		public TweenCallback onPlay;
		public TweenCallback onPause;
		public TweenCallback onRewind;
		public TweenCallback onUpdate;
		public TweenCallback onStepComplete;
		public TweenCallback onComplete;
		public TweenCallback onKill;
		public TweenCallback<int> onWaypointChange;
		internal bool isFrom;
		internal bool isBlendable;
		internal bool isRecyclable;
		internal bool isSpeedBased;
		internal bool autoKill;
		internal float duration;
		internal int loops;
		internal LoopType loopType;
		internal float delay;
		[CompilerGenerated]
		private bool _isRelative_k__BackingField;
		internal Ease easeType;
		internal EaseFunction customEase;
		public float easeOvershootOrAmplitude;
		public float easePeriod;
		public string debugTargetId;
		internal System.Type typeofT1;
		internal System.Type typeofT2;
		internal System.Type typeofTPlugOptions;
		[CompilerGenerated]
		private bool _active_k__BackingField;
		internal bool isSequenced;
		internal Sequence sequenceParent;
		internal int activeId;
		internal SpecialStartupMode specialStartupMode;
		internal bool creationLocked;
		internal bool startupDone;
		[CompilerGenerated]
		private bool _playedOnce_k__BackingField;
		[CompilerGenerated]
		private float _position_k__BackingField;
		internal float fullDuration;
		internal int completedLoops;
		internal bool isPlaying;
		internal bool isComplete;
		internal float elapsedDelay;
		internal bool delayComplete;
		internal int miscInt;
	
		// Properties
		public bool isRelative { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public bool active { [CompilerGenerated] get; [CompilerGenerated] internal set; }
		public bool hasLoops { get; }
		public bool playedOnce { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public float position { [CompilerGenerated] get; [CompilerGenerated] internal set; }
	
		// Constructors
		protected Tween();
	
		// Methods
		internal virtual void Reset();
		internal virtual float UpdateDelay(float elapsed);
		internal abstract bool Startup();
		internal abstract bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, DG.Tweening.Core.Enums.UpdateMode updateMode, UpdateNotice updateNotice);
		internal static bool DoGoto(Tween t, float toPosition, int toCompletedLoops, DG.Tweening.Core.Enums.UpdateMode updateMode);
		internal static bool OnTweenCallback(TweenCallback callback, Tween t);
		internal static bool OnTweenCallback<T>(TweenCallback<T> callback, Tween t, T param);
	}
}
