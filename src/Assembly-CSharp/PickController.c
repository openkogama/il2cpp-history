
/* Int32 FindParentID(Transform) */

int32_t Assembly-CSharp.dll::PickController::PickController_FindParentID
                  (PickController *this,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return -1;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if (((pTVar1 != (Transform *)0x0) &&
        (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
        )) && (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                 ((Object_1 *)this_01,(MethodInfo *)0x0),
              this_00 != (MVWorldObjectClientManager *)0x0)) {
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                          (this_00,iVar3,(MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClient *)0x0) {
        return -1;
      }
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0)
      ;
      return (int32_t)pIVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar3 = (*pcVar5)();
  return iVar3;
}


/* Void Initialize(UnityAction`1[System.Int32], Boolean) */

void Assembly-CSharp.dll::PickController::PickController_Initialize
               (PickController *this,UnityAction_1_System_Int32_ *onPickCallback,bool setText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickController___Initialize_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).pickHelperPrefab;
  (this->fields).shouldSetText = setText;
  (this->fields).pickCallback = onPickCallback;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__PickController__SelectionChanged_MVWorldObjectClient__MVWorldObjectClient_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>__UnityAction_System__Object__void__
              );
    if ((pXVar1 != (XpBoostParticlePreviewer *)0x0) &&
       (pCVar3 = (pXVar1->fields).previewCam, pCVar3 != (Camera *)0x0)) {
      (**(code **)((int)(pCVar3->klass + 3) + 0x74))
                (pCVar3,StringLiteral_Select_wo_,*(uint32_t *)((int)(pCVar3->klass + 3) + 0x78));
      (pXVar1->fields).layersToRender = (int32_t)pUVar2;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_00,
                 MethodInfo__PickController___Initialize_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::PickController::PickController_Refresh
               (PickController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPStack_1 = (PickController *)0x0;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pPVar2 = this;
  pSVar3 = TypeInfo__System__String->static_fields->Empty;
  pTVar4 = (this->fields).woIDText;
  if (pTVar4 == (Text *)0x0) goto code_?;
  s = (String *)
      (*(code *)(pTVar4->klass->vtable).get_text.method)
                (pTVar4,(pTVar4->klass->vtable).set_text.methodPtr);
  bVar5 = mscorlib.dll::System::Int32::Int32_TryParse(s,(int32_t *)&pPStack_1,(MethodInfo *)0x0);
  pPVar6 = (PickController *)StringLiteral_Failed_to_parse_woid;
  if (bVar5 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_00 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar7,(int32_t)pPStack_1,(MethodInfo *)0x0);
    if (this_00 == (PrefabPool *)0x0) {
      this = pPStack_1;
      pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pPVar6 = (PickController *)
               mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_No_wo_with_id__,pOVar8,(MethodInfo *)0x0);
    }
    else {
      pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          (MethodInfo *)0x0);
      if (pOVar8 == (Object *)0xffffffff) {
        pTVar4 = (pPVar2->fields).woIDText;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        if (pTVar4 != (Text *)0x0) {
          (*(code *)(pTVar4->klass->vtable).set_text.method)
                    (pTVar4,TypeInfo__System__String->static_fields->Empty,
                     (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pTVar4 = (pPVar2->fields).woType;
          if (pTVar4 != (Text *)0x0) {
            (*(code *)(pTVar4->klass->vtable).set_text.method)
                      (pTVar4,StringLiteral_Can_t_choose_WO_Root_Group,
                       (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
        goto code_?;
      }
      pTVar9 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
      if (pTVar9 == (Type *)0x0) goto code_?;
      this = (PickController *)
             (*(code *)(pTVar9->klass->vtable).ToString.method)
                       (pTVar9,(pTVar9->klass->vtable).GetCustomAttributes.methodPtr);
      this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (this_01 == (MVPointLightObject *)0x0) goto code_?;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         ((Transform *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
      pPVar6 = this;
      pSVar3 = StringLiteral_Parent_is_not_valid_wo;
      if (bVar5 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           ((Transform *)this_01,(MethodInfo *)0x0);
        if (((pTVar10 == (Transform *)0x0) ||
            (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar10,(MethodInfo *)0x0),
            this_02 == (GameObject *)0x0)) ||
           (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                             ((Object_1 *)this_02,(MethodInfo *)0x0),
           pMVar7 == (MVWorldObjectClientManager *)0x0)) goto code_?;
        this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                            (pMVar7,goId,(MethodInfo *)0x0);
        pPVar6 = this;
        pSVar3 = StringLiteral_Parent_is_not_valid_wo;
        if ((this_03 != (MVWorldObjectClient *)0x0) &&
           (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0), pPVar6 = this,
           pSVar3 = StringLiteral_Parent_is_not_valid_wo, id != (IList_1_VoxelHit_ *)0xffffffff)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar7 == (MVWorldObjectClientManager *)0x0) ||
             (this_04 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar7,(int32_t)id,(MethodInfo *)0x0),
             this_04 == (MVWorldObject *)0x0)) goto code_?;
          pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                              (MethodInfo *)0x0);
          pPVar6 = this;
          pSVar3 = StringLiteral_WO_Root_Group;
          if (pOVar8 != (Object *)0xffffffff) {
            pTVar9 = mscorlib.dll::System::Object::Object_GetType
                               ((Object *)this_04,(MethodInfo *)0x0);
            if (pTVar9 == (Type *)0x0) goto code_?;
            pSVar3 = (String *)func_?(3,pTVar9);
            pPVar6 = this;
          }
        }
      }
    }
  }
  pTVar4 = (pPVar2->fields).woType;
  if (pTVar4 != (Text *)0x0) {
    (*(code *)(pTVar4->klass->vtable).set_text.method)
              (pTVar4,pPVar6,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar4 = (pPVar2->fields).parentType;
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar3,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SelectionChanged(MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::PickController::PickController_SelectionChanged
               (PickController *this,MVWorldObjectClient *wo,MVWorldObjectClient *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  piVar1 = &(this->fields).pickedWoId;
  pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
  *piVar1 = (int32_t)pIVar2;
  if ((this->fields).shouldSetText != 0) {
    pTVar3 = (this->fields).woIDText;
    uVar4 = func_?(piVar1,0);
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,uVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar3 = (this->fields).parentType;
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,StringLiteral_WO_Root_Group,
                   (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        if (parent != (MVWorldObjectClient *)0x0) {
          pTVar3 = (this->fields).parentType;
          pTVar5 = mscorlib.dll::System::Object::Object_GetType((Object *)parent,(MethodInfo *)0x0);
          if (pTVar5 == (Type *)0x0) goto code_?;
          uVar4 = (*(code *)(pTVar5->klass->vtable).ToString.method)
                            (pTVar5,(pTVar5->klass->vtable).GetCustomAttributes.methodPtr);
          if (pTVar3 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,uVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                    );
        }
        pTVar3 = (this->fields).woType;
        pTVar5 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
        if (pTVar5 != (Type *)0x0) {
          uVar4 = (*(code *)(pTVar5->klass->vtable).ToString.method)
                            (pTVar5,(pTVar5->klass->vtable).GetCustomAttributes.methodPtr);
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)
                      (pTVar3,uVar4,
                       (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            PickController_Refresh(this,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
code_?:
    func_?(0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  this_00 = (Action_1_UIPushOption_ *)(this->fields).pickCallback;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,*piVar1,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__PickController->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__PickController___SelectionChanged_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__PickController->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__PickController->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void <SelectionChanged>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PickController::PickController__SelectionChanged_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,8);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

