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

public class EditorWorldObjectCreation : MonoBehaviour, ICloneHandler, IAddItemFromInventory, ICreateNewPrototype
{
	// Fields
	[SerializeField]
	private ThemeRepository themeRepository;
	private EditorStateMachine esm;

	// Constructors
	public EditorWorldObjectCreation();

	// Methods
	public void Initialize(EditorStateMachine esm);
	public void Clone(MVWorldObjectClient original, bool cloneToRoot, bool setAsPreviewItem, bool goToInsert = false);
	public void OnAddItemFromInventory(InventoryItem item);
	private static KoGaMaPackageClient GetKoGaMaPackageFromItem(InventoryItem item);
	public void OnAddNewPrototype(string name, float scale);
	private void CloneWorldObjectTreeResponseHandler(object sender, CloneWorldObjectTreeResponseEventArgs e);
	private bool ValidateAddItemFromInventory(KoGaMaPackageClient package);
	private bool IsItemAnAllowedWinningCondition(MVWorldObjectClient worldObject);
	private bool IsWinningConditionPlaceable<T>()
		where T : WinningCondition;
	private List<MVWorldObjectClient> GetPlacedWinningConditions();
	private void WOCM_InitializedGameQueryData(object sender, InitializedGameQueryDataEventArgs e);
}

