/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnPointInfo : MonoBehaviour, IGamePassShopContent
{
	// Fields
	[SerializeField]
	private Image TeamRequirementImage;

	// Constructors
	public SpawnPointInfo();

	// Methods
	public void Initialize(MVTeam teamRequirement);
	public void Activate();
	public void Deactivate();
}

