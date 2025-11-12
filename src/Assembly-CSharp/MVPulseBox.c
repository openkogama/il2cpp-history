
/* Void Initialize() */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_Initialize(MVPulseBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPulseBox__OnSignal_bool__bool__LogicObjectManager_);
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
  signalCallback =
       (Action_3_Boolean_Boolean_LogicObjectManager_ *)
       FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  FUN_?(signalCallback,this,MethodInfo__MVPulseBox__OnSignal_bool__bool__LogicObjectManager_
               );
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,1,signalCallback,(MethodInfo *)0x0);
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


/* Void OnSignal(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_OnSignal
               (MVPulseBox *this,bool isHot,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_intervalOff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_intervalOn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isHot == 0) {
    pOVar1 = (this->fields).outputSignalTransmitter;
    if (pOVar1 == (OutputSignalTransmitter *)0x0) goto code_?;
  }
  else {
    pDVar2 = (this->fields)._._._.data;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar2,(Object *)StringLiteral_intervalOn,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar4,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar2 = (this->fields)._._._.data;
    iVar5 = (int)(*(float *)&pOVar4[1].klass * _UNK_?);
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar2,(Object *)StringLiteral_intervalOff,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar4,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar6 = *(float *)&pOVar4[1].klass * _UNK_?;
    if (logicObjectManager == (LogicObjectManager *)0x0) goto code_?;
    iVar7 = (logicObjectManager->fields)._TimeStamp_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Extensions);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_currentStartTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar4 = Extensions::Extensions_GetObscuredType
                        (pDVar2,StringLiteral_currentStartTime,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      FUN_?(pOVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
    pOVar1 = (this->fields).outputSignalTransmitter;
    if (pOVar1 == (OutputSignalTransmitter *)0x0) goto code_?;
    if ((iVar7 - iVar8) % ((int)fVar6 + iVar5) < iVar5) {
      uVar9 = 1;
      goto code_?;
    }
  }
  uVar9 = 0;
code_?:
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
  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar10 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar10,(pOVar1->fields).woId,(MethodInfo *)0x0),
      pMVar11 == (MVWorldObjectClient *)0x0)) ||
     (LStack_12._list = (List_1_System_Object_ *)(pMVar11->fields)._.outputLinkRefs,
     (List_1_MV_WorldObject_Link_ *)LStack_12._list == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&uStack_14 >> 0xc);
    puVar15 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar16 = *puVar15;
      LOCK();
      uVar17 = *puVar15;
      if (uVar16 == uVar17) {
        *puVar15 = uVar16 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (uVar16 != uVar17);
  }
  pLStack_18 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MV_WorldObject_Link_ *)LStack_12._list)->fields)._version
               << 0x20);
  puStack_19 = (undefined *)0x0;
  LStack_12._8_8_ = pLStack_18;
  LStack_12._current = (Object *)0x0;
  uStack_14 = 0;
  pLStack_18 = &LStack_12;
  while( true ) {
    bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       (&LStack_12,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                       );
    pOVar4 = LStack_12._current;
    if (bVar20 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar21 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar21 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar22 = (pMVar21->fields).game;
    if (pMVar22 == (MVNetworkGame *)0x0) break;
    pMVar10 = (MVWorldObjectClientManager *)0x0;
    if ((pMVar22->fields).worldNetwork != (WorldNetwork *)0x0) {
      pMVar10 = (MVWorldObjectClientManager *)
                (((pMVar22->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    if (pOVar4 == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (pMVar10 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar10,*(int32_t *)&pOVar4[1].monitor,(MethodInfo *)0x0);
    pIVar23 = TypeInfo__ILogicWorldObject;
    if (pMVar11 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar24 = FUN_?(pMVar11,unaff_RSI);
code_?:
      FUN_?(uVar24,pIVar23);
      goto code_?;
    }
    lVar25 = FUN_?(pMVar11,TypeInfo__ILogicWorldObject);
    unaff_RSI = TypeInfo__ILogicWorldObject;
    uVar24 = extraout_XMM0_Da;
    if (lVar25 == 0) goto code_?;
    pIVar23 = (ILogicWorldObject__Class *)FUN_?(pMVar11,TypeInfo__ILogicWorldObject);
    if (pIVar23 == (ILogicWorldObject__Class *)0x0) goto code_?;
    pIVar26 = (pIVar23->_0).image;
    uVar27 = 0;
    uVar28 = *(ushort *)((longlong)&pIVar26[4].nameNoExt + 6);
    if (uVar28 != 0) {
      uVar29 = uVar27;
      do {
        if (*(ILogicWorldObject__Class **)
             (*(longlong *)&pIVar26[2].customAttributeCount + (ulonglong)uVar29 * 0x10) ==
            TypeInfo__ILogicWorldObject) {
          puVar30 = &pIVar26[4].typeCount +
                    (longlong)
                    *(int *)(*(longlong *)&pIVar26[2].customAttributeCount + 8 +
                            (ulonglong)uVar29 * 0x10) * 4;
          goto code_?;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar28);
    }
    puVar30 = (uint32_t *)FUN_?(pIVar23,TypeInfo__ILogicWorldObject,0);
code_?:
    plVar31 = (longlong *)(**(code **)puVar30)(pIVar23,*(undefined8 *)(puVar30 + 2));
    pMVar11 = (MVWorldObjectClient *)0x0;
    if (plVar31 == (longlong *)0x0) goto code_?;
    lVar25 = *plVar31;
    if (*(ushort *)(lVar25 + 0x12e) != 0) {
      do {
        if (*(IInputSignalReceiver__Class **)
             (*(longlong *)(lVar25 + 0xb0) + (ulonglong)uVar27 * 0x10) ==
            TypeInfo__IInputSignalReceiver) {
          puVar32 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar25 + 0xb0) + 8 + (ulonglong)uVar27 * 0x10)
                     * 0x10 + 0x138 + lVar25);
          goto code_?;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < *(ushort *)(lVar25 + 0x12e));
    }
    puVar32 = (undefined8 *)FUN_?(plVar31,TypeInfo__IInputSignalReceiver,0);
code_?:
    (*(code *)*puVar32)(plVar31,uVar9);
    *(undefined1 *)((longlong)&pOVar4[1].monitor + 4) = uVar9;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_Reset(MVPulseBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pLVar3 = (pMVar2->fields)._LogicObjectManager_k__BackingField,
     pLVar3 != (LogicObjectManagerClient *)0x0)) {
    value = (pLVar3->fields)._._TimeStamp_k__BackingField;
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
      FUN_?(&StringLiteral_currentStartTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_5 = 0;
    uStack_6 = 0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
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
    uStack_6._0_5_ = CONCAT14(1,(int32_t)uStack_6);
    uStack_5 = CONCAT44(iVar7,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                               static_fields->cryptoKey);
    bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar7 = 0;
    if (bVar8 != 0) {
      iVar7 = value;
    }
    uStack_6._0_4_ = iVar7;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    FUN_?(uVar4,StringLiteral_currentStartTime,&uStack_5);
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVPulseBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox__ctor
               (MVPulseBox *this,Dictionary_2_System_Object_System_Object_ *data,
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
              ((MVLogicObject *)this,data,(pPVar1->fields).mvPulseBoxPrefab,worldObjects,
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


/* Int32 get_CurrentStartTime() */

int32_t Assembly-CSharp.dll::MVPulseBox::MVPulseBox_get_CurrentStartTime
                  (MVPulseBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentStartTime);
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
                     (hashtable,StringLiteral_currentStartTime,(MethodInfo *)0x0);
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


/* Void set_CurrentStartTime(Int32) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_set_CurrentStartTime
               (MVPulseBox *this,int32_t value,MethodInfo *method)

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
    FUN_?(&StringLiteral_currentStartTime);
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
  FUN_?(uVar1,StringLiteral_currentStartTime,&uStack_2);
  return;
}

