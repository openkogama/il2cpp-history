
/* SubscriptionMember2() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionTypes::SubscriptionMember2::
     SubscriptionMember2__ctor(SubscriptionMember2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SubscriptionBase::SubscriptionBase__ctor((SubscriptionBase *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields)._.benefits;
  pOVar2 = (Object *)
           FUN_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
  *(undefined4 *)&pOVar2[1].klass = 0x32;
  *(undefined4 *)((longlong)&pOVar2[1].klass + 4) = 10;
  *(undefined4 *)&pOVar2[1].monitor = 2;
  *(undefined4 *)((longlong)&pOVar2[1].monitor + 4) = 400;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              (pDVar1,1,pOVar2,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields)._.benefits;
    pOVar2 = (Object *)
             FUN_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                          );
    *(undefined1 *)&pOVar2[1].klass = 1;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                (pDVar1,3,pOVar2,CONCAT31((int3)(behavior >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

