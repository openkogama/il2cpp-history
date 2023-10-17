/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class WorldObjectDataValidator
{
	// Fields
	private static Dictionary<object, object> lazyAddedData;

	// Constructors
	static WorldObjectDataValidator();

	// Methods
	public static void Validate(MVWorldObjectClient wo, string key, object value);
	private static bool ValidateForGivenData(Dictionary<object, object> data, string key, object value, string dataName = "");
}

