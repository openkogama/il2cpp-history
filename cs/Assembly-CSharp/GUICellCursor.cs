/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GUICellCursor : MonoBehaviour
{
	// Fields
	private IntVector pos;
	public float fadeInTime;
	public float fadeOutTime;
	public float scale;
	private float baseAlpha;
	private float currentAlpha;
	private float prevCursorSetTime;
	public Material material;
	public float lineWidth;
	public bool lineMesh;
	public bool cubeMesh;
	public bool invertedCubeMesh;
	private Fader fader;
	private FadeState fadeState;
	[SerializeField]
	private MeshRenderer meshRenderer;
	[SerializeField]
	private MeshFilter meshFilter;

	// Properties
	public float PrevCursorSetTime { get; }
	public IntVector LocalPos { get; }
	public FadeOverride FadeOverride { set; }
	public FadeState FadeState { get; set; }

	// Nested types
	public class Fader
	{
		// Fields
		private float start;
		private float end;
		private float durationInv;
		private float startMulDurationInv;
		private float startValue;
		private float endValue;

		// Constructors
		public Fader(float duration, float startValue, float endValue);

		// Methods
		public bool Update(ref float fadeVal);
	}

	// Constructors
	public GUICellCursor();

	// Methods
	private void Awake();
	public void SetCursorCube(IntVector position, GameObject cubeGameObject);
	private void SetMaterialOpacity(float alphaValue);
	private void Update();
	public void Destroy();
}

