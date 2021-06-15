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

public class SkyboxManager : MonoBehaviour
{
	// Fields
	[Header]
	[SerializeField]
	private float skyContrast;
	[SerializeField]
	private AnimationCurve lightDuskDawnFalloff;
	[Header]
	[SerializeField]
	private Light sunLight;
	[SerializeField]
	private Camera targetCamera;
	[SerializeField]
	private MeshRenderer horizontalPlane;
	public static readonly Color defaultColor;
	public static readonly Color brightAmbient;
	public const float defaultSunAngle = 80f;
	public const float defaultFogDensity = 0.007f;
	public Color currentColor;
	public float currentSunAngle;
	public float currentFogDensity;
	public SkyboxColorChangedDelegate OnSkyboxColorChanged;
	private List<MVSkybox> mvSkyboxes;
	private Color targetColor;
	private float targetSunAngle;
	private float targetFogDensity;
	private bool initialized;
	private bool pendingLateInitialization;
	[CompilerGenerated]
	private static Func<MVSkybox, bool> __f__am_cache0;
	[CompilerGenerated]
	private static Func<MVSkybox, float> __f__am_cache1;
	[CompilerGenerated]
	private static Func<MVSkybox, float> __f__am_cache2;

	// Nested types
	public delegate void SkyboxColorChangedDelegate(Color newColor);

	[CompilerGenerated]
	private sealed class _DoAnimate_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _t___0;
		internal Color _c___1;
		internal float _s___1;
		internal float _d___1;
		internal SkyboxManager _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoAnimate_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public SkyboxManager();
	static SkyboxManager();

	// Methods
	public void RefreshColor();
	public void Add(MVSkybox skybox);
	public void Remove(MVSkybox skybox);
	[DebuggerHidden]
	private IEnumerator DoAnimate();
	protected void Awake();
	public void Enable();
	public void Disable();
	protected void OnEnable();
	private void Initialize();
	private void CalcAndSetSkyboxSettings();
	private void ComputeSkyboxSettings(out Color color, out float sunAngle, out float fogDensity);
	private void SetColor(Color color, float sunAngle, float fogDensity);
	public static void ResetAmbientLight();
	[CompilerGenerated]
	private void _Awake_m__0();
	[CompilerGenerated]
	private static bool _ComputeSkyboxSettings_m__1(MVSkybox s);
	[CompilerGenerated]
	private static float _ComputeSkyboxSettings_m__2(MVSkybox s);
	[CompilerGenerated]
	private static float _ComputeSkyboxSettings_m__3(MVSkybox s);
}

