/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class KoGaMaDataHandler
{
	// Fields
	private static AsyncBookkeeping asyncBookkeeping;
	private static readonly int serializeVersion;
	private const int maxDeserializeTimeBeforeService = 1000;
	private static int timeSinceService;
	[CompilerGenerated]
	private static UnityAction __f__mg_cache0;
	[CompilerGenerated]
	private static UnityAction __f__mg_cache1;
	[CompilerGenerated]
	private static UnityAction __f__mg_cache2;
	[CompilerGenerated]
	private static UnityAction __f__mg_cache3;
	[CompilerGenerated]
	private static UnityAction __f__mg_cache4;

	// Properties
	public static bool SlowWorldCreation { set; }

	// Nested types
	private class AsyncBookkeeping
	{
		// Fields
		private float workStartTime;
		private readonly UnityAction<int> doneCallback;
		public int deserializedPrototypes;
		public int deserializedWorldObjects;
		public int deserializedLinks;
		public int deserializedObjectLinks;
		public int numberOfPrototypes;
		public int numberOfWorldObjects;
		public int numberOfLinks;
		public int numberOfObjectLinks;
		public int rootId;
		public readonly BytePacker bp;
		public readonly UnityAction<Dictionary<object, object>, KogamaDataType> callBack;
		public readonly bool readRuntimeData;
		public bool waitOneFrameBeforeDoneCallback;
		public float workTime;

		// Properties
		public bool WaitFrame { get; }

		// Constructors
		public AsyncBookkeeping(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData, UnityAction<int> doneCallback);

		// Methods
		public void Done();
	}

	// Constructors
	static KoGaMaDataHandler();

	// Methods
	public static int GetKoGaMaData(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	private static void GetPrototypeData(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack);
	private static int GetWorldObjectData(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	private static void GetLinks(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	private static void GetObjectLinks(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	public static void GetKoGaMaDataAsync(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData, UnityAction<int> doneCallback);
	private static bool GetPrototypeDataAsync();
	private static bool GetWorldObjectDataAsync();
	private static bool GetLinksAsync();
	private static bool GetObjectLinksAsync();
	private static void Execute();
	private static void DeserializePrototype(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack);
	private static int DeserializeWorldObject(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	private static void DeserializeLink(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	private static void DeserializeObjectLink(BytePacker bp, UnityAction<Dictionary<object, object>, KogamaDataType> callBack, bool readRuntimeData);
	private static void HandleService();
}

