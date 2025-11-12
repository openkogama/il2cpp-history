/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gamestrap;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Styles : MonoBehaviour
{
	// Fields
	private static readonly Dictionary<MVTeam, ColorStyle> teamToColorStyle;
	private static readonly Dictionary<MVTeam, ColorStyle> teamToDarkColorStyle;
	private static Dictionary<ButtonStyle, ButtonStyleDef> buttonStylesDictionary;
	private static Dictionary<TextStyle, TextStyleDef> textStylesDictionary;
	private static Dictionary<ColorStyle, ColorStyleDef> colorStylesDictionary;
	private static Dictionary<MVTeam, TeamIconStyleDef> teamIconStylesDictionary;
	private static Dictionary<EffectStyle, EffectStyleDef> effectStylesDictionary;
	private static Dictionary<SoundStyle, AudioSource> soundStylesDictionary;
	private static Dictionary<AccessoryRarity, RarityStylesDef> accessoryRarityColorsDictionary;
	[SerializeField]
	private List<ButtonStyleDef> buttonStyles;
	[SerializeField]
	private List<TextStyleDef> textStyles;
	[SerializeField]
	private List<ColorStyleDef> colorStyles;
	[SerializeField]
	private List<TeamIconStyleDef> teamIconStyles;
	[SerializeField]
	private List<EffectStyleDef> effectStyles;
	[SerializeField]
	private List<SoundStyleDef> soundStyles;
	[SerializeField]
	private List<RarityStylesDef> rarityStyles;
	private static bool isInitialized;

	// Nested types
	[Serializable]
	private class EffectStyleDef
	{
		// Fields
		[SerializeField]
		public EffectStyle effectStyle;
		[SerializeField]
		private bool shadow;
		[SerializeField]
		private Color shadowEffectColor;
		[SerializeField]
		private Vector2 shadowEffectDistance;
		[SerializeField]
		private bool shadowUseGraphicAlpha;
		[SerializeField]
		private bool outline;
		[SerializeField]
		private Color outlineEffectColor;
		[SerializeField]
		private Vector2 outlineEffectDistance;
		[SerializeField]
		private bool outlineUseGraphicAlpha;
		[SerializeField]
		private bool gradient;
		[SerializeField]
		private Color gradientTop;
		[SerializeField]
		private Color gradientBottom;

		// Constructors
		public EffectStyleDef();

		// Methods
		public void Set(EffectStyleObject effectStyleObject);
		private void SetShadow(Shadow shadow);
		private void SetOutline(Outline outline);
		private void SetGradient(GradientEffect gradient);
	}

	[Serializable]
	private class ButtonStyleDef
	{
		// Fields
		[SerializeField]
		private ColorBlock colorBlock;
		[SerializeField]
		public ButtonStyle buttonStyle;

		// Constructors
		public ButtonStyleDef();

		// Methods
		public void Set(UnityEngine.UI.Button button);
	}

	[Serializable]
	private class TextStyleDef
	{
		// Fields
		[SerializeField]
		public TextStyle textStyle;
		[SerializeField]
		private Font font;
		[SerializeField]
		private int fontSize;
		[SerializeField]
		private FontStyle fontStyle;
		[SerializeField]
		private float lineSpacing;

		// Constructors
		public TextStyleDef();

		// Methods
		public void Set(UnityEngine.UI.Text text);
	}

	[Serializable]
	private class SoundStyleDef
	{
		// Fields
		[SerializeField]
		public SoundStyle soundStyle;
		[SerializeField]
		public AudioSource audioSource;

		// Constructors
		public SoundStyleDef();
	}

	[Serializable]
	private class ColorStyleDef
	{
		// Fields
		[SerializeField]
		public ColorStyle colorStyle;
		[SerializeField]
		public Color color;

		// Constructors
		public ColorStyleDef();

		// Methods
		public void Set(Graphic graphic);
	}

	[Serializable]
	private class TeamIconStyleDef
	{
		// Fields
		[SerializeField]
		public MVTeam team;
		[SerializeField]
		public Sprite sprite;

		// Constructors
		public TeamIconStyleDef();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass21_0
	{
		// Fields
		public AudioSource audioSource;

		// Constructors
		public __c__DisplayClass21_0();

		// Methods
		internal void _SetStyle_b__0();
	}

	// Constructors
	public Styles();
	static Styles();

	// Methods
	private void Awake();
	protected void OnDestroy();
	public void Initialize();
	private static bool HandleUnInitalized();
	public static void SetStyle(UnityEngine.UI.Button button, ButtonStyle buttonStyle, ColorStyle colorStyle, SoundStyle soundStyle);
	public static void SetStyle(UnityEngine.UI.Text text, TextStyle textStyle, ColorStyle colorStyle);
	public static void SetStyle(Graphic graphic, ColorStyle colorStyle);
	public static void SetStyle(Graphic image, MVTeam team);
	public static void SetStyle(UnityEngine.UI.Button button, ButtonStyle buttonStyle, MVTeam team, SoundStyle soundStyle = SoundStyle.NoSound);
	public static void SetStyle(EffectStyleObject effectStyleObject, EffectStyle effectStyle);
	public static Color GetTeamColor(MVTeam team, bool darkTeam = false);
	public static ColorStyle GetTeamColorStyle(MVTeam team, bool darkTeam = false, bool alwaysColor = false);
	public static Color GetColor(ColorStyle colorStyle);
	public static string ColorToHex(Color32 color);
	public static Color HexToColor(string hex);
	public static void TeamToSprite(Image image, MVTeam team);
	public static void PlayUISound(SoundStyle soundStyle);
	public static RarityStylesDef GetAccessoryColorsFromPrice(int price);
	public static RarityStylesDef GetAccessoryColorsFromLevel(int level);
}

