/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class AvatarModifier : MonoBehaviour
{
	// Fields
	protected float timeStamp;
	private bool isActivated;
	protected Avatar owner;

	// Properties
	public bool IsActivated { get; }
	public bool IsLocal { get; }
	public Avatar Owner { get; }
	public abstract AvatarModifierPackageType ModifierType { get; }

	// Constructors
	protected AvatarModifier();

	// Methods
	public static AvatarModifier CreateFromType(AvatarModifierPackageType type, Avatar owner);
	public virtual bool EvaluateShouldBeAdded(Dictionary<AvatarModifierPackageType, AvatarModifier> modifiers);
	public virtual void ResetTimeStamp();
	public void Activate(Avatar target);
	public void Deactivate(Avatar target);
	protected virtual void OnActivated(Avatar target);
	protected virtual void OnDeactivated(Avatar target);
}

