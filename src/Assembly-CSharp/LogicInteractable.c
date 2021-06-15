
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnDamageEvent;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    this_01 = (TakeDamageEventArgs *)func_?(TypeInfo__TakeDamageEventArgs);
    TakeDamageEventArgs::TakeDamageEventArgs__ctor
              (this_01,amount,damageDealer,damageType,(MethodInfo *)0x0);
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
               MethodInfo__System__EventHandler<TakeDamageEventArgs>__Invoke_System__Object__TakeDamageEventArgs_
              );
  }
  return;
}


/* LogicInteractable() */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable__ctor
               (LogicInteractable *this,MethodInfo *method)

{
  (this->fields)._._.findWorldObjectParent = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void add_OnDamageEvent(EventHandler`1[TakeDamageEventArgs]) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_add_OnDamageEvent
               (LogicInteractable *this,EventHandler_1_TakeDamageEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDamageEvent;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TakeDamageEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TakeDamageEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TakeDamageEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnDamageEvent(EventHandler`1[TakeDamageEventArgs]) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_remove_OnDamageEvent
               (LogicInteractable *this,EventHandler_1_TakeDamageEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDamageEvent;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TakeDamageEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TakeDamageEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TakeDamageEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

