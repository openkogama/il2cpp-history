/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarRemoteBuildMode : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AvatarUIHandlerRemote avatarUIHandlerRemote;
	[SerializeField]
	private ChatAnchor chatBubbleAnchor;
	[SerializeField]
	private AvatarEnabledChangeHandler enabledChangeHandler;

	// Properties
	public AvatarEnabledChangeHandler EnabledChangeHandler { get; }

	// Constructors
	public AvatarRemoteBuildMode();

	// Methods
	public void Initialize(int ownerActorNr, MVBuildModeAvatar avatar);
	private void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public void Activate();
	public void Deactivate();
}

