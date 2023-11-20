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

public class SkyboxManager : MonoBehaviour
{
	// Fields
	[Header("Configuration")]
	[SerializeField]
	private float skyContrast;
	[SerializeField]
	private AnimationCurve lightDuskDawnFalloff;
	[Header("Dependencies")]
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

	// Nested types
	public delegate void SkyboxColorChangedDelegate(Color newColor);

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<MVSkybox, bool> __9__30_0;
		public static Func<MVSkybox, float> __9__30_1;
		public static Func<MVSkybox, float> __9__30_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _ComputeSkyboxSettings_b__30_0(MVSkybox s);
		internal float _ComputeSkyboxSettings_b__30_1(MVSkybox s);
		internal float _ComputeSkyboxSettings_b__30_2(MVSkybox s);
	}

	[CompilerGenerated]
	private sealed class _DoAnimate_d__23 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public SkyboxManager __4__this;
		private float _t_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoAnimate_d__23(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public SkyboxManager();
	static SkyboxManager();

	// Methods
	public void RefreshColor();
	public void Add(MVSkybox skybox);
	public void Remove(MVSkybox skybox);
	[IteratorStateMachine(typeof(_DoAnimate_d__23))]
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
	private void _Awake_b__24_0();
}

