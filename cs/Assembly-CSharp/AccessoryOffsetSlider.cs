/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Slider))]
public class AccessoryOffsetSlider : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Slider slider;
	[SerializeField]
	private float defaultValue;
	private AccessorySlotType accessorySlot;
	private MVBody avatarBody;
	private bool isInPreview;

	// Properties
	public bool IsInPreview { set; }

	// Constructors
	public AccessoryOffsetSlider();

	// Methods
	public void Initialize(AccessorySlotType accessorySlot, int streamingAssetID);
	private void Initialize(MVBody avatarBody);
	public void ValueChanged();
	public void ChangeValue(float value);
	private void Reset();
	public void SyncPosition();
	[CompilerGenerated]
	private void _Initialize_b__7_0(IGetCurrentBody x, BaseEventData y);
}

