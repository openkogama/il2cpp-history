/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SayChatBubbleHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private MeshRenderer sayChatBubble;
	private const float sayHearingDistance = 50f;
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
	public void OnSayChatMessageRecieved(int actorNr, Dictionary<object, object> data);
	public void SetSayBubbleIndicatorVisibility(int actorNr, bool shouldBeVisible);
	public bool IsPlayerInHearingDistance();
	private void Update();
	private void OnDestroy();
}

