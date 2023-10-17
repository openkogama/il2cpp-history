/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMovingPlatformGroup : MVBlueprintBase
{
	// Fields
	private LineRenderer lineRenderer;
	private Dictionary<object, object> nodeMap;
	private Dictionary<object, object> nextNodeMap;
	private MVMovingPlatformNode startNode;
	private Dictionary<int, MVMovingPlatformNode> nodeIdToWoMap;
	private Dictionary<int, int> woIdToNodeIdMap;
	private MVMovingPlatform platform;
	private bool initializeFailed;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public MVMovingPlatform Platform { get; }
	public override bool Visible { get; set; }

	// Constructors
	public MVMovingPlatformGroup(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	private void InitializeCommon();
	private void UpdateLine();
	private void WorldObjectClient_ScaleChangedHandler(object sender, ScaleChangedEventArgs e);
	private void WorldObjectClient_PositionChangedHandler(object sender, PositionChangedEventArgs e);
	private void WorldObjectClient_RotationChangedHandler(object sender, RotationChangedEventArgs e);
	private void WorldObjectClient_SelectedChangedHandler(object sender, SelectedEventArgs e);
	public override bool OnEnterObject(EditorStateMachine e);
	public override void SetWorldObjectToPurchased();
	public override void AddPreviewBox();
	private void AddPreviewBoxesToChildren();
}

