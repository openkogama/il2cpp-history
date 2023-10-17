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

public class AvatarShopPreviewItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	[SerializeField]
	private RawImage previewImage;
	[SerializeField]
	private AvatarRepositoryItem item;
	[SerializeField]
	private AvatarPurchasePopup popup;
	[SerializeField]
	private AvatarPreviewer previewer;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public AvatarPurchasePopup purchasePopup;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _SlotPressed_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarShopPreviewItem();

	// Methods
	public void InitializeObjectPreview(AvatarRepositoryItem item, MVWorldObjectClient wo, Transform previewItemsRoot);
	public void SlotPressed();
	public void Update();
}

