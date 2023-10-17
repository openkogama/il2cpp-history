/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WebGLSupport
{
	public interface IInputField
	{
		// Properties
		ContentType contentType { get; }
		LineType lineType { get; }
		int fontSize { get; }
		string text { get; set; }
		string placeholder { get; }
		int characterLimit { get; }
		int caretPosition { get; }
		bool isFocused { get; }
		int selectionFocusPosition { get; set; }
		int selectionAnchorPosition { get; set; }
		bool ReadOnly { get; }
		bool OnFocusSelectAll { get; }
	
		// Methods
		RectTransform RectTransform();
		void ActivateInputField();
		void DeactivateInputField();
		void Rebuild();
	}
}
