/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro.SpriteAssetUtilities
{
	public class TexturePacker_JsonArray
	{
		// Nested types
		[Serializable]
		public struct SpriteFrame
		{
			// Fields
			public float x;
			public float y;
			public float w;
			public float h;
	
			// Methods
			public override string ToString();
		}
	
		[Serializable]
		public struct SpriteSize
		{
			// Fields
			public float w;
			public float h;
	
			// Methods
			public override string ToString();
		}
	
		[Serializable]
		public struct Frame
		{
			// Fields
			public string filename;
			public SpriteFrame frame;
			public bool rotated;
			public bool trimmed;
			public SpriteFrame spriteSourceSize;
			public SpriteSize sourceSize;
			public Vector2 pivot;
		}
	
		[Serializable]
		public struct Meta
		{
			// Fields
			public string app;
			public string version;
			public string image;
			public string format;
			public SpriteSize size;
			public float scale;
			public string smartupdate;
		}
	
		[Serializable]
		public class SpriteDataObject
		{
			// Fields
			public List<Frame> frames;
			public Meta meta;
	
			// Constructors
			public SpriteDataObject();
		}
	
		// Constructors
		public TexturePacker_JsonArray();
	}
}
