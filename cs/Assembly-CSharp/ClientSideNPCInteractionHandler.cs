/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClientSideNPCInteractionHandler : InteractionDataHandlerBase
{
	// Fields
	[SerializeField]
	private GameObject attachmentObjectForHealRay;
	private readonly HashSet<InteractionPackageType> unableToDamageNPCs;
	private readonly HashSet<InteractionPackageType> friendlyInteractions;
	private MVTeam team;

	// Properties
	public override MVTeam Team { get; }

	// Constructors
	public ClientSideNPCInteractionHandler();

	// Methods
	public void SetTeam(MVTeam team);
	public override bool CanHandle(InteractionPackageType interactionPackageType, bool interactionIsLocal);
	public override bool HandleInteraction(MVPickupOwner interactor, InteractionData interaction, bool interactionIsLocal);
	public GameObject GetHealRayAttachmentObject();
}

