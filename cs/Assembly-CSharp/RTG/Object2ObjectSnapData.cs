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
	public class Object2ObjectSnapData
	{
		// Fields
		private GameObject _gameObject;
		private AABB[] _snapAreaBounds;
		private BoxFaceAreaDesc[] _snapAreaDesc;
		private List<Vector3> _vertsBuffer;
	
		// Constructors
		public Object2ObjectSnapData();
	
		// Methods
		public bool Initialize(GameObject gameObject);
		public BoxFaceAreaDesc GetWorldSnapAreaDesc(BoxFace boxFace);
		public List<OBB> GetAllWorldSnapAreaBounds();
		public OBB GetWorldSnapAreaBounds(BoxFace boxFace);
		private List<AABB> BuildVertOverlapAABBs(GameObject gameObject, Sprite sprite, RTMesh rtMesh);
	}
}
