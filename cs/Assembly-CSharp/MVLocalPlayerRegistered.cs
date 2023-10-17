/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVLocalPlayerRegistered : MVLocalPlayer
{
	// Constructors
	public MVLocalPlayerRegistered(int actorNumber, int profileID, string regionCode, int planetOwnershipTypeId, UserProfileData userProfileData);

	// Methods
	public override void InitializeLeveling(InitialLevelData initialLevelData);
	private void OnXPProgressDataChangeRegistered(XPProgressData xpProgress);
	private void LevelCallback(UnityWebRequest result);
	private void OnLevelChangedLocalReceivedLevelData(int level);
	public override void Destroy();
}

