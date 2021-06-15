/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingSubscriberDynamic : IUpdatecontrollerSubscriberUpdate, ICullingSubscriber
{
	// Fields
	private int cullingBandIndex;
	private int overrideDistanceBandIndex;
	private GameObject root;
	private Transform rootTransform;
	private GameObject[] children;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _CullingIndex_k__BackingField;

	// Properties
	public int CullingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public CullingSubscriberDynamic(float radius, int cullingBandIndex, GameObject root, GameObject[] children = null);

	// Methods
	public void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public void UpdateControllerUpdate();
	public void SetCullingRadius(float radius);
	public void UpdateControllerFixedUpdate();
	public void Destroy();
}

