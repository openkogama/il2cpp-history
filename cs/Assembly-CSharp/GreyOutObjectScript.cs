/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GreyOutObjectScript : MonoBehaviour
{
	// Fields
	public GameObject pickupObject;
	public Shader hiddenShader;
	private List<PickupOriginalMaterials> pickupOriginalMaterials;
	private bool isGreyedIn;

	// Properties
	public bool IsGreyedIn { get; }

	// Nested types
	private class PickupOriginalMaterials
	{
		// Fields
		public MeshRenderer meshRenderer;
		public Material[] originalMaterials;
		public bool meshRendererEnabled;

		// Constructors
		public PickupOriginalMaterials(MeshRenderer meshRenderer);

		// Methods
		public override string ToString();
	}

	// Constructors
	public GreyOutObjectScript();

	// Methods
	private void Awake();
	public void Hide();
	public void GreyIn();
	public void GreyOut();
	public void InitializeOriginalMaterials();
	private static void GreyInExec(PickupOriginalMaterials pickupOriginalMaterial);
	private void GreyOutExec(PickupOriginalMaterials pickupOriginalMaterial);
	private void HideExec(PickupOriginalMaterials pickupOriginalMaterial);
	private void ExecuteOnMaterials(Action<PickupOriginalMaterials> action);
}

