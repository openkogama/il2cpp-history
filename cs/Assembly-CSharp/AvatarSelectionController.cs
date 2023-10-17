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

public class AvatarSelectionController : MonoBehaviour, IAvatarSlotClicked
{
	// Fields
	[SerializeField]
	private AvatarSelectionSlot avatarSelectionSlotPrefab;
	[SerializeField]
	private RectTransform avatarSelectionContentRoot;
	[SerializeField]
	private SellAvatarController sellAvatarPrefab;
	[SerializeField]
	private GameObject publishAvatarGO;
	private int currSelectedSlot;
	private readonly Dictionary<int, AvatarSelectionSlot> avatarSlots;
	private static AvatarSelectionController instance;
	private AvatarEditModeBodyController avatarBodyController;

	// Properties
	public static int CurrentlySelectedSlotIndex { get; set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IEditStateCommands> __9__15_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__17_0;
		public static ExecuteEvents.EventFunction<IActivateUIElement> __9__20_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _SetStateToRoam_b__15_1(IEditStateCommands x, BaseEventData y);
		internal void _SellCurrentAvatar_b__17_0(IModalPopupCreator x, BaseEventData y);
		internal void _OpenAvatarShop_b__20_0(IActivateUIElement x, BaseEventData y);
	}

	// Constructors
	public AvatarSelectionController();

	// Methods
	public void Initialize(AvatarEditModeBodyController bodyController, EditorStateMachine esm);
	public void Destroy();
	public void ResetCurrentAvatar();
	public void AvatarSlotClicked(int slotIndex);
	public void SetStateToRoam();
	private void OnPicUpdateForPrevAvatar(int index, Texture2D image);
	public void SellCurrentAvatar();
	public void TakeScreenshotForProfile();
	public void SetToNextAnimation();
	public void OpenAvatarShop();
	private void OnPictureTakenCallback(int index, Texture2D image);
	[CompilerGenerated]
	private void _SetStateToRoam_b__15_0(IAvatarSetBodyGroup x, BaseEventData y);
}

