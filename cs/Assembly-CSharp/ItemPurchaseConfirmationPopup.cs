/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ItemPurchaseConfirmationPopup : MonoBehaviour
{
	// Fields
	private UnityAction<bool> resultCallback;

	// Constructors
	public ItemPurchaseConfirmationPopup();

	// Methods
	public void Initialize(UnityAction<bool> resultCallback);
	public void AcceptPurchase();
	public void DeclinePurchase();
}

