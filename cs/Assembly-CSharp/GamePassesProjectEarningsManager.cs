/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem.GamePassEarnings;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class GamePassesProjectEarningsManager
{
	// Fields
	public static Action<ProjectEarningsReport> OnEarningsDataUpdated;
	private static ProjectEarningsReport projectEarningReport;

	// Properties
	public static ProjectEarningsReport ProjectEarningReport { get; }

	// Methods
	public static void UpdateProjectEarningReport(ProjectEarningsReport newProjectEarningReport);
}

