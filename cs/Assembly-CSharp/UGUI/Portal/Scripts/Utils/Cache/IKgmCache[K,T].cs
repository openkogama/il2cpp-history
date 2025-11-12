/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Utils.Cache
{
	public interface IKgmCache<K, T>
	{
		// Methods
		void Clear();
		bool Exists(K key);
		T Get(K key);
		bool TryGet(K key, out ref T value);
		void AddOrUpdate(K key, T value, int expirationSeconds, bool resetExpirationIfExists = false);
	}
}
