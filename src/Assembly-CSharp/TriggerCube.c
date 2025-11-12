
/* Void Callback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_Callback
               (TriggerCube *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  pOVar1 = (this->fields).outputSignalTransmitter;
  if (pOVar1 == (OutputSignalTransmitter *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?(this,CONCAT71(in_register_00000011,b));
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = (this->fields).isDown;
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
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar5,(pOVar1->fields).woId,(MethodInfo *)0x0),
      pMVar6 == (MVWorldObjectClient *)0x0)) ||
     (auStack_2._0_8_ = (pMVar6->fields)._.outputLinkRefs,
     (List_1_MV_WorldObject_Link_ *)auStack_2._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  puStack_12 = (undefined1 *)
               ((ulonglong)
                (uint)(((List_1_MV_WorldObject_Link_ *)auStack_2._0_8_)->fields)._version << 0x20);
  uStack_13 = 0;
  auStack_2._8_8_ = puStack_12;
  pOStack_14 = (Object *)0x0;
  uStack_8 = 0;
  puStack_12 = auStack_2;
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                       );
    pOVar16 = pOStack_14;
    if (bVar15 == 0) {
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
    pMVar5 = (MVWorldObjectClientManager *)0x0;
    if ((pMVar18->fields).worldNetwork != (WorldNetwork *)0x0) {
      pMVar5 = (MVWorldObjectClientManager *)
                (((pMVar18->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    if (pOVar16 == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (pMVar5 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar5,*(int32_t *)&pOVar16[1].monitor,(MethodInfo *)0x0);
    pIVar19 = TypeInfo__ILogicWorldObject;
    if (pMVar6 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar20 = FUN_?(pMVar6,unaff_RSI);
code_?:
      FUN_?(uVar20,pIVar19);
      goto code_?;
    }
    lVar21 = FUN_?(pMVar6,TypeInfo__ILogicWorldObject);
    unaff_RSI = TypeInfo__ILogicWorldObject;
    uVar20 = extraout_XMM0_Da;
    if (lVar21 == 0) goto code_?;
    pIVar19 = (ILogicWorldObject__Class *)FUN_?(pMVar6,TypeInfo__ILogicWorldObject);
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
    pMVar6 = (MVWorldObjectClient *)0x0;
    if (plVar27 == (longlong *)0x0) goto code_?;
    lVar21 = *plVar27;
    if (*(ushort *)(lVar21 + 0x12e) != 0) {
      do {
        if (*(IInputSignalReceiver__Class **)
             (*(longlong *)(lVar21 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
            TypeInfo__IInputSignalReceiver) {
          puVar28 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar21 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10)
                     * 0x10 + 0x138 + lVar21);
          goto code_?;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ushort *)(lVar21 + 0x12e));
    }
    puVar28 = (undefined8 *)FUN_?(plVar27,TypeInfo__IInputSignalReceiver,0);
code_?:
    (*(code *)*puVar28)(plVar27,bVar4);
    *(bool *)((longlong)&pOVar16[1].monitor + 4) = bVar4;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean DoEnter(Int32) */

bool Assembly-CSharp.dll::TriggerCube::TriggerCube_DoEnter
               (TriggerCube *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (instigator != -1) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_00,(this->fields)._._._.id,instigator,(MethodInfo *)0x0);
      return 1;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Trigger_cube_entered_by_object_w,(MethodInfo *)0x0);
  return 0;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_Initialize(TriggerCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TriggerCube__Callback_bool__bool__LogicObjectManager_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TriggerCube__DoEnter_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TriggerCube__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TriggerCube__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_triggerBoxState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if (pTVar1 == (TriggerCubePrefab *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (pTVar1->fields).triggerBoxEvents;
  pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar4,(Object *)this,
             MethodInfo__TriggerCube__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if (pTVar1 == (TriggerCubePrefab *)0x0) goto code_?;
  pTVar3 = (pTVar1->fields).triggerBoxEvents;
  pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar4,(Object *)this,
             MethodInfo__TriggerCube__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
  signalCallback =
       (Action_3_Boolean_Boolean_LogicObjectManager_ *)
       FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  FUN_?(signalCallback,this,
                MethodInfo__TriggerCube__Callback_bool__bool__LogicObjectManager_);
  pIVar5 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                      ((MVWorldObject *)this,1,signalCallback,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar11 = (this->fields)._._._.id;
  pOVar12 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
  bVar6 = iRam_? != 0;
  (pOVar12->fields).woId = iVar11;
  (this->fields).outputSignalTransmitter = pOVar12;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar13 = Extensions::Extensions_GetObscuredType
                      (hashtable,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar13 == (Object *)0x0) goto code_?;
  if ((pOVar13->klass->_0).element_class !=
      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
    FUN_?(pOVar13,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  auStack_14 = (undefined1  [8])pOVar13[1].klass;
  pOStack_15 = (Object *)CONCAT44(pOStack_15._4_4_,*(undefined4 *)&pOVar13[1].monitor);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_InternalDecrypt((ObscuredBool *)(auStack_17 + 8),(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  (this->fields).isDown = bVar16;
  if (pTVar1 == (TriggerCubePrefab *)0x0) goto code_?;
  pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,pGVar18,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
  TriggerCube_SetScale(this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if (pTVar1 == (TriggerCubePrefab *)0x0) goto code_?;
  pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if ((pTVar1 == (TriggerCubePrefab *)0x0) ||
     (pTVar3 = (pTVar1->fields).triggerBoxEvents, pTVar3 == (TriggerBoxEvents *)0x0))
  goto code_?;
  triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
  FUN_?(useFunction,this,MethodInfo__TriggerCube__DoEnter_int_);
  pUVar19 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
  UseInteractor::UseInteractor__ctor
            (pUVar19,(MVWorldObjectClient *)this,pGVar18,0,triggerCollider,useFunction,
             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,0,1,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).useInteractor = pUVar19;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pTVar1 = (this->fields).objPrefab;
  if (pTVar1 == (TriggerCubePrefab *)0x0) goto code_?;
  pUVar20 = (UseRequirement__Class *)(pTVar1->fields).tintObject;
  useRequirement = (UseRequirement *)FUN_?(TypeInfo__TeamRequirement);
  bVar6 = iRam_? != 0;
  *(undefined4 *)&useRequirement[1].monitor = 5;
  useRequirement[1].klass = pUVar20;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)(useRequirement + 1) >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  *(undefined1 *)((longlong)&useRequirement[1].monitor + 4) = 0;
  pUVar19 = (this->fields).useInteractor;
  if (pUVar19 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar19,useRequirement,(MethodInfo *)0x0);
  pUVar19 = (this->fields).useInteractor;
  if ((pUVar19 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar19->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0
     )) goto code_?;
  iVar11 = (pUVar19->fields).woOwnerID;
  pOVar21 = (Object__Class *)(this->fields)._._._.data;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar13 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar13 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar6 = iRam_? != 0;
  pOVar13[1].klass = pOVar21;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)(pOVar13 + 1) >> 0xc);
    lVar22 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar22 + 0xADDR);
      puVar10 = (ulonglong *)(lVar22 + 0xADDR);
      LOCK();
      bVar6 = uVar8 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  *(int32_t *)&pOVar13[1].monitor = iVar11;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar22 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar22 + 0xADDR);
        puVar10 = (ulonglong *)(lVar22 + 0xADDR);
        LOCK();
        bVar6 = uVar8 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar13,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar23 = (this_00->fields).useRequirements;
  if (pLVar23 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  auStack_14 = (undefined1  [8])((ulonglong)(uint)(pLVar23->fields)._version << 0x20);
  pOStack_15 = (Object *)0x0;
  auStack_17 = (undefined1  [8])pLVar23;
  while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_17,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar16 != 0) {
    if (pOStack_15 == (Object *)0x0) goto code_?;
    cVar24 = (*(code *)pOStack_15->klass[1]._0.interopData)
                       (pOStack_15,pOStack_15->klass[1]._0.klass);
    if (cVar24 != '\0') {
      piVar25 = &(this_00->fields).active;
      *piVar25 = *piVar25 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar6 = (this_00->fields).active == 0;
  if (!bVar6) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar6 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar6;
  fVar26 = 0.0;
  pLVar23 = (this_00->fields).useRequirements;
  if (pLVar23 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  auStack_14 = (undefined1  [8])((ulonglong)(uint)(pLVar23->fields)._version << 0x20);
  pOStack_15 = (Object *)0x0;
  auStack_17 = (undefined1  [8])pLVar23;
  while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_17,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar13 = pOStack_15, bVar16 != 0) {
    if (pOStack_15 == (Object *)0x0) goto code_?;
    cVar24 = (*(code *)pOStack_15->klass[1]._0.interopData)
                       (pOStack_15,pOStack_15->klass[1]._0.klass);
    if (cVar24 != '\0') {
      pOVar21 = pOVar13->klass;
      (*(code *)pOVar21[1]._0.fields)
                (pOVar13,&stack0xffffffffffffffa8,fVar26,(this_00->fields).dist,pOVar21[1]._0.events
                );
      fVar26 = fVar26 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar16 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar27 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar27 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar28 = func_?(&UNK_?);
    FUN_?(uVar28,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar27,bVar16);
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_InitializeInventory
               (TriggerCube *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if (((pTVar1 == (TriggerCubePrefab *)0x0) ||
      (this_00 = (pTVar1->fields).triggerBoxEvents, this_00 == (TriggerBoxEvents *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_OnDataUpdate
               (TriggerCube *this,MethodInfo *method)

{
  auStack_1._0_8_ = &UNK_?;
  TriggerCube_SetScale(this,(MethodInfo *)0x0);
  pUVar2 = (this->fields).useInteractor;
  if ((pUVar2 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar2->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pUVar2->fields).woOwnerID;
  pOVar5 = (Object__Class *)(this->fields)._._._.data;
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  pOVar6 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar6 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = iRam_? != 0;
  pOVar6[1].klass = pOVar5;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  *(int32_t *)&pOVar6[1].monitor = iVar4;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_1._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar6,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar12 = (this_00->fields).useRequirements;
  if (pLVar12 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLStack_13 >> 0xc);
    uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar14 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  puStack_15 = (undefined1 *)((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
  uStack_16 = 0;
  auStack_1._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  uStack_18 = 0;
  puStack_19 = auStack_1;
  pLStack_13 = pLVar12;
  auStack_1._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar20 != 0) {
    if (pOStack_17 == (Object *)0x0) goto code_?;
    cVar21 = (*(code *)pOStack_17->klass[1]._0.interopData)
                       (pOStack_17,pOStack_17->klass[1]._0.klass);
    if (cVar21 != '\0') {
      piVar22 = &(this_00->fields).active;
      *piVar22 = *piVar22 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar7 = (this_00->fields).active == 0;
  if (!bVar7) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar7 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar7;
  fVar23 = 0.0;
  pLVar12 = (this_00->fields).useRequirements;
  if (pLVar12 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLStack_13 >> 0xc);
    uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar14 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  puStack_15 = (undefined1 *)((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
  uStack_16 = 0;
  auStack_1._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  pLStack_13 = (List_1_UseRequirement_ *)0x0;
  puStack_15 = auStack_1;
  auStack_1._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar6 = pOStack_17, bVar20 != 0) {
    if (pOStack_17 == (Object *)0x0) goto code_?;
    cVar21 = (*(code *)pOStack_17->klass[1]._0.interopData)
                       (pOStack_17,pOStack_17->klass[1]._0.klass);
    if (cVar21 != '\0') {
      pOVar5 = pOVar6->klass;
      uStack_18._0_4_ = (this_00->fields).pivot.x;
      uStack_18._4_4_ = (this_00->fields).pivot.y;
      puStack_19 = (undefined1 *)CONCAT44(puStack_19._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar5[1]._0.fields)
                (pOVar6,&uStack_18,fVar23,(this_00->fields).dist,pOVar5[1]._0.events);
      fVar23 = fVar23 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar20 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar24 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar24 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar25 = func_?(&UNK_?);
    FUN_?(uVar25,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar24,bVar20);
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_OnIsFiringChanged
               (TriggerCube *this,bool isFiring,MethodInfo *method)

{
  (this->fields).isDown = isFiring;
  return;
}


/* Void SetScale() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_SetScale(TriggerCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_scaleX);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_scaleY);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_scaleZ);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_scaleX,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar1 = (this->fields)._._._.data;
    radius = *(float *)&pOVar2[1].klass;
    if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar1,(Object *)StringLiteral_scaleY,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar1 = (this->fields)._._._.data;
      uVar4 = *(undefined4 *)&pOVar2[1].klass;
      if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar1,(Object *)StringLiteral_scaleZ,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar2 != (Object *)0x0)) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar2);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar5 = (this->fields).objPrefab;
        uVar6 = *(undefined4 *)&pOVar2[1].klass;
        if (pTVar5 != (TriggerCubePrefab *)0x0) {
          this_00 = (pTVar5->fields).triggerBoxEvents;
          if ((this_00 == (TriggerBoxEvents *)0x0) ||
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0),
             pTVar7 == (Transform *)0x0)) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar8);
          this_01 = (this->fields)._._.outputConnectorObject;
          (this->fields).outputConnectorOffset.x = radius * _UNK_? + _UNK_?;
          if ((this_01 != (GameObject *)0x0) &&
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_01,(MethodInfo *)0x0),
             pTVar7 != (Transform *)0x0)) {
            aVStack_10[0].x = (this->fields).outputConnectorOffset.x;
            aVStack_10[0].y = (this->fields).outputConnectorOffset.y;
            aVStack_10[0].z = (this->fields).outputConnectorOffset.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar8,aVStack_10);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
                 (IEditModeUI *)0x0) ||
               (cVar11 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)
                                   (this,(this->klass->vtable).get_HasVisualsInPlaymode.method),
               cVar11 == '\0')) {
              return;
            }
            lVar12 = FUN_?(TypeInfo__System__Single,4);
            if (lVar12 != 0) {
              if ((((*(int *)(lVar12 + 0x18) == 0) ||
                   (*(float *)(lVar12 + 0x20) = radius, *(uint *)(lVar12 + 0x18) < 2)) ||
                  (*(undefined4 *)(lVar12 + 0x24) = uVar4, *(uint *)(lVar12 + 0x18) < 3)) ||
                 (*(undefined4 *)(lVar12 + 0x28) = uVar6, *(uint *)(lVar12 + 0x18) < 4)) {
code_?:
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)(lVar12 + 0x2c) = 0x40000000;
              iVar13 = *(int *)(lVar12 + 0x18);
              if (iVar13 == 0) {
                radius = 0.0;
              }
              else {
                if (*(int *)(lVar12 + 0x18) == 0) goto code_?;
                uVar14 = 1;
                if (1 < iVar13) {
                  lVar15 = 1;
                  pfVar16 = (float *)(lVar12 + 0x24);
                  do {
                    if (*(uint *)(lVar12 + 0x18) <= uVar14) goto code_?;
                    if (radius < *pfVar16) {
                      radius = *pfVar16;
                    }
                    uVar14 = uVar14 + 1;
                    lVar15 = lVar15 + 1;
                    pfVar16 = pfVar16 + 1;
                  } while (lVar15 < iVar13);
                }
              }
              pCVar17 = (this->fields)._.cullingSubscriberBase;
              if (pCVar17 != (CullingSubscriberBase *)0x0) {
                CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar17,(MethodInfo *)0x0);
                puVar18 = (undefined8 *)
                          (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                                    (aVStack_10,this,
                                     (this->klass->vtable).get_WorldPosition_1.method);
                uVar9 = *puVar18;
                fVar19 = *(float *)(puVar18 + 1);
                callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                           FUN_?(
                                        TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                        );
                FUN_?(callback,this);
                pCVar17 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
                CullingSubscriberBase::CullingSubscriberBase__ctor_1
                          (pCVar17,callback,(MethodInfo *)0x0);
                aVStack_10[0]._0_8_ = uVar9;
                aVStack_10[0].z = fVar19;
                CullingSubscriberBase::CullingSubscriberBase_Setup
                          (pCVar17,radius,aVStack_10,(MethodInfo *)0x0);
                bVar20 = iRam_? == 0;
                (this->fields)._.cullingSubscriberBase = pCVar17;
                if (bVar20) {
                  return;
                }
                uVar14 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
                uVar21 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
                do {
                  uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
                  puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
                  LOCK();
                  bVar20 = uVar22 == *puVar23;
                  if (bVar20) {
                    *puVar23 = uVar22 | 1L << (uVar14 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar20);
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TriggerCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube__ctor
               (TriggerCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TriggerCubePrefab);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).outputConnectorOffset.x = (float)(int)uVar2;
  (this->fields).outputConnectorOffset.y = (float)(int)(uVar2 >> 0x20);
  (this->fields).outputConnectorOffset.z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar3 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar3->fields).triggerCubePrefab,
             worldObjects,(MethodInfo *)0x0);
  piVar5 = &(this->fields)._._.interactionFlags;
  *piVar5 = *piVar5 | 0x2018000;
  pTVar6 = (TriggerCubePrefab *)(this->fields)._._.component;
  if (pTVar6 == (TriggerCubePrefab *)0x0) {
    (this->fields).objPrefab = (TriggerCubePrefab *)0x0;
  }
  else {
    bVar7 = (TypeInfo__TriggerCubePrefab->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pTVar6->klass)->_1).naturalAligment < bVar7) ||
       ((((ObjectPrefab__Class *)pTVar6->klass)->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
      FUN_?(pTVar6);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->fields).objPrefab = pTVar6;
    bVar7 = (TypeInfo__TriggerCubePrefab->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pTVar6->klass)->_1).naturalAligment < bVar7) ||
       ((((ObjectPrefab__Class *)pTVar6->klass)->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
      FUN_?(pTVar6);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).objPrefab >> 0xc);
    uVar2 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TriggerCube::TriggerCube_get_DocumentationType
          (TriggerCube *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TriggerCube;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::TriggerCube::TriggerCube_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,TriggerCube *this,MethodInfo *method)

{
  fVar1 = (this->fields).outputConnectorOffset.z;
  fVar2 = (this->fields).outputConnectorOffset.y;
  __return_storage_ptr__->x = (this->fields).outputConnectorOffset.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_triggerBoxEvents_TriggerEnter
               (TriggerCube *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trigger_cube_entered_by_object_w);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UVar2 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (this_00,(MethodInfo *)0x0);
    if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
      triggerInstigatorId =
           MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      if (triggerInstigatorId == -1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = StringLiteral_Trigger_cube_entered_by_object_w;
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
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_02,(this->fields)._._._.id,triggerInstigatorId,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_triggerBoxEvents_TriggerExit
               (TriggerCube *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    iVar1 = MVWorldObjectClientManager::
            MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                      (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Pressure_plated_exited_by_object;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
      return;
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
      iVar6 = (this->fields)._._._.id;
      uVar7 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,iVar6,iVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar8 != (MVGameControllerBase *)0x0) {
        if ((pMVar8->fields)._joinState != 3) {
          return;
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        uVar9 = 0;
        value = (Object *)FUN_?(TypeInfo__System__Int32,2);
        if (value != (Object *)0x0) {
          if ((*(int *)&value[1].monitor == 0) ||
             (*(int32_t *)&value[2].klass = iVar6, *(uint *)&value[1].monitor < 2)) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int32_t *)((longlong)&value[2].klass + 4) = iVar1;
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),0x16);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x16,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pPVar10 = (pMVar5->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar10 != (PhotonPeer *)0x0) {
              (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                        (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x13),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar10->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

