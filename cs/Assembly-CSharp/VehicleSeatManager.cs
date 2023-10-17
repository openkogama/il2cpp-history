/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleSeatManager : MonoBehaviour
{
	// Fields
	public OnSeatOccupiedChangeDelegate OnSeatOccupiedChange;
	public List<VehicleSeatBase> seats;
	public TriggerBoxEvents triggerBoxEvents;
	private UseInteractor useInteractor;
	private MVVehicleBase woOwner;
	private int occupiedSeatCount;
	private bool isDead;
	private bool enterVehicleDisabled;

	// Properties
	public int OccupiedSeatsCount { get; }
	public VehicleSeatBase DriverSeat { get; }
	public bool EnterVehicleDisabled { get; set; }

	// Nested types
	public delegate void OnSeatOccupiedChangeDelegate();

	// Constructors
	public VehicleSeatManager();

	// Methods
	private void OnIsDeadChange(object isDeadRuntime);
	public void Init(MVVehicleBase wo, MVRuntimeDataVariable isDeadRuntimeVariable);
	private bool CheckCanUse(int woId, MVInteractableBase avatarInteractable);
	public bool Use(int userWoId);
	public void AttachWorldObjectToSeat(int instigatorActorNr, bool instigatorIsLocal, MVAvatar vehicleUser, int vehicleSeatID);
	private void SetToSeatTransform(MVAvatar vehicleUser, int seatID);
	private void UpdateTriggerBoxEventsCollider();
	public void DetachFromSeat(MVAvatar vehicleUser);
}

