/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleTierSettings : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<GameObject> tierSelectedEffectObjects;
	[SerializeField]
	private GameObject tierZero;
	[SerializeField]
	private GameObject tierZeroGray;
	private bool canSelectTier0;
	private UnityAction<GamePassTier> OnChangeTierCallback;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _SelectTier_b__10_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleTierSettings();

	// Methods
	public void Initialize(GamePassTier currentTier, bool canSelectTier0, UnityAction<GamePassTier> OnChangeTierCallback);
	public void OnSelectTier0();
	public void OnSelectTier1();
	public void OnSelectTier2();
	public void OnSelectTier3();
	private void SelectTier(GamePassTier newTier);
}

