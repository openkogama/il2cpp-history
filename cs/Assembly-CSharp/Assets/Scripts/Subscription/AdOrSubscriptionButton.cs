/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Subscription
{
	public class AdOrSubscriptionButton : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private CooldownType cooldownType;
		[SerializeField]
		private GameObject countdownObject;
		[SerializeField]
		private Image countdownFillImage;
		[SerializeField]
		private UnityEngine.UI.Text countdownText;
		[SerializeField]
		private Image iconImage;
		[SerializeField]
		private Sprite adSprite;
		[SerializeField]
		private Sprite subscriberSprite;
		[SerializeField]
		private Sprite buttonBackgroundActiveSprite;
		[SerializeField]
		private Sprite buttonBackgroundInactiveSprite;
		[SerializeField]
		private UnityEvent onAdClick;
		[SerializeField]
		private UnityEvent onSubscriberReadyClick;
		[SerializeField]
		private UnityEvent onSubscriberInCooldownClick;
		private bool isClickReady;
		private bool isSubscriber;
		private Image buttonBackgroundImage;
		private SubscriberCooldownsManager subCooldowns;
	
		// Constructors
		public AdOrSubscriptionButton();
	
		// Methods
		private void Awake();
		private void Update();
		public void OnClick();
	}
}
