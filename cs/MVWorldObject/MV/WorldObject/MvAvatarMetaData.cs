/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class MvAvatarMetaData
	{
		// Fields
		public readonly int avatarID;
		public readonly string name;
		public readonly int priceGold;
		public readonly bool isOnMarketPlace;
		public readonly bool canBeSoldOnMarketPlace;
	
		// Constructors
		public MvAvatarMetaData(int avatarID, string name, int priceGold, bool isOnMarketPlace, bool canBeSoldOnMarketPlace);
		public MvAvatarMetaData(BytePacker bp);
	
		// Methods
		public byte[] ToByteArray();
		public override string ToString();
	}
}
