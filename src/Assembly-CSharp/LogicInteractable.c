
/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::LogicInteractable::LogicInteractable_HandleModifierEffect
                (LogicInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
                float baseValue,MethodInfo *method)

{
  return baseValue;
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
  if ((this->fields).OnDamageEvent != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnDamageEvent;
    this_00 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
    if (this_00 == (TakeDamageEventArgs *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
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
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,type,(damageDealer->fields)._ActorNr_k__BackingField,0,
               (this->klass->vtable).AddModifier.method);
    if ((this->fields).OnDamageEvent != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
      pEVar1 = (this->fields).OnDamageEvent;
      this_00 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
      if (this_00 == (TakeDamageEventArgs *)0x0) goto code_?;
      TakeDamageEventArgs::TakeDamageEventArgs__ctor
                (this_00,0.0,damageDealer,damageType,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
    }
    return;
  }
code_?:
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

