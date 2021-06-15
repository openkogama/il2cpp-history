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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SellAvatarController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private InputField nameField;
	[SerializeField]
	private Button removeButton;
	[SerializeField]
	private UnityEngine.UI.Text sellButtonText;
	[SerializeField]
	private AvatarScreenShooter screenShooter;
	private int woID;
	private MvAvatarMetaData metaData;
	private MVBody body;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache5;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnAddToMarketplace_c__AnonStorey0
	{
		// Fields
		internal string text;

		// Constructors
		public _OnAddToMarketplace_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnRemoveFromMarketplace_c__AnonStorey1
	{
		// Fields
		internal string text;

		// Constructors
		public _OnRemoveFromMarketplace_c__AnonStorey1();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _ScreenShotCallback_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnAddToMarketplace_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnAddToMarketplace_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPop_m__3(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnRemovePressed_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnRemoveFromMarketplace_m__5(IUIStack x, BaseEventData y);
}

