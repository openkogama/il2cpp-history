/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SayChatBubbleHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private MeshRenderer sayChatBubble;
	private const float SayHearingDistance = 50f;
	private bool isActive;
	private bool isIndicatorActive;
	private int ownerActorNr;
	private ChatAnchor chatAnchor;

	// Properties
	public ChatAnchor ChatAnchor { get; }

	// Constructors
	public SayChatBubbleHandler();

	// Methods
	public void Initialize(int actorNr, ChatAnchor chatAnchor);
	public void Activate();
	public void Deactivate();
	private void OnSayChatMessageReceived(int actorNr, Dictionary<object, object> data);
	private void SetSayBubbleIndicatorVisibility(int actorNr, bool shouldBeVisible);
	private bool IsPlayerInHearingDistance();
	private void Update();
	private void OnDestroy();
}

