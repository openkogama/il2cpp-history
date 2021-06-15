/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TestItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text text;
	[SerializeField]
	private RawImage image;
	[SerializeField]
	private InventoryItemMetaData inventoryItemMetaData;
	[SerializeField]
	private PreviewObject previewObject;

	// Properties
	public Texture2D Texture { set; }

	// Constructors
	public TestItem();

	// Methods
	public void Initialize(string text, int slotIndex);
	private void OnDestroy();
}

