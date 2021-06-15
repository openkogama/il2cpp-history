/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ActivateOnAnimationBase : MonoBehaviour
{
	// Fields
	private MVAvatar mvAvatar;

	// Constructors
	protected ActivateOnAnimationBase();

	// Methods
	protected virtual void Start();
	private void OnDestroy();
	private Avatar GetAvatar();
	public abstract void OnAvatarAnimationChange(string newAnimation);
}

