/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SelfElevator
{
	// Fields
	private static BitArray bits;
	private static ApplicationIntegrityLevel integrityLevel;
	private Dictionary<int, ApplicationIntegrityLevel> RID_to_ApplicationIntegrityLevel;

	// Properties
	public static bool InAdminGroupSet { get; }
	public static bool InAdminGroup { get; set; }
	public static bool IsRunningAsAdminSet { get; }
	public static bool IsRunningAsAdmin { get; set; }
	public static bool IsElevatedSet { get; }
	public static bool IsElevated { get; set; }
	public static ApplicationIntegrityLevel IntegrityLevel { get; set; }

	// Nested types
	public enum ApplicationIntegrityLevel
	{
		Untrusted = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		System = 4,
		Unknown = 5
	}

	private enum Bools
	{
		inAdminGroupSet = 0,
		inAdminGroup = 1,
		isRunningAsAdminSet = 2,
		isRunningAsAdmin = 3,
		isElevatedSet = 4,
		isElevated = 5,
		Size = 6
	}

	// Constructors
	public SelfElevator();
	static SelfElevator();

	// Methods
	internal bool IsUserInAdminGroup();
	internal bool IsRunAsAdmin();
	internal bool IsProcessElevated();
	internal int GetProcessIntegrityLevel();
	private string GetExecutableName();
	public void Elevate();
}

