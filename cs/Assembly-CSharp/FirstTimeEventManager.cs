/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.MetaData;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class FirstTimeEventManager
{
	// Fields
	private static Action<FirstTimeState, FirstTimeEvent> firstTimeStatePublisher;
	private static FirstTimeState firstTimeState;
	public static Action XPRewarded;
	[CompilerGenerated]
	private static bool _FirstTimeSystemInitialized_k__BackingField;
	[CompilerGenerated]
	private static bool _GetProfileMetaDataOk_k__BackingField;

	// Properties
	public static bool FirstTimeSystemInitialized { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static bool GetProfileMetaDataOk { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Methods
	public static void Initialize(FirstTimeState firstTimeState);
	public static void Destroy();
	public static void SubscribeToFirstTimeState(Action<FirstTimeState, FirstTimeEvent> firstTimeStateReceiver);
	public static void UnSubscribeToFirstTimeState(Action<FirstTimeState, FirstTimeEvent> firstTimeStateReceiver);
	public static void SetFirstTimeEvent(FirstTimeEvent firstTimeEvent);
	public static void OnFirstTimeEventResponse(FirstTimeEvent firstTimeEvent, XPRewardType xpRewardType);
	public static void OverrideFirstTimeEvent(FirstTimeEvent firstTimeEvent, bool overrideValue);
	public static void ResetFirstTimeEvents(bool overrideValue);
	public static bool HasFirstTimeEventOccured(FirstTimeEvent firstTimeEvent);
	private static void OnLevelingInitialized();
}

