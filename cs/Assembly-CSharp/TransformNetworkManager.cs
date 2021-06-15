/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TransformNetworkManager
{
	// Fields
	private Dictionary<int, MVNetworkObject> networkedObjects;
	private List<int> removeList;
	public const int broadcastInterval = 200;
	public const int clientDelay = 200;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static int _DelayedTime_k__BackingField;

	// Properties
	public static int DelayedTime { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public TransformNetworkManager();

	// Methods
	public void RemoveNetworkObject(int woID);
	public void AddReporter(int woID, MVNetworkReporter networkReporter);
	public MVNetworkObject GetNetworkObject(int woID);
	public void AddTransformPackage(int woID, NetworkTransformPackage p);
	public void Update(MVNetworkGame game);
}

