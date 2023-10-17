/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeSystemPopupMovementHeight : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<ControlImage> controlImages;
	[SerializeField]
	private float fadeDuration;
	[SerializeField]
	private CanvasGroup group;
	[SerializeField]
	private Color deactivated;
	private float currentFade;

	// Properties
	private bool IsFinished { get; set; }

	// Nested types
	[Serializable]
	private struct ControlImage
	{
		// Fields
		public KogamaControls key;
		public Image control;
		public GameObject checkMark;
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__9_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeSystemPopupMovementHeight();

	// Methods
	private void Update();
	private void SetControl(KogamaControls control);
}

