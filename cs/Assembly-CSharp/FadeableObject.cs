/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FadeableObject : MonoBehaviour
{
	// Fields
	private List<Material> materials;

	// Nested types
	[CompilerGenerated]
	private sealed class _Start_c__AnonStorey0
	{
		// Fields
		internal int i;
		internal FadeableObject _this;

		// Constructors
		public _Start_c__AnonStorey0();

		// Methods
		internal void __m__0(IFadeParent x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnDestroy_c__AnonStorey1
	{
		// Fields
		internal int i;
		internal FadeableObject _this;

		// Constructors
		public _OnDestroy_c__AnonStorey1();

		// Methods
		internal void __m__0(IFadeParent x, BaseEventData y);
	}

	// Constructors
	public FadeableObject();

	// Methods
	private void Start();
	private void OnDestroy();
}

