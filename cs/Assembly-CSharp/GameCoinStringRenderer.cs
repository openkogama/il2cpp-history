/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameCoinStringRenderer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Material stringMaterial;
	private Queue<PriceTagString> strings;

	// Nested types
	private struct PriceTagString
	{
		// Fields
		public Vector3 start;
		public Vector3 end;
		public Color color;
	}

	// Constructors
	public GameCoinStringRenderer();

	// Methods
	public void Start();
	public void AddString(Vector3 start, Vector3 end, Color color);
	private void OnPostRender();
	private void DrawString(PriceTagString s);
}

