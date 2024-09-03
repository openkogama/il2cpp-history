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
	public class ObjectTransformGizmoSettings : Settings
	{
		// Fields
		[SerializeField]
		private int _transformableLayers;
		private HashSet<GameObject> _nonTransformableObjects;
	
		// Properties
		public int TransformableLayers { get; set; }
	
		// Constructors
		public ObjectTransformGizmoSettings();
	
		// Methods
		public bool IsLayerTransformable(int objectLayer);
		public void SetLayerTransformable(int objectLayer, bool isTransformable);
		public bool IsObjectTransformable(GameObject gameObject);
		public void SetObjectTransformable(GameObject gameObject, bool isTransformable);
		public void SetObjectCollectionTransformable(List<GameObject> gameObjectCollection, bool areTransformable);
	}
}
