/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVRuntimeDataVariable
{
	// Fields
	private ObscuredString variableId;
	private object value;
	private object sendValue;
	private float sendInterval;
	private float lastSendTime;
	private bool writeThrough;
	public OnChangeDelegate OnChange;
	public OnWriteThroughDelegate OnWriteThrough;

	// Properties
	public bool WriteThrough { get; }
	public object Value { get; set; }

	// Nested types
	public delegate void OnChangeDelegate(object newValue);

	public delegate void OnWriteThroughDelegate(object newValue);

	// Constructors
	public MVRuntimeDataVariable(string variableId, float sendInterval, Dictionary<object, object> initialRuntimeData, bool writeThrough);

	// Methods
	public void Receive(Dictionary<object, object> runtimeDataDelta);
	public void Send(ref Dictionary<object, object> runtimeDataDelta, bool immediateSend);
	private void NotifyChange();
}

