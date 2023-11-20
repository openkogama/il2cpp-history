
/* Void Fire() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_Fire
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar1 == '\0') {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (this->fields).lastFireTime;
    iVar4 = (this->fields).fireInterval.currentCryptoKey;
    AVar5 = (this->fields).fireInterval.hiddenValue;
    pBVar6 = (this->fields).fireInterval.hiddenValueOld;
    fVar7 = (this->fields).fireInterval.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar5;
    value.currentCryptoKey = iVar4;
    value.hiddenValueOld = pBVar6;
    value.fakeValue = fVar7;
    value.inited = (this->fields).fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x11;
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (fVar7 < fVar2 - fVar3) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pMVar8 = (this->fields)._.owner;
      (this->fields).lastFireTime = fVar3;
      if (pMVar8 == (MVPickupOwner *)0x0) goto code_?;
      (*(code *)(this->klass->vtable).OnFire.method)
                (this,(pMVar8->fields)._IsLocal_k__BackingField,
                 (this->klass->vtable).OnDestroy.methodPtr);
      (this->fields)._.firedThisFrame = 1;
    }
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar1 != '\0') {
    pMVar8 = (this->fields)._.owner;
    if (((pMVar8 == (MVPickupOwner *)0x0) ||
        (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0)) ||
       (this_00 = (pMVar9->fields).gameObject, this_00 == (GameObject *)0x0)) {
code_?:
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,x->klass[1]._0.this_arg.data.dummy);
    }
    (this->fields).isFiring = 0;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_OnDestroy
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                    ,in_ECX,unaff_EBP);
    func_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    iVar1 = 0x10;
    uVar2 = 0;
    while( true ) {
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar3->max_length <= (int)uVar2) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if (pLVar3->max_length <= uVar2) break;
      this_01 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                 ((int)pLVar3->vector + iVar1 + -0x10);
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)value[1].monitor;
      if (this_00 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_00,value,
                   MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   ,(MethodInfo *)0x0);
        value[1].monitor = (MonitorData *)this_00;
        func_?(&value[1].monitor,this_00);
      }
      if (this_01 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this_01,this_00,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_OnEquip
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  PickupItemCollectTheItem::PickupItemCollectTheItem_OnEquip
            ((PickupItemCollectTheItem *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_TriggerBegin
               (PickupItemWithDelay *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Got_TriggerStart__but_were_firin);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    (this->fields).triggerBegin = 1;
    return;
  }
  if ((this->fields).isFiring == 0) {
    (this->fields).isFiring = 1;
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Got_TriggerStart__but_were_firin,(MethodInfo *)0x0);
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_TriggerEnd
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    if ((this->fields).triggerBegin != 0) {
      pPVar1 = this->klass;
      (this->fields).triggerBegin = 0;
      (this->fields).isFiring = 1;
      (*(code *)(pPVar1->vtable).UpdateControllerUpdate_1.method)(this,pPVar1[1]._0.image);
      (this->fields).isFiring = 0;
    }
    return;
  }
  (this->fields).isFiring = 0;
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_UpdateControllerUpdate
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if ((this->fields).isFiring != 0) {
    if (cRam_? == '\0') {
      func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
      ;
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      cRam_? = '\x01';
    }
    cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                      (this,(this->klass->vtable).get_Quantity.methodPtr);
    if (cVar1 == '\0') {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar3 = (this->fields).lastFireTime;
      iVar4 = (this->fields).fireInterval.currentCryptoKey;
      AVar5 = (this->fields).fireInterval.hiddenValue;
      pBVar6 = (this->fields).fireInterval.hiddenValueOld;
      fVar7 = (this->fields).fireInterval.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value.hiddenValue = AVar5;
      value.currentCryptoKey = iVar4;
      value.hiddenValueOld = pBVar6;
      value.fakeValue = fVar7;
      value.inited = (this->fields).fireInterval.inited;
      value._17_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x11;
      fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      if (fVar7 < fVar2 - fVar3) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pMVar8 = (this->fields)._.owner;
        (this->fields).lastFireTime = fVar3;
        if (pMVar8 == (MVPickupOwner *)0x0) goto code_?;
        (*(code *)(this->klass->vtable).OnFire.method)
                  (this,(pMVar8->fields)._IsLocal_k__BackingField,
                   (this->klass->vtable).OnDestroy.methodPtr);
        (this->fields)._.firedThisFrame = 1;
      }
    }
    cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                      (this,(this->klass->vtable).get_Quantity.methodPtr);
    if (cVar1 != '\0') {
      pMVar8 = (this->fields)._.owner;
      if (((pMVar8 == (MVPickupOwner *)0x0) ||
          (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0)) ||
         (this_00 = (pMVar9->fields).gameObject, this_00 == (GameObject *)0x0)) {
code_?:
        func_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    (this_00,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        if (x == (Object_1 *)0x0) goto code_?;
        (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,x->klass[1]._0.this_arg.data.dummy);
      }
      (this->fields).isFiring = 0;
    }
  }
  return;
}


/* PickupItemWithDelay() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay__ctor
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).crossHairCannotFireLow.r = _UNK_?;
  (this->fields).crossHairCannotFireLow.g = fVar3;
  (this->fields).crossHairCannotFireLow.b = fVar2;
  (this->fields).crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).crossHairCannotFireHigh.r = _UNK_?;
  (this->fields).crossHairCannotFireHigh.g = fVar3;
  (this->fields).crossHairCannotFireHigh.b = fVar2;
  (this->fields).crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).crossHairCanFire.r = _UNK_?;
  (this->fields).crossHairCanFire.g = fVar3;
  (this->fields).crossHairCanFire.b = fVar2;
  (this->fields).crossHairCanFire.a = fVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_5,1.0,(MethodInfo *)0x0);
  AVar6 = pOVar4->hiddenValue;
  pBVar7 = pOVar4->hiddenValueOld;
  fVar3 = pOVar4->fakeValue;
  bVar8 = pOVar4->inited;
  uVar9 = *(undefined3 *)&pOVar4->field_0x11;
  (this->fields).fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields).fireInterval.hiddenValue = AVar6;
  (this->fields).fireInterval.hiddenValueOld = pBVar7;
  (this->fields).fireInterval.fakeValue = fVar3;
  (this->fields).fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields).fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields).fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).lastFireTime;
  value = (this->fields).fireInterval;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  fVar3 = (fVar1 - fVar2) / fVar3;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  if (_UNK_? <= fVar3) {
    fVar2 = (this->fields).crossHairCanFire.g;
    fVar1 = (this->fields).crossHairCanFire.b;
    fVar3 = (this->fields).crossHairCanFire.a;
    __return_storage_ptr__->r = (this->fields).crossHairCanFire.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar1;
    __return_storage_ptr__->a = fVar3;
    return __return_storage_ptr__;
  }
  fVar2 = (this->fields).crossHairCannotFireLow.r;
  fVar1 = (this->fields).crossHairCannotFireLow.g;
  fVar4 = (this->fields).crossHairCannotFireLow.b;
  fVar5 = (this->fields).crossHairCannotFireLow.a;
  fVar6 = (this->fields).crossHairCannotFireHigh.g;
  fVar7 = (this->fields).crossHairCannotFireHigh.b;
  fVar8 = (this->fields).crossHairCannotFireHigh.a;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  __return_storage_ptr__->r = ((this->fields).crossHairCannotFireHigh.r - fVar2) * fVar3 + fVar2;
  __return_storage_ptr__->g = (fVar6 - fVar1) * fVar3 + fVar1;
  __return_storage_ptr__->b = (fVar7 - fVar4) * fVar3 + fVar4;
  __return_storage_ptr__->a = (fVar8 - fVar5) * fVar3 + fVar5;
  return __return_storage_ptr__;
}

