/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[DisallowMultipleComponent]
	public class TMP_SpriteAnimator : MonoBehaviour
	{
		// Fields
		private Dictionary<int, bool> m_animations;
		private TMP_Text m_TextComponent;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _DoSpriteAnimationInternal_d__7 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public TMP_SpriteAnimator __4__this;
			public int start;
			public int end;
			public TMP_SpriteAsset spriteAsset;
			public int currentCharacter;
			public int framerate;
			private int _currentFrame_5__2;
			private TMP_CharacterInfo _charInfo_5__3;
			private int _materialIndex_5__4;
			private int _vertexIndex_5__5;
			private TMP_MeshInfo _meshInfo_5__6;
			private float _baseSpriteScale_5__7;
			private float _elapsedTime_5__8;
			private float _targetTime_5__9;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSpriteAnimationInternal_d__7(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public TMP_SpriteAnimator();
	
		// Methods
		private void Awake();
		private void OnEnable();
		private void OnDisable();
		public void StopAllAnimations();
		public void DoSpriteAnimation(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate);
		[IteratorStateMachine(typeof(_DoSpriteAnimationInternal_d__7))]
		private IEnumerator DoSpriteAnimationInternal(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate);
	}
}
