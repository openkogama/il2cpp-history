/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarUIHandler : MonoBehaviour
{
	// Fields
	protected ChatAnchor chatBubbleAnchor;
	protected MVWorldObjectClient worldObject;
	protected int ownerActorNr;
	protected bool shouldShowUI;

	// Constructors
	public AvatarUIHandler();

	// Methods
	public virtual void Initialize(bool isLocal, MVWorldObjectClient wo, int ownerActorNr, ChatAnchor chatBubbleAnchor);
	public virtual void Activate();
	public virtual void Deactivate();
	public virtual void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public void OnSayChatMessageRecieved(int actorNr, Dictionary<object, object> data);
	private void HandleTeamChange(object sender, TeamEventArgs eventArgs);
	public virtual void HandleTeamChange();
	public virtual void SetShouldShowUI(bool shouldShow);
	public void ForceDestroy();
	protected virtual void OnDestroy();
}

