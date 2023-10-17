/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarPictureTakerUGUI : MonoBehaviour
{
	// Fields
	public int previewResolution;
	private GameObject _avatarCloneGO;
	private BoneAnimation _boneAnimation;
	private bool isCurrentAvatarBody;
	[SerializeField]
	private Camera pictureCamera;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Action<MeshRenderer> __9__5_0;
		public static Action<MeshRenderer> __9__6_0;
		public static Action<MeshRenderer> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _TakePicture_b__5_0(MeshRenderer mr);
		internal void _OnPreCull_b__6_0(MeshRenderer mr);
		internal void _OnPostRender_b__7_0(MeshRenderer mr);
	}

	// Constructors
	public AvatarPictureTakerUGUI();

	// Methods
	public void TakePicture(MVWorldObjectClient avatar, int avatarIndex, Action<int, Texture2D> OnPictureTaken, bool isCurrentBody);
	private void OnPreCull();
	private void OnPostRender();
	private void CleanupRenderTex();
}

