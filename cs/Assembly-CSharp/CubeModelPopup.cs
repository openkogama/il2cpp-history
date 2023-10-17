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

public class CubeModelPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CubeModelPopupAction cubeModelPopupAction;
	[SerializeField]
	private RawImage scale25Percent;
	[SerializeField]
	private RawImage scale50Percent;
	[SerializeField]
	private RawImage scale100Percent;
	private byte materialID;
	private int woID;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public CubeModelPopup __4__this;
		public float scale;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _OnModelScalePressed_b__0(IMaterialClicked x, BaseEventData y);
		internal void _OnModelScalePressed_b__1(ICreateNewPrototype x, BaseEventData y);
		internal void _OnModelScalePressed_b__2(IChangePrototypeScale x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_3;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnModelScalePressed_b__7_3(IUIStack x, BaseEventData y);
	}

	// Constructors
	public CubeModelPopup();

	// Methods
	public void Initialize(byte currentMaterialId, int worldId = -1);
	public void OnModelScalePressed(float scale);
}

