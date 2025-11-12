
/* Void Initialize() */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_Initialize(MVToggleBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVToggleBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
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
             MethodInfo__MVToggleBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_,
             (MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_InputStateUpdateCallback
               (MVToggleBox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  auStack_1._8_8_ = &UNK_?;
  bVar2 = MVToggleBox_get_Toggled(this,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&StringLiteral_once);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._._._.data;
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    auStack_1._8_8_ = &UNK_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (this_00,(Object *)StringLiteral_once,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(pOVar3,lRam_?);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)&pOVar3[1].klass != '\0') {
      pOVar5 = (this->fields).outputSignalTransmitter;
      if (pOVar5 == (OutputSignalTransmitter *)0x0) goto code_?;
      bVar2 = 1;
      goto Assembly_CSharp_dll_OutputSignalTransmitter_OutputSignalTransmitter_Send;
    }
  }
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    auStack_1._8_8_ = &UNK_?;
    bVar2 = MVToggleBox_get_Toggled(this,(MethodInfo *)0x0);
    auStack_1._8_8_ = &UNK_?;
    MVToggleBox_set_Toggled(this,bVar2 ^ 1,(MethodInfo *)0x0);
  }
  pOVar5 = (this->fields).outputSignalTransmitter;
  auStack_1._8_8_ = &UNK_?;
  bVar2 = MVToggleBox_get_Toggled(this,(MethodInfo *)0x0);
  if (pOVar5 != (OutputSignalTransmitter *)0x0) {
Assembly_CSharp_dll_OutputSignalTransmitter_OutputSignalTransmitter_Send:
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
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar6,(pOVar5->fields).woId,(MethodInfo *)0x0),
        pMVar7 == (MVWorldObjectClient *)0x0)) ||
       (auStack_1._0_8_ = (pMVar7->fields)._.outputLinkRefs,
       (List_1_MV_WorldObject_Link_ *)auStack_1._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    puStack_13 = (undefined1 *)
                 ((ulonglong)
                  (uint)(((List_1_MV_WorldObject_Link_ *)auStack_1._0_8_)->fields)._version << 0x20
                 );
    uStack_14 = 0;
    auStack_1._8_8_ = puStack_13;
    pOStack_15 = (Object *)0x0;
    uStack_9 = 0;
    puStack_13 = auStack_1;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                         );
      pOVar3 = pOStack_15;
      if (bVar16 == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar17 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar18 = (pMVar17->fields).game;
      if (pMVar18 == (MVNetworkGame *)0x0) break;
      pMVar6 = (MVWorldObjectClientManager *)0x0;
      if ((pMVar18->fields).worldNetwork != (WorldNetwork *)0x0) {
        pMVar6 = (MVWorldObjectClientManager *)
                  (((pMVar18->fields).worldNetwork)->fields)._.worldObjectClientManager;
      }
      if (pOVar3 == (Object *)0x0) {
code_?:
        FUN_?();
        break;
      }
      if (pMVar6 == (MVWorldObjectClientManager *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar6,*(int32_t *)&pOVar3[1].monitor,(MethodInfo *)0x0);
      pIVar19 = TypeInfo__ILogicWorldObject;
      if (pMVar7 == (MVWorldObjectClient *)0x0) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        uVar20 = FUN_?(pMVar7,unaff_RSI);
code_?:
        FUN_?(uVar20,pIVar19);
        goto code_?;
      }
      lVar21 = FUN_?(pMVar7,TypeInfo__ILogicWorldObject);
      unaff_RSI = TypeInfo__ILogicWorldObject;
      uVar20 = extraout_XMM0_Da;
      if (lVar21 == 0) goto code_?;
      pIVar19 = (ILogicWorldObject__Class *)FUN_?(pMVar7,TypeInfo__ILogicWorldObject);
      if (pIVar19 == (ILogicWorldObject__Class *)0x0) goto code_?;
      pIVar22 = (pIVar19->_0).image;
      uVar23 = 0;
      uVar24 = *(ushort *)((longlong)&pIVar22[4].nameNoExt + 6);
      if (uVar24 != 0) {
        uVar25 = uVar23;
        do {
          if (*(ILogicWorldObject__Class **)
               (*(longlong *)&pIVar22[2].customAttributeCount + (ulonglong)uVar25 * 0x10) ==
              TypeInfo__ILogicWorldObject) {
            puVar26 = &pIVar22[4].typeCount +
                      (longlong)
                      *(int *)(*(longlong *)&pIVar22[2].customAttributeCount + 8 +
                              (ulonglong)uVar25 * 0x10) * 4;
            goto code_?;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar24);
      }
      puVar26 = (uint32_t *)FUN_?(pIVar19,TypeInfo__ILogicWorldObject,0);
code_?:
      plVar27 = (longlong *)(**(code **)puVar26)(pIVar19,*(undefined8 *)(puVar26 + 2));
      pMVar7 = (MVWorldObjectClient *)0x0;
      if (plVar27 == (longlong *)0x0) goto code_?;
      lVar21 = *plVar27;
      if (*(ushort *)(lVar21 + 0x12e) != 0) {
        do {
          if (*(IInputSignalReceiver__Class **)
               (*(longlong *)(lVar21 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
              TypeInfo__IInputSignalReceiver) {
            puVar28 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar21 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10) * 0x10
                       + 0x138 + lVar21);
            goto code_?;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ushort *)(lVar21 + 0x12e));
      }
      puVar28 = (undefined8 *)FUN_?(plVar27,TypeInfo__IInputSignalReceiver,0);
code_?:
      (*(code *)*puVar28)(plVar27,bVar2);
      *(bool *)((longlong)&pOVar3[1].monitor + 4) = bVar2;
    }
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_Reset(MVToggleBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_toggled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_3 = (ulonglong)uVar2 << 0x20;
  uStack_4 = 0x10000;
  lStack_3 = CONCAT71(lStack_3._1_7_,
                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                       cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar5 != 0) {
    uStack_4 = 0x10100;
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_6 = lStack_3;
  uStack_7 = uStack_4;
  FUN_?(uVar1,StringLiteral_toggled,&uStack_6);
  return;
}


/* MVToggleBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox__ctor
               (MVToggleBox *this,Dictionary_2_System_Object_System_Object_ *data,
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
              ((MVLogicObject *)this,data,(pPVar1->fields).mvToggleBoxPrefab,worldObjects,
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


/* Boolean get_Once() */

bool Assembly-CSharp.dll::MVToggleBox::MVToggleBox_get_Once(MVToggleBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_once);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_once,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_Toggled() */

bool Assembly-CSharp.dll::MVToggleBox::MVToggleBox_get_Toggled(MVToggleBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_toggled);
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
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_toggled,(MethodInfo *)0x0)
  ;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      apOStack_2[0] = pOVar1[1].klass;
      apOStack_2[1]._0_4_ = *(undefined4 *)&pOVar1[1].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_InternalDecrypt((ObscuredBool *)apOStack_2,(MethodInfo *)0x0);
      return bVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void set_Once(Boolean) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_set_Once
               (MVToggleBox *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_once);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  abStackX_10[0] = value;
  value_00 = (Object *)FUN_?(uRam_?,abStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_once,value_00,CONCAT31((int3)((uint)in_R9D >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Toggled(Boolean) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_set_Toggled
               (MVToggleBox *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_toggled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_3 = (ulonglong)uVar2 << 0x20;
  uStack_4 = 0x10000;
  lStack_3 = CONCAT71(lStack_3._1_7_,
                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                       cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar5 != 0) {
    uStack_4 = CONCAT22(1,CONCAT11(1,value));
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_6 = lStack_3;
  uStack_7 = uStack_4;
  FUN_?(uVar1,StringLiteral_toggled,&uStack_6);
  return;
}

