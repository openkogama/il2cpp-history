/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RuntimeVariableNetworkManager
{
	// Fields
	private HashSet<int> runtimeDataVariables;
	private List<int> removeList;

	// Constructors
	public RuntimeVariableNetworkManager();

	// Methods
	public void AddRuntimeDataVariables(int woID);
	public bool ContainsRuntimeVariables(int woID);
	public void RemoveRuntimeDataVariables(int woID);
	public void SendRuntimeData();
	public bool SendRuntimeData(MVWorldObjectClient wo, bool immediateSend);
}

