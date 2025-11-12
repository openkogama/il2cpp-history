/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Utils.Cache
{
	public class KgmCacheManager : MonoBehaviour
	{
		// Fields
		[Header("Settings")]
		[SerializeField]
		private int timeoutImages;
		[CompilerGenerated]
		private static KgmCacheManager _Instance_k__BackingField;
		private readonly MemoryKgmCache<string, Sprite> contentImagesCache;
	
		// Properties
		public static KgmCacheManager Instance { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass7_0
		{
			// Fields
			public KgmCacheManager __4__this;
			public string imageUrl;
			public Action<Sprite> onSuccess;
	
			// Constructors
			public __c__DisplayClass7_0();
	
			// Methods
			internal void _DownloadImage_b__0(Sprite sprite1);
		}
	
		// Constructors
		public KgmCacheManager();
	
		// Methods
		private void Awake();
		public void DownloadImage(string imageUrl, Action<Sprite> onSuccess, Action<string> onError);
	}
}
