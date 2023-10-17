/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickHelper : MonoBehaviour
{
	// Fields
	public UnityAction<MVWorldObjectClient, MVWorldObjectClient> pickCallback;
	[SerializeField]
	private UnityEngine.UI.Text message;

	// Constructors
	public PickHelper();

	// Methods
	public void Initialize(UnityAction<MVWorldObjectClient, MVWorldObjectClient> onPickCallback, string msg);
	private void Update();
	private bool MVObjectIsType(Transform t, System.Type type, out int woId);
}

