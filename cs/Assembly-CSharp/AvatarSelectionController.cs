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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditStateCommands> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IActivateUIElement> __f__am_cache2;

	// Properties
	public static int CurrentlySelectedSlotIndex { get; set; }

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
	private void _SetStateToRoam_m__0(IAvatarSetBodyGroup x, BaseEventData y);
	[CompilerGenerated]
	private static void _SetStateToRoam_m__1(IEditStateCommands x, BaseEventData y);
	[CompilerGenerated]
	private static void _SellCurrentAvatar_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OpenAvatarShop_m__3(IActivateUIElement x, BaseEventData y);
}

