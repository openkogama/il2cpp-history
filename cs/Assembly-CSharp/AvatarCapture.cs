/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarCapture : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Camera renderCam;
	[SerializeField]
	private Vector3 cameraOffset;
	[SerializeField]
	[Tooltip]
	private Vector3 formationSpacing;
	[SerializeField]
	private float formationRandomness;

	// Properties
	public Camera RenderCam { get; private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _CapturePlayersInTeam_c__AnonStorey0
	{
		// Fields
		internal GameStatCounterType counterType;

		// Constructors
		public _CapturePlayersInTeam_c__AnonStorey0();

		// Methods
		internal int __m__0(MVPlayer o);
	}

	// Constructors
	public AvatarCapture();

	// Methods
	public void CaptureAllPlayersInGame();
	public void CapturePlayersInTeam(List<ScoreTeamEntry> scoreTeamEntries, GameStatCounterType counterType);
	private void CapturePlayerGroup(List<List<MVPlayer>> sortedList);
	public void CapturePlayer(List<MVPlayer> players);
	private void InitializeCamera();
	private void DrawObject(Transform cameraTransform, Transform objectTransform);
	private static Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles);
	private int CreateTriangleFormation(ref List<Vector3> positions, Vector3 formationSpacing, int numberOfPositions);
	private int CreateTriangleFormation(ref List<Vector3> positions, Vector3 formationSpacing, int positionsRemaining, int unitsThisRow, float targetY, float targetZ);
	private Vector3 CalculateTieOffset(int currentWinner, int amountOfWinners);
	private void OnDestroy();
}

