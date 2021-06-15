/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ToolTipUI : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private UnityEngine.UI.Text toolTipText;

	// Constructors
	public ToolTipUI();

	// Methods
	public void Set(Vector2 position, string tooltip);
	private Vector2 GetPivot(Vector2 position);
}

