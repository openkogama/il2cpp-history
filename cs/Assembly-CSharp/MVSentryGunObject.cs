/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVSentryGunObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private SentryGunScript sentryGunScript;
	[SerializeField]
	private AudioSource audioSource;

	// Properties
	public SentryGunScript SentryGunScript { get; }
	public AudioSource AudioSource { get; }

	// Constructors
	public MVSentryGunObject();

	// Methods
	protected override void OnValidate();
}

