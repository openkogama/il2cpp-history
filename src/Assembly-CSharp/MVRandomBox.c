
/* Void Initialize() */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_Initialize(MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVRandomBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitterSpecific);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,TypeRef__System__Activator__T._0_4_
             ,(MethodInfo *)0x0);
  pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
  if (pOVar1 == (ObscuredInt__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)pOVar1->max_length != 0) {
    uVar3._0_4_ = pOVar1->vector[0].currentCryptoKey;
    uVar3._4_4_ = pOVar1->vector[0].hiddenValue;
    uVar4._0_4_ = pOVar1->vector[0].fakeValue;
    uVar4._4_1_ = pOVar1->vector[0].inited;
    uVar4._5_3_ = *(undefined3 *)&pOVar1->vector[0].field_0xd;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar3;
    aOStack_5[0]._8_8_ = uVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
    pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
    if (pOVar1 == (ObscuredInt__Array *)0x0) goto code_?;
    if (1 < (uint)pOVar1->max_length) {
      aOStack_5[0].currentCryptoKey = pOVar1->vector[1].currentCryptoKey;
      aOStack_5[0].hiddenValue = pOVar1->vector[1].hiddenValue;
      aOStack_5[0].fakeValue = pOVar1->vector[1].fakeValue;
      aOStack_5[0].inited = pOVar1->vector[1].inited;
      aOStack_5[0]._13_3_ = *(undefined3 *)&pOVar1->vector[1].field_0xd;
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
      uVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
      pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
      if (pOVar1 == (ObscuredInt__Array *)0x0) goto code_?;
      if (2 < (uint)pOVar1->max_length) {
        aOStack_5[0].currentCryptoKey = pOVar1->vector[2].currentCryptoKey;
        aOStack_5[0].hiddenValue = pOVar1->vector[2].hiddenValue;
        aOStack_5[0].fakeValue = pOVar1->vector[2].fakeValue;
        aOStack_5[0].inited = pOVar1->vector[2].inited;
        aOStack_5[0]._13_3_ = *(undefined3 *)&pOVar1->vector[2].field_0xd;
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
        uVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
        pRVar9 = (RandomGenerator *)FUN_?(TypeInfo__MV__WorldObject__RandomGenerator);
        bVar10 = iRam_? != 0;
        (pRVar9->fields).step = uVar7;
        (pRVar9->fields).seed = uVar6;
        (pRVar9->fields).round = uVar8;
        (this->fields).randomGenerator = pRVar9;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields).randomGenerator >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        this_00 = (Action_2_Int32Enum_Object_ *)
                  FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVRandomBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar15 = LogicClientsideFactory::
                  LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                            ((MVWorldObject *)this,0,
                             (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                             (Action_2_LogicInputState_LogicObjectManager_ *)this_00,
                             (MethodInfo *)0x0);
        bVar10 = iRam_? != 0;
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar15;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        iVar16 = (this->fields)._._._.id;
        pOVar17 = (OutputSignalTransmitterSpecific *)
                  FUN_?(TypeInfo__OutputSignalTransmitterSpecific);
        bVar10 = iRam_? != 0;
        (pOVar17->fields).woId = iVar16;
        (this->fields)._outputSignalTransmitter = pOVar17;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields)._outputSignalTransmitter >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_InputStateUpdateCallback
               (MVRandomBox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pLVar1 = (this->fields)._._._.outputLinkRefs;
    if (pLVar1 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size == 0) {
      value = 0;
    }
    else {
      this_00 = (this->fields).randomGenerator;
      if (this_00 == (RandomGenerator *)0x0) goto code_?;
      value = MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_Range
                        (this_00,0,(pLVar1->fields)._size,(MethodInfo *)0x0);
    }
    MVRandomBox_set_CurrentValue(this,value,(MethodInfo *)0x0);
  }
  else if (logicInputState != LogicInputState__Enum_Hot) {
    pOVar2 = (this->fields)._outputSignalTransmitter;
    if (pOVar2 == (OutputSignalTransmitterSpecific *)0x0) goto code_?;
    uVar3 = 0xffffffff;
    goto Assembly_CSharp_dll_OutputSignalTransmitterSpecific_OutputSignalTransmitterSpecific_Send;
  }
  pOVar2 = (this->fields)._outputSignalTransmitter;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentValue);
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
  pOVar4 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar4 != (Object *)0x0) {
    if ((pOVar4->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      FUN_?(pOVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_InternalDecrypt((ObscuredInt *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
    if (pOVar2 != (OutputSignalTransmitterSpecific *)0x0) {
Assembly_CSharp_dll_OutputSignalTransmitterSpecific_OutputSignalTransmitterSpecific_Send:
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IInputSignalReceiver);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ILogicWorldObject);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
        pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar6,(pOVar2->fields).woId,(MethodInfo *)0x0);
        uVar8 = 0;
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          lVar9 = 0x20;
          while( true ) {
            pMVar6 = (MVWorldObjectClientManager *)0x0;
            pLVar1 = (pMVar7->fields)._.outputLinkRefs;
            if (pLVar1 == (List_1_MV_WorldObject_Link_ *)0x0) break;
            if ((pLVar1->fields)._size <= (int)uVar8) {
              return;
            }
            bVar10 = uVar8 == uVar3;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar11 == (MVGameControllerBase *)0x0) ||
               (pMVar12 = (pMVar11->fields).game, pMVar12 == (MVNetworkGame *)0x0)) break;
            if ((pMVar12->fields).worldNetwork != (WorldNetwork *)0x0) {
              pMVar6 = (MVWorldObjectClientManager *)
                        (((pMVar12->fields).worldNetwork)->fields)._.worldObjectClientManager;
            }
            pLVar1 = (pMVar7->fields)._.outputLinkRefs;
            if (pLVar1 == (List_1_MV_WorldObject_Link_ *)0x0) break;
            if ((uint)(pLVar1->fields)._size <= uVar8) {
code_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pLVar13 = (pLVar1->fields)._items;
            if (pLVar13 == (Link__Array *)0x0) break;
            if ((uint)pLVar13->max_length <= uVar8) {
code_?:
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar14 = *(longlong *)((longlong)pLVar13->vector + lVar9 + -0x20);
            if (((lVar14 == 0) || (pMVar6 == (MVWorldObjectClientManager *)0x0)) ||
               (pMVar15 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClient
                                    (pMVar6,*(int32_t *)(lVar14 + 0x18),(MethodInfo *)0x0),
               pIVar16 = TypeInfo__ILogicWorldObject, pMVar15 == (MVWorldObjectClient *)0x0)) break;
            lVar14 = FUN_?(pMVar15,TypeInfo__ILogicWorldObject);
            pIVar17 = TypeInfo__ILogicWorldObject;
            if (lVar14 == 0) {
              FUN_?(pMVar15,pIVar16);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar18 = (longlong *)FUN_?(pMVar15,TypeInfo__ILogicWorldObject);
            if (plVar18 == (longlong *)0x0) {
              FUN_?(pMVar15,pIVar17);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar14 = *plVar18;
            uVar19 = 0;
            if (*(ushort *)(lVar14 + 0x12e) != 0) {
              uVar20 = uVar19;
              do {
                if (*(ILogicWorldObject__Class **)
                     (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                    TypeInfo__ILogicWorldObject) {
                  puVar21 = (undefined8 *)
                            ((longlong)
                             *(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) *
                             0x10 + 0x138 + lVar14);
                  goto code_?;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < *(ushort *)(lVar14 + 0x12e));
            }
            puVar21 = (undefined8 *)FUN_?(plVar18,TypeInfo__ILogicWorldObject,0);
code_?:
            plVar18 = (longlong *)(*(code *)*puVar21)(plVar18,puVar21[1]);
            if (plVar18 == (longlong *)0x0) break;
            lVar14 = *plVar18;
            if (*(ushort *)(lVar14 + 0x12e) != 0) {
              do {
                if (*(IInputSignalReceiver__Class **)
                     (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                    TypeInfo__IInputSignalReceiver) {
                  puVar21 = (undefined8 *)
                            ((longlong)
                             *(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) *
                             0x10 + 0x138 + lVar14);
                  goto code_?;
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 < *(ushort *)(lVar14 + 0x12e));
            }
            puVar21 = (undefined8 *)FUN_?(plVar18,TypeInfo__IInputSignalReceiver,0);
code_?:
            (*(code *)*puVar21)(plVar18,bVar10);
            pLVar1 = (pMVar7->fields)._.outputLinkRefs;
            if (pLVar1 == (List_1_MV_WorldObject_Link_ *)0x0) break;
            if ((uint)(pLVar1->fields)._size <= uVar8) goto code_?;
            pLVar13 = (pLVar1->fields)._items;
            if (pLVar13 == (Link__Array *)0x0) break;
            if ((uint)pLVar13->max_length <= uVar8) goto code_?;
            lVar14 = *(longlong *)((longlong)pLVar13->vector + lVar9 + -0x20);
            if (lVar14 == 0) break;
            uVar8 = uVar8 + 1;
            *(bool *)(lVar14 + 0x1c) = bVar10;
            lVar9 = lVar9 + 8;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_Reset(MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentValue);
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
          ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_3._0_5_ = CONCAT14(1,(undefined4)uStack_3);
  uStack_2 = CONCAT44(iVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_3 = uStack_3 & 0xffffffff00000000;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_currentValue,&uStack_2);
  return;
}


/* Void SetRandomIndex(Int32) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_SetRandomIndex
               (MVRandomBox *this,int32_t randomIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                  ,CONCAT44(in_register_00000014,randomIndex),0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentValue);
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
          ObscuredInt_Encrypt(randomIndex,(MethodInfo *)0x0);
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
    iVar4 = randomIndex;
  }
  uStack_3._0_4_ = iVar4;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_currentValue,&uStack_2);
  return;
}


/* MVRandomBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox__ctor
               (MVRandomBox *this,Dictionary_2_System_Object_System_Object_ *data,
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
              ((MVLogicObject *)this,data,(pPVar1->fields).mvRandomBoxPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x10000;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ObscuredInt[] get_CurrentRandomValues() */

ObscuredInt__Array *
Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_CurrentRandomValues
          (MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentRandomValues);
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
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentRandomValues,(MethodInfo *)0x0);
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
  pOVar3 = (ObscuredInt__Array *)0x0;
  if (pOVar1 != (Object *)0x0) {
    pOVar3 = (ObscuredInt__Array *)
             FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    if (pOVar3 == (ObscuredInt__Array *)0x0) {
      FUN_?(pOVar1,pOVar2);
      pcVar4 = (code *)swi(3);
      pOVar3 = (ObscuredInt__Array *)(*pcVar4)();
      return pOVar3;
    }
  }
  return pOVar3;
}


/* Int32 get_CurrentValue() */

int32_t Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_CurrentValue
                  (MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentValue);
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
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_DocumentationType
          (MVRandomBox *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_RandomBox;
}


/* Void set_CurrentValue(Int32) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_set_CurrentValue
               (MVRandomBox *this,int32_t value,MethodInfo *method)

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
    FUN_?(&StringLiteral_currentValue);
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
  FUN_?(uVar1,StringLiteral_currentValue,&uStack_2);
  return;
}

