/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GameMeterVisuals
{
	public class SlideOnClick : GameMeterVisualEffect, IPointerEnterHandler, IPointerExitHandler
	{
		// Fields
		[SerializeField]
		private Vector3 targetPos;
		[SerializeField]
		private RectTransform rectTransform;
		[SerializeField]
		private float lerpSpeed;
		[SerializeField]
		private float waitBeforeMoveBack;
		private Vector3 startPos;
		private bool readyForSlide;
		private bool holding;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _SlideTowardsPosition_c__Iterator0 : IEnumerator<object>
		{
			// Fields
			internal float _i___1;
			internal float _i___2;
			internal float _i___3;
			internal SlideOnClick _this;
			internal object _current;
			internal bool _disposing;
			internal int _PC;
	
			// Properties
			object IEnumerator<object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _SlideTowardsPosition_c__Iterator0();
	
			// Methods
			public bool MoveNext();
			[DebuggerHidden]
			public void Dispose();
			[DebuggerHidden]
			public void Reset();
		}
	
		// Constructors
		public SlideOnClick();
	
		// Methods
		private void Start();
		public void SetNewStartPosition(Vector3 newPos);
		public override void ExecuteEffect();
		[DebuggerHidden]
		private IEnumerator SlideTowardsPosition();
		private void OnDisable();
		public void OnPointerEnter(PointerEventData eventData);
		public void OnPointerExit(PointerEventData eventData);
	}
}
