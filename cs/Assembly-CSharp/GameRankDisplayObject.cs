/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameRankDisplayObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TextMesh frontText;
	[SerializeField]
	private TextMesh backText;
	[SerializeField]
	private StreamedSharedMaterialHandler handler;

	// Constructors
	public GameRankDisplayObject();

	// Methods
	private void Start();
	public void Destroy();
	public void SetAmount(GamePassTier requiredRank);
	public void SetScale(Vector3 size);
}

