/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ToolTipController : MonoBehaviour, IHandleToolTip
{
	// Fields
	private bool updatedThisFrame;
	[SerializeField]
	private ToolTipUI toolTipUi;

	// Constructors
	public ToolTipController();

	// Methods
	private void Awake();
	public void SendToolTip(Vector2 position, string toolTip);
	private void LateUpdate();
}

