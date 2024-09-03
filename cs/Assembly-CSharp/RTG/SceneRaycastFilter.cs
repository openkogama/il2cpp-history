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
	public class SceneRaycastFilter
	{
		// Fields
		private List<GameObjectType> _allowedObjectTypes;
		private List<GameObject> _ignoreObjects;
		private int _layerMask;
	
		// Properties
		public List<GameObjectType> AllowedObjectTypes { get; }
		public List<GameObject> IgnoreObjects { get; }
		public int LayerMask { get; set; }
	
		// Constructors
		public SceneRaycastFilter();
	
		// Methods
		public void FilterHits(List<GameObjectRayHit> hits);
		[CompilerGenerated]
		private bool _FilterHits_b__10_0(GameObjectRayHit item);
	}
}
