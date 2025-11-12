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

public class FirstTimeEventPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Button skipButton;
	[SerializeField]
	private FirstTimeFadeHandler fader;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public GameObject popupGameObject;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal void _PopSelf_b__0(IUIStack x, BaseEventData y);
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

