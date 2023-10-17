/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeSettings;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class Theme : MonoBehaviour
{
	// Fields
	[SerializeField]
	private bool overrideSkyboxManager;
	[SerializeField]
	private RectTransform themeButtonImagePrefab;
	private List<ThemeComponent> components;
	[CompilerGenerated]
	private SettingsWrapper _Settings_k__BackingField;

	// Properties
	public bool OverrideSkyboxManager { get; }
	public RectTransform ThemeButtonImagePrefab { get; }
	public abstract string Identifier { get; }
	public abstract string DisplayName { get; }
	public abstract string Description { get; }
	public SettingsWrapper Settings { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public virtual List<RectTransform> Controllers { get; }

	// Constructors
	protected Theme();

	// Methods
	protected abstract void InitializeComponents();
	protected abstract void InitializeAttributes();
	public void InitializeForPreview();
	public void Initialize(int woid);
	private void Initialize();
	public void Activate();
	public void Deactivate();
	public void Add(ThemeComponent component);
	public void Purchase(int id);
	public virtual void ThemeReset();
}

