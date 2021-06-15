/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SessionLocatorPing : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private WaitForTicksLocal waitForTicks;
	private int pingIntervalInMilliSeconds;
	private bool pingInFlight;
	private bool connectionLost;
	[CompilerGenerated]
	private static UnityAction __f__am_cache0;

	// Constructors
	public SessionLocatorPing();

	// Methods
	public void UpdateControllerUpdate();
	public void BackgroundUpdate();
	public void UpdateControllerFixedUpdate();
	public static void LeaveSession();
	private void InternalUpdate();
	private void WWWCallBack(UnityWebRequest result);
	private void OnPingError(UnityWebRequest result);
	private void CloseApplication();
	[CompilerGenerated]
	private static void _CloseApplication_m__0();
}

