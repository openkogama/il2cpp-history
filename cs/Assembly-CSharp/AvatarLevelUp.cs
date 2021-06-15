/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarLevelUp : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ParticleSystem onLevelUpParticleSystem;
	[SerializeField]
	private TextMesh levelText;
	[SerializeField]
	private ScaleAnimation scaleAnimation;
	private int ownerActorNr;

	// Constructors
	public AvatarLevelUp();

	// Methods
	public void Init(int ownerActorNr);
	private void OnScaleAnimationStopped(float extraTime);
	private void OnLevelChanged(int level);
	private void OnDestroy();
}

