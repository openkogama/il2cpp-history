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

public class LaserPointer : MonoBehaviour, ILaserPointer
{
	// Fields
	public Vector3 offset;
	public Transform cube;
	public LineRenderer lineRenderer;
	public Material insertingMaterial;
	public Material deleteMaterial;
	public Material transformingMaterial;
	public Color beamObjectColor;
	public Color beamDeleteColor;
	public Color beamEditColor;
	private float lastSyncTime;
	private Dictionary<object, object> syncBuffer;
	private Material currentCubeMaterial;
	private byte currentCubeMaterialId;
	private Color beamColor;
	private LaserPointerState state;
	private Vector3 relativeTargetPosition;
	private Vector3 relativeCurrentTargetPosition;
	private bool isFiring;
	private float activeDuration;
	private float currentLaserAlpha;
	private const float syncInverval = 0.4f;
	[SerializeField]
	private Renderer cubeRenderer;
	[SerializeField]
	private MeshFilter cubeMeshFilter;
	private bool isActive;
	private bool isLocal;
	private MVRuntimeDataVariable currentItem;

	// Properties
	public Renderer CubeRenderer { get; }
	public MeshFilter CubeMeshFilter { get; }

	// Nested types
	private enum NetworkStateKey : byte
	{
		State = 10,
		TargetX = 11,
		TargetY = 12,
		TargetZ = 13,
		IsFiring = 14,
		CubeMaterial = 15
	}

	[CompilerGenerated]
	private sealed class _DoDeactivateLaserAfterDuration_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _t___0;
		internal LaserPointer _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoDeactivateLaserAfterDuration_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public LaserPointer();

	// Methods
	public void SetLaserActiveState(bool isActive);
	public void Initialize(bool isLocal, MVRuntimeDataVariable currentItem, Transform parent);
	private void OnChange(object newvalue);
	public void SetCurrentCubeMaterial(byte cubeMaterial);
	public void SetLaserCubeVisible(bool visible);
	public void ChangeState(LaserPointerState newState);
	public void UpdatePosition(Vector3 to);
	public void ActivateLaserForDuration(float duration);
	public void OnStateChanged(Dictionary<object, object> newState);
	public void OnEquip();
	public void SubscribeToCommands();
	private void OnEnable();
	private void OnDisable();
	private void Start();
	private void LateUpdate();
	[DebuggerHidden]
	private IEnumerator DoDeactivateLaserAfterDuration();
	private void ApplyMaterialForState();
	protected void SyncState(Dictionary<object, object> newState);
	protected void IntervalSyncState(Dictionary<object, object> newState, float interval);
}

