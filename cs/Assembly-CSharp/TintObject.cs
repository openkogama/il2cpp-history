/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class TintObject : MonoBehaviour
{
	// Constructors
	protected TintObject();

	// Methods
	public abstract void Tint(Color c);
	public virtual void TeamTint(MVTeam team);
	public virtual void Tint(float r, float g, float b, float a = 1f);
}

