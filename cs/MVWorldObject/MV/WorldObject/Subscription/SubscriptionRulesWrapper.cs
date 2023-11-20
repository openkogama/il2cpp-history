/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.Subscription.SubscriptionTypes.BuiltInTypes;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Subscription
{
	public class SubscriptionRulesWrapper
	{
		// Fields
		private readonly SubscriptionBase subscriptionBase;
		private readonly SubscriptionDefault subscriptionDefault;
		public readonly SubscriptionType SubscriptionType;
	
		// Constructors
		public SubscriptionRulesWrapper(SubscriptionType subscriptionType);
	
		// Methods
		public bool HasBenefit(SubscriptionBenefit subscriptionBenefit);
		public T GetRule<T>(SubscriptionBenefit subscriptionBenefit)
			where T : SubscriptionRule;
		private static SubscriptionBase GetSubscription(SubscriptionType subscriptionType);
		public override string ToString();
	}
}
