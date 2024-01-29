/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ProfileSettingsMenu : LobbyFlowMenu
{
	// Fields
	[SerializeField]
	private VerticalLayoutGroup settingsLayoutGroup;
	[SerializeField]
	private GameObject backButton;
	[SerializeField]
	private SettingsSlider mouseSensitivitySlider;
	private IEnumerator mouseSenseSetRoutine;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _MouseSetRoutine_d__13 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public ProfileSettingsMenu __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _MouseSetRoutine_d__13(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public ProfileSettingsMenu();

	// Methods
	public override void Start();
	private void Update();
	private void SetMouseSensitivitySlider(object value);
	public void UpdateBackButtonVisibility();
	public override void GoToPreviousMenu();
	private bool CanSaveSettings();
	public void MouseSensitivityChanged();
	[IteratorStateMachine(typeof(_MouseSetRoutine_d__13))]
	private IEnumerator MouseSetRoutine();
	public void ResetProfileSettings();
	protected override void OnDestroy();
}

