/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerStatusPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text xpProgress;
	[SerializeField]
	private ProgressBarAndroid progressBar;
	[SerializeField]
	private float duration;
	private float currentTime;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__5_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__5_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerStatusPopup();

	// Methods
	public void Initialize();
	private void Update();
	private string FormatXP(float amount);
}

