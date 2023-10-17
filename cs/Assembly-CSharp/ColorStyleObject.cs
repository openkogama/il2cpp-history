/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Graphic))]
public class ColorStyleObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Graphic graphic;
	[SerializeField]
	private ColorStyle imageStyle;

	// Constructors
	public ColorStyleObject();

	// Methods
	private void Awake();
	private void Reset();
	public void UpdateColorStyle(ColorStyle colorStyle);
	private void OnValidate();
}

