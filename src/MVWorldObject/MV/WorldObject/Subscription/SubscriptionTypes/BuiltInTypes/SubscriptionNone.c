
/* SubscriptionNone() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionTypes::BuiltInTypes::
     SubscriptionNone::SubscriptionNone__ctor(SubscriptionNone *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.benefits =
       (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

