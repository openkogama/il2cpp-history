
/* Void AvatarSlotClicked(Int32) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_AvatarSlotClicked
               (AvatarSelectionController *this,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (this->fields).currSelectedSlot;
  if (slotIndex == key) {
    return;
  }
  index = key;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 == (AvatarSelectionController *)0x0) goto code_?;
  key_00 = (pAVar1->fields).currSelectedSlot;
  if (key_00 != -1) {
    if ((((pAVar1 == (AvatarSelectionController *)0x0) ||
         (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(pAVar1->fields).avatarSlots,
         pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0)) ||
        (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar2,key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                            ), pTVar3 == (TerrainUtility_TerrainMap *)0x0)) ||
       ((pCVar4 = (Component_1 *)(pTVar3->fields).m_patchSize.z, pCVar4 == (Component_1 *)0x0 ||
        (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            (pCVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))))
    goto code_?;
    index = 0;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    if ((((pAVar1 == (AvatarSelectionController *)0x0) ||
         ((pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(pAVar1->fields).avatarSlots,
          pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0 ||
          (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar2,slotIndex,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                              ), pTVar3 == (TerrainUtility_TerrainMap *)0x0)))) ||
        (pCVar4 = (Component_1 *)(pTVar3->fields).m_patchSize.z, pCVar4 == (Component_1 *)0x0)) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,1,(MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    (pAVar1->fields).currSelectedSlot = slotIndex;
    pAVar6 = (this->fields).avatarBodyController;
    if (pAVar6 != (AvatarEditModeBodyController *)0x0) {
      AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
                (pAVar6,slotIndex,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pAVar6 = (this->fields).avatarBodyController;
      if (((pAVar6 != (AvatarEditModeBodyController *)0x0) &&
          (this_01 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                               (pAVar6,(MethodInfo *)0x0), this_01 != (MVBody *)0x0)) &&
         (AvatarID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0),
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveAvatar
                  (this_00,(int32_t)AvatarID,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar7,(Object *)this,
                   MethodInfo__AvatarSelectionController___SetStateToRoam_m__0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar5,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                  );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
          pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar7,(Object *)0x0,
                     MethodInfo__AvatarSelectionController___SetStateToRoam_m__1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
                    );
          TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar7;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar5,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                  );
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).avatarSlots;
        if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)0x0) &&
           (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (pDVar2,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                               ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar5,(MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).avatarSlots;
          if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                      (pDVar2,key,(TerrainUtility_TerrainMap *)0x0,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            pAVar6 = (this->fields).avatarBodyController;
            pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar7,(Object *)this,
                       MethodInfo__AvatarSelectionController__OnPicUpdateForPrevAvatar_int__UnityEngine__Texture2D_
                       ,
                       MethodInfo__System__Action<int,_UnityEngine::Texture2D>__Action_System__Object__void__
                      );
            if (pAVar6 != (AvatarEditModeBodyController *)0x0) {
              AvatarEditModeBodyController::AvatarEditModeBodyController_CaptureScreenshotForBody
                        (pAVar6,index,(Action_2_Int32_UnityEngine_Texture2D_ *)pUVar7,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_Destroy
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
  return;
}


/* Void Initialize(AvatarEditModeBodyController, EditorStateMachine) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_Initialize
               (AvatarSelectionController *this,AvatarEditModeBodyController *bodyController,
               EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = this;
  (this->fields).avatarBodyController = bodyController;
  if (bodyController != (AvatarEditModeBodyController *)0x0) {
    AvatarEditModeBodyController::AvatarEditModeBodyController_SetPublishAvatarGO
              (bodyController,(this->fields).publishAvatarGO,(MethodInfo *)0x0);
    this_00 = (this->fields).avatarBodyController;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
               ,
               MethodInfo__System__Action<int,_UnityEngine::Texture2D>__Action_System__Object__void__
              );
    if (this_00 != (AvatarEditModeBodyController *)0x0) {
      AvatarEditModeBodyController::AvatarEditModeBodyController_CaptureScreenshotsForAllAvatars
                (this_00,(Action_2_Int32_UnityEngine_Texture2D_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPicUpdateForPrevAvatar(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_OnPicUpdateForPrevAvatar
               (AvatarSelectionController *this,int32_t index,Texture2D *image,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).avatarSelectionSlotPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    this_00 = (RawImage *)(pXVar1->fields).layersToRender;
    (pXVar1->fields).xpBoostParticles = (ParticleSystem *)index;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)image,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields).avatarSelectionContentRoot,0,(MethodInfo *)0x0
                  );
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar2,index,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).avatarSlots;
          if (this_01 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                      (this_01,index,(TerrainUtility_TerrainMap *)pXVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPictureTakenCallback(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_OnPictureTakenCallback
               (AvatarSelectionController *this,int32_t index,Texture2D *image,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).avatarSelectionSlotPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    this_00 = (RawImage *)(pXVar1->fields).layersToRender;
    (pXVar1->fields).xpBoostParticles = (ParticleSystem *)index;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)image,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields).avatarSelectionContentRoot,0,(MethodInfo *)0x0
                  );
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar2,index,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).avatarSlots;
          if (this_01 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                      (this_01,index,(TerrainUtility_TerrainMap *)pXVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pAVar3 = TypeInfo__AvatarSelectionController->static_fields->instance;
            if (pAVar3 != (AvatarSelectionController *)0x0) {
              if (index != (pAVar3->fields).currSelectedSlot) {
                return;
              }
              this_02 = (pXVar1->fields).previewCam;
              if ((this_02 != (Camera *)0x0) &&
                 (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0),
                 this_03 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_03,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OpenAvatarShop() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_OpenAvatarShop
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarSelectionController->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarSelectionController___OpenAvatarShop_m__3_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarSelectionController->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarSelectionController->static_fields->__f__am_cache2;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
            );
  return;
}


/* Void ResetCurrentAvatar() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_ResetCurrentAvatar
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 == (AvatarEditModeBodyController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarEditModeBodyController___ResetCurrentBody_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  pRVar2 = (this_00->fields).resetAvatarHandler;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pRVar2,
                      ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                     );
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields)._._._._.m_CachedPtr = pXVar3;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this_02,
               MethodInfo__AvatarEditModeBodyController___ResetCurrentBody_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pRVar2 = (this_02->fields)._._._._.m_CachedPtr;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).bodies;
    if (this_01 != (List_1_MVBody_ *)0x0) {
      currentBody = (MVBody *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                               (this_00->fields).currentBodyIndex,
                               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                              );
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this_00,MethodInfo__AvatarEditModeBodyController__ExecuteReset__,
                 (MethodInfo *)0x0);
      if (pRVar2 != (ResetAvatarHandler *)0x0) {
        ResetAvatarHandler::ResetAvatarHandler_ResetAvatar
                  (pRVar2,currentBody,(Action *)pUVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SellCurrentAvatar() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SellCurrentAvatar
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarSelectionController->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarSelectionController___SellCurrentAvatar_m__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarSelectionController->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarSelectionController->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void SetStateToRoam() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetStateToRoam
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__AvatarSelectionController___SetStateToRoam_m__0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__AvatarSelectionController___SetStateToRoam_m__1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            );
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetToNextAnimation
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 == (AvatarEditModeBodyController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this_00->fields).animations;
  iVar3 = (this_00->fields).currentAnimationIndex;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if (iVar3 < (int)((int)&pOVar4[-1].monitor + 3)) {
      index = (this_00->fields).currentAnimationIndex + 1;
    }
    else {
      index = 0;
    }
    (this_00->fields).currentAnimationIndex = index;
    pLVar2 = (this_00->fields).animations;
    if (pLVar2 != (List_1_System_String_ *)0x0) {
      animation = (String *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            );
      AvatarEditModeBodyController::AvatarEditModeBodyController_Set
                (this_00,animation,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TakeScreenshotForProfile() */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_TakeScreenshotForProfile
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarEditModeBodyController);
    }
    if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache6 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__AvatarEditModeBodyController___TakeScreenshot_m__7_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
        func_?(TypeInfo__AvatarEditModeBodyController);
      }
      TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache6 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_01;
    }
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarEditModeBodyController);
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache6;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OpenAvatarShop>m__3(IActivateUIElement, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController__OpenAvatarShop_m__3
               (IActivateUIElement *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IActivateUIElement *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IActivateUIElement,x,3);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SellCurrentAvatar>m__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController__SellCurrentAvatar_m__2
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_You_cannot_sell_your_avatar_thro,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Error;
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).CreateErrorNotificationPopup)
                   [pIVar5->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,pSVar2,ppMVar7[1]);
  return;
}


/* Void <SetStateToRoam>m__0(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController__SetStateToRoam_m__0
               (AvatarSelectionController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                       (this_00,(MethodInfo *)0x0);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup) {
            iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
            (*(code *)(&(x->klass->vtable).SetBodyGroup)[iVar5].method)
                      (x,pMVar1,(&(x->klass->vtable).SelectEditorStateMachineToBodyGroup)[iVar5].
                                methodPtr);
            return;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup,0);
      (*(code *)*puVar6)(x,pMVar1,puVar6[1]);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <SetStateToRoam>m__1(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController__SetStateToRoam_m__1
               (IEditStateCommands *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    func_?(0,TypeInfo__IEditStateCommands,x,0x34);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AvatarSelectionController() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController__ctor
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currSelectedSlot = -1;
  this_00 = (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__Dictionary__
            );
  (this->fields).avatarSlots = this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_CurrentlySelectedSlotIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionController::
        AvatarSelectionController_get_CurrentlySelectedSlotIndex(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    return (pAVar1->fields).currSelectedSlot;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_CurrentlySelectedSlotIndex(Int32) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_set_CurrentlySelectedSlotIndex(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 == (AvatarSelectionController *)0x0) goto code_?;
  key = (pAVar1->fields).currSelectedSlot;
  if (key != -1) {
    if ((pAVar1 == (AvatarSelectionController *)0x0) ||
       (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pAVar1->fields).avatarSlots,
       pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) goto code_?;
    pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar2,key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pTVar3 == (TerrainUtility_TerrainMap *)0x0) ||
       (pCVar4 = (Component_1 *)(pTVar3->fields).m_patchSize.z, pCVar4 == (Component_1 *)0x0))
    goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (pCVar4,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    if ((pAVar1 == (AvatarSelectionController *)0x0) ||
       (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pAVar1->fields).avatarSlots,
       pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) goto code_?;
    pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar2,value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pTVar3 == (TerrainUtility_TerrainMap *)0x0) ||
       (pCVar4 = (Component_1 *)(pTVar3->fields).m_patchSize.z, pCVar4 == (Component_1 *)0x0))
    goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (pCVar4,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,1,(MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    (pAVar1->fields).currSelectedSlot = value;
    return;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

