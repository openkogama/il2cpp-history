
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
      this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__TakeDamageEventArgs);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventArgs);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__EventArgs);
      }
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
      (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)0x0;
      this_00[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)healer;
      func_?(this_00 + 1,healer);
      *(undefined1 *)&this_00[1].monitor = 0;
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
  ppEVar1 = &(this->fields).OnDamageEvent;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TakeDamageEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).OnDamageEvent;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TakeDamageEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}

