/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarBadge : MonoBehaviour
{
	// Fields
	[SerializeField]
	private MeshRenderer badgeRenderer;
	[SerializeField]
	private TextMesh levelText;
	[SerializeField]
	private ScaleAnimations scaleAnimation;
	private Texture badgeTextureAsset;
	private int ownerActorId;

	// Constructors
	public AvatarBadge();

	// Methods
	public void Initialize(int ownerActorId);
	private void OnLevelingInitialized();
	private void UpdateBadge(int level);
	private void OnDestroy();
	private void OnBadgeTextureReceived(UnityWebRequest www);
	private void ScaleAnimationIntermediateCallback(float extraTime);
}

