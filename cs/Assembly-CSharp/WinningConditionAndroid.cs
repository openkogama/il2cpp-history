/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionAndroid : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text limit;
	[SerializeField]
	private UnityEngine.UI.Text additionalInfo;
	[SerializeField]
	private GameObject infoBG;
	[SerializeField]
	private Image image;

	// Constructors
	public WinningConditionAndroid();

	// Methods
	public void SetSprite(Sprite sprite);
	public void SetAdditionalInformation(string info);
	public void SetLimit(int limit);
	public void HideLimit();
}

