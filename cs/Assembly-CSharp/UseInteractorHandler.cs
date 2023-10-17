/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Tools;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseInteractorHandler : MVComponent
{
	// Fields
	private const UseGUIResult UseGui = UseGUIResult.NoUseButton | UseGUIResult.NoCost | UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private readonly Dictionary<int, UseInteractor> useInteractors;
	private readonly List<int> removeList;
	private ColliderCollection triggingColliders;
	private MVInteractableBase interactionBase;
	private int ownerWoId;

	// Properties
	public ColliderCollection TriggingColliders { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public Vector3 triggingColliderPosition;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal float _SortByDistance_b__0(UseInteractor a);
	}

	// Constructors
	public UseInteractorHandler();

	// Methods
	public void Init(int ownerWoId, Collider baseCollider);
	public void AddUseInteractor(UseInteractor useInteractor);
	public void RemoveUseInteractor(UseInteractor useInteractor);
	private void UpdateInteractorsWOID();
	private void Update();
	private void UpdateUseVisuals();
	private List<UseInteractor> SortByDistance();
	public bool Use();
	public void Reset();
}

