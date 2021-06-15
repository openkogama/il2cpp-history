/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameControllerDesktop : MVGameControllerBase
{
	// Fields
	[SerializeField]
	private GameObject eventSystem;
	private ModeControllerBase modeController;
	private IEditModeObjectPicker editModeObjectPicker;
	private bool applicationHasFocus;
	private ILockCursorManager lockCursorManager;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static UnityAction _OnApplicationLostFocus_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static UnityAction _OnApplicationRegainedFocus_k__BackingField;
	private IAdManager adManager;

	// Properties
	private static MVGameControllerDesktop Instance { get; }
	public static UnityAction OnApplicationLostFocus { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static UnityAction OnApplicationRegainedFocus { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static ILockCursorManager LockCursorManager { get; }
	protected override IAdManager GetAdManager { get; }
	protected override bool IsPlayingInternal { get; }

	// Constructors
	public MVGameControllerDesktop();

	// Methods
	protected void Start();
	protected override void OnDestroy();
	public static void RegisterPlayModeController(DesktopPlayModeController playModeController);
	public static void UnregisterPlayModeController();
	public static void RegisterAvaterEditModeController(DesktopAvatarEditModeController avatarEditModeController);
	public static void RegisterEditModeController(DesktopEditModeController editModeController);
	public static void UnregisterEditModeController();
	protected override void UpdateInternal();
	protected override void LateUpdate();
	protected void OnApplicationFocus(bool focus);
	protected override void HandleApplicationQuit(QuitBaseCallback quitBaseCallback);
	protected override void CleanUp();
}

