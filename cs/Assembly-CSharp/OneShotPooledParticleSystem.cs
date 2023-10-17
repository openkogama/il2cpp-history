/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OneShotPooledParticleSystem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ParticleSystem particles;
	private PoolEnums type;

	// Constructors
	public OneShotPooledParticleSystem();

	// Methods
	public static ParticleSystem Instantiate(PoolEnums type);
	public static ParticleSystem Instantiate(PoolEnums type, Vector3 position, Quaternion rotation, Color? particleColor = default);
	private void OnValidate();
	private void Update();
}

