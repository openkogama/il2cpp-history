/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShowingAdsPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button button;
	private float startTime;
	private float timeoutTime;
	private Action skipAction;
	private bool previousMuteState;

	// Constructors
	public ShowingAdsPopup();

	// Methods
	public void Initialize(float timeoutTime, Action OnSkipPressed);
	private void OnEnable();
	private void OnDestroy();
	private void Update();
	public void OnSkip();
}

