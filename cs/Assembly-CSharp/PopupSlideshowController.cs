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

public class PopupSlideshowController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<GameObject> pages;
	private int currentPage;
	[SerializeField]
	private GameObject pageControls;
	[SerializeField]
	private GameObject pageRight;
	[SerializeField]
	private GameObject pageLeft;
	[SerializeField]
	private UnityEngine.UI.Text currentPageText;
	[SerializeField]
	private bool lastPageHasPageControls;

	// Constructors
	public PopupSlideshowController();

	// Methods
	public void Start();
	public void PageTurned(int dir);
}

