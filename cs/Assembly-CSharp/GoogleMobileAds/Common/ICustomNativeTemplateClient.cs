/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public interface ICustomNativeTemplateClient
	{
		// Methods
		string GetTemplateId();
		byte[] GetImageByteArray(string key);
		List<string> GetAvailableAssetNames();
		string GetText(string key);
		void PerformClick(string assetName);
		void RecordImpression();
	}
}
