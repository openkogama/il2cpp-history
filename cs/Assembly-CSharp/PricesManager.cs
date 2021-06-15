/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class PricesManager
{
	// Fields
	private static Dictionary<object, object> prices;

	// Methods
	public static void Init(Dictionary<object, object> prices);
	public static void Reset();
	public static Price GetPrice(string priceName);
}

