/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SoundViewItem : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	private bool previewLoaded;
	private SoundTabInfo tabInfo;
	[SerializeField]
	private ToolTip toolTip;
	[SerializeField]
	private Image selectedImage;
	[SerializeField]
	private Image soundImage;
	[SerializeField]
	private UnityEngine.UI.Text title;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private Button buttonComponent;
	private UnityAction<string> setNewOriginalUrl;
	private string originalUrl;
	private bool doneLoading;

	// Nested types
	[CompilerGenerated]
	private sealed class _ChangeUrl_c__AnonStorey0
	{
		// Fields
		internal string url;

		// Constructors
		public _ChangeUrl_c__AnonStorey0();

		// Methods
		internal void __m__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SoundViewItem();

	// Methods
	public void Initialize(SoundTabInfo info, string originalUrl, UnityAction<string> setNewOriginalUrl);
	private void OnDownloadFinished(UnityWebRequest www);
	public void UnsubscribePendingDownloads();
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void OnClick();
	private void ChangeUrl(string url);
	private void OnDestroy();
}

