/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingSubscriberBase : ICullingSubscriber
{
	// Fields
	private UnityAction<CullingGroupEvent> callback;
	[CompilerGenerated]
	private int _DistanceBandIndex_k__BackingField;
	[CompilerGenerated]
	private int _CullingIndex_k__BackingField;

	// Properties
	public int DistanceBandIndex { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int CullingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Vector3 Position { get; set; }
	public float Radius { get; set; }

	// Constructors
	public CullingSubscriberBase();
	public CullingSubscriberBase(UnityAction<CullingGroupEvent> callback);
	public CullingSubscriberBase(float radius, Vector3 position, UnityAction<CullingGroupEvent> callback);

	// Methods
	public void Setup(float radius, Vector3 position);
	public void Destroy();
	public virtual void OnStateChanged(CullingGroupEvent cullingGroupEvent);
}

