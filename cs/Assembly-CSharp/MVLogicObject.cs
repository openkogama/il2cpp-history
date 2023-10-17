/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVLogicObject : MVWorldObjectClient, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private Bounds localBounds;
	protected CullingSubscriberBase cullingSubscriberBase;
	private GameObject lodGameObject;

	// Properties
	protected abstract bool HasVisualsInPlaymode { get; }

	// Constructors
	protected MVLogicObject(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	protected virtual void OnUpdate();
	public override void Reset();
	public override void Initialize();
	public void SetLocalBounds();
	protected CullingSubscriberBase SetupCulling(GameObject lodGameObject, float cullingRadius = 2f);
	private void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	protected virtual void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public override void Destroy();
	public virtual void UpdateControllerUpdate();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Select(Color color);
	public override void DeSelect();
	public override void InitializeInventory();
	public override void SetupTierInventory();
	private void StopCulling();
	protected Bounds ComputeLocalBounds(Vector3 origin, Renderer[] meshRenderers);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public virtual void UpdateControllerFixedUpdate();
}

