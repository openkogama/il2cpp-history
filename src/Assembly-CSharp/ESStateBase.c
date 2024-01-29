
/* Void DeTintCurrent() */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_DeTintCurrent
               (ESStateBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).tintedWo;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar1 = (this->fields).tintedWo;
    if ((pWVar1 != (WorldObjectClientRef *)0x0) &&
       (pOVar2 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar2 != (Object *)0x0)) {
      (*(code *)pOVar2->klass[3].static_fields)();
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      (this->fields).tintedWo = pWVar1;
      func_?(&(this->fields).tintedWo,pWVar1);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Enter
               (ESStateBase *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__ILogger);
    func_?(&StringLiteral_Enter_);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).logger;
  EStack_2.klass = (Enum__Class *)TypeInfo__EditorEvent;
  iStack_3 = (this->fields).stateType;
  EStack_2.monitor = (MonitorData *)0xffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pEVar4 = (Enum__Class *)
           mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Enter_,str1,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger *)0x0) {
    EStack_2.monitor = (MonitorData *)&UNK_?;
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar6 = pIVar1->klass;
  uVar7 = 0;
  uVar8._0_1_ = (pIVar6->_1).rank;
  uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        ppMVar9 = &(&pIVar1->klass->vtable)[pIVar1->klass->interfaceOffsets[uVar7].offset].Log.
                   method;
        goto code_?;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  EStack_2.monitor = (MonitorData *)0x0;
  EStack_2.klass = (Enum__Class *)TypeInfo__ILogger;
  ppMVar9 = (MethodInfo **)func_?(pIVar1);
code_?:
  EStack_2.monitor = (MonitorData *)ppMVar9[1];
  EStack_2.klass = pEVar4;
  (*(code *)*ppMVar9)(pIVar1);
  return;
}


/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Enter_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__EditorStateMachine->_1).naturalAligment) ||
       ((e->klass->_1).typeHierarchy[(TypeInfo__EditorStateMachine->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      func_?(e,TypeInfo__EditorStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Enter_1.method)(this,e,(this->klass->vtable).Execute_1.methodPtr);
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Execute_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__EditorStateMachine->_1).naturalAligment) ||
       ((e->klass->_1).typeHierarchy[(TypeInfo__EditorStateMachine->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      func_?(e,TypeInfo__EditorStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Execute_1.method)(this,e,(this->klass->vtable).Exit_1.methodPtr);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Exit_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorStateMachine);
    cRam_? = '\x01';
  }
  if (e != (FSMEntity *)0x0) {
    if (((e->klass->_1).naturalAligment < (TypeInfo__EditorStateMachine->_1).naturalAligment) ||
       ((e->klass->_1).typeHierarchy[(TypeInfo__EditorStateMachine->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      func_?(e,TypeInfo__EditorStateMachine);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Exit_1.method)(this,e,this->klass[1]._0.image);
  return;
}


/* Boolean SelectionIsAllowedByLogicEnabled(Int32) */

bool Assembly-CSharp.dll::ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
               (int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,woId,(MethodInfo *)0x0);
    if ((pMVar2 == (MVWorldObject *)0x0) || ((pMVar2->fields).groupId == -1)) {
      return 0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                         (pMVar1,woId,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 != (MainCameraManager *)0x0) {
        if (((pMVar4->fields).isLogicRendered != 0) || (pMVar3 == (MVWorldObjectClient *)0x0)) {
          return 1;
        }
        iVar5 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Default,(MethodInfo *)0x0);
        pGVar6 = (pMVar3->fields).gameObject;
        if (pGVar6 != (GameObject *)0x0) {
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (pGVar6,(MethodInfo *)0x0);
          if (iVar7 == iVar5) {
            return 1;
          }
          pGVar6 = (pMVar3->fields).gameObject;
          if (pGVar6 != (GameObject *)0x0) {
            pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren
                               (pGVar6,
                                UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                               );
            uVar9 = 0;
            if (pOVar8 != (Object__Array *)0x0) {
              ppOVar10 = pOVar8->vector;
              do {
                if ((int)pOVar8->max_length <= (int)uVar9) {
                  return 0;
                }
                if (pOVar8->max_length <= uVar9) goto code_?;
                if (((Component *)*ppOVar10 == (Component *)0x0) ||
                   (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)*ppOVar10,(MethodInfo *)0x0),
                   pGVar6 == (GameObject *)0x0)) break;
                iVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                  (pGVar6,(MethodInfo *)0x0);
                if (iVar7 == iVar5) {
                  if (pOVar8->max_length <= uVar9) goto code_?;
                  if (((Component *)*ppOVar10 == (Component *)0x0) ||
                     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)*ppOVar10,(MethodInfo *)0x0),
                     pGVar6 == (GameObject *)0x0)) break;
                  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
                  if (bVar11 != 0) {
                    return 1;
                  }
                }
                uVar9 = uVar9 + 1;
                ppOVar10 = ppOVar10 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void TintObjectsOnMouseOver(EditorStateMachine) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_TintObjectsOnMouseOver
               (ESStateBase *this,EditorStateMachine *e,MethodInfo *method)

{
  func_?(&stack0xffffffb0,0,0x48);
  pickSuccess = EditModeObjectPicker::EditModeObjectPicker_Pick
                          ((VoxelHit *)&stack0xffffffb0,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                           (MethodInfo *)0x0);
  hit.point.y = in_stack_1;
  hit.point.x = in_stack_2;
  hit.point.z = in_stack_3;
  hit.normal.x = (float)in_stack_4;
  hit.normal.y = fStack_5;
  hit.normal.z = (float)IStack_6._0_4_;
  hit.cubePos._0_4_ = stack0xffffffcc;
  hit._28_4_ = iStack_7;
  hit.face = uStack_8;
  hit._36_4_ = iStack_9;
  hit.woId = (int32_t)pCStack_10;
  hit.cube = (Cube *)fStack_11;
  hit.distance = (float)pCStack_12;
  hit.collider = (Collider *)pTStack_13;
  hit.transform = (Transform *)uStack_14;
  hit._60_4_ = (float)iStack_15;
  hit.interactionFlags._0_4_ = (float)((ulonglong)iStack_15 >> 0x20);
  hit.interactionFlags._4_4_ = 0;
  ESStateBase_TintObjectsOnMouseOver_1(this,e,pickSuccess,hit,in_stack_4);
  return;
}


/* Void TintObjectsOnMouseOver(EditorStateMachine, Boolean, VoxelHit) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
               (ESStateBase *this,EditorStateMachine *e,bool pickSuccess,VoxelHit hit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).tintedWo;
  if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
  method_00 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pOVar2 = WorldObjectClientRef`1[System::Object]::
           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                     ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pOVar2 != (Object *)0x0) {
    pWVar1 = (this->fields).tintedWo;
    if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if ((pOVar2 == (Object *)0x0) || (e == (EditorStateMachine *)0x0)) goto code_?;
    bVar3 = EditorStateMachine::EditorStateMachine_IsSelected
                      (e,(int32_t)pOVar2[1].klass,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      (this->fields).tintedWo = pWVar1;
      func_?();
    }
  }
  if (pickSuccess == 0) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar4,hit._36_4_,(MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObject *)0x0) {
      (*pMVar5->klass[1].vtable.DeepCopy.methodPtr)(pMVar5,pMVar5->klass[1].vtable.DeepCopy.method);
      ESStateBase_DeTintCurrent(this,(MethodInfo *)0x0);
      return;
    }
code_?:
    ESStateBase_DeTintCurrent(this,(MethodInfo *)0x0);
    return;
  }
  if ((hit._60_4_ & 1) == 0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
            ((MethodInfo *)0x0);
  if ((hit._60_4_ & 8) == 0) {
    if (e == (EditorStateMachine *)0x0) goto code_?;
    iVar6 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
    id = 0;
    iVar6 = MVGroup::MVGroup_GetParentBelow(iVar6,hit._36_4_,(MethodInfo *)0x0);
    if (iVar6 == -1) {
      return;
    }
    bVar3 = EditorStateMachine::EditorStateMachine_IsSelected(e,iVar6,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
  }
  else {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    id = hit._36_4_;
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                     (pMVar4,id,method_00);
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar7 = (this->fields).tintedWo;
    if (pWVar7 != (WorldObjectClientRef *)0x0) {
      pOVar2 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)pWVar7,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar2 != (Object *)0x0) {
        pWVar7 = (this->fields).tintedWo;
        if ((pWVar7 == (WorldObjectClientRef *)0x0) ||
           (pOVar2 = WorldObjectClientRef`1[System::Object]::
                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                               ((WorldObjectClientRef_1_System_Object_ *)pWVar7,
                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                               ), pOVar2 == (Object *)0x0)) goto code_?;
        pOVar8 = pOVar2[1].klass;
        pOVar2 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar2 == (Object *)0x0) goto code_?;
        if (pOVar8 != pOVar2[1].klass) goto code_?;
      }
      pWVar7 = (this->fields).tintedWo;
      if (pWVar7 != (WorldObjectClientRef *)0x0) {
        pOVar2 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar7,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar2 != (Object *)0x0) {
          return;
        }
        (this->fields).tintedWo = pWVar1;
        func_?(&(this->fields).tintedWo,pWVar1);
        pWVar1 = (this->fields).tintedWo;
        if ((pWVar1 != (WorldObjectClientRef *)0x0) &&
           (pOVar2 = WorldObjectClientRef`1[System::Object]::
                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                               ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                               ), pOVar2 != (Object *)0x0)) {
          (*(code *)pOVar2->klass[3]._0.implementedInterfaces)
                    (pOVar2,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                     pOVar2->klass[3].interfaceOffsets);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* ESStateBase() */

void Assembly-CSharp.dll::ESStateBase::ESStateBase__ctor(ESStateBase *this,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields).tintedWo = pWVar1;
  method_00 = (MethodInfo *)&(this->fields).tintedWo;
  func_?(method_00,pWVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields).logger = pIVar2;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

