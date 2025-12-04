/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TMPSettingsDropdownItemFont : MonoBehaviour, StreamedTextMeshProFont.IReceiver
{
	// Fields
	[SerializeField]
	private TextMeshProUGUI text;
	[SerializeField]
	private bool isIndexSetAfterStart;
	[SerializeField]
	private StreamedTextMeshProFontTriggered fontStream;
	[SerializeField]
	private StreamedTextMeshProFontList fontList;

	// Constructors
	public TMPSettingsDropdownItemFont();

	// Methods
	private void Start();
	public void SetIndex(int index);
	public void OnFontReceived(TMP_FontAsset fontAsset);
}

