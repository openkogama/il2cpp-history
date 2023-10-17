/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LogicObjectManagerClient : LogicObjectManager
{
	// Constructors
	public LogicObjectManagerClient(int timeStamp, bool trackLoops);

	// Methods
	public int OnLinkAdded(Link link, IWorldObjectManager worldObjectManager);
	public int OnLinkRemoved(Link link, IWorldObjectManager worldObjectManager);
	public void Clear();
}

