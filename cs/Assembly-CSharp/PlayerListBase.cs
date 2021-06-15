/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class PlayerListBase : MonoBehaviour
{
	// Properties
	public abstract MVTeam Team { get; }
	public abstract int PlayerCount { get; }
	public abstract int Score { get; }

	// Constructors
	protected PlayerListBase();

	// Methods
	public abstract void Initialize(MVTeam team, int score, GameStatCounterType typeToDisplay);
	public abstract void Add(MVPlayer player);
}

