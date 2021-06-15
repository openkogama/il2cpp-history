/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class CustomNativeTemplateAd
	{
		// Fields
		private ICustomNativeTemplateClient client;
	
		// Constructors
		internal CustomNativeTemplateAd(ICustomNativeTemplateClient client);
	
		// Methods
		public List<string> GetAvailableAssetNames();
		public string GetCustomTemplateId();
		public Texture2D GetTexture2D(string key);
		public string GetText(string key);
		public void PerformClick(string assetName);
		public void RecordImpression();
	}
}
