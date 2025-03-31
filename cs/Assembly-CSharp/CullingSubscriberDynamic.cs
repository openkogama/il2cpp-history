/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingSubscriberDynamic : IUpdatecontrollerSubscriberUpdate, ICullingSubscriber
{
	// Fields
	private readonly int cullingBandIndex;
	private readonly int overrideDistanceBandIndex;
	private readonly bool keepRootAlive;
	private readonly GameObject root;
	private readonly GameObject[] cullingGroup;
	private readonly Transform rootTransform;
	[CompilerGenerated]
	private int _CullingIndex_k__BackingField;

	// Properties
	public int CullingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public CullingSubscriberDynamic(float radius, int cullingBandIndex, GameObject root, GameObject[] cullingGroup = null, bool keepRootAlive = false);

	// Methods
	public void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	private void SetStateRoot(bool visible);
	private void SetStateCullingGroupUpdate(bool visible);
	public void UpdateControllerUpdate();
	public void SetCullingRadius(float radius);
	public void UpdateControllerFixedUpdate();
	public void Destroy();
}

