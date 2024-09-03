/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class TexturePool : Singleton<RTG.TexturePool>
	{
		// Fields
		private Texture2D _xAxisLabel;
		private Texture2D _yAxisLabel;
		private Texture2D _zAxisLabel;
		private Texture2D _camPerspMode;
		private Texture2D _camOrthoMode;
	
		// Properties
		public Texture2D XAxisLabel { get; }
		public Texture2D YAxisLabel { get; }
		public Texture2D ZAxisLabel { get; }
		public Texture2D CamPerspMode { get; }
		public Texture2D CamOrthoMode { get; }
	
		// Constructors
		public TexturePool();
	}
}
