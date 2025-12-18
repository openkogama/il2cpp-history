
/* Void Fire() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_Fire
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)(this);
  if (cVar1 == '\0') {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar5 = (this->fields).lastFireTime;
    aOStack_6[0].currentCryptoKey = (this->fields).fireInterval.currentCryptoKey;
    aOStack_6[0].hiddenValue = (this->fields).fireInterval.hiddenValue;
    aOStack_6[0].hiddenValueOld = (this->fields).fireInterval.hiddenValueOld;
    aOStack_6[0].fakeValue = (this->fields).fireInterval.fakeValue;
    aOStack_6[0].inited = (this->fields).fireInterval.inited;
    aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    if (fVar7 < fVar4 - fVar5) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar5 = (float)(*pcRam_?)();
      pMVar8 = (this->fields)._.owner;
      (this->fields).lastFireTime = fVar5;
      if (pMVar8 == (MVPickupOwner *)0x0) goto code_?;
      (*(this->klass->vtable).OnFire.methodPtr)
                (this,(ulonglong)(pMVar8->fields)._IsLocal_k__BackingField,
                 (this->klass->vtable).OnFire.method);
      (this->fields)._.firedThisFrame = 1;
    }
  }
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  if (cVar1 != '\0') {
    pMVar8 = (this->fields)._.owner;
    if (((pMVar8 == (MVPickupOwner *)0x0) ||
        (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0)) ||
       (this_00 = (pMVar9->fields).gameObject, this_00 == (GameObject *)0x0)) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar10 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar10[1].klass != (Object__Class *)0x0) {
        pOVar11 = pOVar10->klass;
        uVar3._0_2_ = pOVar11[1]._0.byval_arg.attrs;
        uVar3._2_1_ = pOVar11[1]._0.byval_arg.type;
        uVar3._3_5_ = *(undefined5 *)&pOVar11[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar11[1]._0.byval_arg.data)(pOVar10,uVar3);
      }
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
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(PickupItemWithDelay **)(lVar1 + 0x10) = this;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_OnEquip
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_6 = 2;
  uStack_7 = 1;
  uStack_2 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar8 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((uint)pLVar8->max_length < 3) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pLVar8->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_10 = (undefined4)uStack_2;
      uStack_11 = uStack_2._4_4_;
      uStack_12 = uStack_6;
      uStack_13 = uStack_7;
      FUN_?(pLVar8->vector[2],&uStack_10,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_TriggerBegin
               (PickupItemWithDelay *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Got_TriggerStart__but_were_firin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Got_TriggerStart__but_were_firin;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_TriggerEnd
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    if ((this->fields).triggerBegin == 0) {
      return;
    }
    pPVar1 = this->klass;
    (this->fields).triggerBegin = 0;
    (this->fields).isFiring = 1;
    (*(pPVar1->vtable).UpdateControllerUpdate_1.methodPtr)
              (this,(pPVar1->vtable).UpdateControllerUpdate_1.method);
  }
  (this->fields).isFiring = 0;
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_UpdateControllerUpdate
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if ((this->fields).isFiring == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)(this);
  if (cVar1 == '\0') {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar5 = (this->fields).lastFireTime;
    aOStack_6[0].currentCryptoKey = (this->fields).fireInterval.currentCryptoKey;
    aOStack_6[0].hiddenValue = (this->fields).fireInterval.hiddenValue;
    aOStack_6[0].hiddenValueOld = (this->fields).fireInterval.hiddenValueOld;
    aOStack_6[0].fakeValue = (this->fields).fireInterval.fakeValue;
    aOStack_6[0].inited = (this->fields).fireInterval.inited;
    aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    if (fVar7 < fVar4 - fVar5) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar5 = (float)(*pcRam_?)();
      pMVar8 = (this->fields)._.owner;
      (this->fields).lastFireTime = fVar5;
      if (pMVar8 == (MVPickupOwner *)0x0) goto code_?;
      (*(this->klass->vtable).OnFire.methodPtr)
                (this,(ulonglong)(pMVar8->fields)._IsLocal_k__BackingField,
                 (this->klass->vtable).OnFire.method);
      (this->fields)._.firedThisFrame = 1;
    }
  }
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  if (cVar1 != '\0') {
    pMVar8 = (this->fields)._.owner;
    if (((pMVar8 == (MVPickupOwner *)0x0) ||
        (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0)) ||
       (this_00 = (pMVar9->fields).gameObject, this_00 == (GameObject *)0x0)) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar10 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar10[1].klass != (Object__Class *)0x0) {
        pOVar11 = pOVar10->klass;
        uVar3._0_2_ = pOVar11[1]._0.byval_arg.attrs;
        uVar3._2_1_ = pOVar11[1]._0.byval_arg.type;
        uVar3._3_5_ = *(undefined5 *)&pOVar11[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar11[1]._0.byval_arg.data)(pOVar10,uVar3);
      }
    }
    (this->fields).isFiring = 0;
  }
  return;
}


/* PickupItemWithDelay() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay__ctor
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields).crossHairCannotFireLow.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields).crossHairCannotFireLow.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields).crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields).crossHairCannotFireLow.a = (float)uVar4;
  uVar4 = _UNK_?;
  (this->fields).crossHairCanFire.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields).crossHairCanFire.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields).crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields).crossHairCanFire.a = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields).crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields).crossHairCannotFireHigh.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields).crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields).crossHairCannotFireHigh.a = (float)uVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._0_4_ = 0.0;
  uVar3._4_1_ = 0;
  uVar3._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uVar3._0_4_ = 1.0;
    uVar3._4_1_ = 0;
    uVar3._5_3_ = 0;
  }
  bVar7 = iRam_? != 0;
  (this->fields).fireInterval.currentCryptoKey = 0;
  (this->fields).fireInterval.hiddenValue.b1 = 0;
  (this->fields).fireInterval.hiddenValue.b2 = 0;
  (this->fields).fireInterval.hiddenValue.b3 = 0;
  (this->fields).fireInterval.hiddenValue.b4 = 0;
  (this->fields).fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields).fireInterval.fakeValue = (float)uVar3;
  (this->fields).fireInterval.inited = SUB81(uVar3,4);
  *(int3 *)&(this->fields).fireInterval.field_0x15 = SUB83(uVar3,5);
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields).fireInterval.hiddenValueOld >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar7 = iRam_? != 0;
  (this->fields)._.meshRenderers = pMVar12;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._.meshRenderers >> 0xc);
    puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar11;
      LOCK();
      uVar9 = *puVar11;
      if (uVar10 == uVar9) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar9);
  }
  bVar7 = cRam_? == '\0';
  (this->fields)._._AbleToFire_k__BackingField = 1;
  if (bVar7) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar13 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar14 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar15 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar16 = ppMVar14;
  if (lVar15 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar15 = lRam_?;
  }
  else {
    do {
      uVar8 = (uint)ppMVar16;
      LOCK();
      bVar7 = uVar8 != uRam_?;
      uVar17 = uVar8;
      uVar18 = uVar8 + 1;
      if (bVar7) {
        uVar17 = uRam_?;
        uVar18 = uRam_?;
      }
      uRam_? = uVar18;
      UNLOCK();
    } while ((bVar7) && (ppMVar16 = (MethodInfo **)(ulonglong)uVar17, uVar8 = uVar17, uVar17 != 2)
            );
    while (uVar8 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar8 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar15;
  puVar19 = &(pOVar13->_1).field_0x1c;
  LOCK();
  bVar7 = *(int *)puVar19 == 1;
  if (bVar7) {
    *(undefined4 *)puVar19 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar8 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar20 = &(pOVar13->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar7 = *puVar20 == 1;
  if (bVar7) {
    *puVar20 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar8 = GetCurrentThreadId();
    psVar21 = &(pOVar13->_1).cctor_thread;
    LOCK();
    bVar7 = (ulonglong)uVar8 == *psVar21;
    if (bVar7) {
      *psVar21 = (ulonglong)uVar8;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
    while( true ) {
      puVar19 = &(pOVar13->_1).field_0x1c;
      LOCK();
      bVar7 = *(int *)puVar19 == 1;
      if (bVar7) {
        *(undefined4 *)puVar19 = 1;
      }
      UNLOCK();
      if (bVar7) break;
      LOCK();
      lVar15._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
      lVar15._4_4_ = (pOVar13->_1).cctor_started;
      if (lVar15 == 0) {
        (pOVar13->_1).initializationExceptionGCHandle = 0;
        (pOVar13->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar15 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar22._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
    lVar22._4_4_ = (pOVar13->_1).cctor_started;
    if (lVar22 == 0) {
      return;
    }
  }
  else {
    uVar8 = GetCurrentThreadId();
    LOCK();
    (pOVar13->_1).cctor_thread = (ulonglong)uVar8;
    UNLOCK();
    LOCK();
    (pOVar13->_1).cctor_finished_or_no_cctor = 1;
    uVar8 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar13->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar13);
      ppMVar16 = ppMVar14;
      pIVar23 = (Il2CppClass *)pOVar13;
code_?:
      do {
        if (ppMVar16 == (MethodInfo **)0x0) {
          FUN_?(pIVar23);
          if (pIVar23->field_count != 0) {
            ppMVar16 = pIVar23->methods;
            pMVar24 = *ppMVar16;
code_?:
            if (pMVar24 != (MethodInfo *)0x0) {
              if ((*pMVar24->name == '.') && ((pMVar24->flags & 0x800) != 0)) {
                ppMVar25 = ppMVar14;
                while (ppMVar26 = ppMVar25 + 0x3052af3c,
                      ppMVar25 = (MethodInfo **)((longlong)ppMVar25 + 1),
                      *(char *)ppMVar26 == (pMVar24->name + -1)[(longlong)ppMVar25]) {
                  if (ppMVar25 == (MethodInfo **)0x7) {
                    FUN_?(pMVar24,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar16 = ppMVar16 + 1;
          if (ppMVar16 < pIVar23->methods + pIVar23->field_count) {
            pMVar24 = *ppMVar16;
            goto code_?;
          }
        }
        pIVar23 = pIVar23->parent;
        ppMVar16 = ppMVar14;
      } while (pIVar23 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar13->_1).cctor_thread = 0;
    uVar9 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar13->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_27 = 0;
    uStack_28 = _UNK_?;
    uStack_29 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar13->_0).byval_arg,0,0);
    pppppppuVar22 = &pppppppuStack_78;
    if (0xf < uStack_29) {
      pppppppuVar22 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar22);
    if (uStack_29 < 0x10) {
code_?:
      lVar15 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar22 = &pppppppuStack_58;
      if (0xf < uStack_30) {
        pppppppuVar22 = pppppppuStack_58;
      }
      uStack_28 = uVar3;
      uStack_29 = uVar9;
      lVar22 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar22);
      if (lVar15 != 0) {
        *(longlong *)(lVar22 + 0x28U) = lVar15;
        if (iRam_? != 0) {
          uVar8 = (uint)(lVar22 + 0x28U >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar11;
            LOCK();
            uVar9 = *puVar11;
            if (uVar10 == uVar9) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar9);
        }
      }
      FUN_?(pOVar13,lVar22);
      if (0xf < uStack_30) {
        pppppppuVar22 = pppppppuStack_58;
        if ((0xfff < uStack_30 + 1) &&
           (pppppppuVar22 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar22))))
        goto code_?;
        func_?(pppppppuVar22);
      }
      goto code_?;
    }
    pppppppuVar22 = pppppppuStack_78;
    if ((uStack_29 + 1 < 0x1000) ||
       (pppppppuVar22 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar22)) < 0x20)) {
      func_?(pppppppuVar22);
      uVar3 = _UNK_?;
      uVar9 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar5._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
  uVar5._4_4_ = (pOVar13->_1).cctor_started;
  uVar3 = FUN_?(uVar5);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pCVar3 = (Color *)(*pcVar1)();
    return pCVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = (this->fields).lastFireTime;
  aOStack_6[0].currentCryptoKey = (this->fields).fireInterval.currentCryptoKey;
  aOStack_6[0].hiddenValue = (this->fields).fireInterval.hiddenValue;
  aOStack_6[0].hiddenValueOld = (this->fields).fireInterval.hiddenValueOld;
  aOStack_6[0].fakeValue = (this->fields).fireInterval.fakeValue;
  aOStack_6[0].inited = (this->fields).fireInterval.inited;
  aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
  fVar7 = (fVar4 - fVar5) / fVar7;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if ((_UNK_? < fVar7) || (_UNK_? <= fVar7)) {
    fVar5 = (this->fields).crossHairCanFire.g;
    fVar4 = (this->fields).crossHairCanFire.b;
    fVar7 = (this->fields).crossHairCanFire.a;
    __return_storage_ptr__->r = (this->fields).crossHairCanFire.r;
    __return_storage_ptr__->g = fVar5;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar7;
    return __return_storage_ptr__;
  }
  fVar5 = (this->fields).crossHairCannotFireHigh.g;
  fVar4 = (this->fields).crossHairCannotFireHigh.b;
  fVar8 = (this->fields).crossHairCannotFireHigh.a;
  fVar9 = (this->fields).crossHairCannotFireLow.r;
  fVar10 = (this->fields).crossHairCannotFireLow.g;
  fVar11 = (this->fields).crossHairCannotFireLow.b;
  fVar12 = (this->fields).crossHairCannotFireLow.a;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (_UNK_? < fVar7) {
    fVar7 = _UNK_?;
  }
  __return_storage_ptr__->r = ((this->fields).crossHairCannotFireHigh.r - fVar9) * fVar7 + fVar9;
  __return_storage_ptr__->g = (fVar5 - fVar10) * fVar7 + fVar10;
  __return_storage_ptr__->b = (fVar4 - fVar11) * fVar7 + fVar11;
  __return_storage_ptr__->a = (fVar8 - fVar12) * fVar7 + fVar12;
  return __return_storage_ptr__;
}


/* Boolean get_IsOnCooldown() */

bool Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_get_IsOnCooldown
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = (this->fields).lastFireTime;
  aOStack_6[0].currentCryptoKey = (this->fields).fireInterval.currentCryptoKey;
  aOStack_6[0].hiddenValue = (this->fields).fireInterval.hiddenValue;
  aOStack_6[0].hiddenValueOld = (this->fields).fireInterval.hiddenValueOld;
  aOStack_6[0].fakeValue = (this->fields).fireInterval.fakeValue;
  aOStack_6[0].inited = (this->fields).fireInterval.inited;
  aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
  return fVar4 - fVar5 <= fVar7;
}

