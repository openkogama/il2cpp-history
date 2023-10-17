/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarAccessoryBackAccessories : AvatarAccessory
{
	// Fields
	private Transform attachPosTfm;
	private AccessoryBackAccessoriesSettings wingSettings;

	// Properties
	public override bool HasAttachmentPoint { get; }
	public AccessoryBackAccessoriesSettings WingSettings { get; }
	public override AccessorySettings AccessorySettings { get; }
	public override Vector3 AttachmentPointWorldPos { get; }

	// Constructors
	public AvatarAccessoryBackAccessories();

	// Methods
	protected override void Awake();
}

