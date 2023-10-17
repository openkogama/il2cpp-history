/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVRuntimeDataVariableClampedFloat : MVRuntimeDataVariable<float>
{
	// Fields
	private float min;
	private float max;

	// Properties
	public override float Value { get; set; }

	// Constructors
	public MVRuntimeDataVariableClampedFloat(string variableId, float sendInterval, Dictionary<object, object> initialRuntimeData, bool writeThrough, float min, float max);
}

