/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public static class TMPro_EventManager
	{
		// Fields
		public static readonly FastAction<object, Compute_DT_EventArgs> COMPUTE_DT_EVENT;
		public static readonly FastAction<bool, Material> MATERIAL_PROPERTY_EVENT;
		public static readonly FastAction<bool, UnityEngine.Object> FONT_PROPERTY_EVENT;
		public static readonly FastAction<bool, UnityEngine.Object> SPRITE_ASSET_PROPERTY_EVENT;
		public static readonly FastAction<bool, UnityEngine.Object> TEXTMESHPRO_PROPERTY_EVENT;
		public static readonly FastAction<GameObject, Material, Material> DRAG_AND_DROP_MATERIAL_EVENT;
		public static readonly FastAction<bool> TEXT_STYLE_PROPERTY_EVENT;
		public static readonly FastAction<UnityEngine.Object> COLOR_GRADIENT_PROPERTY_EVENT;
		public static readonly FastAction TMP_SETTINGS_PROPERTY_EVENT;
		public static readonly FastAction RESOURCE_LOAD_EVENT;
		public static readonly FastAction<bool, UnityEngine.Object> TEXTMESHPRO_UGUI_PROPERTY_EVENT;
		public static readonly FastAction<UnityEngine.Object> TEXT_CHANGED_EVENT;
	
		// Constructors
		static TMPro_EventManager();
	
		// Methods
		public static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, Material mat);
		public static void ON_FONT_PROPERTY_CHANGED(bool isChanged, UnityEngine.Object obj);
		public static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, UnityEngine.Object obj);
		public static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, UnityEngine.Object obj);
		public static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(GameObject sender, Material currentMaterial, Material newMaterial);
		public static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged);
		public static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(UnityEngine.Object obj);
		public static void ON_TEXT_CHANGED(UnityEngine.Object obj);
		public static void ON_TMP_SETTINGS_CHANGED();
		public static void ON_RESOURCES_LOADED();
		public static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, UnityEngine.Object obj);
		public static void ON_COMPUTE_DT_EVENT(object Sender, Compute_DT_EventArgs e);
	}
}
