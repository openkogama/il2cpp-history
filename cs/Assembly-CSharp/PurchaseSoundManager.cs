/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PurchaseSoundManager : MonoBehaviour, IPurchaseSoundManager
{
	// Fields
	[SerializeField]
	private AudioSource purchaseSound;
	private bool surpressSound;

	// Constructors
	public PurchaseSoundManager();

	// Methods
	private void Start();
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	public void SurpressSoundOnce();
	public void PlayPurchaseSound();
}

