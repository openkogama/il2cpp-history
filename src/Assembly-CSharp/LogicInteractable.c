
/* Void Heal(Single, MVPlayer) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_Heal
               (LogicInteractable *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TakeDamageEventArgs);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).OnDamageEvent;
  if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
    this_00 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
    TakeDamageEventArgs::TakeDamageEventArgs__ctor
              (this_00,(float)((uint)amount ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ),healer,PlayerKilledByType__Enum_None,(MethodInfo *)0x0);
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void HealOverTime(AvatarModifierPackageType, MVPlayer) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_HealOverTime
               (LogicInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *healer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TakeDamageEventArgs);
    cRam_? = '\x01';
  }
  if (healer != (MVPlayer *)0x0) {
    (*(code *)(this->klass->vtable).AddModifier.method)
              (this,type,(healer->fields)._ActorNr_k__BackingField,0,
               (this->klass->vtable).HasModifier.methodPtr);
    pEVar1 = (this->fields).OnDamageEvent;
    if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
      this_00 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
      TakeDamageEventArgs::TakeDamageEventArgs__ctor
                (this_00,0.0,healer,PlayerKilledByType__Enum_None,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_TakeDamage
               (LogicInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TakeDamageEventArgs);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).OnDamageEvent;
  if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
    this_00 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
    TakeDamageEventArgs::TakeDamageEventArgs__ctor
              (this_00,amount,damageDealer,damageType,(MethodInfo *)0x0);
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void TakeDamageOverTime(AvatarModifierPackageType, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_TakeDamageOverTime
               (LogicInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TakeDamageEventArgs);
    cRam_? = '\x01';
  }
  if (damageDealer != (MVPlayer *)0x0) {
    (*(code *)(this->klass->vtable).AddModifier.method)
              (this,type,(damageDealer->fields)._ActorNr_k__BackingField,0,
               (this->klass->vtable).HasModifier.methodPtr);
    pEVar1 = (this->fields).OnDamageEvent;
    if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
      this_00 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
      TakeDamageEventArgs::TakeDamageEventArgs__ctor
                (this_00,0.0,damageDealer,damageType,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void add_OnDamageEvent(EventHandler`1[TakeDamageEventArgs]) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_add_OnDamageEvent
               (LogicInteractable *this,EventHandler_1_TakeDamageEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnDamageEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TakeDamageEventArgs_ *)
             func_?(&(this->fields).OnDamageEvent,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnDamageEvent(EventHandler`1[TakeDamageEventArgs]) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_remove_OnDamageEvent
               (LogicInteractable *this,EventHandler_1_TakeDamageEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnDamageEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TakeDamageEventArgs_ *)
             func_?(&(this->fields).OnDamageEvent,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

