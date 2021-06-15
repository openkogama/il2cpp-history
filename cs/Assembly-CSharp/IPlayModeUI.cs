/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IPlayModeUI
{
	// Properties
	bool InLobbyState { get; set; }

	// Methods
	void ShowEUseIcon(ShowUseOption option, int woId = 0);
	void HideEUseIcon();
	IGUICrossHair GetCrossHair();
}

