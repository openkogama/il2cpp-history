/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text woIDText;
	[SerializeField]
	private UnityEngine.UI.Text parentType;
	[SerializeField]
	private UnityEngine.UI.Text woType;
	[SerializeField]
	private PickHelper pickHelperPrefab;
	private UnityAction<int> pickCallback;
	private bool shouldSetText;
	private int pickedWoId;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal PickHelper picker;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PickController();

	// Methods
	public void Initialize(UnityAction<int> onPickCallback, bool setText);
	public void SelectionChanged(MVWorldObjectClient wo, MVWorldObjectClient parent);
	public void Refresh();
	private int FindParentID(Transform t);
	[CompilerGenerated]
	private static void _SelectionChanged_m__0(IUIStack x, BaseEventData y);
}

