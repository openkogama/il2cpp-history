/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public class MobileAdsEventExecutor : MonoBehaviour
	{
		// Fields
		public static MobileAdsEventExecutor instance;
		private static List<Action> adEventsQueue;
		private static bool adEventsQueueEmpty;
	
		// Constructors
		public MobileAdsEventExecutor();
		static MobileAdsEventExecutor();
	
		// Methods
		public static void Initialize();
		public static bool IsActive();
		public void Awake();
		public static void ExecuteInUpdate(Action action);
		public void Update();
		public void OnDisable();
	}
}
