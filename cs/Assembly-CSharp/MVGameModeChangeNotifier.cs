/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameModeChangeNotifier : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private UpdateCondition _currentState;
	private List<IGameStateControllerSubscriber> UpdateList;
	[CompilerGenerated]
	private static Predicate<IGameStateControllerSubscriber> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _RemoveObject_c__AnonStorey0
	{
		// Fields
		internal IGameStateControllerSubscriber obj;

		// Constructors
		public _RemoveObject_c__AnonStorey0();

		// Methods
		internal bool __m__0(IGameStateControllerSubscriber x);
	}

	// Constructors
	public MVGameModeChangeNotifier();

	// Methods
	public void AddUpdateObject(IGameStateControllerSubscriber obj);
	public void RemoveObject(IGameStateControllerSubscriber obj);
	public void UpdateControllerFixedUpdate();
	public void UpdateControllerUpdate();
	private UpdateCondition GetPresentState();
	[CompilerGenerated]
	private static bool _UpdateControllerUpdate_m__0(IGameStateControllerSubscriber pd);
}

