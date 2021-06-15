/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StarDisplayObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TextMesh frontText;
	[SerializeField]
	private TextMesh backText;
	[SerializeField]
	private StreamedSharedMaterialHandler handler;

	// Constructors
	public StarDisplayObject();

	// Methods
	private void Start();
	public void Destroy();
	public void SetAmount(int starAmount);
	public void SetScale(Vector3 size);
}

