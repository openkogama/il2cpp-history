/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameCoinDisplayObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TextMesh textMesh1;
	[SerializeField]
	private TextMesh textMesh2;
	[SerializeField]
	private GameObject coinMesh;

	// Constructors
	public GameCoinDisplayObject();

	// Methods
	public void SetAmount(int amount);
	public void Destroy();
	public void SetScale(Vector3 size);
}

