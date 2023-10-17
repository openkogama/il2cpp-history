/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristPromotionDesktop : TouristPromotion
{
	// Fields
	[SerializeField]
	private GameObject visitKogamaPopupPrefab;
	[SerializeField]
	private GameObject redirectButton;
	[SerializeField]
	private UnityEngine.UI.Text redirectButtonURLText;
	[SerializeField]
	private GameObject goToKogamaPopupPrefab;
	[SerializeField]
	private GameObject signupButton;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public GameObject popUp;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _ShowGoToKogamaPopup_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TouristPromotionDesktop();

	// Methods
	protected override void Start();
	public void SignupCallback();
	public void LoginCallback();
	public void KogamaRedirect();
	public override void OnContinueClicked();
	private void ShowGoToKogamaPopup();
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	private void OnDestroy();
}

