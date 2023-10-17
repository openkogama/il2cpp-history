/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseInteractorVisualization : MonoBehaviour
{
	// Fields
	private readonly List<UseRequirement> useRequirements;
	private Vector3 pivot;
	private const float BaseDist = 1.3f;
	private float dist;
	private float spacing;
	private float scale;
	private int active;
	private CullingSubscriberBase cullingSubscriberBase;
	[CompilerGenerated]
	private bool _HasUseRequirements_k__BackingField;
	private bool hasInputBlockingRequirement;
	private bool visible;
	private const float ScaleTime = 1f;
	private MVWorldObjectClient wo;

	// Properties
	public bool HasUseRequirements { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass21_0
	{
		// Fields
		public bool isVisible;

		// Constructors
		public __c__DisplayClass21_0();

		// Methods
		internal bool _OnStateChanged_b__0(UseRequirement requirement);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass31_0
	{
		// Fields
		public Vector3 scale;

		// Constructors
		public __c__DisplayClass31_0();

		// Methods
		internal bool _Show_b__1(UseRequirement requirement);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass32_0
	{
		// Fields
		public Vector3 scale;

		// Constructors
		public __c__DisplayClass32_0();

		// Methods
		internal bool _Hide_b__1(UseRequirement requirement);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<UseRequirement, bool> __9__33_0;
		public static Func<UseRequirement, bool> __9__33_1;
		public static Func<UseRequirement, bool> __9__36_0;
		public static Func<UseRequirement, bool> __9__41_0;
		public static Func<UseRequirement, bool> __9__41_1;
		public static Func<UseRequirement, bool> __9__42_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _Disable_b__33_0(UseRequirement _);
		internal bool _Disable_b__33_1(UseRequirement requirement);
		internal bool _UpdateData_b__36_0(UseRequirement _);
		internal bool _PayUseCost_b__41_0(UseRequirement _);
		internal bool _PayUseCost_b__41_1(UseRequirement requirement);
		internal bool _DestroyRequirementObjects_b__42_0(UseRequirement _);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass34_0
	{
		// Fields
		public Vector3 scale;

		// Constructors
		public __c__DisplayClass34_0();

		// Methods
		internal bool _OnDisable_b__0(UseRequirement requirement);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass35_0
	{
		// Fields
		public Vector3 scale;

		// Constructors
		public __c__DisplayClass35_0();

		// Methods
		internal bool _OnEnable_b__0(UseRequirement requirement);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass36_0
	{
		// Fields
		public Dictionary<object, object> data;
		public int ownerID;

		// Constructors
		public __c__DisplayClass36_0();

		// Methods
		internal bool _UpdateData_b__1(UseRequirement requirement);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass42_0
	{
		// Fields
		public Dictionary<object, object> data;

		// Constructors
		public __c__DisplayClass42_0();

		// Methods
		internal bool _DestroyRequirementObjects_b__1(UseRequirement requirement);
	}

	// Constructors
	public UseInteractorVisualization();

	// Methods
	public void Initialize(float yOffset, MVWorldObjectClient wo);
	private void SetupCulling();
	private void ChangeUseRequirements(Func<UseRequirement, bool> includeUseRequirementInUpdate, Func<UseRequirement, bool> updateRequirement);
	private static bool UseRequirementActive(UseRequirement useRequirement);
	private static bool SetUseRequirementActive(UseRequirement useRequirement, bool b);
	private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	private void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	private void UpdatePosition(Vector3 pos);
	private void OnDestroy();
	private void RemoveCulling();
	private void CalculateSpacing();
	private void CalculateScale();
	private void Update();
	private void ChangeLOD(float distance);
	private static bool SetUseRequirementScale(UseRequirement useRequirement, Vector3 scale);
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
	private void _Show_b__31_0(float t);
	[CompilerGenerated]
	private void _Hide_b__32_0(float t);
}

