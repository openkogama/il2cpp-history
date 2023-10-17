/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamPngToSprite : MonoBehaviour
{
	// Fields
	[Header("Dependencies")]
	[SerializeField]
	protected RawImage rawImage;
	private bool currentlyDownloading;
	public Action OnDownloadFinish;

	// Constructors
	public StreamPngToSprite();

	// Methods
	public void StartDownloading(string downloadUrl);
	public void CancelDownload();
	public void DestroyTexture();
	private void StreamingTextureLoaded(UnityWebRequest www);
	public void SetImageTexture(Texture texture);
	public void Reset();
	private void OnDestroy();
}

