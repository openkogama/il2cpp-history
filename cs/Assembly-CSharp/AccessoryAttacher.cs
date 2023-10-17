/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryAttacher
{
	// Fields
	private ConfirmationPopup attachConfirmationPopup;
	private MVBody avatarBody;
	private Action OnFinishedCallback;

	// Constructors
	public AccessoryAttacher();

	// Methods
	public void AttachAccessory(int streamingAssetsId, MVBody currentBody, float offset, float scale, Action OnFinishedCallback);
	private void Game_OnSetAvatarAccessorySlotResponseEquipHandler(bool setSlotSuccess);
}

