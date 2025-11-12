
/* Void Heal(Single, MVPlayer) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_Heal
               (LogicInteractable *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TakeDamageEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).OnDamageEvent;
  if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
    this_00 = (TakeDamageEventArgs *)FUN_?(TypeInfo__TakeDamageEventArgs);
    TakeDamageEventArgs::TakeDamageEventArgs__ctor
              (this_00,(float)((uint)amount ^ _UNK_?),healer,PlayerKilledByType__Enum_None,
               (MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__TakeDamageEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (healer != (MVPlayer *)0x0) {
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,(ulonglong)type,(ulonglong)(uint)(healer->fields)._ActorNr_k__BackingField,0,
               (this->klass->vtable).AddModifier.method);
    pEVar1 = (this->fields).OnDamageEvent;
    if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
      this_00 = (TakeDamageEventArgs *)FUN_?(TypeInfo__TakeDamageEventArgs);
      TakeDamageEventArgs::TakeDamageEventArgs__ctor
                (this_00,0.0,healer,PlayerKilledByType__Enum_None,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
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
    FUN_?(&TypeInfo__TakeDamageEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).OnDamageEvent;
  if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
    this_00 = (TakeDamageEventArgs *)FUN_?(TypeInfo__TakeDamageEventArgs);
    TakeDamageEventArgs::TakeDamageEventArgs__ctor
              (this_00,amount,damageDealer,damageType & 0xff,(MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__TakeDamageEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (damageDealer != (MVPlayer *)0x0) {
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,(ulonglong)type,(ulonglong)(uint)(damageDealer->fields)._ActorNr_k__BackingField
               ,0,(this->klass->vtable).AddModifier.method);
    pEVar1 = (this->fields).OnDamageEvent;
    if (pEVar1 != (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
      this_00 = (TakeDamageEventArgs *)FUN_?(TypeInfo__TakeDamageEventArgs);
      TakeDamageEventArgs::TakeDamageEventArgs__ctor
                (this_00,0.0,damageDealer,damageType & 0xff,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
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
    FUN_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDamageEvent;
  a = (this->fields).OnDamageEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_TakeDamageEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_TakeDamageEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      if (pEVar4 == (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnDamageEvent(EventHandler`1[TakeDamageEventArgs]) */

void Assembly-CSharp.dll::LogicInteractable::LogicInteractable_remove_OnDamageEvent
               (LogicInteractable *this,EventHandler_1_TakeDamageEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDamageEvent;
  source = (this->fields).OnDamageEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_TakeDamageEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_TakeDamageEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      if (pEVar4 == (EventHandler_1_TakeDamageEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

