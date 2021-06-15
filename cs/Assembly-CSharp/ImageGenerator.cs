/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class ImageGenerator
{
	// Nested types
	[CompilerGenerated]
	private sealed class _CreateTextureFromData_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal int _textureSize___0;
		internal Texture2D _previewTexture___0;
		internal GameObject _previewRoot___0;
		internal MVWorldObjectClient wo;
		internal MVComponent[] _mvComponents___0;
		internal MVComponent[] _locvar0;
		internal int _locvar1;
		internal GameObject _itemCopy___0;
		internal MVComponent[] _locvar2;
		internal int _locvar3;
		internal ObjectPreviewer _objectPreviewer___0;
		internal byte[] _bytes___0;
		internal Action<byte[]> callback;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CreateTextureFromData_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Methods
	[DebuggerHidden]
	public static IEnumerator CreateTextureFromData(MVWorldObjectClient wo, Action<byte[]> callback);
}

