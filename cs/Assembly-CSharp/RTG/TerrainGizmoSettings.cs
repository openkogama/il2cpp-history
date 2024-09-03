/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class TerrainGizmoSettings
	{
		// Fields
		[SerializeField]
		private float _offsetSnapStep;
		[SerializeField]
		private float _radiusSnapStep;
		[SerializeField]
		private float _rotationSensitivity;
		[SerializeField]
		private int _objectHrzMoveLayerMask;
		[SerializeField]
		private int _objectVertMoveLayerMask;
		[SerializeField]
		private int _objectRotationLayerMask;
		[SerializeField]
		private List<string> _objectHrzMoveIgnoreTags;
		[SerializeField]
		private List<string> _objectVertMoveIgnoreTags;
		[SerializeField]
		private List<string> _objectRotationIgnoreTags;
	
		// Properties
		public float OffsetSnapStep { get; set; }
		public float RadiusSnapStep { get; set; }
		public float RotationSensitivity { get; set; }
		public int ObjectHrzMoveLayerMask { get; set; }
		public int ObjectVertMoveLayerMask { get; set; }
		public int ObjectRotationLayerMask { get; set; }
	
		// Constructors
		public TerrainGizmoSettings();
	
		// Methods
		public void AddObjectHrzMoveIgnoreTag(string tag);
		public bool IsTagIgnoredForHrzMove(string tag);
		public void AddObjectVertMoveIgnoreTag(string tag);
		public bool IsTagIgnoredForVertMove(string tag);
		public void AddObjectRotationIgnoreTag(string tag);
		public bool IsTagIgnoredForRotation(string tag);
	}
}
