/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeSystemPopupCamera : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float mouseMoveDistance;
	[SerializeField]
	private float fadeDuration;
	[SerializeField]
	private CanvasGroup group;
	[SerializeField]
	private GameObject activeImage;
	[SerializeField]
	private GameObject inActiveImage;
	private float mouseMoved;
	private Vector3 mousePos;
	private float currentFade;

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
		internal void _Update_b__8_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeSystemPopupCamera();

	// Methods
	private void Update();
}

