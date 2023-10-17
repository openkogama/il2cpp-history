/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WebGLSupport
{
	internal class WebGLInputPlugin
	{
		// Constructors
		public WebGLInputPlugin();
	
		// Methods
		public static void WebGLInputInit();
		public static int WebGLInputCreate(string canvasId, int x, int y, int width, int height, int fontsize, string text, string placeholder, bool isMultiLine, bool isPassword, bool isHidden, bool isMobile);
		public static void WebGLInputEnterSubmit(int id, bool flag);
		public static void WebGLInputTab(int id, Action<int, int> cb);
		public static void WebGLInputFocus(int id);
		public static void WebGLInputOnFocus(int id, Action<int> cb);
		public static void WebGLInputOnBlur(int id, Action<int> cb);
		public static void WebGLInputOnValueChange(int id, Action<int, string> cb);
		public static void WebGLInputOnEditEnd(int id, Action<int, string> cb);
		public static int WebGLInputSelectionStart(int id);
		public static int WebGLInputSelectionEnd(int id);
		public static int WebGLInputSelectionDirection(int id);
		public static void WebGLInputSetSelectionRange(int id, int start, int end);
		public static void WebGLInputMaxLength(int id, int maxlength);
		public static void WebGLInputText(int id, string text);
		public static bool WebGLInputIsFocus(int id);
		public static void WebGLInputDelete(int id);
		public static void WebGLInputForceBlur(int id);
	}
}
