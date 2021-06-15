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

public class AvatarSelectionSlot : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage image;
	[SerializeField]
	private RectTransform selectionOutline;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _BodyIndex_k__BackingField;

	// Properties
	public int BodyIndex { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public AvatarSelectionSlot();

	// Methods
	private void Awake();
	public void BuildAvatarSelectionSlot(int index, Texture2D texture);
	public void SlotClicked();
	public void ToggleActive(bool active);
	[CompilerGenerated]
	private void _SlotClicked_m__0(IAvatarSlotClicked x, BaseEventData y);
}

