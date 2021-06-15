/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdConfigSettings
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _AdTimeoutAsSuccess_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _AdTimeoutAsSuccessDelay_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EmbeddedSiteConfigData _EmbeddedSiteConfigData_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _InterstitialTimeoutAfterRewardedAd_k__BackingField;

	// Properties
	public bool AdTimeoutAsSuccess { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int AdTimeoutAsSuccessDelay { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public EmbeddedSiteConfigData EmbeddedSiteConfigData { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int InterstitialTimeoutAfterRewardedAd { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public AdConfigSettings(EmbeddedSiteConfigData embeddedSiteConfigData, bool adAutoSuccessAfterDelayEnabled, int delayBeforeAdIsAutoSuccess, int interstitialTimeoutAfterRewardedAd);
}

