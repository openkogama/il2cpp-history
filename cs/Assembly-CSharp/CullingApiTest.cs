/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingApiTest : MonoBehaviour
{
	// Fields
	private List<TestClass> testClasses;
	[SerializeField]
	private bool addBoundingSphere;
	[SerializeField]
	private bool unSubscribe;
	[SerializeField]
	private bool distancesChange;
	[SerializeField]
	private Transform movingTransform;
	private Camera mainCamera;

	// Nested types
	private class TestClass : ICullingSubscriber
	{
		// Fields
		[CompilerGenerated]
		private int _CullingIndex_k__BackingField;

		// Properties
		public int CullingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }

		// Constructors
		public TestClass();

		// Methods
		public void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	}

	// Constructors
	public CullingApiTest();

	// Methods
	private void Start();
	private void Subscribe();
	private void UnSubscribe();
	private void Update();
	private void OnDestroy();
}

