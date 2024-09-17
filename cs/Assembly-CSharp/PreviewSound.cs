/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PreviewSound : MonoBehaviour
{
	// Fields
	[SerializeField]
	private string soundCategory;
	[SerializeField]
	private bool playSelected;
	[SerializeField]
	private UnityEvent<string, int> onClick;
	private int index;

	// Constructors
	public PreviewSound();

	// Methods
	private void Start();
	public void OnClick();
}

