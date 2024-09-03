/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class ColorTransition
	{
		// Fields
		[CompilerGenerated]
		private ColorTransitionBeginHandler TransitionBegin;
		[CompilerGenerated]
		private ColorTransitionEndHandler TransitionEnd;
		private ColorRef _colorRef;
		private Color _fadeInColor;
		private Color _fadeOutColor;
		private State _state;
		private float _durationInSeconds;
		private float _elapsedTimeInSeconds;
		private bool _isActive;
	
		// Properties
		public State TransitionState { get; }
		public Color FadeInColor { get; set; }
		public Color FadeOutColor { get; set; }
		public float DurationInSeconds { get; set; }
		public bool IsActive { get; }
	
		// Events
		public event ColorTransitionBeginHandler TransitionBegin {
			add;
			remove;
		}
		public event ColorTransitionEndHandler TransitionEnd {
			add;
			remove;
		}
	
		// Nested types
		public enum State
		{
			CompleteFadeIn = 0,
			CompleteFadeOut = 1,
			FadingIn = 2,
			FadingOut = 3,
			Ready = 4
		}
	
		public delegate void ColorTransitionBeginHandler(ColorTransition colorTransition);
	
		public delegate void ColorTransitionEndHandler(ColorTransition colorTransition);
	
		// Constructors
		public ColorTransition(ColorRef colorRef);
	
		// Methods
		public void BeginFadeIn(bool startFromCurrentColor);
		public void BeginFadeOut(bool startFromCurrentColor);
		public void Update(float elapsedTime);
		private void End();
	}
}
