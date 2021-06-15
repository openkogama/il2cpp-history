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

public class AdvancedGhostIcon : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GhostBody ghostBody;
	[SerializeField]
	private List<OculusTeamGameObject> teamIrisObjects;
	private bool visible;
	private bool wantsVisible;
	private const float advancedGhostBodyMaxRadius = 4f;
	private const int ghostIconDistanceBand = 3;
	private CullingSubscriberBase cullingSubscriberBase;
	private LineRangeIndicator lineRangeIndicator;

	// Properties
	public float Radius { set; }
	public MVTeam Team { set; }

	// Constructors
	public AdvancedGhostIcon();

	// Methods
	public void Init(MVAdvancedGhost advancedGhost, MVCubeModelBase body, bool enabledCulling, MVTeam team);
	public void SetGameMode(bool isPlayMode);
	private void SetVisibility();
	private void SetupCulling(MVAdvancedGhost advancedGhost);
	private void AdvancedGhostOnPositionChanged(object sender, PositionChangedEventArgs positionChangedEventArgs);
	private void OnDestroy();
	private void OnStateChange(CullingGroupEvent cullingGroupEvent);
	private void CloneCubeMeshes(MVCubeModelBase body);
	private void body_Changed(CubeModelChangedEventArgs e);
	private void AddSphereVolumeIndicator(int Id);
}

