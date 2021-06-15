
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_AwaitSpawnThenClose
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = (SpawnRolesManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0)
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__SpawnRoleMenu__Close_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (this_01 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                (this_01,(Action_1_Int32_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single CalculateElementPosition(Int32) */

float Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CalculateElementPosition
                (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  fVar1 = (this->fields).selectionElementWidth;
  return (float)(index + 1) * (this->fields).elementSpacing + (float)index * fVar1 +
         fVar1 * _UNK_?;
}


/* Int32 CalculateNewSelectedItem() */

int32_t Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CalculateNewSelectedItem
                  (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                       );
    if (pOVar2 == (Object *)0x1) {
      return 0;
    }
    pLVar1 = (this->fields).SelectionElementsList;
    if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                         );
      fVar3 = (this->fields).selectionElementWidth;
      puVar4 = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
      pTVar5 = (Transform *)(this->fields).elementContainer;
      fVar3 = (float)(int)pOVar2 * (this->fields).elementSpacing + fVar3 * (float)(int)puVar4 +
               fVar3 * _UNK_?;
      if (pTVar5 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
        uVar7 = pVVar6->x;
        pfVar8 = &(this->fields).dragStartPositionX;
        fVar9 = _UNK_?;
        if ((float)uVar7 < *pfVar8 || (float)uVar7 == *pfVar8) {
          fVar9 = _UNK_?;
        }
        fVar10 = (this->fields).menuHalfWidth;
        pTVar5 = (Transform *)(this->fields).elementContainer;
        if (pTVar5 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
          fVar11 = (this->fields).selectionElementWidth;
          uVar12 = pVVar6->x;
          fVar13 = (fVar11 * 0.0 + (this->fields).elementSpacing + fVar11 * _UNK_?) *
                   _UNK_?;
          fVar11 = _UNK_?;
          if (fVar9 <= 0.0) {
            fVar11 = _UNK_?;
          }
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                             ((((fVar10 - (float)uVar12) - fVar13) / fVar3) * (float)(int)puVar4 +
                              fVar11,0.0,(float)(int)puVar4,(MethodInfo *)0x0);
          iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                             (fVar3,(MethodInfo *)0x0);
          return iVar14;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  iVar14 = (*pcVar15)();
  return iVar14;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Close
               (SpawnRoleMenu *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__SpawnRoleMenu->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__SpawnRoleMenu___Close_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__SpawnRoleMenu->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__SpawnRoleMenu->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (in_stack_3->fields).maskMode = in_stack_4;
  if (in_stack_4 == 0) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,(in_stack_3->fields).cullingMask,(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 0;
      MainCameraManager::MainCameraManager_RenderLogic
                (in_stack_3,(in_stack_3->fields).isLogicRendered,(MethodInfo *)0x0);
      return;
    }
  }
  else if (in_stack_4 == 1) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 1;
      return;
    }
  }
  else {
    if (in_stack_4 != 2) {
      return;
    }
    if ((in_stack_3->fields).mainCamera != (Camera *)0x0) {
      uStack7 = 0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        func_?();
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateDefaultAvatarElement() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CreateDefaultAvatarElement
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).defaultSelectionElementPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pDVar1 = (DefaultSpawnRoleSelectionElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pDVar1,
                      DefaultSpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<DefaultSpawnRoleSelectionElement>_DefaultSpawnRoleSelectionElement_
                     );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 != (MVLocalPlayer *)0x0) {
    iVar3 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields).shownTeam;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>,iVar3);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_,
               MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
              );
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_,
               MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
              );
    if (pDVar1 != (DefaultSpawnRoleSelectionElement *)0x0) {
      (*(code *)(pDVar1->klass->vtable).Initialize.method)
                (pDVar1,0,(pDVar1->klass->vtable).Select.methodPtr,0,method_00,this_01,this_02);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        this_03 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar2,(MethodInfo *)0x0);
        if (this_03 != (MVBody *)0x0) {
          spawnRoleObject =
               DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)this_03,(MethodInfo *)0x0);
          DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_SetupPreviewImage
                    (pDVar1,(GameObject *)spawnRoleObject,(MethodInfo *)0x0);
          (*(code *)(pDVar1->klass->vtable).OnUnSelected.method)
                    (pDVar1,(pDVar1->klass->vtable).UpdateButtonUI.methodPtr);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pDVar1,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar4,(Transform *)(this->fields).elementContainer,0,(MethodInfo *)0x0);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pDVar1,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                        (pTVar4,(MethodInfo *)0x0);
              this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).SelectionElementsList;
              if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
                item._4_4_ = 
                MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Insert_int__DefaultSpawnRoleSelectionElement_
                ;
                item.rgba = (int32_t)pDVar1;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Insert(this_00,0,item,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateSpawnRoleSelectionElement(Int32, Int32, List`1[ISpawnRolePreviewObject],
   List`1[MVWorldObjectClient]) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CreateSpawnRoleSelectionElement
               (SpawnRoleMenu *this,int32_t startIndex,int32_t index,
               List_1_ISpawnRolePreviewObject_ *sortedSpawnRoles,
               List_1_MVWorldObjectClient_ *sortedWorldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  original = (this->fields).selectionElementPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (DefaultSpawnRoleSelectionElement *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       SpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionElement>_SpawnRoleSelectionElement_
                      );
  if (sortedWorldObjects != (List_1_MVWorldObjectClient_ *)0x0) {
    this_01 = (Collection_1_VoxelHit_ *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)sortedWorldObjects,
                         index,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
    if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      if (sortedSpawnRoles != (List_1_ISpawnRolePreviewObject_ *)0x0) {
        pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)sortedSpawnRoles
                            ,index,
                            MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                           );
        if (pIVar1 != (IEventSystemHandler *)0x0) {
          func_?();
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
          pSVar3 = this;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                    );
          puVar4 = &UNK_?;
          pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                    );
          if (this_00 != (DefaultSpawnRoleSelectionElement *)0x0) {
            (*(code *)(this_00->klass->vtable).Initialize.method)
                      (this_00,(int)&pIVar1->klass + index,pSVar3,puVar4,pUVar5);
            pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                sortedSpawnRoles,index,
                                MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                               );
            if (pIVar1 != (IEventSystemHandler *)0x0) {
              pIVar6 = pIVar1->klass;
              uVar7 = 0;
              uVar8._0_1_ = (pIVar6->_1).rank;
              uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
              if (uVar8 != 0) {
                do {
                  if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                      (Il2CppClass *)TypeInfo__ISpawnRolePreviewObject) {
                    ppvVar9 = &pIVar1->klass[1]._0.gc_desc +
                              pIVar6->interfaceOffsets[uVar7].offset * 2;
                    goto code_?;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar8);
              }
              ppvVar9 = (void **)func_?();
code_?:
              spawnRoleObject = (GameObject *)(**ppvVar9)();
              DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_SetupPreviewImage
                        (this_00,spawnRoleObject,(MethodInfo *)0x0);
              (*(code *)(this_00->klass->vtable).OnUnSelected.method)(this_00);
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
              if (this_02 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_02,(Transform *)pIVar1[5].klass,0,(MethodInfo *)0x0);
                if ((List_1_UIPushOption_ *)pIVar1[0xb].monitor != (List_1_UIPushOption_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            ((List_1_UIPushOption_ *)pIVar1[0xb].monitor,(UIPushOption__Enum)this_00
                             ,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Add_DefaultSpawnRoleSelectionElement_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* List`1[ISpawnRolePreviewObject] GetSortedList(List`1[ISpawnRolePreviewObject]) */

List_1_ISpawnRolePreviewObject_ *
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_GetSortedList
          (SpawnRoleMenu *this,List_1_ISpawnRolePreviewObject_ *unsortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
            );
  index = (MethodInfo *)0x0;
  if (unsortedList != (List_1_ISpawnRolePreviewObject_ *)0x0) {
code_?:
    do {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)unsortedList,
                          MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                         );
      if ((int)pOVar1 <= (int)index) {
        return (List_1_ISpawnRolePreviewObject_ *)this_00;
      }
      index_00 = 0;
      while( true ) {
        if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                           );
        if ((int)pOVar1 <= index_00) {
          pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unsortedList,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                             );
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pIVar2,
                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                    );
          index = (MethodInfo *)((int)&index->methodPointer + 1);
          goto code_?;
        }
        method_00 = index;
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unsortedList,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                           );
        if (pIVar2 == (IEventSystemHandler *)0x0) goto code_?;
        bVar3 = func_?(2);
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index_00
                            ,
                            MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                           );
        if (pIVar2 == (IEventSystemHandler *)0x0) goto code_?;
        bVar4 = func_?(2,TypeInfo__ISpawnRolePreviewObject,pIVar2);
        if (bVar3 < bVar4) break;
        index_00 = index_00 + 1;
      }
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unsortedList,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                         );
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
      ;
      item.rgba = (int32_t)pIVar2;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Insert
                ((List_1_UnityEngine_Color32_ *)this_00,index_00,item,method_00);
      index = (MethodInfo *)((int)&index->methodPointer + 1);
    } while( true );
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_ISpawnRolePreviewObject_ *)(*pcVar5)();
  return pLVar6;
}


/* List`1[MVWorldObjectClient] GetSortedWorldObjectList(List`1[MVWorldObjectClient],
   List`1[ISpawnRolePreviewObject]) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_GetSortedWorldObjectList
          (SpawnRoleMenu *this,List_1_MVWorldObjectClient_ *wos,
          List_1_ISpawnRolePreviewObject_ *unsortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
            );
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  index = 0;
  if (unsortedList != (List_1_ISpawnRolePreviewObject_ *)0x0) {
code_?:
    do {
      pMVar2 = MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)unsortedList,
                          MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                         );
      if ((int)pOVar3 <= index) {
        return (List_1_MVWorldObjectClient_ *)pMVar2;
      }
      index_00 = 0;
      while( true ) {
        pLVar4 = wos;
        if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                           );
        if ((int)pOVar3 <= index_00) {
          pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unsortedList,
                              index,
                              MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                             );
          pLVar1 = this_00;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pIVar5,
                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                    );
          if (wos == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
          unsortedList = (List_1_ISpawnRolePreviewObject_ *)wos;
          wos = (List_1_MVWorldObjectClient_ *)&UNK_?;
          pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
          if (pLVar1 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pIVar5,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
          index = index + 1;
          goto code_?;
        }
        iVar6 = index;
        wos = (List_1_MVWorldObjectClient_ *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unsortedList,index,
                         MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                        );
        if (wos == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
        uVar7 = func_?();
        method_00 = (MethodInfo *)CONCAT13(uVar7,(int3)iVar6);
        pMVar2 = (MethodInfo *)&UNK_?;
        this_01 = (List_1_UnityEngine_Color32_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                             index_00,
                             MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                            );
        if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        bVar8 = func_?(2,TypeInfo__ISpawnRolePreviewObject);
        if ((byte)((uint)method_00 >> 0x18) < bVar8) break;
        index_00 = index_00 + 1;
      }
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unsortedList,index
                          ,
                          MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                         );
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
      ;
      item.rgba = (int32_t)pIVar5;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Insert
                ((List_1_UnityEngine_Color32_ *)this_00,index_00,item,pMVar2);
      if (wos == (List_1_MVWorldObjectClient_ *)0x0) break;
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)wos,index,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) break;
      item_00._4_4_ =
           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Insert_int__MVWorldObjectClient_
      ;
      item_00.rgba = (int32_t)pIVar5;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Insert(this_01,index_00,item_00,method_00);
      index = index + 1;
    } while( true );
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  pLVar4 = (List_1_MVWorldObjectClient_ *)(*pcVar9)();
  return pLVar4;
}


/* Void HandleTeamSwitching(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HandleTeamSwitching
               (SpawnRoleMenu *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IKogamaSetting *)(this->fields).shownTeam;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,(MethodInfo *)0x0);
    if (pIVar1 == pIVar4) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_00,(this->fields).shownTeam,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_01 = (GameStatCounterManager *)
                  DayNightCycle::DayNightCycle_get_CurrentStarsParam
                            ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          actorNr = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar3,(MethodInfo *)0x0)
          ;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
              pMVar3 != (MVLocalPlayer *)0x0 &&
              (pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,
                                   (MethodInfo *)0x0), this_01 != (GameStatCounterManager *)0x0))))
          {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_01,(int32_t)actorNr,(MVTeam__Enum)pIVar1,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 != (MVLocalPlayer *)0x0)) {
              MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)pMVar3,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar3 != (MVLocalPlayer *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
                ObjectPool_1_System_Object__set_countAll
                          ((ObjectPool_1_System_Object_ *)pMVar3,(this->fields).shownTeam,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HideBackButton() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HideBackButton
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_00 = (this->fields).backButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HideElements
               (SpawnRoleMenu *this,int32_t previousStartElement,int32_t amoutOfElements,
               int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = amoutOfElements + previousStartElement;
  do {
    if (iVar1 <= previousStartElement) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (-1 < previousStartElement) {
      pLVar2 = (this->fields).SelectionElementsList;
      if (pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                         );
      if ((previousStartElement < (int)pOVar4) &&
         ((previousStartElement < newStartElement ||
          ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement))))
      {
        pLVar2 = (this->fields).SelectionElementsList;
        if ((pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
           (this_00 = (DefaultSpawnRoleSelectionElement *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                 previousStartElement,
                                 MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                                ), this_00 == (DefaultSpawnRoleSelectionElement *)0x0))
        goto code_?;
        DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Deactivate
                  (this_00,(MethodInfo *)0x0);
      }
    }
    previousStartElement = previousStartElement + 1;
  } while( true );
}


/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Initialize
               (SpawnRoleMenu *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).shownTeam = team;
  this_00 = (this->fields).dragInputReciever;
  if (this_00 != (DragInputHandler *)0x0) {
    DragInputHandler::DragInputHandler_AddInputReciever
              (this_00,(IDragInputReciever *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_03 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (this_03,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_04 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar1,(MethodInfo *)0x0),
         this_04 != (MVWorldObjectClientManager *)0x0)) {
        this_05 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (this_04,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0)
        ;
        pLVar2 = (List_1_UnityEngine_Vector4_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>
                                );
        pLStack_3 = pLVar2;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  (pLVar2,
                   MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
        pLStack_4 = (List_1_UnityEngine_Vector4_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>
                                    );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  (pLStack_4,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
        iStack_5 = 0;
        if (this_05 != (List_1_MVWorldObjectClient_ *)0x0) {
          while (iVar6 = iStack_5,
                pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_05,
                                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                                    ), iVar6 < (int)pOVar7) {
            pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_05,
                                 iVar6,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
            pLStack_9 = (List_1_MVWorldObjectClient___Class *)TypeInfo__ISpawnRolePreviewObject;
            if (pIVar8 == (IEventSystemHandler *)0x0) goto code_?;
            item_00 = (List_1_MVWorldObjectClient_ *)func_?();
            pLStack_10 = item_00;
            if (item_00 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
            pLStack_9 = item_00->klass;
            uVar11 = 0;
            uStack_12 = 0;
            uVar13._0_1_ = (pLStack_9->_1).rank;
            uVar13._1_1_ = (pLStack_9->_1).minimumAlignment;
            if (uVar13 != 0) {
              do {
                pLVar2 = pLStack_3;
                if (pLStack_9->interfaceOffsets[uVar11].interfaceType ==
                    (Il2CppClass *)TypeInfo__ISpawnRolePreviewObject) {
                  ppMVar14 = &(&(item_00->klass->vtable).Finalize)
                              [item_00->klass->interfaceOffsets[uVar11].offset].method;
                  goto code_?;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar13);
            }
            ppMVar14 = (MethodInfo **)func_?();
code_?:
            iVar6 = (*(code *)*ppMVar14)();
            if ((iVar6 == 5) ||
               (iVar6 = func_?(1,TypeInfo__ISpawnRolePreviewObject,item_00),
               iVar6 == (this->fields).shownTeam)) {
              if (pLVar2 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLVar2,(UIPushOption__Enum)item_00,
                         MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                        );
              iVar6 = iStack_5;
              pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_05,
                                   iStack_5,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  );
              if (pLStack_4 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLStack_4,(UIPushOption__Enum)pIVar8,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                        );
              iStack_5 = iVar6 + 1;
            }
            else {
              iStack_5 = iStack_5 + 1;
            }
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_06 = (List_1_UnityEngine_Vector4_ *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    (this_06,
                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
                    );
          team = MVTeam__Enum_Blue;
          if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
code_?:
            pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                                 MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                                );
            if ((int)team < (int)pOVar7) {
              iVar6 = 0;
              while( true ) {
                if (this_06 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
                pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_06,
                                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                                    );
                pLVar2 = pLStack_3;
                if ((int)pOVar7 <= iVar6) {
                  pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLStack_3,team,
                                       MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                                      );
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            ((List_1_UIPushOption_ *)this_06,(UIPushOption__Enum)pIVar8,
                             MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                            );
                  team = team + MVTeam__Enum_Red;
                  goto code_?;
                }
                pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                     pLStack_3,team,
                                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                                    );
                if (pIVar8 == (IEventSystemHandler *)0x0) goto code_?;
                bVar15 = func_?(2);
                pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_06
                                     ,iVar6,
                                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                                    );
                if (pIVar8 == (IEventSystemHandler *)0x0) goto code_?;
                bVar16 = func_?(2,TypeInfo__ISpawnRolePreviewObject,pIVar8);
                if (bVar15 < bVar16) break;
                iVar6 = iVar6 + 1;
              }
              pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLStack_3
                                   ,team,
                                   MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                                  );
              item._4_4_ = 
              MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
              ;
              item.rgba = (int32_t)pIVar8;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Insert
                        ((List_1_UnityEngine_Color32_ *)this_06,iVar6,item,in_stack_17);
              team = team + MVTeam__Enum_Red;
              pLVar2 = pLStack_3;
              goto code_?;
            }
            pLStack_10 = SpawnRoleMenu_GetSortedWorldObjectList
                                   (this,(List_1_MVWorldObjectClient_ *)pLStack_4,
                                    (List_1_ISpawnRolePreviewObject_ *)pLVar2,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (this_07 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                    ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
               this_07 != (SkyParam *)0x0)) {
              bVar18 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints
                                ((MVTeamManager *)this_07,(this->fields).shownTeam,(MethodInfo *)0x0
                                );
              pLStack_9 = (List_1_MVWorldObjectClient___Class *)(uint)(bVar18 != 0);
              iVar6 = 0;
              if (this_06 != (List_1_UnityEngine_Vector4_ *)0x0) {
                for (; pOVar7 = mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                             *)this_06,
                                            MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                                           ), iVar6 < (int)pOVar7; iVar6 = iVar6 + 1) {
                  SpawnRoleMenu_CreateSpawnRoleSelectionElement
                            (this,(int32_t)pLStack_9,iVar6,
                             (List_1_ISpawnRolePreviewObject_ *)this_06,pLStack_10,(MethodInfo *)0x0
                            );
                }
                if (bVar18 != 0) {
                  SpawnRoleMenu_CreateDefaultAvatarElement(this,(MethodInfo *)0x0);
                }
                pRVar19 = (this->fields).elementContainer;
                if ((((uint)(TypeInfo__UnityEngine__UI__LayoutRebuilder->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__UI__LayoutRebuilder);
                }
                UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
                LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar19,(MethodInfo *)0x0);
                pRVar19 = (this->fields).elementContainer;
                if (pRVar19 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffbc,pRVar19,(MethodInfo *)0x0);
                  fVar20 = SubscribableVariableBase`1[System::Single]::
                           SubscribableVariableBase_1_System_Single__get_Value
                                     ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffac,
                                      (MethodInfo *)0x0);
                  (this->fields).menuHalfWidth = fVar20 * _UNK_?;
                  SpawnRoleMenu_OnSpawnRoleSelected(this,0,(MethodInfo *)0x0);
                  this_01 = (Transform *)(this->fields).elementContainer;
                  fVar20 = (this->fields).interpolateToPositionX;
                  if (this_01 != (Transform *)0x0) {
                    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffc0,this_01,(MethodInfo *)0x0);
                    uVar22 = pVVar21->y;
                    uStack_23 = 0;
                    fStack_24 = 0.0;
                    func_?(&uStack_23,fVar20,uVar22,0);
                    value.z = fStack_24;
                    value.x = (float)(undefined4)uStack_23;
                    value.y = (float)uStack_23._4_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (this_01,value,(MethodInfo *)0x0);
                    this_02 = (this->fields).SelectionElementsList;
                    if (this_02 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)this_02,
                                           MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                                          );
                      SpawnRoleMenu_HideElements(this,0,(int32_t)pOVar7,0,(MethodInfo *)0x0);
                      SpawnRoleMenu_ShowElements(this,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_IsIndexWithinBounds
               (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  this_00 = (this->fields).SelectionElementsList;
  if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                       );
    return index < (int)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void LockedButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_LockedButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      SpawnRoleMenu_ShowTestTier(this,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (ScaleAnimationBase *)
              func_?(TypeInfo__SpawnRoleMenu___ShowLockedTierPurchase_c__AnonStorey1);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_2);
    this_00 = (this->fields).SelectionElementsList;
    if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                          (this->fields).selectedSpawnRole,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                         );
      if (pIVar3 != (IEventSystemHandler *)0x0) {
        uVar4 = (*(code *)pIVar3->klass[1]._0.typeMetadataHandle)
                          (pIVar3,pIVar3->klass[1]._0.interopData);
        pTVar5 = (this->fields).tierLockedPopupPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object,pIVar3,uVar4);
        }
        pXVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)pTVar5,
                            TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                           );
        if (this_01 != (ScaleAnimationBase *)0x0) {
          (this_01->fields)._._._._.m_CachedPtr = pXVar6;
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar7,(Object *)this_01,
                     MethodInfo__SpawnRoleMenu___ShowLockedTierPurchase_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pTVar5 = (this_01->fields)._._._._.m_CachedPtr;
          pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar7,(Object *)this,MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                     (MethodInfo *)0x0);
          if (pTVar5 != (TierLockedDetailsPopup *)0x0) {
            TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
                      (pTVar5,GamePassTier__Enum_Tier0,(UnityAction *)pUVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnBeginDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnBeginDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Transform *)(this->fields).elementContainer;
  (this->fields).shouldInterpolate = 0;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    index = 0;
    uVar2 = pVVar1->x;
    pLVar3 = (this->fields).SelectionElementsList;
    (this->fields).dragStartPositionX = (float)uVar2;
    while (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                         );
      if ((int)pOVar4 <= index) {
        return;
      }
      pLVar3 = (this->fields).SelectionElementsList;
      if ((pLVar3 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
         (this_01 = (DefaultSpawnRoleSelectionElement *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                              ), this_01 == (DefaultSpawnRoleSelectionElement *)0x0)) break;
      DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_set_IsDragging
                (this_01,1,(MethodInfo *)0x0);
      index = index + 1;
      pLVar3 = (this->fields).SelectionElementsList;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnDestroy
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_OnDestroy((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((this->fields).awaitingSpawn == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = (SpawnRolesManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0)
    ;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__SpawnRoleMenu__Close_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (this_01 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                (this_01,(Action_1_Int32_ *)pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index_00 = SpawnRoleMenu_CalculateNewSelectedItem(this,(MethodInfo *)0x0);
  index = (this->fields).selectedSpawnRole;
  if (index_00 == index) {
    return;
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if ((pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) &&
     (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                         ), pIVar2 != (IEventSystemHandler *)0x0)) {
    (*(code *)pIVar2->klass[1].static_fields)();
    pLVar1 = (this->fields).SelectionElementsList;
    (this->fields).selectedSpawnRole = index_00;
    if ((pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) &&
       (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index_00,
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                           ), pIVar2 != (IEventSystemHandler *)0x0)) {
      (*(code *)pIVar2->klass[1]._0.methods)(pIVar2,pIVar2->klass[1]._0.nestedTypes);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEndDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnEndDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  newSelectedSpawnRole = SpawnRoleMenu_CalculateNewSelectedItem(this,(MethodInfo *)0x0);
  SpawnRoleMenu_OnSpawnRoleSelected(this,newSelectedSpawnRole,(MethodInfo *)0x0);
  index = 0;
  pLVar1 = (this->fields).SelectionElementsList;
  while (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).SelectionElementsList;
    if ((pLVar1 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
       (this_00 = (DefaultSpawnRoleSelectionElement *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            ), this_00 == (DefaultSpawnRoleSelectionElement *)0x0)) break;
    DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_set_IsDragging
              (this_00,0,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).SelectionElementsList;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnPlayerPlanetDataUpdated
               (SpawnRoleMenu *this,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).SelectionElementsList;
  this_00 = (this->fields).buttonController;
  if ((pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) &&
     (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                          (this->fields).selectedSpawnRole,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                         ), pIVar3 != (IEventSystemHandler *)0x0)) {
    uVar4 = (*(code *)pIVar3->klass[1]._0.typeMetadataHandle)
                      (pIVar3,pIVar3->klass[1]._0.interopData);
    this = (SpawnRoleMenu *)CONCAT31(this._1_3_,uVar4);
    if (this_00 != (SpawnRoleSelectionButtonController *)0x0) {
      SpawnRoleSelectionButtonController::SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                (this_00,(GamePassTier__Enum)this,(MethodInfo *)0x0);
      index = 0;
      pLVar2 = (pSVar1->fields).SelectionElementsList;
      while (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                           );
        if ((int)pOVar5 <= index) {
          return;
        }
        pLVar2 = (pSVar1->fields).SelectionElementsList;
        if ((pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
           (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                               ), pIVar3 == (IEventSystemHandler *)0x0)) break;
        (*(code *)pIVar3->klass[1]._1.typeHierarchy)();
        index = index + 1;
        pLVar2 = (pSVar1->fields).SelectionElementsList;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPurchaseGamePassTier() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnPurchaseGamePassTier
               (SpawnRoleMenu *this,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).SelectionElementsList;
  this_00 = (this->fields).buttonController;
  if ((pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) &&
     (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                          (this->fields).selectedSpawnRole,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                         ), pIVar3 != (IEventSystemHandler *)0x0)) {
    uVar4 = (*(code *)pIVar3->klass[1]._0.typeMetadataHandle)
                      (pIVar3,pIVar3->klass[1]._0.interopData);
    this = (SpawnRoleMenu *)CONCAT31(this._1_3_,uVar4);
    if (this_00 != (SpawnRoleSelectionButtonController *)0x0) {
      SpawnRoleSelectionButtonController::SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                (this_00,(GamePassTier__Enum)this,(MethodInfo *)0x0);
      index = 0;
      pLVar2 = (pSVar1->fields).SelectionElementsList;
      while (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                           );
        if ((int)pOVar5 <= index) {
          return;
        }
        pLVar2 = (pSVar1->fields).SelectionElementsList;
        if ((pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
           (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                               ), pIVar3 == (IEventSystemHandler *)0x0)) break;
        (*(code *)pIVar3->klass[1]._1.typeHierarchy)();
        index = index + 1;
        pLVar2 = (pSVar1->fields).SelectionElementsList;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSelectButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSelectButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).SelectionElementsList;
  if ((this_00 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
     (this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                           (this->fields).selectedSpawnRole,
                           MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                          ), this_01 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0))
  goto code_?;
  obj = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                  (this_01,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_02 == (PrefabPool *)0x0) ||
     (this_03 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0),
     this_03 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0))
  goto code_?;
  a = (SpawnRoleVariable_1_System_Int32_ *)
      System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                (this_03,(MethodInfo *)0x0);
  bVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                    ((int32_t)obj,a,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                    );
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar2,(MethodInfo *)0x0), this_04 == (SkyParam *)0x0))
  goto code_?;
  iVar3 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_04,(MethodInfo *)0x0);
  if (1 < iVar3) {
    SpawnRoleMenu_HandleTeamSwitching(this,(int32_t)obj,(MethodInfo *)0x0);
  }
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SpawnRoleMenu->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,
                 MethodInfo__SpawnRoleMenu___Close_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__SpawnRoleMenu->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__SpawnRoleMenu->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_06 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_06 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (this_06,MaskMode__Enum_Default,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).StartPlaying.method)
                (this,(this->klass->vtable).OnBeginDrag.methodPtr);
      return;
    }
    goto code_?;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
  this_05 = (SpawnRolesManager *)
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
            TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)pMVar5,(MethodInfo *)0x0);
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,MethodInfo__SpawnRoleMenu__Close_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  if (this_05 == (SpawnRolesManager *)0x0) goto code_?;
  SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
            (this_05,(Action_1_Int32_ *)pUVar4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
  pOVar6 = (Object *)MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar5,(MethodInfo *)0x0);
  if (obj == pOVar6) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
    MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar5,(int32_t)obj,(MethodInfo *)0x0);
    this_07 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
    if (this_07 != (Action_1_Int32_ *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar5 == (MVLocalPlayer *)0x0) ||
         (obj = (Object *)
                MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar5,(MethodInfo *)0x0),
         method_00 = MethodInfo__System__Action<int>__Invoke_int_, this_07 == (Action_1_Int32_ *)0x0
         )) goto code_?;
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
    method_00 = (MethodInfo *)0x0;
    MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar5,(int32_t)obj,(MethodInfo *)0x0);
    this_07 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
    if (this_07 != (Action_1_Int32_ *)0x0) {
code_?:
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                ((Action_1_UIPushOption_ *)this_07,(UIPushOption__Enum)obj,method_00);
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  pIVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar7 != (ILockCursorManager *)0x0) {
    uStack8 = 1;
    func_?();
    return;
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSpawnRoleActivated
               (SpawnRoleMenu *this,int32_t newSelectedSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).SelectionElementsList;
  if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).selectedSpawnRole,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      bVar2 = (*(code *)pIVar1->klass[1]._0.typeMetadataHandle)
                        (pIVar1,pIVar1->klass[1]._0.interopData);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        if (bVar2 <= bVar4) {
          SpawnRoleMenu_OnSelectButtonPressed(this,(MethodInfo *)0x0);
          return;
        }
        if (bVar2 != (byte)(bVar4 + 1)) {
          SpawnRoleMenu_LockedButtonPressed(this,(MethodInfo *)0x0);
          return;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar5 != (GameSessionData *)0x0) {
          if ((pGVar5->fields).gameMode != 0) {
            SpawnRoleMenu_ShowTierPurchase(this,(MethodInfo *)0x0);
            return;
          }
          SpawnRoleMenu_ShowTestTier(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSpawnRoleSelected(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSpawnRoleSelected
               (SpawnRoleMenu *this,int32_t newSelectedSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                        (this->fields).selectedSpawnRole,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
    if (pIVar2 != (IEventSystemHandler *)0x0) {
      (*(code *)pIVar2->klass[1].static_fields)(pIVar2,pIVar2->klass[1].rgctx_data);
      pLVar1 = (this->fields).SelectionElementsList;
      (this->fields).selectedSpawnRole = newSelectedSpawnRole;
      if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                            newSelectedSpawnRole,
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                           );
        if (pIVar2 != (IEventSystemHandler *)0x0) {
          (*(code *)pIVar2->klass[1]._0.implementedInterfaces)
                    (pIVar2,pIVar2->klass[1].interfaceOffsets);
          iVar3 = (this->fields).selectedSpawnRole;
          fVar4 = (this->fields).selectionElementWidth;
          (this->fields).interpolateToPositionX =
               (this->fields).menuHalfWidth -
               ((float)(iVar3 + 1) * (this->fields).elementSpacing + (float)iVar3 * fVar4 +
               fVar4 * _UNK_?);
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          pLVar1 = (this->fields).SelectionElementsList;
          this_00 = (this->fields).buttonController;
          (this->fields).shouldInterpolate = 1;
          (this->fields).interpolationStartTime = fVar4;
          if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
            pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                (this->fields).selectedSpawnRole,
                                MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                               );
            if (pIVar2 != (IEventSystemHandler *)0x0) {
              uVar5 = (*(code *)pIVar2->klass[1]._0.typeMetadataHandle)
                                (pIVar2,pIVar2->klass[1]._0.interopData);
              this = (SpawnRoleMenu *)CONCAT31(this._1_3_,uVar5);
              if (this_00 != (SpawnRoleSelectionButtonController *)0x0) {
                SpawnRoleSelectionButtonController::
                SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                          (this_00,(GamePassTier__Enum)this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OpenTierShopButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OpenTierShopButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 == (GameSessionData *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__SpawnRoleMenu___ShowTierPurchase_c__AnonStorey0;
    pSVar3 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)method_00);
    if (pLRam0000005c != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (pLRam0000005c,iRam_?,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                         );
      if (pIVar4 != (IEventSystemHandler *)0x0) {
        pIVar5 = pIVar4->klass[1]._0.interopData;
        uVar6 = (*(code *)pIVar4->klass[1]._0.typeMetadataHandle)(pIVar4,pIVar5);
        GVar7 = CONCAT31((int3)((uint)pIVar5 >> 8),uVar6);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        pPVar8 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar8 != (PlayerPlanetData *)0x0) {
          iVar9 = (pPVar8->fields).progressionGamePoints;
          pPVar8 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if ((pPVar8 != (PlayerPlanetData *)0x0) &&
             (pPVar10 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
             pPVar10 != (PlayerTierStateCalculator *)0x0)) {
            method = (MethodInfo *)(uint)(pPVar8->fields).gamePassTier;
            pDVar11 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                     PlayerTierStateCalculator_GetTierPricingState
                               (pPVar10,iVar9,(GamePassTier__Enum)method,(MethodInfo *)0x0);
            if (pDVar11 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                           *)0x0) {
              pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                        GamePassTier,System::Object]::
                        Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                  ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar11,
                                   GVar7,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  );
              pXVar13 = pXRam00000044;
              if (pOVar12 != (Object *)0x0) {
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pXVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                    (pXVar13,
                                     TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                    );
                if (pSVar3 != (ScaleAnimationBase *)0x0) {
                  (pSVar3->fields)._._._._.m_CachedPtr = pXVar13;
                  pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)0x0,(MethodInfo *)0x0);
                  pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar15,(Object *)pSVar3,
                             MethodInfo__SpawnRoleMenu___ShowTierPurchase_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (pGVar14,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar15,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  this_01 = (pSVar3->fields)._._._._.m_CachedPtr;
                  pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar15,(Object *)0x0,
                             MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,(MethodInfo *)0x0);
                  if (this_01 != (TierUnlockDetailsPopup *)0x0) {
                    TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                              (this_01,GVar7,(int32_t)pUVar15,(UnityAction *)pUVar15,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,extraout_ECX);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__SpawnRoleMenu___ShowTestTier_c__AnonStorey2;
  pSVar3 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)method_01);
  if (pLRam0000005c != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       (pLRam0000005c,iRam_?,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
    if (pIVar4 != (IEventSystemHandler *)0x0) {
      uVar6 = (*(code *)pIVar4->klass[1]._0.typeMetadataHandle)(pIVar4);
      GVar7 = CONCAT31((int3)((uint)pIVar4 >> 8),uVar6);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar8 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar8 != (PlayerPlanetData *)0x0) {
        iVar9 = (pPVar8->fields).progressionGamePoints;
        pPVar8 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if ((pPVar8 != (PlayerPlanetData *)0x0) &&
           (pPVar10 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
           pPVar10 != (PlayerTierStateCalculator *)0x0)) {
          method = (MethodInfo *)(uint)(pPVar8->fields).gamePassTier;
          pDVar11 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                   PlayerTierStateCalculator_GetTierPricingState
                             (pPVar10,iVar9,(GamePassTier__Enum)method,(MethodInfo *)0x0);
          if (pDVar11 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                         *)0x0) {
            pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      GamePassTier,System::Object]::
                      Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar11,GVar7
                                 ,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            pXVar13 = pXRam00000048;
            if (pOVar12 != (Object *)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              pXVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                  (pXVar13,
                                   TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                  );
              if (pSVar3 != (ScaleAnimationBase *)0x0) {
                (pSVar3->fields)._._._._.m_CachedPtr = pXVar13;
                pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)0x0,(MethodInfo *)0x0);
                price = &UNK_?;
                pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar15,(Object *)pSVar3,
                           MethodInfo__SpawnRoleMenu___ShowTestTier_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (pGVar14,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar15,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                this_00 = (pSVar3->fields)._._._._.m_CachedPtr;
                if (this_00 != (TierTestDetailsPopup *)0x0) {
                  TierTestDetailsPopup::TierTestDetailsPopup_Initialize
                            (this_00,GVar7,(int32_t)price,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PrepareForSpawnRoleActivating() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_PrepareForSpawnRoleActivating
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
  }
  bVar1 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar2 != (ILockCursorManager *)0x0) {
    func_?(4,TypeInfo__ILockCursorManager);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RecalculateInterpolation(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_RecalculateInterpolation
               (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  fVar1 = (this->fields).selectionElementWidth;
  (this->fields).interpolateToPositionX =
       (this->fields).menuHalfWidth -
       ((float)(index + 1) * (this->fields).elementSpacing + (float)index * fVar1 +
       fVar1 * _UNK_?);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).shouldInterpolate = 1;
  (this->fields).interpolationStartTime = fVar1;
  return;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowElements
               (SpawnRoleMenu *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  index = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (-1 < index) {
        pLVar1 = (this->fields).SelectionElementsList;
        if (pLVar1 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
code_?:
          func_?(0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                           );
        if (index < (int)pOVar3) {
          pLVar1 = (this->fields).SelectionElementsList;
          if ((pLVar1 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) ||
             (this_00 = (DefaultSpawnRoleSelectionElement *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                                  ), this_00 == (DefaultSpawnRoleSelectionElement *)0x0))
          goto code_?;
          DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Activate
                    (this_00,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
    } while (index < (this->fields).maxSelectionElementsOnScreen + startElementIndex);
  }
  return;
}


/* Void ShowLockedTierPurchase() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowLockedTierPurchase
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenu___ShowLockedTierPurchase_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  this_00 = (this->fields).SelectionElementsList;
  if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).selectedSpawnRole,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      uVar2 = (*(code *)pIVar1->klass[1]._0.typeMetadataHandle)
                        (pIVar1,pIVar1->klass[1]._0.interopData);
      pTVar3 = (this->fields).tierLockedPopupPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object,uVar2);
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pTVar3,
                          TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                         );
      if (this_01 != (ScaleAnimationBase *)0x0) {
        (this_01->fields)._._._._.m_CachedPtr = pXVar4;
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this_01,
                   MethodInfo__SpawnRoleMenu___ShowLockedTierPurchase_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pTVar3 = (this_01->fields)._._._._.m_CachedPtr;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this,MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                   (MethodInfo *)0x0);
        if (pTVar3 != (TierLockedDetailsPopup *)0x0) {
          TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
                    (pTVar3,(GamePassTier__Enum)pUVar5,(UnityAction *)pUVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowTestTier() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowTestTier
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenu___ShowTestTier_c__AnonStorey2;
  this_04 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,(MethodInfo *)method_00);
  this_00 = (this->fields).SelectionElementsList;
  if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).selectedSpawnRole,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      uVar2 = (*(code *)pIVar1->klass[1]._0.typeMetadataHandle)
                        (pIVar1,pIVar1->klass[1]._0.interopData);
      key = CONCAT31((int3)((uint)pIVar1 >> 8),uVar2);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        playerGamePoints = (pPVar3->fields).progressionGamePoints;
        pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if ((pPVar3 != (PlayerPlanetData *)0x0) &&
           (this_01 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
           this_01 != (PlayerTierStateCalculator *)0x0)) {
          this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar3->fields).gamePassTier);
          this_05 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingState
                              (this_01,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
          if (this_05 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                     GamePassTier,System::Object]::
                     Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                               ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_05,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar4 != (Object *)0x0) {
              pXVar5 = (XpBoostParticlePreviewer *)(this_03->fields).tierTestPopupPrefab;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 (pXVar5,
                                  TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                 );
              if (this_04 != (ScaleAnimationBase *)0x0) {
                (this_04->fields)._._._._.m_CachedPtr = pXVar5;
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_03,(MethodInfo *)0x0);
                price = &UNK_?;
                this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_06,(Object *)this_04,
                           MethodInfo__SpawnRoleMenu___ShowTestTier_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_06,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                this_02 = (this_04->fields)._._._._.m_CachedPtr;
                if (this_02 != (TierTestDetailsPopup *)0x0) {
                  TierTestDetailsPopup::TierTestDetailsPopup_Initialize
                            (this_02,key,(int32_t)price,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowTierPurchase() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowTierPurchase
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenu___ShowTierPurchase_c__AnonStorey0;
  this_03 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)method_00);
  this_00 = (this->fields).SelectionElementsList;
  if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).selectedSpawnRole,
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      pIVar2 = pIVar1->klass[1]._0.interopData;
      uVar3 = (*(code *)pIVar1->klass[1]._0.typeMetadataHandle)(pIVar1,pIVar2);
      key = CONCAT31((int3)((uint)pIVar2 >> 8),uVar3);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        playerGamePoints = (pPVar4->fields).progressionGamePoints;
        pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if ((pPVar4 != (PlayerPlanetData *)0x0) &&
           (this_01 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
           this_01 != (PlayerTierStateCalculator *)0x0)) {
          this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar4->fields).gamePassTier);
          this_04 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingState
                              (this_01,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
          if (this_04 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) {
            pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                     GamePassTier,System::Object]::
                     Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                               ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_04,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar5 != (Object *)0x0) {
              pTVar6 = (this_02->fields).tierUnlockPopupPrefab;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 ((XpBoostParticlePreviewer *)pTVar6,
                                  TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                 );
              if (this_03 != (ScaleAnimationBase *)0x0) {
                (this_03->fields)._._._._.m_CachedPtr = pXVar7;
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0);
                pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar8,(Object *)this_03,
                           MethodInfo__SpawnRoleMenu___ShowTierPurchase_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar8,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pTVar6 = (this_03->fields)._._._._.m_CachedPtr;
                pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar8,(Object *)this_02,
                           MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,(MethodInfo *)0x0);
                if (pTVar6 != (TierUnlockDetailsPopup *)0x0) {
                  TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                            (pTVar6,key,(int32_t)pUVar8,(UnityAction *)pUVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Start(SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack2 != (Action *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action *)0x0) {
      pAStack3 = TypeInfo__System__Action;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_StartPlaying
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
  }
  bVar1 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar2 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar3 != (GameSessionData *)0x0) {
      if ((pGVar3->fields).gameMode == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar3 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar3->fields).gameMode != 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar4 == (IEditModeUI *)0x0) goto code_?;
        cVar5 = func_?(1);
        if (cVar5 == '\0') {
          return;
        }
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar6 != (GameEventManager *)0x0) &&
         (this_00 = (pGVar6->fields).AvatarCommandsPlayMode,
         this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Update
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).shouldInterpolate == 0) {
    return;
  }
  pTVar1 = (Transform *)(this->fields).elementContainer;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
    a = pVVar2->x;
    fStack_3 = (this->fields).interpolateToPositionX;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fStack_5 = (this->fields).interpolationStartTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                      ((float)a,fStack_3,fVar4 - fStack_5,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields).elementContainer;
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
      uStack_6 = 0;
      fStack_7 = 0.0;
      func_?(&uStack_6,fVar4);
      value.z = fStack_7;
      value.x = (float)(undefined4)uStack_6;
      value.y = (float)uStack_6._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateShownElements() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_UpdateShownElements
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollbar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).SelectionElementsList;
    if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((float)(int)pOVar3 * fVar1,(MethodInfo *)0x0);
      newStartElement =
           UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     ((float)iVar4 -
                      (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?,
                      (MethodInfo *)0x0);
      iVar4 = (this->fields).currentSelectionStartIndex;
      pLVar2 = (this->fields).SelectionElementsList;
      if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                           );
        SpawnRoleMenu_HideElements(this,iVar4,(int32_t)pOVar3,newStartElement,(MethodInfo *)0x0);
        SpawnRoleMenu_ShowElements(this,newStartElement,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Close>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu__Close_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SpawnRoleMenu() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu__ctor(SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).maxSelectionElementsOnScreen = 10;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__List__
            );
  (this->fields).SelectionElementsList = (List_1_DefaultSpawnRoleSelectionElement_ *)this_00;
  LobbyStateController::LobbyStateController__ctor((LobbyStateController *)this,(MethodInfo *)0x0);
  return;
}


/* LobbyFlowMenu+LobbyFlowMenuType get_MenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_get_MenuType
          (SpawnRoleMenu *this,MethodInfo *method)

{
  return LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect;
}

