/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Utils.Cache
{
	public class KgmCacheItem<T>
	{
		// Fields
		[CompilerGenerated]
		private T _Item_k__BackingField;
		private int expiration;
		private float timer;
	
		// Properties
		public T Item { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public KgmCacheItem(T i, int e, float t);
	
		// Methods
		public KgmCacheItem<T> Update(T value, int expirationSeconds);
		public KgmCacheItem<T> Update(T value, int expirationSeconds, float t);
		public bool IsExpired(float time);
	}
}
