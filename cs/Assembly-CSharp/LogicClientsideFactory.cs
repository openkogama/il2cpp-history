/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class LogicClientsideFactory
{
	// Methods
	public static IInputSignalReceiver CreateInputSignalReceiverAnd(MVWorldObject worldObject, bool defaultSignal, Action<bool, bool, LogicObjectManager> signalCallback);
	public static IInputSignalReceiver CreateInputSignalReceiver(MVWorldObject worldObject, bool defaultInput, Action<bool, bool, LogicObjectManager> signalCallback);
	public static IInputSignalReceiver CreateStateChangeInputSignalReceiver(MVWorldObject worldObject, bool defaultInput, Action<bool, bool, LogicObjectManager> signalCallback, Action<LogicInputState, LogicObjectManager> inputStateUpdateCallback);
}

