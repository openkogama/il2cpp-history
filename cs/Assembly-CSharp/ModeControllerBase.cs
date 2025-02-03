/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ModeControllerBase : MonoBehaviour, IToggleFps, ITogglePlayerIndicators, IPlayModeUI
{
	// Fields
	[SerializeField]
	private GameObject fpsCounterPrefab;
	[SerializeField]
	private LocationIndicatorsManager locationIndicatorsManagerPrefab;
	[SerializeField]
	private Sprite resetGameSprite;
	private GameObject fpsCounter;
	private LocationIndicatorsManager locationIndicatorsManager;
	[CompilerGenerated]
	private bool _IsDying_k__BackingField;
	[CompilerGenerated]
	private bool _IsInLobby_k__BackingField;

	// Properties
	public virtual bool IsInPauseMenu { get; set; }
	public bool IsDying { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool IsInLobby { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	protected ModeControllerBase();

	// Methods
	public virtual void Initialize();
	public virtual void ShowEUseIcon(ShowUseOption option, int woId = 0);
	public virtual void HideEUseIcon();
	public virtual IGUICrossHair GetCrossHair();
	protected bool CannotLeaveEditPlayMode();
	public void ToggleFps();
	public void TogglePlayerIndicators();
	protected void HandleFpsShortcut();
}

