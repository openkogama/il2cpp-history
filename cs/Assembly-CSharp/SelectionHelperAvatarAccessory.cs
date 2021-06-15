/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SelectionHelperAvatarAccessory : MonoBehaviour
{
	// Fields
	private AvatarAccessory avatarAccessory;
	private AccessorySlotType slot;
	private int avatarBodyWoID;
	[HideInInspector]
	[SerializeField]
	private int streamingAssetsId;

	// Properties
	public AvatarAccessory AvatarAccessory { get; }
	public AccessorySlotType Slot { get; }
	public int AvatarBodyWoID { get; }
	public int StreamingAssetsId { get; }

	// Constructors
	public SelectionHelperAvatarAccessory();

	// Methods
	public void Init(AvatarAccessory avatarAccessory, AccessorySlotType slot, int avatarBodyWoID, int accessoryStreamingAssetsId);
	public override string ToString();
}

