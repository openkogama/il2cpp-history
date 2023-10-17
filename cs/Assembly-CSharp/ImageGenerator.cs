/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class ImageGenerator
{
	// Nested types
	[CompilerGenerated]
	private sealed class _CreateTextureFromData_d__0 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public MVWorldObjectClient wo;
		public Action<byte[]> callback;
		private Texture2D _previewTexture_5__2;
		private GameObject _previewRoot_5__3;
		private GameObject _itemCopy_5__4;
		private ObjectPreviewer _objectPreviewer_5__5;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CreateTextureFromData_d__0(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Methods
	[IteratorStateMachine(typeof(_CreateTextureFromData_d__0))]
	public static IEnumerator CreateTextureFromData(MVWorldObjectClient wo, Action<byte[]> callback);
}

