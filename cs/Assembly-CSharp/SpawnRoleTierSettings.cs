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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public SpawnRoleTierSettings();

	// Methods
	public void Initialize(GamePassTier currentTier, bool canSelectTier0, UnityAction<GamePassTier> OnChangeTierCallback);
	public void OnSelectTier0();
	public void OnSelectTier1();
	public void OnSelectTier2();
	public void OnSelectTier3();
	private void SelectTier(GamePassTier newTier);
	[CompilerGenerated]
	private static void _SelectTier_m__0(IUIStack x, BaseEventData y);
}

