/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CreateNewCubeModel : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CubeModelPopup cubeModelPopupPrefab;
	private byte currentByteMaterial;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnAddCubeModelPressed_c__AnonStorey0
	{
		// Fields
		internal CubeModelPopup popup;

		// Constructors
		public _OnAddCubeModelPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public CreateNewCubeModel();

	// Methods
	public void UpdateButtonTextures(byte materialId);
	public void OnAddCubeModelPressed();
	[CompilerGenerated]
	private static void _OnAddCubeModelPressed_m__0(IUIStack handler, BaseEventData data);
}

