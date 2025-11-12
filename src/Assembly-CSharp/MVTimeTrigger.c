
/* Void Initialize() */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_Initialize
               (MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTimeTrigger__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,TypeRef__System__Activator__T._0_4_
             ,(MethodInfo *)0x0);
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVTimeTrigger__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar7 = (this->fields)._._._.id;
  pOVar8 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
  bVar2 = iRam_? != 0;
  (pOVar8->fields).woId = iVar7;
  (this->fields).outputSignalTransmitter = pOVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_InputStateUpdateCallback
               (MVTimeTrigger *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    auStack_1._8_8_ = &UNK_?;
    iVar2 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
    if (iVar2 == -1) {
      auStack_1._8_8_ = &UNK_?;
      MVTimeTrigger_set_CurrentTime(this,0,(MethodInfo *)0x0);
    }
  }
  auStack_1._8_8_ = &UNK_?;
  iVar2 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
  if (iVar2 != -1) {
    auStack_1._8_8_ = &UNK_?;
    iVar2 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
    auStack_1._8_8_ = &UNK_?;
    iVar3 = MVTimeTrigger_get_ActiveDurationTime(this,(MethodInfo *)0x0);
    auStack_1._8_8_ = &UNK_?;
    iVar4 = MVTimeTrigger_get_DelayTime(this,(MethodInfo *)0x0);
    if (iVar2 <= iVar4 + iVar3) {
      auStack_1._8_8_ = &UNK_?;
      iVar2 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
      auStack_1._8_8_ = &UNK_?;
      iVar3 = MVTimeTrigger_get_DelayTime(this,(MethodInfo *)0x0);
      if (iVar3 < iVar2) {
        auStack_1._8_8_ = &UNK_?;
        iVar2 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
        auStack_1._8_8_ = &UNK_?;
        iVar3 = MVTimeTrigger_get_ActiveDurationTime(this,(MethodInfo *)0x0);
        auStack_1._8_8_ = &UNK_?;
        iVar4 = MVTimeTrigger_get_DelayTime(this,(MethodInfo *)0x0);
        isHot = iVar2 <= iVar4 + iVar3;
      }
      else {
        isHot = false;
      }
      pOVar5 = (this->fields).outputSignalTransmitter;
      if (pOVar5 != (OutputSignalTransmitter *)0x0) {
        auStack_1._8_8_ = &UNK_?;
        OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar5,isHot,(MethodInfo *)0x0);
        auStack_1._8_8_ = &UNK_?;
        iVar2 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                        ,iVar2 + 100,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__Extensions);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_cT);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar6 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Encrypt(iVar2 + 100,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        }
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
        ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(uVar6,StringLiteral_cT,&stack0xffffffffffffffe8);
        return;
      }
      goto code_?;
    }
    auStack_1._8_8_ = &UNK_?;
    MVTimeTrigger_set_CurrentTime(this,-1,(MethodInfo *)0x0);
  }
  pOVar5 = (this->fields).outputSignalTransmitter;
  if (pOVar5 != (OutputSignalTransmitter *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__IInputSignalReceiver);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ILogicWorldObject);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar7 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar7,(pOVar5->fields).woId,(MethodInfo *)0x0),
        pMVar8 == (MVWorldObjectClient *)0x0)) ||
       (auStack_1._0_8_ = (pMVar8->fields)._.outputLinkRefs,
       (List_1_MV_WorldObject_Link_ *)auStack_1._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&uStack_11 >> 0xc);
      puVar12 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar13 = *puVar12;
        LOCK();
        uVar14 = *puVar12;
        if (uVar13 == uVar14) {
          *puVar12 = uVar13 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (uVar13 != uVar14);
    }
    puStack_15 = (undefined1 *)
                 ((ulonglong)
                  (uint)(((List_1_MV_WorldObject_Link_ *)auStack_1._0_8_)->fields)._version << 0x20
                 );
    puStack_16 = (undefined *)0x0;
    auStack_1._8_8_ = puStack_15;
    pOStack_17 = (Object *)0x0;
    uStack_11 = 0;
    puStack_15 = auStack_1;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                         );
      pOVar19 = pOStack_17;
      if (bVar18 == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar20 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar21 = (pMVar20->fields).game;
      if (pMVar21 == (MVNetworkGame *)0x0) break;
      pMVar7 = (MVWorldObjectClientManager *)0x0;
      if ((pMVar21->fields).worldNetwork != (WorldNetwork *)0x0) {
        pMVar7 = (MVWorldObjectClientManager *)
                  (((pMVar21->fields).worldNetwork)->fields)._.worldObjectClientManager;
      }
      if (pOVar19 == (Object *)0x0) {
code_?:
        FUN_?();
        break;
      }
      if (pMVar7 == (MVWorldObjectClientManager *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar7,*(int32_t *)&pOVar19[1].monitor,(MethodInfo *)0x0);
      pIVar22 = TypeInfo__ILogicWorldObject;
      if (pMVar8 == (MVWorldObjectClient *)0x0) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        uVar23 = FUN_?(pMVar8,unaff_RSI);
code_?:
        FUN_?(uVar23,pIVar22);
        goto code_?;
      }
      lVar24 = FUN_?(pMVar8,TypeInfo__ILogicWorldObject);
      unaff_RSI = TypeInfo__ILogicWorldObject;
      uVar23 = extraout_XMM0_Da;
      if (lVar24 == 0) goto code_?;
      pIVar22 = (ILogicWorldObject__Class *)FUN_?(pMVar8,TypeInfo__ILogicWorldObject);
      if (pIVar22 == (ILogicWorldObject__Class *)0x0) goto code_?;
      pIVar25 = (pIVar22->_0).image;
      uVar26 = 0;
      uVar27 = *(ushort *)((longlong)&pIVar25[4].nameNoExt + 6);
      if (uVar27 != 0) {
        uVar28 = uVar26;
        do {
          if (*(ILogicWorldObject__Class **)
               (*(longlong *)&pIVar25[2].customAttributeCount + (ulonglong)uVar28 * 0x10) ==
              TypeInfo__ILogicWorldObject) {
            puVar29 = &pIVar25[4].typeCount +
                      (longlong)
                      *(int *)(*(longlong *)&pIVar25[2].customAttributeCount + 8 +
                              (ulonglong)uVar28 * 0x10) * 4;
            goto code_?;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar27);
      }
      puVar29 = (uint32_t *)FUN_?(pIVar22,TypeInfo__ILogicWorldObject,0);
code_?:
      plVar30 = (longlong *)(**(code **)puVar29)(pIVar22,*(undefined8 *)(puVar29 + 2));
      pMVar8 = (MVWorldObjectClient *)0x0;
      if (plVar30 == (longlong *)0x0) goto code_?;
      lVar24 = *plVar30;
      if (*(ushort *)(lVar24 + 0x12e) != 0) {
        do {
          if (*(IInputSignalReceiver__Class **)
               (*(longlong *)(lVar24 + 0xb0) + (ulonglong)uVar26 * 0x10) ==
              TypeInfo__IInputSignalReceiver) {
            puVar31 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar24 + 0xb0) + 8 + (ulonglong)uVar26 * 0x10) * 0x10
                       + 0x138 + lVar24);
            goto code_?;
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(ushort *)(lVar24 + 0x12e));
      }
      puVar31 = (undefined8 *)FUN_?(plVar30,TypeInfo__IInputSignalReceiver,0);
code_?:
      (*(code *)*puVar31)(plVar30,0);
      *(undefined1 *)((longlong)&pOVar19[1].monitor + 4) = 0;
    }
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
code_?:
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_Reset(MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                  ,0xffffffff,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(-1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uVar5 = 0;
  uStack_3._0_5_ = CONCAT14(1,(undefined4)uStack_3);
  uStack_2 = CONCAT44(iVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uVar5 = 0xffffffff;
  }
  uStack_3._0_4_ = uVar5;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_cT,&uStack_2);
  return;
}


/* MVTimeTrigger(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger__ctor
               (MVTimeTrigger *this,Dictionary_2_System_Object_System_Object_ *data,
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
              ((MVLogicObject *)this,data,(pPVar1->fields).mvTimeTriggerPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x18000;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_ActiveDurationTime() */

int32_t Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_ActiveDurationTime
                  (MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_duration);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_duration,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return (int)(*(float *)&pOVar1[1].klass * _UNK_?);
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_CurrentTime() */

int32_t Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_CurrentTime
                  (MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_cT,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      OStack_2.currentCryptoKey = *(int32_t *)&pOVar1[1].klass;
      OStack_2.hiddenValue = *(int32_t *)((longlong)&pOVar1[1].klass + 4);
      OStack_2.fakeValue = *(int32_t *)&pOVar1[1].monitor;
      OStack_2._12_4_ = *(undefined4 *)((longlong)&pOVar1[1].monitor + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(&OStack_2,(MethodInfo *)0x0);
      return iVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 get_DelayTime() */

int32_t Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_DelayTime
                  (MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_time);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_time,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return (int)(*(float *)&pOVar1[1].klass * _UNK_?);
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_CurrentTime(Int32) */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_set_CurrentTime
               (MVTimeTrigger *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_3._0_5_ = CONCAT14(1,(int32_t)uStack_3);
  uStack_2 = CONCAT44(iVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar5 != 0) {
    iVar4 = value;
  }
  uStack_3._0_4_ = iVar4;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_cT,&uStack_2);
  return;
}

