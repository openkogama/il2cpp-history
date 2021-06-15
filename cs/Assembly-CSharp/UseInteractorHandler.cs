/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseInteractorHandler : MVComponent
{
	// Fields
	private Dictionary<int, UseInteractor> useInteractors;
	private List<int> removeList;
	private Collider triggingCollider;
	private MVInteractableBase interactionBase;
	private int ownerWoId;
	private const UseGUIResult useGui = UseGUIResult.NoUseButton | UseGUIResult.NoCost | UseGUIResult.CanAfford | UseGUIResult.CannotAfford;

	// Nested types
	[CompilerGenerated]
	private sealed class _SortByDistance_c__AnonStorey0
	{
		// Fields
		internal Vector3 triggingColliderPosition;

		// Constructors
		public _SortByDistance_c__AnonStorey0();

		// Methods
		internal float __m__0(UseInteractor a);
	}

	// Constructors
	public UseInteractorHandler();

	// Methods
	public void Init(int ownerWoId, Collider triggingCollider);
	public void AddUseInteractor(UseInteractor useInteractor);
	public void RemoveUseInteractor(UseInteractor useInteractor);
	private void UpdateInteractorsWOID();
	private void Update();
	private void UpdateUseVisuals();
	private List<UseInteractor> SortByDistance();
	public bool Use();
	public void Reset();
}

