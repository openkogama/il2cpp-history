/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesShopContentCuller : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Scrollbar scrollbar;
	[SerializeField]
	private int maxSelectionElementsOnScreen;
	private int currentSelectionStartIndex;
	private List<IGamePassShopContent> gamePassShopContentList;

	// Constructors
	public GamePassesShopContentCuller();

	// Methods
	public void AddContentElement(IGamePassShopContent gamePassContentElement);
	public void Initialize();
	public void OnScrollValueChanged();
	private void UpdateShownElements();
	private bool IsIndexWithinBounds(int index);
	private void ShowElements(int startElementIndex);
	private void HideElements(int previousStartElement, int amoutOfElements, int newStartElement);
}

