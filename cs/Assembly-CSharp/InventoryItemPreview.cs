/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryItemPreview : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected UnityEngine.UI.Text title;
	[SerializeField]
	protected UnityEngine.UI.Text description;
	[SerializeField]
	protected RawImage previewImage;
	protected InventoryItem item;

	// Constructors
	public InventoryItemPreview();

	// Methods
	public virtual void Initialize(InventoryItem inventoryItem, RawImage preview);
}

