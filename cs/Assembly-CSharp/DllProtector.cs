/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.AntiCheat;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class DllProtector
{
	// Methods
	private static extern uint GetCrcData(byte[] buffer, int len);
	private static int FirstIndexOf(byte[] data, int startIndex, byte val);
	public static List<FileData> GetCRCData();
	private static List<FileData> ParseCrcData(byte[] crcData, uint numOfWrittenBytes);
}

