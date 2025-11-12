/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.MetaData
{
	public class UserProfileData
	{
		// Fields
		public bool IsAdmin;
		public string UserName;
		public int Gold;
		public bool IsTourist;
		public bool IsUnderAge;
		public SubscriptionData SubscriptionData;
	
		// Constructors
		public UserProfileData();
	
		// Methods
		public static UserProfileData CreateRegisteredProfileData(bool admin, string username, int gold, System.DateTime? age);
		private static bool CheckUnderAge(bool admin, System.DateTime? age);
		public static UserProfileData GetTouristProfileData(string userName);
	}
}
