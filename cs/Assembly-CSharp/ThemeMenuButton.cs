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

public class ThemeMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button button;
	[SerializeField]
	private ToolTip toolTip;
	private static readonly string toolTipStr_ButtonDisabled;
	private static readonly string toolTipStr_ButtonEnabled;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IClickHandler> __f__am_cache0;

	// Nested types
	public interface IClickHandler : IEventSystemHandler
	{
		// Methods
		void OpenThemesMenu();
	}

	// Constructors
	public ThemeMenuButton();
	static ThemeMenuButton();

	// Methods
	protected void Awake();
	private void SetButtonAvailability(MVLocalPlayer.PlanetOwnershipType planetOwnership);
	public void OnClick();
	[CompilerGenerated]
	private static void _OnClick_m__0(IClickHandler handler, BaseEventData data);
}

