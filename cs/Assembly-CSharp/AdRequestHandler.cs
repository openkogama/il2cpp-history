/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class AdRequestHandler
{
	// Fields
	private static Action<bool> OnHealthAdAvailableCallback;
	private static Action<bool> OnHealthAdShownCallback;
	private static Action<bool> OnGoldAdAvailableCallback;
	private static Action<bool> OnGoldAdShownCallback;
	[CompilerGenerated]
	private static Action<bool, string> __f__mg_cache0;
	[CompilerGenerated]
	private static Action<bool, string> __f__mg_cache1;
	[CompilerGenerated]
	private static Action<bool, string> __f__mg_cache2;
	[CompilerGenerated]
	private static Action<bool, string> __f__mg_cache3;

	// Nested types
	private class Available
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _available_k__BackingField;

		// Properties
		public bool available { [CompilerGenerated] get; [CompilerGenerated] set; }

		// Constructors
		public Available();
	}

	public class ShouldReward
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _shouldReward_k__BackingField;

		// Properties
		public bool shouldReward { [CompilerGenerated] get; [CompilerGenerated] set; }

		// Constructors
		public ShouldReward();
	}

	// Methods
	public static void GetHealthAdAvailable(Action<bool> OnAdAvailable);
	private static void HealthAdAvailable(bool success, string availableJsonString);
	public static void ShowHealthVideoAd(Action<bool> OnAdShown);
	private static void ShowHealthVideoAdCallback(bool success, string showVideoJsonString);
	public static void GetGoldAdAvailable(Action<bool> OnAdAvailable);
	private static void GoldAdAvailable(bool success, string availableJsonString);
	public static void ShowGoldVideoAd(Action<bool> OnAdShown);
	private static void ShowGoldVideoAdCallback(bool success, string showVideoJsonString);
}

