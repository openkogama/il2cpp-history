
/* Void Fire() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_Fire
               (PickupItemWithDelay *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar2 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar2 == '\0') {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar4 = (this->fields).lastFireTime;
    iVar5 = (this->fields).fireInterval.currentCryptoKey;
    AVar6 = (this->fields).fireInterval.hiddenValue;
    pBVar7 = (this->fields).fireInterval.hiddenValueOld;
    fVar8 = (this->fields).fireInterval.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar6;
    value.currentCryptoKey = iVar5;
    value.hiddenValueOld = pBVar7;
    value.fakeValue = fVar8;
    value.inited = (this->fields).fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x11;
    fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (fVar8 < fVar3 - fVar4) {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pMVar9 = (this->fields)._.owner;
      (this->fields).lastFireTime = fVar8;
      if (pMVar9 == (MVPickupOwner *)0x0) goto code_?;
      bVar10 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar9,(MethodInfo *)0x0);
      this = (PickupItemWithDelay *)CONCAT31((int3)((uint)(fVar3 - fVar4) >> 8),bVar10);
      (*(code *)(pPVar1->klass->vtable).OnFire.method)
                (pPVar1,this,(pPVar1->klass->vtable).OnDestroy.methodPtr);
      (pPVar1->fields)._.firedThisFrame = 1;
    }
  }
  cVar2 = (*(code *)(pPVar1->klass->vtable).get_IsAmmoDepleted.method)
                    (pPVar1,(pPVar1->klass->vtable).get_Quantity.methodPtr);
  if (cVar2 == '\0') {
    return;
  }
  pMVar9 = (pPVar1->fields)._.owner;
  if (((pMVar9 != (MVPickupOwner *)0x0) &&
      (this_00 = (DayNightCycle *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar9,(MethodInfo *)0x0), this_00 != (DayNightCycle *)0x0)) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0),
     this_01 != (CelestialParam *)0x0)) {
    x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                  ((GameObject *)this_01,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      if (x == (UseInteractorHandler *)0x0) goto code_?;
      (*(code *)x->klass[1]._0.namespaze)(x,x->klass[1]._0.byval_arg.data.dummy);
    }
    (pPVar1->fields).isFiring = 0;
    return;
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_OnDestroy
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,in_ECX,unaff_EBP);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  object = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this_00->fields)._._._._.m_CachedPtr = this;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar2 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar2 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar2->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->updateBuckets ==
          (List_1_PriorityDataUpdate___Array *)0x0) break;
      this_01 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)object,
                 MethodInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0____m__0_PriorityDataUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataUpdate>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_01,(Predicate_1_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_OnEquip
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isFiring == 0) {
    (this->fields).isFiring = 1;
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Got_TriggerStart__but_were_firin,(MethodInfo *)0x0);
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_TriggerEnd
               (PickupItemWithDelay *this,MethodInfo *method)

{
  (this->fields).isFiring = 0;
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_UpdateControllerUpdate
               (PickupItemWithDelay *this,MethodInfo *method)

{
  pPVar1 = this;
  if ((this->fields).isFiring == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar2 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar2 == '\0') {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar4 = (this->fields).lastFireTime;
    iVar5 = (this->fields).fireInterval.currentCryptoKey;
    AVar6 = (this->fields).fireInterval.hiddenValue;
    pBVar7 = (this->fields).fireInterval.hiddenValueOld;
    fVar8 = (this->fields).fireInterval.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar6;
    value.currentCryptoKey = iVar5;
    value.hiddenValueOld = pBVar7;
    value.fakeValue = fVar8;
    value.inited = (this->fields).fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x11;
    fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (fVar8 < fVar3 - fVar4) {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pMVar9 = (this->fields)._.owner;
      (this->fields).lastFireTime = fVar8;
      if (pMVar9 == (MVPickupOwner *)0x0) goto code_?;
      bVar10 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar9,(MethodInfo *)0x0);
      this = (PickupItemWithDelay *)CONCAT31((int3)((uint)(fVar3 - fVar4) >> 8),bVar10);
      (*(code *)(pPVar1->klass->vtable).OnFire.method)
                (pPVar1,this,(pPVar1->klass->vtable).OnDestroy.methodPtr);
      (pPVar1->fields)._.firedThisFrame = 1;
    }
  }
  cVar2 = (*(code *)(pPVar1->klass->vtable).get_IsAmmoDepleted.method)
                    (pPVar1,(pPVar1->klass->vtable).get_Quantity.methodPtr);
  if (cVar2 == '\0') {
    return;
  }
  pMVar9 = (pPVar1->fields)._.owner;
  if (((pMVar9 != (MVPickupOwner *)0x0) &&
      (this_00 = (DayNightCycle *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar9,(MethodInfo *)0x0), this_00 != (DayNightCycle *)0x0)) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0),
     this_01 != (CelestialParam *)0x0)) {
    x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                  ((GameObject *)this_01,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      if (x == (UseInteractorHandler *)0x0) goto code_?;
      (*(code *)x->klass[1]._0.namespaze)(x,x->klass[1]._0.byval_arg.data.dummy);
    }
    (pPVar1->fields).isFiring = 0;
    return;
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* PickupItemWithDelay() */

void Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay__ctor
               (PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).crossHairCannotFireLow.r = pCVar1->r;
  (this->fields).crossHairCannotFireLow.g = fVar3;
  (this->fields).crossHairCannotFireLow.b = fVar4;
  (this->fields).crossHairCannotFireLow.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).crossHairCannotFireHigh.r = pCVar1->r;
  (this->fields).crossHairCannotFireHigh.g = fVar3;
  (this->fields).crossHairCannotFireHigh.b = fVar4;
  (this->fields).crossHairCannotFireHigh.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).crossHairCanFire.r = pCVar1->r;
  (this->fields).crossHairCanFire.g = fVar3;
  (this->fields).crossHairCanFire.b = fVar4;
  (this->fields).crossHairCanFire.a = fVar5;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
  bVar7 = cRam_? == '\0';
  AVar8 = pOVar6->hiddenValue;
  pBVar9 = pOVar6->hiddenValueOld;
  fVar3 = pOVar6->fakeValue;
  bVar10 = pOVar6->inited;
  uVar11 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields).fireInterval.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields).fireInterval.hiddenValue = AVar8;
  (this->fields).fireInterval.hiddenValueOld = pBVar9;
  (this->fields).fireInterval.fakeValue = fVar3;
  (this->fields).fireInterval.inited = bVar10;
  *(undefined3 *)&(this->fields).fireInterval.field_0x11 = uVar11;
  if (bVar7) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)func_?();
  (this->fields)._.meshRenderers = pMVar12;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItemWithDelay::PickupItemWithDelay_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemWithDelay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).lastFireTime;
  fVar3 = (float)(this->fields).fireInterval.currentCryptoKey;
  AVar4 = (this->fields).fireInterval.hiddenValue;
  pBVar5 = (this->fields).fireInterval.hiddenValueOld;
  fVar6 = (this->fields).fireInterval.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar4;
  value.currentCryptoKey = (int32_t)fVar3;
  value.hiddenValueOld = pBVar5;
  value.fakeValue = fVar6;
  value.inited = (this->fields).fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).fireInterval.field_0x11;
  pMVar7 = (Mathf__Class *)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    pMVar7 = TypeInfo__UnityEngine__Mathf;
    func_?();
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                    ((fVar1 - fVar2) / (float)pMVar7,(MethodInfo *)0x0);
  if (_UNK_? <= fVar2) {
    fVar2 = (this->fields).crossHairCanFire.g;
    fVar3 = (this->fields).crossHairCanFire.b;
    fVar6 = (this->fields).crossHairCanFire.a;
    __return_storage_ptr__->r = (this->fields).crossHairCanFire.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar6;
    return __return_storage_ptr__;
  }
  pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                     ((Color *)&stack0xffffffe8,(this->fields).crossHairCannotFireLow,
                      (this->fields).crossHairCannotFireHigh,fVar2,(MethodInfo *)0x0);
  fVar2 = pCVar8->g;
  fVar3 = pCVar8->b;
  fVar6 = pCVar8->a;
  __return_storage_ptr__->r = pCVar8->r;
  __return_storage_ptr__->g = fVar2;
  __return_storage_ptr__->b = fVar3;
  __return_storage_ptr__->a = fVar6;
  return __return_storage_ptr__;
}

