/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseInteratorVisualization : MonoBehaviour
{
	// Fields
	private List<UseRequirement> useRequirements;
	private Vector3 pivot;
	private readonly float baseDist;
	private float dist;
	private float spacing;
	private int active;
	private CullingSubscriberBase cullingSubscriberBase;
	private bool hasUseRequirement;
	private bool visible;
	private const float scaleTime = 1f;
	private MVWorldObjectClient wo;

	// Constructors
	public UseInteratorVisualization();

	// Methods
	public void Initialize(float yOffset, MVWorldObjectClient wo);
	private void SetupCulling();
	private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	private void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	private void UpdatePosition(Vector3 pos);
	private void OnDestroy();
	private void RemoveCulling();
	private void CalculateSpacing();
	private void Update();
	private void ChangeLOD(float distance);
	public void Show();
	public void Hide();
	public void Disable();
	private void OnDisable();
	private void OnEnable();
	public void UpdateData(Dictionary<object, object> data, int ownerID);
	private void CheckCullingSetup();
	public void AddUseRequirement(UseRequirement useRequirement);
	public UseGUIResult EvaluateUsability();
	public ShowUseOption GetShowOptions();
	public void PayUseCost();
	public void DestroyRequirementObjects(Dictionary<object, object> data);
	[CompilerGenerated]
	private void _Show_m__0(float t);
	[CompilerGenerated]
	private void _Hide_m__1(float t);
}

