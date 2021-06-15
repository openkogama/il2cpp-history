/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ItemInfoTab : ManageItemPage
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text itemName;
	[SerializeField]
	private UnityEngine.UI.Text description;
	[SerializeField]
	private RawImage previewImage;

	// Constructors
	public ItemInfoTab();

	// Methods
	public override void Initialize(RawImage preview, InventoryItem item);
}

