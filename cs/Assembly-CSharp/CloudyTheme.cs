/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CloudyTheme : CloudyThemeBase
{
	// Fields
	[Header]
	[SerializeField]
	private string identifier;
	[SerializeField]
	private string displayName;
	[SerializeField]
	private string description;

	// Properties
	public override string Identifier { get; }
	public override string DisplayName { get; }
	public override string Description { get; }

	// Constructors
	public CloudyTheme();

	// Methods
	private string Validate(string str);
}

