/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class MvAvatarMetaDataWoMap
	{
		// Fields
		private Dictionary<int, MvAvatarMetaData> avatarWOIDAvatarMetaData;
	
		// Constructors
		public MvAvatarMetaDataWoMap();
		public MvAvatarMetaDataWoMap(BytePacker bp);
	
		// Methods
		public bool TryGetValue(int woID, out MvAvatarMetaData avatarMetaData);
		public void Add(int woID, MvAvatarMetaData avatarMetaData);
		public void ResetAvatar(int prevAvatarWoID, int newAvatarWoID);
		public override string ToString();
	}
}
