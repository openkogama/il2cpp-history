/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelDisplayCube : MonoBehaviour
{
	// Fields
	public GameObject cube;
	private Texture2D badgeTextureAsset;
	private bool waitingForBadgeTexture;
	private Renderer[] renderers;

	// Properties
	public Renderer[] Renderers { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _SetAmount_c__AnonStorey0
	{
		// Fields
		internal int levelAmount;
		internal LevelDisplayCube _this;

		// Constructors
		public _SetAmount_c__AnonStorey0();

		// Methods
		internal void __m__0();
	}

	// Constructors
	public LevelDisplayCube();

	// Methods
	public void Initialize();
	public void SetAmount(int levelAmount);
	private void OnBadgeTextureReceived(UnityWebRequest www);
	public void Destroy();
	public void SetScale(Vector3 size);
}

