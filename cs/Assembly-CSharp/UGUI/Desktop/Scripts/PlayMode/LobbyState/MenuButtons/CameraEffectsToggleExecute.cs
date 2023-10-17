/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.PlayMode.LobbyState.MenuButtons
{
	public class CameraEffectsToggleExecute : ToggleHandler
	{
		// Fields
		[SerializeField]
		private ToggleStateHandler toggleStateHandler;
		[SerializeField]
		private ToolTip toolTip;
		private bool hasCallbacks;
		private bool ignoreCamEffectCallback;
	
		// Constructors
		public CameraEffectsToggleExecute();
	
		// Methods
		private void Awake();
		private void CamEffectsUpdate(bool obj);
		private static bool StartSetValue();
		public override void ExecuteToggleState(bool toggleState, UnityAction<bool> toggleCallback);
		private void OnDestroy();
	}
}
