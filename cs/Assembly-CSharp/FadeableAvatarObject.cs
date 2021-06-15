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

public class FadeableAvatarObject : MonoBehaviour
{
	// Fields
	private GameObject avatarObject;
	private List<Material> materials;

	// Nested types
	[CompilerGenerated]
	private sealed class _AddMaterialsToAvatarFader_c__AnonStorey0
	{
		// Fields
		internal int i;
		internal FadeableAvatarObject _this;

		// Constructors
		public _AddMaterialsToAvatarFader_c__AnonStorey0();

		// Methods
		internal void __m__0(IFadeParent x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnDestroy_c__AnonStorey1
	{
		// Fields
		internal int i;
		internal FadeableAvatarObject _this;

		// Constructors
		public _OnDestroy_c__AnonStorey1();

		// Methods
		internal void __m__0(IFadeParent x, BaseEventData y);
	}

	// Constructors
	public FadeableAvatarObject();

	// Methods
	private void Start();
	public void Initialize(GameObject avatarObject);
	private void AddMaterialsToAvatarFader();
	private void OnDestroy();
}

