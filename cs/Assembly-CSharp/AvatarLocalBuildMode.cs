/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarLocalBuildMode : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AvatarCamerasDesktopBuildMode avatarCamerasDesktopPrefab;
	private AvatarCamerasDesktopBuildMode avatarCamerasDesktop;
	[SerializeField]
	private AvatarEnabledChangeHandler enabledChangeHandler;

	// Properties
	public AvatarEnabledChangeHandler EnabledChangeHandler { get; }
	public AvatarCamerasDesktopBuildMode AvatarCamerasDesktopBuildMode { get; }

	// Constructors
	public AvatarLocalBuildMode();

	// Methods
	public void Initialize(MVBuildModeAvatarLocal buildModeAvatar);
	public void Activate();
}

