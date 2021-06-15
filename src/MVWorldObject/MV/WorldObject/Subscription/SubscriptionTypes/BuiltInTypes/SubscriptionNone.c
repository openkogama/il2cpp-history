
/* SubscriptionNone() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionTypes::BuiltInTypes::
     SubscriptionNone::SubscriptionNone__ctor(SubscriptionNone *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  (this->fields)._.benefits = this_00;
  return;
}

