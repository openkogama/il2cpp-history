/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVLocalObjectController : IUpdatecontrollerSubscriberUpdate, IUpdatecontrollerSubscriberFixedUpdate
{
	// Fields
	private const int MaxLocalControlledObjects = 4;
	private readonly IInputToPlayerMovement movementMap;
	private InputToInGameAction interactionInput;
	private IAttachInterface attachState;
	private readonly List<ILocalObject> localControlledStack;
	private readonly Dictionary<int, DismountedPlayerControlledObject> dismountedLocalControlledObjects;
	private readonly MVWorldObjectClientManagerNetwork worldObjectClientManagerNetwork;
	public const float TimeBeforeUnregister = 30f;

	// Properties
	public bool IsEnteringVehicle { get; }
	public HashSet<int> LocalControlledWorldObjects { get; }
	public MVWorldObjectClient CurrentWorldObject { get; }

	// Nested types
	private class AvatarLocalObjectPlaceHolder : ILocalObject
	{
		// Fields
		[CompilerGenerated]
		private int _Id_k__BackingField;

		// Properties
		public int Id { [CompilerGenerated] get; [CompilerGenerated] private set; }

		// Constructors
		public AvatarLocalObjectPlaceHolder();

		// Methods
		public InputToInGameAction Update(InputToInGameAction movementMap);
		public IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
	}

	internal interface IAttachInterface
	{
	}

	internal class DetachState : IAttachInterface
	{
		// Constructors
		public DetachState();
	}

	internal class AttachState : IAttachInterface
	{
		// Fields
		private bool transformDataWasSuspended;
		private int woID;

		// Constructors
		public AttachState(int worldObjectID);

		// Methods
		public void HandleAttachFailed();
		public override string ToString();
	}

	internal class DismountedPlayerControlledObject
	{
		// Fields
		private float dismountTime;
		private ILocalObject playerControlledObject;

		// Properties
		public ILocalObject PlayerControlledObject { get; }

		// Constructors
		public DismountedPlayerControlledObject(ILocalObject playerControlledObject);

		// Methods
		public bool ReadyToUnRegister();
		public void SetTimeBeforeUnregister(float newTimeBeforeUnregister);
	}

	// Constructors
	public MVLocalObjectController(MVWorldObjectClientManagerNetwork worldObjectClientManagerNetwork);

	// Methods
	private static IInputToPlayerMovement CreateInputToPlayerMovement(MVGameMode gameMode);
	public void SetAvatarLocalObject(ILocalObject localObject);
	public void RemoveAvatarLocalObject();
	public void Push(ILocalObject localObject);
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	public bool DetachWorldObjectFromVehicle(int worldObjectID, ref int vehicleID, bool leaveBecauseOfServer);
	public void OverrideRemoveTimeForDismountedWorldObject(int woID, float timeBeforeUnregister);
	public void OnAttachWorldObjectToSeat(int instigatorActorNr, int seatOwnerWoID, int worldObjectID, int seatID);
	public bool AttachWorldObjectToSeat(int seatOwnerWoID, int worldObjectID, VehicleSeatBase seatBase);
	public bool SpawnVehicleWithDriver(int worldObjectSpawnerVehicleID, int worldObjectID, VehicleSeatBase seatBase);
	public bool VehicleEnergyUseRequest(int worldObjectSpawnerVehicleEnergyID, int worldObjectID);
	public bool IsInsideVehicle(MVWorldObjectClient worldObjectClient = null);
	public bool IsInsideVehicleUsingEnergy(MVWorldObjectClient worldObjectClient = null);
	public void VehicleEnergyUseResponse(bool success, Dictionary<byte, object> returnValues);
	public void HandleDetachWorldObjectFromVehicle(bool success);
	public void HandleAttachWorldObjectToSeat(bool success);
	private void UpdateLocalControlledObjects();
	private void UpdateDismountedPlayerControlledObjects();
	private void FixedUpdateLocalControlledObjects();
	private void FixedUpdateDismountedPlayerControlledObjects();
	private bool HandleAttachFailed();
}

