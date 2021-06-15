/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleAvatarSelectionMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform avatarElementContainer;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private Scrollbar scrollBar;
	[SerializeField]
	private SpawnRoleAvatarSelectionElement avatarSelectionElementPrefab;
	[SerializeField]
	private int maxSelectionElementsOnScreen;
	private int spawnRoleId;
	private int currentSelectionStartIndex;
	private List<SpawnRoleAvatarSelectionData> avatarSelectionDataList;
	private List<SpawnRoleAvatarSelectionElement> selectionElements;

	// Constructors
	public SpawnRoleAvatarSelectionMenu();

	// Methods
	public void Initialize(int spawnRoleId);
	public void OnScrollValueChanged();
	private void OnDestroy();
	private void OnSpawnRoleAvatarDataRecieved(List<SpawnRoleAvatarSelectionData> avatarSelectionDataList);
	private void UpdateShownElements();
	private bool IsIndexWithinBounds(int index);
	private void ShowElements(int startElementIndex);
	private void HideElements(int previousStartElement, int amoutOfElements, int newStartElement);
	private void AddSelectionElement(int index);
	private void OnAvatarSelected(int avatarId);
	[CompilerGenerated]
	private void _Initialize_m__0(IHandleSpawnRoleAvatarSelectionData handler, BaseEventData data);
}

