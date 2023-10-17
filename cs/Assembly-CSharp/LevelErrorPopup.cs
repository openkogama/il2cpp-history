/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelErrorPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage requiredLevelImage;
	[SerializeField]
	private RawImage playerLevelImage;
	private UnityAction resultCallback;
	private Texture2D requiredLevelTextureAsset;
	private Texture2D playerLevelTextureAsset;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__8_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnButtonPressed_b__8_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public LevelErrorPopup();

	// Methods
	public void Initialize(UnityAction resultCallback, int requiredLevel);
	private void OnLevelRequirementLoaded(UnityWebRequest www);
	private void OnPlayerLevelLoaded(UnityWebRequest www);
	public void OnButtonPressed();
	private void OnDestroy();
}

