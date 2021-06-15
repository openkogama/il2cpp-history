/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using MV.WorldObject.MetaData;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVLocalPlayerBuilder : MVLocalPlayerRegistered
{
	// Fields
	private EnterPlayStateDataStruct enterPlayStateData;

	// Properties
	public EnterPlayStateDataStruct EnterPlayStateData { get; set; }
	public int BuildModeSpawnRoleId { get; }

	// Nested types
	public struct EnterPlayStateDataStruct
	{
		// Fields
		public MVTeam selectedTeam;
		public int selectedSpawnRoleCreator;
		public int previousSpawnRoleId;
	}

	// Constructors
	public MVLocalPlayerBuilder(int actorNumber, int profileID, string regionCode, int planetOwnershipTypeID, UserProfileData userProfileData);

	// Methods
	public void SetToDefaultPlayModeSpawnRole();
	public void SetToBuildModeSpawnRole();
}

