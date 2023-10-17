/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MovableVisualization : MonoBehaviour, IUpdatecontrollerSubscriberFixedUpdate
{
	// Fields
	private MVCubeModelBase cmb;
	private GameObject cmbClone;
	private Package next;
	private Package current;
	private Queue<Package> packages;
	private bool isVisible;
	private bool canBeVisible;
	private bool isDirty;
	private const float updateDirtyInterval = 1f;
	private float prevUpdateDirtyTime;

	// Properties
	public bool Visible { get; set; }

	// Nested types
	private class Package
	{
		// Fields
		public readonly Vector3 position;
		public readonly Quaternion rotation;
		public readonly float time;

		// Constructors
		public Package(Vector3 position, Quaternion rotation);
	}

	// Constructors
	public MovableVisualization();

	// Methods
	protected virtual void Awake();
	public void Init(MVCubeModelBase cmb);
	private void cmb_Changed(CubeModelChangedEventArgs e);
	private static GameObject CreateMeshClone(MVCubeModelBase cmb);
	private static void RemoveAllComponentsInChildrenExclude(System.Type[] exclude, GameObject gameObject);
	public void ChangeLOD(bool newVisible);
	private void SetMeshRenderers(bool enable, GameObject gameObject);
	private void Update();
	private void HandleDirty();
	public void Reset();
	private void OnDestroy();
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
}

