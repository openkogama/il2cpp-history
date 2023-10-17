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

public class PopElement : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<UIGroupFlags> popGroups;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__1_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Pop_b__1_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PopElement();

	// Methods
	public void Pop();
	[SerializeField]
	public void PopGroups();
	[CompilerGenerated]
	private void _PopGroups_b__2_0(IUIStack x, BaseEventData y);
}

