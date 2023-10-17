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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		[SerializeField]
		private bool ignoreY;
		[CompilerGenerated]
		private Vector3 _StartPos_k__BackingField;
		private bool readyForSlide;
		private bool holding;
	
		// Properties
		public Vector3 StartPos { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class _SlideTowardsPosition_d__14 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public SlideOnClick __4__this;
			private float _i_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _SlideTowardsPosition_d__14(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public SlideOnClick();
	
		// Methods
		private void Start();
		public void SetNewStartPosition(Vector3 newPos);
		public override void ExecuteEffect();
		[IteratorStateMachine(typeof(_SlideTowardsPosition_d__14))]
		private IEnumerator SlideTowardsPosition();
		private void LerpToPos(Vector2 from, Vector2 to, float i);
		private void OnDisable();
		private void SetToPosition(Vector2 pos);
		public void OnPointerEnter(PointerEventData eventData);
		public void OnPointerExit(PointerEventData eventData);
	}
}
