/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.MVTextMsg
{
	public static class MvTextMsgData
	{
		// Fields
		public const int LatestVersion = 2;
		public const float FontSizeConversion = 10f;
		public const string FontShaderPath = "TextMeshPro/Mobile/Distance Field";
		public static readonly Dictionary<object, object> DefaultData;
		private static readonly Dictionary<object, object> minValues;
		private static readonly Dictionary<object, object> maxValues;
	
		// Nested types
		public abstract class Keys
		{
			// Fields
			public const string VersionKey = "version";
			public const string TextKey = "text";
			public const string FontSelectionKey = "fontSelection";
			public const string TextSizeKey = "textSize";
			public const string TextThicknessKey = "textThickness";
			public const string TextColorKey = "textColor";
			public const string TextOutlineToggleKey = "textOutline";
			public const string TextOutlineThicknessKey = "textOutlineThickness";
			public const string TextOutlineColorKey = "textOutlineColor";
			public const string TextItalicToggleKey = "textItalic";
			public const string TextUnderscoredToggleKey = "textUnderscored";
			public const string BackgroundToggleKey = "background";
			public const string BackgroundWidthKey = "backgroundWidth";
			public const string BackgroundColorKey = "backgroundColor";
			public const string BackgroundRadiusKey = "backgroundRadius";
			public const string BackgroundOutlineToggleKey = "backgroundOutline";
			public const string BackgroundOutlineThicknessKey = "backgroundOutlineThickness";
			public const string BackgroundOutlineColorKey = "backgroundOutlineColor";
			public const string BillboardToggleKey = "billboard";
	
			// Constructors
			protected Keys();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			public Dictionary<object, object> data;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal string _MigrateDataBasedOnVersion_b__0(Match match);
		}
	
		// Constructors
		static MvTextMsgData();
	
		// Methods
		public static float MinValue(string key);
		public static float MaxValue(string key);
		public static Dictionary<object, object> MigrateDataBasedOnVersion(Dictionary<object, object> data);
		public static List<string> GetMigratedDataKeysBasedOnVersion(int version);
	}
}
