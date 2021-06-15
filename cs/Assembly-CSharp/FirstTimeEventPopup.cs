/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeEventPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button skipButton;
	[SerializeField]
	private FirstTimeFadeHandler fader;

	// Nested types
	[CompilerGenerated]
	private sealed class _PopSelf_c__AnonStorey0
	{
		// Fields
		internal GameObject popupGameObject;

		// Constructors
		public _PopSelf_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeEventPopup();

	// Methods
	public void FadeIn();
	public void StartFade(Action<GameObject> finishedAction);
	public void StartFadeWithSelfPop();
	private void PopSelf(GameObject popupGameObject);
	public void SetSkippable(bool skipAllowed);
}

