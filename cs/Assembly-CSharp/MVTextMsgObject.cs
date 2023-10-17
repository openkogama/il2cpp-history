/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTextMsgObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private TextMesh textMesh;
	[SerializeField]
	private Renderer textMeshRenderer;
	[SerializeField]
	private GameObject visualObject;
	private LookAtMainCamera billboardScript;

	// Properties
	public GameObject VisualObject { get; }
	public TextMesh TextMesh { get; }
	public Renderer TextMeshRenderer { get; }

	// Constructors
	public MVTextMsgObject();

	// Methods
	public void Billboard(bool billboard);
}

