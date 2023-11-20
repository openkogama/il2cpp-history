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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__8_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _SelectionChanged_b__8_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public PickHelper picker;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _Initialize_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PickController();

	// Methods
	public void Initialize(UnityAction<int> onPickCallback, bool setText);
	public void SelectionChanged(MVWorldObjectClient wo, MVWorldObjectClient parent);
	public void Refresh();
	private int FindParentID(Transform t);
}

