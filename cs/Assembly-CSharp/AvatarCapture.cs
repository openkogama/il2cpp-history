/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarCapture : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Camera renderCam;
	[SerializeField]
	private Vector3 cameraOffset;
	[SerializeField]
	[Tooltip("Space between players on winningscreen")]
	private Vector3 formationSpacing;
	[SerializeField]
	private float formationRandomness;

	// Properties
	public Camera RenderCam { get; private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public GameStatCounterType counterType;
		public Func<MVPlayer, int> __9__0;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal int _CapturePlayersInTeam_b__0(MVPlayer o);
	}

	[CompilerGenerated]
	private sealed class _DrawAvatarRoutine_d__12 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AvatarCapture __4__this;
		public Transform cameraTransform;
		public Transform objectTransform;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DrawAvatarRoutine_d__12(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AvatarCapture();

	// Methods
	public void CaptureAllPlayersInGame();
	public void CapturePlayersInTeam(List<ScoreTeamEntry> scoreTeamEntries, GameStatCounterType counterType);
	private void CapturePlayerGroup(List<List<MVPlayer>> sortedList);
	public void CapturePlayer(List<MVPlayer> players);
	private void InitializeCamera();
	[IteratorStateMachine(typeof(_DrawAvatarRoutine_d__12))]
	private IEnumerator DrawAvatarRoutine(Transform cameraTransform, Transform objectTransform);
	private void DrawObject(Transform cameraTransform, Transform objectTransform);
	private static Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles);
	private int CreateTriangleFormation(ref List<Vector3> positions, Vector3 formationSpacing, int numberOfPositions);
	private int CreateTriangleFormation(ref List<Vector3> positions, Vector3 formationSpacing, int positionsRemaining, int unitsThisRow, float targetY, float targetZ);
	private Vector3 CalculateTieOffset(int currentWinner, int amountOfWinners);
	private void OnDestroy();
}

