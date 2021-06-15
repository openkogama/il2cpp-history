/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVNetworkObject
{
	// Fields
	protected MVWorldObjectClient worldObject;

	// Properties
	public abstract bool RemoveFromUpdate { get; }
	public MVWorldObjectClient WorldObject { get; }

	// Constructors
	public MVNetworkObject(MVWorldObjectClient owner);

	// Methods
	public abstract void Update(MVNetworkGame game);
}

