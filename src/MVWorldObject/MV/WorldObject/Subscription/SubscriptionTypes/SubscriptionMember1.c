
/* SubscriptionMember1() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionTypes::SubscriptionMember1::
     SubscriptionMember1__ctor(SubscriptionMember1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                   );
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    cRam_? = '\x01';
  }
  SubscriptionBase::SubscriptionBase__ctor((SubscriptionBase *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.benefits;
  pOVar2 = (Object *)
           func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
  if (pOVar2 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar2,ExceptionArgument__Enum_obj,unaff_EBX);
    pOVar2[1].klass = (Object__Class *)0x32;
    pOVar2[1].monitor = (MonitorData *)0xa;
    pOVar2[2].klass = (Object__Class *)0xa;
    pOVar2[2].monitor = (MonitorData *)0x190;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)0x1,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.benefits;
      pMVar3 = (MethodInfo *)&UNK_?;
      pOVar2 = (Object *)
               func_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                              );
      if (pOVar2 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar2,ExceptionArgument__Enum_obj,pMVar3);
        *(undefined1 *)&pOVar2[1].klass = 1;
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar1,(Object *)0x3,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.benefits;
          pMVar3 = (MethodInfo *)&UNK_?;
          pOVar2 = (Object *)
                   func_?(
                                  TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                  );
          if (pOVar2 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar2,ExceptionArgument__Enum_obj,pMVar3);
            *(undefined1 *)&pOVar2[1].klass = 1;
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar1,(Object *)0x4,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                        );
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.benefits;
              pMVar3 = (MethodInfo *)&UNK_?;
              pOVar2 = (Object *)
                       func_?(
                                      TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                      );
              if (pOVar2 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar2,ExceptionArgument__Enum_obj,pMVar3);
                *(undefined1 *)&pOVar2[1].klass = 1;
                if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar1,(Object *)0x5,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

