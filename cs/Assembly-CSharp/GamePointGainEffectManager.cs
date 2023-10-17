/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class GamePointGainEffectManager
{
	// Fields
	public static Action<int> OnGamePointGainEffectShown;
	public static Action<int> OnInGamePointGainEffectShown;
	public static Action<int> OnTierProgressBarGamePointGainEffectShown;
	private static int progressBarGamePointAmountShown;

	// Properties
	public static int GamePointAmountShown { get; }

	// Methods
	public static void HaveShownGamePointGainEffect(int gamePointAmountShown);
	public static void HaveShownInGamePointGainEffect(int gamePointAmountShown);
	public static void HaveShownTierProgressBarGamePointGainEffect(int gamePointAmountShown);
	public static void PostResetCleanup();
}

