/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class DataUploadManager
{
	// Fields
	private const int chunkSize = 5000;
	private static int id;
	private static BytePacker bytePacker;
	private static UnityAction doneNotification;

	// Constructors
	static DataUploadManager();

	// Methods
	public static void UploadData(byte[] data, UnityAction doneNotification);
	public static void OnUploadBytes();
	public static void Reset();
	private static void SendChunk();
	private static void HandleDone();
}

