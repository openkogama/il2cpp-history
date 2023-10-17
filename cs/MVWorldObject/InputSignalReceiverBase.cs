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

public abstract class InputSignalReceiverBase : IInputSignalReceiver
{
	// Fields
	protected const string runtimeDataIsHotKey = "iH";
	protected readonly LogicEvaluateSignalComponentBase logicEvaluateSignalComponentBase;
	protected LogicObjectManager logicObjectManager;
	private int woID;
	protected bool firstFrame;
	protected bool trackloops;
	public Action<bool, bool, LogicObjectManager> OnSignal;
	[CompilerGenerated]
	private bool _DefaultInput_k__BackingField;

	// Properties
	public abstract bool CurrentlyIsHot { get; set; }
	public bool DefaultInput { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public InputSignalReceiverBase(MVWorldObject worldObject, LogicEvaluateSignalComponentBase logicEvaluateSignalComponentBase, bool defaultInput, LogicObjectManager logicObjectManager);

	// Methods
	public void Reset();
	private void HandleSignalToEvaluateChange(int newNumberOfSignals);
	public void UpdateSignal(bool isHot);
	public void HandleInputLinkChanged(List<Link> inputLinkRefs);
	private void SendSignal(bool isHot);
}

