/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FadeableObject : MonoBehaviour
{
	// Fields
	private List<Material> materials;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass1_0
	{
		// Fields
		public FadeableObject __4__this;
		public int i;
		public ExecuteEvents.EventFunction<IFadeParent> __9__0;

		// Constructors
		public __c__DisplayClass1_0();

		// Methods
		internal void _Start_b__0(IFadeParent x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass2_0
	{
		// Fields
		public FadeableObject __4__this;
		public int i;
		public ExecuteEvents.EventFunction<IFadeParent> __9__0;

		// Constructors
		public __c__DisplayClass2_0();

		// Methods
		internal void _OnDestroy_b__0(IFadeParent x, BaseEventData y);
	}

	// Constructors
	public FadeableObject();

	// Methods
	private void Start();
	private void OnDestroy();
}

