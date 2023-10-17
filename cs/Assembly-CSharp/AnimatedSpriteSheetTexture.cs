/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AnimatedSpriteSheetTexture : MonoBehaviour
{
	// Fields
	[SerializeField]
	private int Columns;
	[SerializeField]
	private int Rows;
	[SerializeField]
	private int emptyRows;
	[SerializeField]
	private int emptyColumnsOnLastRow;
	[SerializeField]
	private int spriteWidth;
	[SerializeField]
	private int spriteHeight;
	[SerializeField]
	private int spriteCellWidth;
	[SerializeField]
	private int spriteCellHeight;
	[SerializeField]
	private int spriteUnusedPixelWidth;
	[SerializeField]
	private int spriteUnusedPixelHeight;
	[SerializeField]
	private float FramesPerSecond;
	[SerializeField]
	private bool RunOnce;
	[SerializeField]
	private Renderer textureRenderer;
	private float cellWidthMultiplier;
	private float cellHeightMultiplier;
	private Material materialCopy;

	// Properties
	public float RunTimeInSeconds { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _UpdateTiling_d__20 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AnimatedSpriteSheetTexture __4__this;
		private float _y_5__2;
		private Vector2 _offset_5__3;
		private int _i_5__4;
		private int _j_5__5;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _UpdateTiling_d__20(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AnimatedSpriteSheetTexture();

	// Methods
	private void Start();
	private void OnEnable();
	[IteratorStateMachine(typeof(_UpdateTiling_d__20))]
	private IEnumerator UpdateTiling();
}

