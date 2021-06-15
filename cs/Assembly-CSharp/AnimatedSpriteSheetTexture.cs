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
	private sealed class _UpdateTiling_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _x___0;
		internal float _y___0;
		internal Vector2 _offset___0;
		internal int _i___1;
		internal int _j___2;
		internal AnimatedSpriteSheetTexture _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _UpdateTiling_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public AnimatedSpriteSheetTexture();

	// Methods
	private void Start();
	private void OnEnable();
	[DebuggerHidden]
	private IEnumerator UpdateTiling();
}

