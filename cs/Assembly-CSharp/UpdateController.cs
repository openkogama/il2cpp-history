/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class UpdateController
{
	// Fields
	private static readonly List<PriorityDataUpdate>[] updateBuckets;
	private static readonly List<PriorityDataFixedUpdate>[] fixedUpdateBuckets;
	private static readonly List<PriorityDataLateUpdate>[] lateUpdateBuckets;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public IUpdatecontrollerSubscriberUpdate obj;
		public Predicate<PriorityDataUpdate> __9__0;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal bool _RemoveUpdateObject_b__0(PriorityDataUpdate x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public IUpdatecontrollerSubscriberFixedUpdate obj;
		public Predicate<PriorityDataFixedUpdate> __9__0;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal bool _RemoveFixedUpdateObject_b__0(PriorityDataFixedUpdate x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public IUpdatecontrollerSubscriberLateUpdate obj;
		public Predicate<PriorityDataLateUpdate> __9__0;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal bool _RemoveLateUpdateObject_b__0(PriorityDataLateUpdate x);
	}

	// Constructors
	static UpdateController();

	// Methods
	public static void AddUpdateObject(IUpdatecontrollerSubscriberUpdate obj, UpdatePriority priority, int conditionInp = 1);
	public static void AddFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate obj, UpdatePriority priority, int conditionInp = 1);
	public static void AddLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate obj, UpdatePriority priority, int conditionInp = 1);
	public static void RemoveUpdateObject(IUpdatecontrollerSubscriberUpdate obj);
	public static void RemoveFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate obj);
	public static void RemoveLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate obj);
	public static void Update();
	private static void UpdateList(int state, List<PriorityDataUpdate> priorityDatas);
	public static void FixedUpdate();
	private static void FixedUpdateList(int state, List<PriorityDataFixedUpdate> priorityDatas);
	public static void LateUpdate();
	private static void LateUpdateList(int state, List<PriorityDataLateUpdate> priorityDatas);
	public static void Clear();
	private static int GetPresentState();
}

