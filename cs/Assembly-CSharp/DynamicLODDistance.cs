/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DynamicLODDistance
{
	// Fields
	private float volumePercentChangePrSecond;
	private int prevTick;
	private float currentRadius;
	private readonly float maxVolume;
	public readonly float minRadius;
	public readonly float maxRadius;
	public readonly int maxNumObjects;

	// Properties
	public float CurrentRadius { get; }

	// Constructors
	public DynamicLODDistance(float minRadius, float maxRadius, int maxNumObjects);

	// Methods
	public void Update(int numObjects);
	public float GetDeltaTime();
	private static float RadiusToVolume(float radius);
	private static float VolumeToRadius(float volume);
	private float GetTargetVolume(float numObjectsMaxObjectsRatio);
	public static void Test();
	private static void TickTest();
	private static void UpdateTest();
	private static void MathTest();
}

