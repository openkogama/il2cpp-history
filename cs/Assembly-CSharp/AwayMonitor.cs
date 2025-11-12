/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AwayMonitor
{
	// Fields
	private static AwayMonitor instance;
	private System.DateTime latestResetAFKTime;
	private readonly TimeSpan awayCheckFrequency;
	private IdleKickTimes idleKickTimes;
	private State state;
	private bool idleKickEnabled;
	private System.DateTime latestMouseMoveTime;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";
	private const string scroll = "Mouse ScrollWheel";
	private const string platformerLeft = "MoveLeft";
	private const string platformerRight = "MoveRight";
	private static bool allAxisAvailable;
	private static bool allPlatformerButtonsAvailable;

	// Properties
	public static bool IdleKickEnabled { get; set; }
	public System.DateTime LatestMouseMoveTime { get; }

	// Nested types
	private enum State
	{
		Active = 0,
		IdleAndWarned = 1,
		PendingKick = 2,
		Kicked = 3
	}

	private class IdleKickTimes
	{
		// Fields
		public int warningTimeMinutes;
		public int idleKickTimeMinutes;
		public readonly TimeSpan warningTimeSpan;
		public readonly TimeSpan idleKickTimeSpan;

		// Constructors
		public IdleKickTimes(int warnAfterMinutes, int kickAfterMinutes);
	}

	// Constructors
	private AwayMonitor();

	// Methods
	public static void Initialize(MVGameMode mode);
	public static void Destroy();
	public static void UpdateMobile();
	public static void BackgroundUpdate();
	public static void InternalUpdate();
	private void UpdateButtons();
	public static void Update();
	public static void UpdateIdleAction();
	private void UpdateIdle();
	private void UpdateMouse();
	private void HandleIdle(bool fromBackgroundUpdate);
	private void CheckAndResolvePendingKick();
}

