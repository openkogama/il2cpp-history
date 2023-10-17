/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
[CreateAssetMenu]
public class RegionConfig : ScriptableObject
{
	// Fields
	[SerializeField]
	public SentryConfig sentryConfig;
	[SerializeField]
	public StatHatConfig StathatConfig;
	[SerializeField]
	public DebugLogHandlerConfig DebuggerLoggerConfig;
	[SerializeField]
	public PhotonLoggingConfig PhotonLoggingConfig;
	[SerializeField]
	public TestSetup TestSetup;
	[SerializeField]
	public StaticAssetsConfig StaticAssetsConfig;

	// Constructors
	public RegionConfig();
}

