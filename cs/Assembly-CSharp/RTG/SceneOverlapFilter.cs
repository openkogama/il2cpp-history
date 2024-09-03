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
	public class SceneOverlapFilter
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
		public SceneOverlapFilter();
	
		// Methods
		public void FilterOverlaps(List<GameObject> gameObjects);
		[CompilerGenerated]
		private bool _FilterOverlaps_b__10_0(GameObject item);
	}
}
