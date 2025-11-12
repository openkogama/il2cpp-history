/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;
using UnityEngine.Audio;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class DOTweenModuleAudio
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass0_0
		{
			// Fields
			public AudioSource target;
	
			// Constructors
			public __c__DisplayClass0_0();
	
			// Methods
			internal float _DOFade_b__0();
			internal void _DOFade_b__1(float x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass1_0
		{
			// Fields
			public AudioSource target;
	
			// Constructors
			public __c__DisplayClass1_0();
	
			// Methods
			internal float _DOPitch_b__0();
			internal void _DOPitch_b__1(float x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public AudioMixer target;
			public string floatName;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal float _DOSetFloat_b__0();
			internal void _DOSetFloat_b__1(float x);
		}
	
		// Extension methods
		public static TweenerCore<float, float, FloatOptions> DOFade(this AudioSource target, float endValue, float duration);
		public static TweenerCore<float, float, FloatOptions> DOPitch(this AudioSource target, float endValue, float duration);
		public static TweenerCore<float, float, FloatOptions> DOSetFloat(this AudioMixer target, string floatName, float endValue, float duration);
		public static int DOComplete(this AudioMixer target, bool withCallbacks = false);
		public static int DOKill(this AudioMixer target, bool complete = false);
		public static int DOFlip(this AudioMixer target);
		public static int DOGoto(this AudioMixer target, float to, bool andPlay = false);
		public static int DOPause(this AudioMixer target);
		public static int DOPlay(this AudioMixer target);
		public static int DOPlayBackwards(this AudioMixer target);
		public static int DOPlayForward(this AudioMixer target);
		public static int DORestart(this AudioMixer target);
		public static int DORewind(this AudioMixer target);
		public static int DOSmoothRewind(this AudioMixer target);
		public static int DOTogglePause(this AudioMixer target);
	}
}
