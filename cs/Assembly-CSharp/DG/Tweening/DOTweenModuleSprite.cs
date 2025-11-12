/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class DOTweenModuleSprite
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass0_0
		{
			// Fields
			public SpriteRenderer target;
	
			// Constructors
			public __c__DisplayClass0_0();
	
			// Methods
			internal Color _DOColor_b__0();
			internal void _DOColor_b__1(Color x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass1_0
		{
			// Fields
			public SpriteRenderer target;
	
			// Constructors
			public __c__DisplayClass1_0();
	
			// Methods
			internal Color _DOFade_b__0();
			internal void _DOFade_b__1(Color x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0
		{
			// Fields
			public Color to;
			public SpriteRenderer target;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal Color _DOBlendableColor_b__0();
			internal void _DOBlendableColor_b__1(Color x);
		}
	
		// Extension methods
		public static TweenerCore<Color, Color, ColorOptions> DOColor(this SpriteRenderer target, Color endValue, float duration);
		public static TweenerCore<Color, Color, ColorOptions> DOFade(this SpriteRenderer target, float endValue, float duration);
		public static Sequence DOGradientColor(this SpriteRenderer target, Gradient gradient, float duration);
		public static Tweener DOBlendableColor(this SpriteRenderer target, Color endValue, float duration);
	}
}
