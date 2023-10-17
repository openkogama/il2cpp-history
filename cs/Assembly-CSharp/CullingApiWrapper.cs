/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class CullingApiWrapper
{
	// Fields
	public const int dynamicObjectsDistanceBand = 3;
	public const int overrideDynamicObjectsDistanceBand = 2;
	public const int npcDistanceBandOverride = 3;
	public static float baseDistance;
	public static BoundingSphere[] spheres;
	private const int extraSpheres = 1000;
	private static CullingGroup cullingGroup;
	private static Dictionary<int, ICullingSubscriber> cullingSubscribers;
	private static readonly float[] sizes;
	[CompilerGenerated]
	private static int _NumBoundSpheres_k__BackingField;

	// Properties
	public static int NumBoundSpheres { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static Camera TargetCamera { get; set; }

	// Constructors
	static CullingApiWrapper();

	// Methods
	public static void Init(int initialSphereCount, Camera camera, float newBaseDistance);
	public static bool IsVisible(int index);
	public static int GetDistance(int index);
	public static void SetDistanceReferencePoint(Transform distanceReferencePoint);
	public static void Subscribe(ICullingSubscriber iCullingGroupSubscriber);
	public static void UnSubscribe(ICullingSubscriber unSubscriber);
	public static void DebugVisualize();
	public static bool Visible(CullingGroupEvent cullingGroupEvent, int distanceBandIndex);
	public static void ChangeDistances(float newBaseDistance, Camera camera);
	public static int GetDistanceBand(float radius);
	private static float[] UpdateDistances(float newBaseDistance);
	public static void Destroy();
	public static void PostDestroyCleanup();
	public static void DebugCullingEvent(CullingGroupEvent cullingGroupEvent);
	private static void AddBoundingSphere();
	private static void OnStateChanged(CullingGroupEvent cullingGroupEvent);
}

