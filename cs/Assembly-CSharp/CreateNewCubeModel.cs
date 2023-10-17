/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CreateNewCubeModel : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CubeModelPopup cubeModelPopupPrefab;
	private byte currentByteMaterial;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass3_0
	{
		// Fields
		public CubeModelPopup popup;

		// Constructors
		public __c__DisplayClass3_0();

		// Methods
		internal void _OnAddCubeModelPressed_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__3_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnAddCubeModelPressed_b__3_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public CreateNewCubeModel();

	// Methods
	public void UpdateButtonTextures(byte materialId);
	public void OnAddCubeModelPressed();
}

