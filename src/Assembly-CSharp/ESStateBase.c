
/* Void DeTintCurrent() */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_DeTintCurrent
               (ESStateBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).tintedWo;
  if ((pWVar2 != (WorldObjectClientRef *)0x0) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 != (MVWorldObjectClientManager *)0x0)) {
    pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
    pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    if (pOVar4 != (Object *)0x0) {
      pWVar2 = (this->fields).tintedWo;
      if (((pWVar2 == (WorldObjectClientRef *)0x0) ||
          (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar3 == (MVWorldObjectClientManager *)0x0)) ||
         (pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                             (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method),
         pOVar4 == (Object *)0x0)) goto code_?;
      (*(code *)pOVar4->klass[3].vtable.Equals.method)
                (pOVar4,pOVar4->klass[3].vtable.Finalize.methodPtr);
      pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).tintedWo = pWVar2;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).tintedWo >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Enter
               (ESStateBase *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Enter_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).logger;
  EStack_2.klass = (Enum__Class *)TypeInfo__EditorEvent;
  iStack_3 = (this->fields).stateType;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Enter_,pSVar4,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = 0;
  pIVar7 = pIVar1->klass;
  uVar8._0_1_ = (pIVar7->_1).rank;
  uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        pIVar9 = &pIVar7->vtable + pIVar7->interfaceOffsets[uVar6].offset;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pIVar9 = (ILogger__VTable *)FUN_?(pIVar1);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar9->Log).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,pSVar4,(pIVar9->Log).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Enter_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__EditorStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      FUN_?(e);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Enter_1.methodPtr)(this,e,(this->klass->vtable).Enter_1.method);
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Execute_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__EditorStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      FUN_?(e);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Execute_1.methodPtr)(this,e,(this->klass->vtable).Execute_1.method);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Exit_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    bVar1 = (TypeInfo__EditorStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar1) ||
       ((e->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      FUN_?(e);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Exit_1.methodPtr)(this,e,(this->klass->vtable).Exit_1.method);
  return;
}


/* Boolean SelectionIsAllowedByLogicEnabled(Int32) */

bool Assembly-CSharp.dll::ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
               (int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this,woId,(MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClient *)0x0) || ((pMVar1->fields)._.groupId == -1)) {
code_?:
    bVar2 = 0;
  }
  else {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
    if ((pMVar3->fields).isLogicRendered == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_layer_parameter_constant_should_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = (pMVar1->fields).gameObject;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (pGVar4,(MethodInfo *)0x0);
      if (iVar5 != 0) {
        if ((pMVar1->fields).gameObject == (GameObject *)0x0) {
code_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          bVar2 = (*pcVar6)();
          return bVar2;
        }
        lVar7 = FUN_?();
        uVar8 = 0;
        if (lVar7 == 0) goto code_?;
        puVar9 = (undefined8 *)(lVar7 + 0x20);
        for (; (int)uVar8 < *(int *)(lVar7 + 0x18); uVar8 = uVar8 + 1) {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
code_?:
            FUN_?();
            pcVar6 = (code *)swi(3);
            bVar2 = (*pcVar6)();
            return bVar2;
          }
          if (((Component *)*puVar9 == (Component *)0x0) ||
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)*puVar9,(MethodInfo *)0x0),
             pGVar4 == (GameObject *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pGVar4->fields)._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            bVar2 = (*pcVar6)();
            return bVar2;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar6 = (code *)swi(3);
            bVar2 = (*pcVar6)();
            return bVar2;
          }
          pcRam_? = pcVar6;
          iVar12 = (*pcRam_?)(pvVar10);
          if (iVar12 == 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_?;
            if (((Component *)*puVar9 == (Component *)0x0) ||
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)*puVar9,(MethodInfo *)0x0),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
            if (bVar2 != 0) goto code_?;
          }
          puVar9 = puVar9 + 1;
        }
        goto code_?;
      }
    }
code_?:
    bVar2 = 1;
  }
  return bVar2;
}


/* Void TintObjectsOnMouseOver(EditorStateMachine) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_TintObjectsOnMouseOver
               (ESStateBase *this,EditorStateMachine *e,MethodInfo *method)

{
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  pickSuccess = EditModeObjectPicker::EditModeObjectPicker_Pick
                          (&VStack_1,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  VStack_2.point.x = VStack_1.point.x;
  VStack_2.point.y = VStack_1.point.y;
  VStack_2.point.z = VStack_1.point.z;
  VStack_2.normal.x = VStack_1.normal.x;
  VStack_2.normal.y = VStack_1.normal.y;
  VStack_2.normal.z = VStack_1.normal.z;
  VStack_2.cubePos = VStack_1.cubePos;
  VStack_2._30_2_ = VStack_1._30_2_;
  VStack_2.face = VStack_1.face;
  VStack_2.isCubeHit = VStack_1.isCubeHit;
  VStack_2._37_3_ = VStack_1._37_3_;
  VStack_2.woId = VStack_1.woId;
  VStack_2._44_4_ = VStack_1._44_4_;
  VStack_2.cube = VStack_1.cube;
  VStack_2.distance = VStack_1.distance;
  VStack_2._60_4_ = VStack_1._60_4_;
  VStack_2.collider = VStack_1.collider;
  VStack_2.transform = VStack_1.transform;
  VStack_2.interactionFlags = VStack_1.interactionFlags;
  ESStateBase_TintObjectsOnMouseOver_1(this,e,pickSuccess,&VStack_2,(MethodInfo *)0x0);
  return;
}


/* Void TintObjectsOnMouseOver(EditorStateMachine, Boolean, VoxelHit) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
               (ESStateBase *this,EditorStateMachine *e,bool pickSuccess,VoxelHit *hit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).tintedWo;
  if ((pWVar2 == (WorldObjectClientRef *)0x0) ||
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                      (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  if (pOVar4 != (Object *)0x0) {
    pWVar2 = (this->fields).tintedWo;
    if ((((pWVar2 == (WorldObjectClientRef *)0x0) ||
         (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar3 == (MVWorldObjectClientManager *)0x0)) ||
        (pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                             (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method),
        pOVar4 == (Object *)0x0)) ||
       ((e == (EditorStateMachine *)0x0 ||
        (pSVar5 = (e->fields).selectionController, pSVar5 == (SelectionController *)0x0))))
    goto code_?;
    bVar6 = SelectionController::SelectionController_IsSelected
                      (pSVar5,*(int32_t *)&pOVar4[1].klass,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pWVar2 = MVWorldObjectClientManager::
                MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).tintedWo = pWVar2;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).tintedWo >> 0xc);
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
    }
  }
  if (pickSuccess == 0) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar3,hit->woId,(MethodInfo *)0x0);
    if (pMVar12 != (MVWorldObjectClient *)0x0) {
      (*(pMVar12->klass->vtable).DeSelect.methodPtr)(pMVar12);
    }
code_?:
    ESStateBase_DeTintCurrent(this,(MethodInfo *)0x0);
    return;
  }
  uStack_13 = hit->interactionFlags;
  uVar9 = uStack_13 & 8;
  bVar14 = (byte)uStack_13;
  if ((uStack_13 & 1) == 0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
            ((MethodInfo *)0x0);
  if (uVar9 == 0) {
    if (e == (EditorStateMachine *)0x0) goto code_?;
    id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
    iVar15 = hit->woId;
    aIStackX_8[0].m_value = iVar15;
    if (bRam_? == (bVar14 & 8)) {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      bRam_? = 1;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar3,iVar15,(MethodInfo *)0x0);
    parent = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar3,id,(MethodInfo *)0x0);
    if (pMVar12 == (MVWorldObjectClient *)0x0) {
      pSVar16 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      pSVar16 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_childId_is_not_valid__Id_is__,pSVar16,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar16,(MethodInfo *)0x0);
      return;
    }
    if ((pMVar12->fields)._.groupId == -1) {
      iVar15 = -1;
    }
    else {
      if (parent == (MVWorldObjectClient *)0x0) goto code_?;
      if ((parent->fields)._.id == (pMVar12->fields)._.groupId) {
        iVar15 = (pMVar12->fields)._.id;
      }
      else {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar3,(pMVar12->fields)._.groupId,(MethodInfo *)0x0);
        iVar15 = MVGroup::MVGroup_GetParentBelow_1(parent,pMVar12,(MethodInfo *)0x0);
      }
    }
    if (iVar15 == -1) {
      return;
    }
    pSVar5 = (e->fields).selectionController;
    if (pSVar5 == (SelectionController *)0x0) goto code_?;
    bVar6 = SelectionController::SelectionController_IsSelected(pSVar5,iVar15,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  }
  else {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    iVar15 = hit->woId;
  }
  if ((pMVar3 != (MVWorldObjectClientManager *)0x0) &&
     (pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                          (pMVar3,iVar15,(MethodInfo *)0x0), pWVar2 != (WorldObjectClientRef *)0x0)
     ) {
    lVar17 = FUN_?(pWVar2);
    if (lVar17 == 0) {
      return;
    }
    if ((this->fields).tintedWo != (WorldObjectClientRef *)0x0) {
      lVar17 = FUN_?();
      if (lVar17 != 0) {
        if (((this->fields).tintedWo == (WorldObjectClientRef *)0x0) ||
           (lVar17 = FUN_?(), lVar17 == 0)) goto code_?;
        iVar18 = *(int *)(lVar17 + 0x10);
        lVar17 = FUN_?(pWVar2);
        if (lVar17 == 0) goto code_?;
        if (iVar18 != *(int *)(lVar17 + 0x10)) goto code_?;
      }
      if ((this->fields).tintedWo != (WorldObjectClientRef *)0x0) {
        lVar17 = FUN_?();
        if (lVar17 != 0) {
          return;
        }
        (this->fields).tintedWo = pWVar2;
        func_?(&(this->fields).tintedWo);
        if (((this->fields).tintedWo != (WorldObjectClientRef *)0x0) &&
           (plVar19 = (longlong *)FUN_?(), plVar19 != (longlong *)0x0)) {
          uStack_20 = _UNK_?;
          uStack_21 = _UNK_?;
          (**(code **)(*plVar19 + 0x598))(plVar19,&uStack_20,*(undefined8 *)(*plVar19 + 0x5a0));
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* ESStateBase() */

void Assembly-CSharp.dll::ESStateBase::ESStateBase__ctor(ESStateBase *this,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).tintedWo = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tintedWo >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).logger = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).logger >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
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

