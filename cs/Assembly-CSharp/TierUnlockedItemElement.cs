/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedItemElement : MonoBehaviour
{
	// Fields
	[SerializeField]
	private InventoryItemPreviewer objectPreviewerPrefab;
	[SerializeField]
	private RawImage previewImage;
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	[SerializeField]
	private UnityEngine.UI.Text itemAmountText;
	[SerializeField]
	private Image teamRequirementImage;
	private InventoryItemPreviewer objectPreviewer;
	private Transform rootTransform;
	private MVWorldObjectClient previewObject;
	private Vector3 cameraOffset;
	private MVTeam team;

	// Constructors
	public TierUnlockedItemElement();

	// Methods
	public void SetTeam(MVTeam team);
	public void Initialize(List<MVWorldObjectClient> tierShopItemData, int itemIndex);
	private GameObject CreatePreviewObjectClone();
	private Color GetTeamColor(MVTeam team);
	private void OnDestroy();
}

