/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVRuntimeDataVariables
{
	// Fields
	private MVWorldObjectClient owner;
	private List<MVRuntimeDataVariable> variables;

	// Constructors
	public MVRuntimeDataVariables(MVWorldObjectClient owner);

	// Methods
	public MVRuntimeDataVariable New(string variableId, float sendInterval, bool writeThrough);
	public MVRuntimeDataVariable<T> New<T>(string variableId, float sendInterval, bool writeThrough);
	public MVRuntimeDataVariableClampedFloat NewClampedFloat(string variableId, float sendInterval, bool writeThrough, float minValue, float maxValue);
	public void Receive(Dictionary<object, object> runtimeData);
	public Dictionary<object, object> Send(bool immediateSend);
	public void OnWriteThrough(object value);
}

