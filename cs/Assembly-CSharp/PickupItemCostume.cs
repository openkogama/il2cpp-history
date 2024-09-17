/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemCostume : PickupItemEditable
{
	// Fields
	[SerializeField]
	private TrailRenderer trailRenderer;
	private BoxCollider costumeTriggerCollider;

	// Properties
	public override AvatarItemType Type { get; }
	public override bool FirstPerson { get; }
	public override bool GunMode { get; }
	public override bool CanHolster { get; }
	public Color TrailColor { get; }
	protected new CostumeConfiguration Configuration { get; set; }

	// Nested types
	protected class CostumeConfiguration : PickupItemEditable.EditableItemConfiguration
	{
		// Fields
		public float health;
		public float movementSpeed;
		public float trailLength;
		public bool isPlayerInvisible;
		public bool playersCanCollide;
		public bool isTrailEnabled;
		public Color trailColor;

		// Constructors
		public CostumeConfiguration();
	}

	// Constructors
	public PickupItemCostume();

	// Methods
	protected override void Initialize();
	protected override EditableItemConfiguration GetDefaultConfiguration();
	protected override void SetConfiguration(Dictionary<object, object> itemData);
	public override void OnStateChanged(Dictionary<object, object> newState);
	private void OnHealthStateChanged();
	private void OnSpeedStateChanged();
	private void OnArcTrailStateChanged();
	private void OnCollisionStateChanged();
	private void OnAvatarInvisibleStateChanged();
	private void SetAvatarInvisibility(bool isInvisible, MVAvatar avatar);
	private void OnLocalPlayerTeamChanged();
	private void CalculateRemoteAvatarUIVisibility(bool isInvisible, MVAvatarRemote avatar);
	protected override void OnFire(bool isLocal);
	public override void UpdateWithDirection(Vector3 dir);
	public override bool IsSameItemData(Dictionary<object, object> itemData);
	protected override void InterruptFire();
	public override void OnEnterVehicleWithWeapon();
	protected override void OnDestroy();
	protected override void InitializeAudioPlayers();
}

