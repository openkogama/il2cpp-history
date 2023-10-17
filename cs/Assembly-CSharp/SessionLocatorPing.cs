/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SessionLocatorPing : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private WaitForTicksLocal waitForTicks;
	private int pingIntervalInMilliSeconds;
	private bool pingInFlight;
	private bool connectionLost;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static UnityAction __9__12_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CloseApplication_b__12_0();
	}

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
}

