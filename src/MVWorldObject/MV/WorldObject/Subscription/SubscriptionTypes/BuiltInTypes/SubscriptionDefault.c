
/* SubscriptionDefault() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionTypes::BuiltInTypes::
     SubscriptionDefault::SubscriptionDefault__ctor(SubscriptionDefault *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                   );
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster);
    func_?(&
                    TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                   );
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    cRam_? = '\x01';
  }
  SubscriptionBase::SubscriptionBase__ctor((SubscriptionBase *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields)._.benefits;
  method_01 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
  value = (MethodInfo *)func_?();
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  value->invoker_method = (InvokerMethod)0x0;
  value->name = (char *)0xa;
  value->klass = (Il2CppClass *)0xa;
  value->return_type = (Il2CppType *)0x190;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              (pDVar1,1,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
              );
    pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields)._.benefits;
    pOVar2 = (Object *)
             func_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster
                            );
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar2,ExceptionArgument__Enum_obj,method_00);
    pOVar2[1].klass = (Object__Class *)0x0;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                (pDVar1,2,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                );
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields)._.benefits;
      pOVar2 = (Object *)
               func_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                              );
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (pOVar2,ExceptionArgument__Enum_obj,method_00);
      *(undefined1 *)&pOVar2[1].klass = 0;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  (pDVar1,3,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

