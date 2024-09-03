/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class LayerEx
	{
		// Methods
		public static int GetMinLayer();
		public static int GetMaxLayer();
		public static bool IsLayerBitSet(int layerBits, int layerNumber);
		public static int SetLayerBit(int layerBits, int layerNumber);
		public static int ClearLayerBit(int layerBits, int layerNumber);
		public static bool IsLayerValid(int layerNumber);
		public static List<string> GetAllLayerNames();
	}
}
