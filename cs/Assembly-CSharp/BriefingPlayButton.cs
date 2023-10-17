/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BriefingPlayButton : PlayButton
{
	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__0_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _StartPlaying_b__0_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public BriefingPlayButton();

	// Methods
	protected override void StartPlaying();
	protected override bool HandlePlayAvailable();
}

