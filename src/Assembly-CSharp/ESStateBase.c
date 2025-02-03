
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
      (*(code *)pOVar2->klass[3]._1.typeHierarchy)();
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
  EStack_1.klass = (Enum__Class *)TypeInfo__EditorEvent;
  pIStack_2 = (ILogger *)(this->fields).stateType;
  pIVar3 = (this->fields).logger;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(StringLiteral_Enter_,str1,(MethodInfo *)0x0);
  if (pIVar3 != (ILogger *)0x0) {
    EStack_1.monitor = (MonitorData *)TypeInfo__ILogger;
    EStack_1.klass = (Enum__Class *)0x0;
    pIStack_2 = pIVar3;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,woId,(MethodInfo *)0x0);
    if ((pMVar1 == (MVWorldObject *)0x0) || ((pMVar1->fields).groupId == -1)) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar2 != (MainCameraManager *)0x0) {
      if ((pMVar2->fields).isLogicRendered != 0) {
        return 1;
      }
      iVar3 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Default,(MethodInfo *)0x0);
      this = pMVar1[1].fields.inputLinkRefs;
      if (this != (List_1_MV_WorldObject_Link_ *)0x0) {
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          ((GameObject *)this,(MethodInfo *)0x0);
        if (iVar4 == iVar3) {
          return 1;
        }
        pLVar5 = pMVar1[1].fields.inputLinkRefs;
        if (pLVar5 != (List_1_MV_WorldObject_Link_ *)0x0) {
          pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             ((GameObject *)pLVar5,
                              UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                             );
          uVar7 = 0;
          if (pOVar6 != (Object__Array *)0x0) {
            ppOVar8 = pOVar6->vector;
            do {
              if ((int)pOVar6->max_length <= (int)uVar7) {
                return 0;
              }
              if (pOVar6->max_length <= uVar7) goto code_?;
              if (((Component *)*ppOVar8 == (Component *)0x0) ||
                 (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)*ppOVar8,(MethodInfo *)0x0),
                 pGVar9 == (GameObject *)0x0)) break;
              pLVar5 = (List_1_MV_WorldObject_Link_ *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                 (pGVar9,(MethodInfo *)0x0);
              if (pLVar5 == this) {
                if (pOVar6->max_length <= uVar7) goto code_?;
                if (((Component *)*ppOVar8 == (Component *)0x0) ||
                   (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)*ppOVar8,(MethodInfo *)0x0),
                   pGVar9 == (GameObject *)0x0)) break;
                bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeInHierarchy(pGVar9,(MethodInfo *)0x0);
                if (bVar10 != 0) {
                  return 1;
                }
              }
              uVar7 = uVar7 + 1;
              ppOVar8 = ppOVar8 + 1;
            } while( true );
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
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
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 != (Object *)0x0) {
      pWVar1 = (this->fields).tintedWo;
      if (((pWVar1 == (WorldObjectClientRef *)0x0) ||
          (pOVar2 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              ), pOVar2 == (Object *)0x0)) || (e == (EditorStateMachine *)0x0))
      goto code_?;
      unaff_EDI = (MethodInfo *)&UNK_?;
      bVar3 = EditorStateMachine::EditorStateMachine_IsSelected
                        (e,(int32_t)pOVar2[1].klass,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pWVar1 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        (this->fields).tintedWo = pWVar1;
        func_?();
      }
    }
    if (pickSuccess != 0) {
      if ((hit._60_4_ & 1) == 0) {
code_?:
        ESStateBase_DeTintCurrent(this,(MethodInfo *)0x0);
        return;
      }
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                ((MethodInfo *)0x0);
      if ((hit._60_4_ & 8) == 0) {
        if (e == (EditorStateMachine *)0x0) goto code_?;
        iVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
        id = 0;
        iVar4 = MVGroup::MVGroup_GetParentBelow(iVar4,hit._36_4_,(MethodInfo *)0x0);
        if (iVar4 == -1) {
          return;
        }
        bVar3 = EditorStateMachine::EditorStateMachine_IsSelected(e,iVar4,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
      }
      else {
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
        unaff_EDI = (MethodInfo *)0x0;
        id = hit._36_4_;
      }
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                         (pMVar5,id,unaff_EDI);
      if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
      pOVar2 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar2 != (Object *)0x0) {
        pWVar6 = (this->fields).tintedWo;
        if (pWVar6 == (WorldObjectClientRef *)0x0) goto code_?;
        pOVar2 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar6,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar2 != (Object *)0x0) {
          pWVar6 = (this->fields).tintedWo;
          if ((pWVar6 == (WorldObjectClientRef *)0x0) ||
             (pOVar2 = WorldObjectClientRef`1[System::Object]::
                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                 ((WorldObjectClientRef_1_System_Object_ *)pWVar6,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 ), pOVar2 == (Object *)0x0)) goto code_?;
          pOVar7 = pOVar2[1].klass;
          pOVar2 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             );
          if (pOVar2 == (Object *)0x0) goto code_?;
          if (pOVar7 != pOVar2[1].klass) goto code_?;
        }
        pWVar6 = (this->fields).tintedWo;
        if (pWVar6 == (WorldObjectClientRef *)0x0) goto code_?;
        pOVar2 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)pWVar6,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar2 == (Object *)0x0) {
          (this->fields).tintedWo = pWVar1;
          func_?(&(this->fields).tintedWo,pWVar1);
          pWVar1 = (this->fields).tintedWo;
          if ((pWVar1 == (WorldObjectClientRef *)0x0) ||
             (pOVar2 = WorldObjectClientRef`1[System::Object]::
                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                 ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 ), pOVar2 == (Object *)0x0)) goto code_?;
          (*(code *)pOVar2->klass[3].static_fields)
                    (pOVar2,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                     pOVar2->klass[3].rgctx_data);
        }
      }
      return;
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar5,hit._36_4_,(MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObject *)0x0) {
        (*pMVar8->klass[1].vtable.PartialUpdateWOData.methodPtr)
                  (pMVar8,pMVar8->klass[1].vtable.PartialUpdateWOData.method);
      }
      goto code_?;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

