/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using WebGLSupport.Detail;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WebGLSupport
{
	internal class WrappedInputField : IInputField
	{
		// Fields
		private InputField input;
		private RebuildChecker checker;
	
		// Properties
		public bool ReadOnly { get; }
		public string text { get; set; }
		public string placeholder { get; }
		public int fontSize { get; }
		public ContentType contentType { get; }
		public LineType lineType { get; }
		public int characterLimit { get; }
		public int caretPosition { get; }
		public bool isFocused { get; }
		public int selectionFocusPosition { get; set; }
		public int selectionAnchorPosition { get; set; }
		public bool OnFocusSelectAll { get; }
	
		// Constructors
		public WrappedInputField(InputField input);
	
		// Methods
		public RectTransform RectTransform();
		public void ActivateInputField();
		public void DeactivateInputField();
		public void Rebuild();
	}
}
