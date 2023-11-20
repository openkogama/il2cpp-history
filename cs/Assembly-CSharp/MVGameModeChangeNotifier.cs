/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameModeChangeNotifier : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private UpdateCondition _currentState;
	private List<IGameStateControllerSubscriber> UpdateList;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Predicate<IGameStateControllerSubscriber> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _UpdateControllerUpdate_b__6_0(IGameStateControllerSubscriber pd);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public IGameStateControllerSubscriber obj;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal bool _RemoveObject_b__0(IGameStateControllerSubscriber x);
	}

	// Constructors
	public MVGameModeChangeNotifier();

	// Methods
	public void AddUpdateObject(IGameStateControllerSubscriber obj);
	public void RemoveObject(IGameStateControllerSubscriber obj);
	public void UpdateControllerFixedUpdate();
	public void UpdateControllerUpdate();
	private UpdateCondition GetPresentState();
}

