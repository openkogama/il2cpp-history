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

public class AvatarPurchasePopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text avatarGoldCost;
	[SerializeField]
	private RawImage avatarImage;
	private AvatarRepositoryItem item;

	// Constructors
	public AvatarPurchasePopup();

	// Methods
	public void Initialize(RawImage image, AvatarRepositoryItem item);
	public void OnPurchaseClicked();
	[CompilerGenerated]
	private void _OnPurchaseClicked_b__4_0(IPurchaseAvatar x, BaseEventData y);
}

