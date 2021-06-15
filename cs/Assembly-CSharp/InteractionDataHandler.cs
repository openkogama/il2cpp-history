/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InteractionDataHandler : InteractionDataHandlerBase
{
	// Properties
	public override MVTeam Team { get; }
	public MVWorldObjectClient WorldObjectParent { set; }

	// Constructors
	public InteractionDataHandler();

	// Methods
	public override bool HandleInteraction(MVPickupOwner interactor, InteractionData interaction, bool interactionIsLocal);
}

