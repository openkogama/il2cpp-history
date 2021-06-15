/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.HighlightSystem;
using MV.WorldObject.HighlightSystem.HighlightPayloads;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class HighlightManager
{
	// Fields
	private static Dictionary<int, AvailableHighlightData> highlightDatas;

	// Constructors
	static HighlightManager();

	// Methods
	public static List<Highlight<T>> GetHighLights<T>(HighlightType highlightType)
		where T : HighlightPayloadBase;
	public static void Init(string availableHighlightDatasString);
	public static void Reset();
	public static void SetHighlightToSeen(int highlightId);
}

