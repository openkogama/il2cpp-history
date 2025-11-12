
/* Void Destroy() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_Destroy
               (MVGravityCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_1.fakeValue = 0.0;
  OStack_1.inited = 0;
  OStack_1._21_3_ = 0;
  OStack_1.currentCryptoKey = 0;
  OStack_1.hiddenValue.b1 = 0;
  OStack_1.hiddenValue.b2 = 0;
  OStack_1.hiddenValue.b3 = 0;
  OStack_1.hiddenValue.b4 = 0;
  OStack_1.hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(&OStack_1,value,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    OStack_1.fakeValue = 30.0;
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVPhysics);
  }
  pMVar3 = TypeInfo__MVPhysics->static_fields;
  (pMVar3->gravity).currentCryptoKey = OStack_1.currentCryptoKey;
  (pMVar3->gravity).hiddenValue = OStack_1.hiddenValue;
  *(undefined4 *)&(pMVar3->gravity).hiddenValueOld = OStack_1.hiddenValueOld._0_4_;
  *(undefined4 *)((longlong)&(pMVar3->gravity).hiddenValueOld + 4) = OStack_1.hiddenValueOld._4_4_;
  (pMVar3->gravity).fakeValue = OStack_1.fakeValue;
  (pMVar3->gravity).inited = OStack_1.inited;
  *(undefined3 *)&(pMVar3->gravity).field_0x15 = OStack_1._21_3_;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld >> 0xc)
    ;
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar7;
        LOCK();
        uVar5 = *puVar7;
        if (uVar6 == uVar5) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar5);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar9 = (this->fields)._._.gameObject;
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
  if (pGVar9 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar9->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar9 = (this->fields)._._.gameObject;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar9,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar10 != (MVGameControllerBase *)0x0) &&
     (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) {
    pRVar12 = (pMVar11->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar12 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar12->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar2 != 0) {
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar11 == (MVNetworkGame *)0x0) ||
             (pRVar12 = (pMVar11->fields).runtimeVariableNetworkManager,
             pRVar12 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar12,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_Initialize
               (MVGravityCube *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_OnDataUpdate
               (MVGravityCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gravity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_00,(Object *)StringLiteral_gravity,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar2 == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2,lRam_?);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  value_00 = *(float *)&pOVar2[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_3[0].fakeValue = 0.0;
  aOStack_3[0].inited = 0;
  aOStack_3[0]._21_3_ = 0;
  aOStack_3[0].currentCryptoKey = 0;
  aOStack_3[0].hiddenValue.b1 = 0;
  aOStack_3[0].hiddenValue.b2 = 0;
  aOStack_3[0].hiddenValue.b3 = 0;
  aOStack_3[0].hiddenValue.b4 = 0;
  aOStack_3[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_3,value,(MethodInfo *)0x0);
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar4 == 0) {
    value_00 = aOStack_3[0].fakeValue;
  }
  else {
    aOStack_3[0].fakeValue = value_00;
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar5 = aOStack_3[0]._16_8_;
  pBVar6 = aOStack_3[0].hiddenValueOld;
  uVar7 = aOStack_3[0]._0_8_;
  bStack_8 = aOStack_3[0].inited;
  uStack_9 = aOStack_3[0]._21_3_;
  aOStack_3[0]._16_8_ = uVar5;
  fStack_10 = value_00;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar11 = TypeInfo__MVPhysics->static_fields;
  aOStack_3[0].currentCryptoKey = (int32_t)uVar7;
  aOStack_3[0].hiddenValue = SUB84(uVar7,4);
  (pMVar11->gravity).currentCryptoKey = aOStack_3[0].currentCryptoKey;
  (pMVar11->gravity).hiddenValue = aOStack_3[0].hiddenValue;
  (pMVar11->gravity).hiddenValueOld = pBVar6;
  (pMVar11->gravity).fakeValue = fStack_10;
  (pMVar11->gravity).inited = (char)_bStack_34;
  *(int3 *)&(pMVar11->gravity).field_0x15 = SUB43(_bStack_34,1);
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld >> 0xc)
    ;
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar16 = uVar14 == *puVar15;
      if (bVar16) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar16);
  }
  return;
}


/* MVGravityCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube__ctor
               (MVGravityCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvGravityCubePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x8000;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

