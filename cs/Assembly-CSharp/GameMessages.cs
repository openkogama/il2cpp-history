/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMessages
{
	// Nested types
	public struct PlayerJoinMessage
	{
		// Fields
		public int playerId;
	}

	public struct PlayerLeftMessage
	{
		// Fields
		public int playerId;
		public string userName;
	}

	public struct CollectibleMessage
	{
		// Fields
		public int playerId;
	}

	public struct AchievementGetMessage
	{
		// Fields
		public int playerId;
		public AchievementType achievementType;
	}

	public struct CheckpointMessage
	{
		// Fields
		public int playerID;
	}

	// Constructors
	public GameMessages();

	// Methods
	public static Dictionary<object, object> MakePlayerKilledMessage(int avatarId, int killerId, PlayerKilledByType weaponType);
	public static PlayerJoinMessage ParsePlayerJoinMessage(Dictionary<object, object> package);
	public static PlayerLeftMessage ParsePlayerLeftMessage(Dictionary<object, object> package);
	public static CollectibleMessage ParseCollectibleMessage(Dictionary<object, object> package);
	public static AchievementGetMessage ParseAchievementGetMessage(Dictionary<object, object> package);
	public static CheckpointMessage ParseCheckpointMessage(Dictionary<object, object> package);
}

