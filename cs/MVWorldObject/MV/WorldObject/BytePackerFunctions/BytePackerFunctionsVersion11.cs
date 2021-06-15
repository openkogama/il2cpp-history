/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.BytePackerFunctions
{
	public static class BytePackerFunctionsVersion11
	{
		// Methods
		public static Dictionary<object, object> GetDataParameters(BytePacker bp, KogamaDataType kogamaDataType, bool readRuntimeData);
		private static Dictionary<object, object> GetPrototypeDataParameters(BytePacker bp);
		private static Dictionary<object, object> GetWorldObjectDataParameters(BytePacker bp, bool readRuntimeData);
		private static void ReadWorldObjectOwnerState(BytePacker bp, Dictionary<object, object> worldObjectData);
		private static Dictionary<object, object> GetLinkDataParameters(BytePacker bp);
		private static Dictionary<object, object> GetObjectLinkDataParameters(BytePacker bp);
		private static void GetHashTableFromBytePacker(BytePacker bp, Dictionary<object, object> data, int numNameValuePairs);
	}
}
