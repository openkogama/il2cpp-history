/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.Subscription;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Subscription.SubscriptionRules
{
	public class XpBooster : SubscriptionRule
	{
		// Fields
		public readonly int baseBoost;
		public readonly int firstOtherMemberBoost;
		public readonly int otherMembersBoost;
		public readonly int maxMemberBoost;
	
		// Constructors
		public XpBooster(int baseBoost, int firstOtherMemberBoost, int otherMembersBoost, int maxMemberBoost);
	
		// Methods
		public int GetBoostedXp(int xp, int membersCount);
		public int GetTotalXPBoost(int membersCount);
	}
}
