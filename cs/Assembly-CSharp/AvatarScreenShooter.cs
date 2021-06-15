/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarScreenShooter : MonoBehaviour
{
	// Fields
	private bool isMakingScreenShot;
	[SerializeField]
	private GameObject bodyCloneGO;
	public Vector3 cameraOffset;
	public Vector3 lookAtOffset;
	public Rect previewPosition;
	private Action<Texture2D, string> callback;
	private string successMessage;

	// Constructors
	public AvatarScreenShooter();

	// Methods
	public void TakeScreenShot(Action<Texture2D, string> callback, MVBody body, bool ignoreAccessories = false, string successMessage = "Screenshot taken successfully!");
	private void ScreenShotDataTexHandler(Texture2D screenshotTex);
}

