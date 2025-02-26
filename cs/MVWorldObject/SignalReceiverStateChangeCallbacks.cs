/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class SignalReceiverStateChangeCallbacks : IInputSignalReceiver
{
	// Fields
	private readonly InputSignalReceiverBase _inputSignalReceiverBase;
	public Action<bool, bool, LogicObjectManager> OnSignal;
	public Action<LogicInputState, LogicObjectManager> OnInputStateUpdate;

	// Properties
	public bool CurrentlyIsHot { get; }
	public bool DefaultInput { get; }

	// Constructors
	public SignalReceiverStateChangeCallbacks(InputSignalReceiverBase _inputSignalReceiverBase);

	// Methods
	public void Reset();
	private void HandleOnSignal(bool isHot, bool wasHot, LogicObjectManager logicObjectManager);
	public void UpdateSignal(bool isHot);
}

