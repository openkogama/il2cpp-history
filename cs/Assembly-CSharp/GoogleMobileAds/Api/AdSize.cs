/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdSize
	{
		// Fields
		private Type type;
		private Orientation orientation;
		private int width;
		private int height;
		public static readonly AdSize Banner;
		public static readonly AdSize MediumRectangle;
		public static readonly AdSize IABBanner;
		public static readonly AdSize Leaderboard;
		public static readonly AdSize SmartBanner;
		public static readonly int FullWidth;
	
		// Properties
		public int Width { get; }
		public int Height { get; }
		public Type AdType { get; }
		internal Orientation Orientation { get; }
	
		// Nested types
		public enum Type
		{
			Standard = 0,
			SmartBanner = 1,
			AnchoredAdaptive = 2
		}
	
		// Constructors
		public AdSize(int width, int height);
		private AdSize(int width, int height, Type type);
		static AdSize();
	
		// Methods
		private static AdSize CreateAnchoredAdaptiveAdSize(int width, Orientation orientation);
		public static AdSize GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth(int width);
		public static AdSize GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(int width);
		public static AdSize GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(int width);
		public override bool Equals(object obj);
		public static bool operator ==(AdSize a, AdSize b);
		public static bool operator !=(AdSize a, AdSize b);
		public override int GetHashCode();
	}
}
