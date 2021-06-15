/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SentryGunBeam : MonoBehaviour
{
	// Fields
	public LineRenderer lineRenderer;
	private const float timeout = 1f;
	private float deleteTimer;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _Active_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _StartPosition_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _EndPosition_k__BackingField;

	// Properties
	public bool Active { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Vector3 StartPosition { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Vector3 EndPosition { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public SentryGunBeam();

	// Methods
	public static SentryGunBeam Create(SentryGunBeam prefab, SentryGunBeamType beamType, MVSentryGun owner);
	protected virtual void OnUpdate();
	private void Update();
	public void RefreshTime();
	public void SetBeamPositions(Vector3 start, Vector3 end);
}

