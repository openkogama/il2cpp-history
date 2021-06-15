/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IInputSignalReceiver
{
	// Properties
	bool CurrentlyIsHot { get; }
	bool DefaultInput { get; }

	// Methods
	void UpdateSignal(bool isHot);
	void Reset();
}

