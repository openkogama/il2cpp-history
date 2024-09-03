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
	public class Object2ObjectSnapDataDb : Singleton<RTG.Object2ObjectSnapDataDb>
	{
		// Fields
		private Dictionary<GameObject, Object2ObjectSnapData> _objectToSnapData;
	
		// Constructors
		public Object2ObjectSnapDataDb();
	
		// Methods
		public Object2ObjectSnapData GetObject2ObjectSnapData(GameObject gameObject);
	}
}
