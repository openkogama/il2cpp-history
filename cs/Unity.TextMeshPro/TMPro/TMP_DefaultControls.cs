/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public static class TMP_DefaultControls
	{
		// Fields
		private const float kWidth = 160f;
		private const float kThickHeight = 30f;
		private const float kThinHeight = 20f;
		private static Vector2 s_TextElementSize;
		private static Vector2 s_ThickElementSize;
		private static Vector2 s_ThinElementSize;
		private static Color s_DefaultSelectableColor;
		private static Color s_TextColor;
	
		// Nested types
		public struct Resources
		{
			// Fields
			public Sprite standard;
			public Sprite background;
			public Sprite inputField;
			public Sprite knob;
			public Sprite checkmark;
			public Sprite dropdown;
			public Sprite mask;
		}
	
		// Constructors
		static TMP_DefaultControls();
	
		// Methods
		private static GameObject CreateUIElementRoot(string name, Vector2 size);
		private static GameObject CreateUIObject(string name, GameObject parent);
		private static void SetDefaultTextValues(TMP_Text lbl);
		private static void SetDefaultColorTransitionValues(Selectable slider);
		private static void SetParentAndAlign(GameObject child, GameObject parent);
		private static void SetLayerRecursively(GameObject go, int layer);
		public static GameObject CreateScrollbar(Resources resources);
		public static GameObject CreateButton(Resources resources);
		public static GameObject CreateText(Resources resources);
		public static GameObject CreateInputField(Resources resources);
		public static GameObject CreateDropdown(Resources resources);
		private static T AddComponent<T>(GameObject go)
			where T : Component;
	}
}
