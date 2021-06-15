/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeWorldObject : MVWorldObjectClient
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Theme _Visualization_k__BackingField;

	// Properties
	public bool SkyboxOverride { get; }
	public Dictionary<object, object> SettingsData { get; }
	public string Identifier { get; }
	public Theme Visualization { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public ThemeWorldObject(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Destroy();
	public void CommitSettings();
	public override void Reset();
	public override void OnDataUpdate();
}

