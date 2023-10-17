/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class LogicObjectManager
{
	// Fields
	public const int updateInterval = 100;
	public const int stepInterval = 1000;
	public const int updatesBeforeStepSend = 10;
	protected Dictionary<int, IInputSignalReceiver> logicWorldObjects;
	public readonly bool trackLoops;
	private HashSet<int> updatedIds;
	[CompilerGenerated]
	private int _TimeStamp_k__BackingField;

	// Properties
	public int TimeStamp { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int FrameCount { get; }

	// Nested types
	public enum ValidateLinkStatus
	{
		LoopDetected = 0,
		InputObjectIsNull = 1,
		OutputObjectIsNull = 2,
		BothInputAndOutputIsNull = 3,
		LinkAlreadyExists = 4,
		InputObjectDoesNotHaveConnector = 5,
		OutputObjectDoesNotHaveConnector = 6,
		InputObjectIdIsZeroOrLess = 7,
		OutputObjectIdIsZeroOrLess = 8,
		Ok = 9
	}

	public enum ValidateObjectLinkStatus
	{
		ObjectConnectorWOIDIsZeroOrLess = 0,
		ObjectWOIDIsZeroOrLess = 1,
		BothObjectConnectorAndObjectWOIsNull = 2,
		ObjectConnector = 3,
		ObjectWO = 4,
		ObjectConnectorHasNoObjectConnector = 5,
		ObjectConnectorContainsLinkAlready = 6,
		ObjectWOContainsLinkAlready = 7,
		Ok = 8
	}

	public enum ReportSeverity
	{
		Info = 0,
		Warning = 1,
		Error = 2
	}

	// Constructors
	public LogicObjectManager(int timeStamp, bool trackLoops);

	// Methods
	public void Reset();
	public void AddLogicObjectToUpdate(int worldObjectID, IInputSignalReceiver logicWorldObject);
	public void RemoveLogicObjectFromUpdate(int worldObjectID);
	public void Update();
	public static int ResetChunk(int woID, IWorldObjectManager worldObjectManager);
	public static ValidateObjectLinkStatus ValidateObjectLink(ObjectLink objectLink, IWorldObjectManager worldObjectManager, out ReportSeverity reportSeverity);
	public static ValidateLinkStatus ValidateLink(int linkOutputWoId, int linkInputWoId, IWorldObjectManager worldObjectManager, bool validateLoops, out ReportSeverity reportSeverity);
	private static bool DoesLinkExist(MVWorldObject outputWo, int inputWOID);
	private static void ValidateLink(int woIdFrom, int woIdTo, IWorldObjectManager worldObjectManager, ref bool loopDetected);
	private static void ResetNode(int woID, HashSet<int> resetNodes, IWorldObjectManager worldObjectManager);
	public void DebugAddId(int id);
	private void ClearDebugIds();
	public override string ToString();
}

