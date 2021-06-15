/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarPictureTakerUGUI : MonoBehaviour
{
	// Fields
	public int previewResolution;
	private GameObject _avatarCloneGO;
	private BoneAnimation _boneAnimation;
	private bool isCurrentAvatarBody;
	[SerializeField]
	private Camera pictureCamera;
	[CompilerGenerated]
	private static Action<MeshRenderer> __f__am_cache0;
	[CompilerGenerated]
	private static Action<MeshRenderer> __f__am_cache1;
	[CompilerGenerated]
	private static Action<MeshRenderer> __f__am_cache2;

	// Constructors
	public AvatarPictureTakerUGUI();

	// Methods
	public void TakePicture(MVWorldObjectClient avatar, int avatarIndex, Action<int, Texture2D> OnPictureTaken, bool isCurrentBody);
	private void OnPreCull();
	private void OnPostRender();
	private void CleanupRenderTex();
	[CompilerGenerated]
	private static void _TakePicture_m__0(MeshRenderer mr);
	[CompilerGenerated]
	private static void _OnPreCull_m__1(MeshRenderer mr);
	[CompilerGenerated]
	private static void _OnPostRender_m__2(MeshRenderer mr);
}

