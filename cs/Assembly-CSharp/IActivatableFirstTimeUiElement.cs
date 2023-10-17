/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IActivatableFirstTimeUiElement
{
	// Properties
	FirstTimeEvent FirstTimeEvent { get; }
	int Priority { get; }
	bool CanShow { get; }
	bool IsShowing { get; }
	bool IsRegistered { get; }
	FirstTimeEvent PrerequisiteEvent { get; }

	// Methods
	void Show();
}

