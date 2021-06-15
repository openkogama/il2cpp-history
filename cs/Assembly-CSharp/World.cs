/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class World
{
	// Fields
	protected MVWorldObjectClientManagerNetwork worldObjectClientManager;
	protected MVWorldInventory worldInventory;
	protected RuntimeEventManagerNetwork runtimeEventManagerNetwork;
	public EventHandler<InitializedGameQueryDataEventArgs> InitializedGameQueryData;

	// Properties
	public MVWorldInventory WorldInventory { get; }
	public MVWorldObjectClientManager WorldObjectClientManager { get; }
	public RuntimeEventManager RuntimeEventManager { get; }

	// Constructors
	protected World();
}

