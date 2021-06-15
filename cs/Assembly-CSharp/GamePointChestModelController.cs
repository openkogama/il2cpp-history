/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePointChestModelController : MonoBehaviour
{
	// Fields
	public GameObject closedMesh;
	public GameObject openMesh;
	[SerializeField]
	private Animation openingAnimation;
	[SerializeField]
	private Renderer openingRenderer;
	[SerializeField]
	private GreyOutObjectScript greyOutScript;
	[SerializeField]
	private float fadeStartTime;
	[SerializeField]
	private float fadeEndTime;
	private bool shouldGreyOut;
	private bool isOpening;
	private float openingStartTime;

	// Properties
	public bool ShouldGreyOut { set; }

	// Constructors
	public GamePointChestModelController();

	// Methods
	public void Open();
	public void Close();
	public void Disable();
	public bool IsVisible();
	private void Update();
}

