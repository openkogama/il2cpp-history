/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CubeModelPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage scale25Percent;
	[SerializeField]
	private RawImage scale50Percent;
	[SerializeField]
	private RawImage scale100Percent;
	private byte materialID;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnModelScalePressed_c__AnonStorey0
	{
		// Fields
		internal float scale;
		internal CubeModelPopup _this;

		// Constructors
		public _OnModelScalePressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IMaterialClicked x, BaseEventData y);
		internal void __m__1(ICreateNewPrototype x, BaseEventData y);
	}

	// Constructors
	public CubeModelPopup();

	// Methods
	public void Initialize(byte currentMaterialId);
	public void OnModelScalePressed(float scale);
}

