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

namespace MV.WorldObject.Subscription
{
	public abstract class SubscriptionBase
	{
		// Fields
		protected Dictionary<SubscriptionBenefit, SubscriptionRule> benefits;
	
		// Constructors
		protected SubscriptionBase();
	
		// Methods
		public bool HasBenefit(SubscriptionBenefit subscriptionBenefit);
		public bool TryGetRule<T>(SubscriptionBenefit subscriptionBenefit, out ref T rule)
			where T : SubscriptionRule;
	}
}
