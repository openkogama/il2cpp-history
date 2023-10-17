/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleSeatBase : MonoBehaviour
{
	// Fields
	private int seatID;
	private MVAvatar owner;
	private MVCameraBase seatCamera;
	[SerializeField]
	private MVCameraBase AndroidCamera;
	[SerializeField]
	private MVCameraBase DesktopCamera;
	public Transform AvatarAttachPoint;
	[CompilerGenerated]
	private bool _IsOccupied_k__BackingField;
	public SeatType SeatType;
	public bool UnequipVehicleUser;
	[SerializeField]
	private ControlType joystickType;

	// Properties
	public bool IsOccupied { [CompilerGenerated] get; [CompilerGenerated] set; }
	public MVAvatar Owner { get; }
	public MVCameraBase Camera { get; }
	public int SeatID { get; set; }

	// Constructors
	public VehicleSeatBase();

	// Methods
	private void Awake();
	public void SetCamera();
	public virtual void RemoveCamera();
	public virtual void Attach(MVAvatar avatar);
	public virtual void Detach(MVAvatar avatar);
	public void PushJoystick();
	public void PopJoystick();
}

