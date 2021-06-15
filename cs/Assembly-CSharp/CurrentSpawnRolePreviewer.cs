/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CurrentSpawnRolePreviewer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage previewImage;
	[SerializeField]
	private AvatarPreviewer previewerPrefab;
	[SerializeField]
	private GameObject dropShadowPlane;
	private Transform avatarResetToTransform;
	private MVBody avatarBody;
	private GameObject bodyClone;
	private Animation goAnimation;
	private AvatarPreviewer previewer;

	// Constructors
	public CurrentSpawnRolePreviewer();

	// Methods
	public void SetupPreviewer(int previewDimensionsX = 512, int previewDimensionsY = 1024);
	public void ChangeAnimation(string NewAnimation);
	private void RemoveSkinnedMeshOptimizers();
	private void OnDestroy();
}

