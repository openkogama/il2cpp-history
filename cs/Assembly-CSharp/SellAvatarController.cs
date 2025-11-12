/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SellAvatarController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private InputField nameField;
	[SerializeField]
	private UnityEngine.UI.Button removeButton;
	[SerializeField]
	private UnityEngine.UI.Text sellButtonText;
	[SerializeField]
	private AvatarScreenShooter screenShooter;
	private int woID;
	private MvAvatarMetaData metaData;
	private MVBody body;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__11_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__14_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__15_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ScreenShotCallback_b__9_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnAddToMarketplace_b__11_0(IUIStack x, BaseEventData y);
		internal void _OnAddToMarketplace_b__11_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPop_b__12_0(IUIStack x, BaseEventData y);
		internal void _OnRemovePressed_b__14_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnRemoveFromMarketplace_b__15_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public string text;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _OnAddToMarketplace_b__2(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public string text;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _OnRemoveFromMarketplace_b__1(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public SellAvatarController();

	// Methods
	public void Initialize(int woID, MVBody currentBody);
	public void OnSellPressed();
	private void ScreenShotCallback(Texture2D texture, string successMessage);
	private void OnImageUploaded();
	private void OnAddToMarketplace(bool added);
	private void OnPop();
	private bool IsSelectedBodyValid();
	public void OnRemovePressed();
	private void OnRemoveFromMarketplace(bool added);
}

