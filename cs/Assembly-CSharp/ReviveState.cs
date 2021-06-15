/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ReviveState
{
	// Fields
	private List<SafeSpotData> safePositions;
	private float minDistanceBetweenSafePositions;
	private int maxNumberOfSafePositions;
	private float safeSpotSuppressedTime;
	private float safeSpotSuppressedDuration;
	private int currentPreviewedSafePosition;

	// Properties
	public bool CanSafelySpawn { get; }
	public SafeSpotData SafeGroundedData { get; set; }

	// Constructors
	public ReviveState();

	// Methods
	public void ResetSafePostions();
	public void SuppressSafeSpotSaving(float duration);
	public void SetSafeGroundedDataIndex(int index);
	public SafeSpotData GetSafeGroundedDataAtSelectedIndex();
	public List<SafeSpotData> GetSafeGroundedPositions();
}

