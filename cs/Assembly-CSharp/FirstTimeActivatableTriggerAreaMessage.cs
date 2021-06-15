/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableTriggerAreaMessage : FirstTimeActivatableButtonPointer
{
	// Fields
	private bool haveCheckedItemAvailability;
	private bool itemAvailable;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatableTriggerAreaMessage();

	// Methods
	private bool IsItemInShop(WorldObjectType worldObjectType);
	private bool CheckItemAvailability(WorldObjectType worldObjectType);
	private void Register();
	[CompilerGenerated]
	private void _Register_m__0(IFirstTimeElementActivator x, BaseEventData y);
}

