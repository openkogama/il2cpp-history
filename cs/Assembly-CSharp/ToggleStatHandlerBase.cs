/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ToggleStatHandlerBase : MonoBehaviour
{
	// Fields
	private bool waitingForToggleCallback;
	[SerializeField]
	protected UnityEngine.UI.Button button;
	[SerializeField]
	protected bool toggleState;
	[SerializeField]
	protected UnityAction<bool> toggleCallback;
	[SerializeField]
	protected ToggleHandler toggleHandler;
	[SerializeField]
	protected bool usingImageComponent;
	[SerializeField]
	protected Image imageComponent;
	public ToggleStateHandlerOnStartSetValue OnStartSetValue;

	// Properties
	protected Image CurrentImage { get; }
	public bool ToggleState { get; set; }

	// Constructors
	protected ToggleStatHandlerBase();

	// Methods
	protected abstract void UpdateToggleState();
	private void Start();
	private void Reset();
	private void OnValidate();
	public virtual bool CurrentToggleState();
	public void Toggle();
	private void ToggleCallback(bool newState);
}

