/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GameMeterVisuals
{
	public class GameMeterUpdatedEffect : GameMeterVisualEffect
	{
		// Fields
		[SerializeField]
		private float scaleStrength;
		[SerializeField]
		private float scaleTime;
		[SerializeField]
		private RectTransform scaleTarget;
		private Vector3 startSize;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _AnimateScale_c__Iterator0 : IEnumerator<object>
		{
			// Fields
			internal float _i___1;
			internal float _i___2;
			internal GameMeterUpdatedEffect _this;
			internal object _current;
			internal bool _disposing;
			internal int _PC;
	
			// Properties
			object IEnumerator<object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _AnimateScale_c__Iterator0();
	
			// Methods
			public bool MoveNext();
			[DebuggerHidden]
			public void Dispose();
			[DebuggerHidden]
			public void Reset();
		}
	
		// Constructors
		public GameMeterUpdatedEffect();
	
		// Methods
		private void OnEnable();
		public override void ExecuteEffect();
		[DebuggerHidden]
		private IEnumerator AnimateScale();
		private void OnDisable();
	}
}
