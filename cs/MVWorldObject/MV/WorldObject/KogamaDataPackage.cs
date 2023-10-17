/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class KogamaDataPackage
	{
		// Fields
		public int rootIdWo;
		public Dictionary<int, MVPrototype> prototypes;
		public Dictionary<int, MVWorldObject> worldObjects;
		public Dictionary<int, Link> links;
		public Dictionary<int, ObjectLink> objectLinks;
	
		// Constructors
		public KogamaDataPackage();
	
		// Methods
		public void SetKogamaPackageToProfileID(int profileID);
		public override string ToString();
	}
}
