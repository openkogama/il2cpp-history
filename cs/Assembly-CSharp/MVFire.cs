/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVFire : MVLogicObject, ILogicWorldObject
{
	// Fields
	private List<MVWorldObjectClient> woList;
	private FireObject fireObject;
	private SphereVolumeIndicator rangeVis;
	private const float damageValue = 100f;
	private const float originalDamageRadius = 2.5f;
	private float damageRadius;
	private const float originalVisualObjectScale = 5f;
	private const float originalParticleSize = 4f;
	private const float fireHitBoxYOffset = 0.04f;
	private const float originalIntensity = 4f;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 InputConnectorOffset { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVFire(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void OnFireObjectPlaced();
	public override void InitializeInventory();
	private void OnEditModeChange(EditModeChangeArgs arg);
	private void OnInputStateUpdate(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	private void ToggleEmitter(bool activeFlag);
	private void TriggerAreaEnter(object sender, TriggerEventArgs e);
	private void TriggerAreaExit(object sender, TriggerEventArgs e);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	protected override void OnUpdate();
	private float CalculateDamageModifier();
	public override void OnDataUpdate();
	private void SetFireToData();
	private float CalculateDamageRadius(float intensity);
	private float CalculateScale(float damageRadius);
	private void UpdateDamageRadius(float intensity);
	private void UpdateScale(float scale);
	private void UpdateSoundVolume(float intensity);
	private void SetCandleAnimation();
	private void SetOriginalAnimation();
	private void RenewCullingSize();
	public override void Destroy();
	private void SetFireHitBoxYOffset(float offset);
}

