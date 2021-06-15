
/* Void AvatarAccessoryCreateHandler(AvatarAccessory) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_AvatarAccessoryCreateHandler
               (AccessoryView *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (avatarAccessory != (AvatarAccessory *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)avatarAccessory,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  pAVar4 = (this->fields).accessoryPreviewerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar4 = (AccessoryPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pAVar4,
                      AccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewer>_AccessoryPreviewer_
                     );
  (this->fields).previewer = pAVar4;
  if ((pAVar4 == (AccessoryPreviewer *)0x0) ||
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pAVar4,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
            (pTVar1,(this->fields).rootTransform,(MethodInfo *)0x0);
  pAVar4 = (this->fields).previewer;
  uVar5 = 0;
  func_?();
  puVar6 = &stack0xffffffec;
  fVar7 = 0.0;
  uVar8 = 0xc0400000;
  uVar9 = CONCAT44(&UNK_?,uVar5);
  func_?();
  if ((avatarAccessory == (AvatarAccessory *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)avatarAccessory,(MethodInfo *)0x0),
     pAVar4 == (AccessoryPreviewer *)0x0)) goto code_?;
  cameraPosOffset.z = (float)puVar6;
  cameraPosOffset.x = (float)(int)uVar9;
  cameraPosOffset.y = (float)(int)((ulonglong)uVar9 >> 0x20);
  cameraRotOffset.z = fVar7;
  cameraRotOffset.x = (float)(int)uVar8;
  cameraRotOffset.y = (float)(int)((ulonglong)uVar8 >> 0x20);
  AccessoryPreviewer::AccessoryPreviewer_Initialize
            (pAVar4,0x200,0x200,LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
             CameraClearFlags__Enum_Color,cameraPosOffset,cameraRotOffset,pGVar3,
             (this->fields).rootTransform,(MethodInfo *)0x0);
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnFinished;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  pAVar10 = (this->fields).accessoryDataClient;
  (this->fields).OnFinished = (Action *)0x0;
  if (pAVar10 == (AccessoryDataClient *)0x0) goto code_?;
  piVar11 = &(pAVar10->fields)._.cat;
  piVar12 = (int *)func_?(TypeInfo__MV__Common__AccessoryCategory,piVar11);
  if (piVar12 == (int *)0x0) goto code_?;
  pSVar13 = (String *)(**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
  piVar14 = (int32_t *)func_?(piVar12);
  *piVar11 = *piVar14;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar13 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_AvatarAccessory_,pSVar13,StringLiteral__Images_,(MethodInfo *)0x0
                     );
  pAVar10 = (this->fields).accessoryDataClient;
  if (pAVar10 == (AccessoryDataClient *)0x0) goto code_?;
  pSVar15 = (pAVar10->fields)._.url;
  pSVar16 = (String__Array *)func_?(TypeInfo__System__String,1);
  if (pSVar16 == (String__Array *)0x0) goto code_?;
  if ((::StringLiteral__ == (String *)0x0) ||
     (iVar17 = func_?(::StringLiteral__,(pSVar16->klass->_0).element_class), iVar17 != 0))
  {
    if (pSVar16->max_length == 0) goto code_?;
    pSVar16->vector[0] = ::StringLiteral__;
    if ((pSVar15 == (String *)0x0) ||
       (pSVar16 = mscorlib.dll::System::String::String_Split_5
                            (pSVar15,pSVar16,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
       pSVar16 == (String__Array *)0x0)) goto code_?;
    uVar18 = pSVar16->max_length;
    if (uVar18 <= uVar18 - 1) goto code_?;
    pSVar15 = pSVar16->vector[uVar18 - 1];
    pSVar16 = (String__Array *)func_?();
    if (pSVar16 == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar17 = func_?(::StringLiteral__,(pSVar16->klass->_0).element_class), iVar17 == 0)
       ) goto code_?;
    if (pSVar16->max_length == 0) goto code_?;
    pSVar16->vector[0] = ::StringLiteral__;
    if ((pSVar15 == (String *)0x0) ||
       (pSVar16 = mscorlib.dll::System::String::String_Split_5
                            (pSVar15,pSVar16,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
       pSVar16 == (String__Array *)0x0)) goto code_?;
    if (pSVar16->max_length != 0) {
      pSVar15 = mscorlib.dll::System::String::String_Concat_2
                          (pSVar16->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0);
      if (pSVar15 != (String *)0x0) {
        pSVar15 = mscorlib.dll::System::String::String_ToLower(pSVar15,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)
                    mscorlib.dll::System::String::String_Concat_2(pSVar13,pSVar15,(MethodInfo *)0x0);
        pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren_29((GameObject *)avatarAccessory,method_00);
        uVar18 = 0;
        if (pUVar19 != (UseInteratorVisualization__Array *)0x0) {
          ppUVar20 = pUVar19->vector;
          for (; (int)uVar18 < (int)pUVar19->max_length; uVar18 = uVar18 + 1) {
            if (pUVar19->max_length <= uVar18) goto code_?;
            if (*ppUVar20 == (UseInteratorVisualization *)0x0) goto code_?;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                      ((SkinnedMeshOptimizer *)*ppUVar20,(MethodInfo *)0x0);
            ppUVar20 = ppUVar20 + 1;
          }
          this_01 = (this->fields).previewImageStreamingManager;
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this,
                     MethodInfo__AccessoryView__OnPreviewImageFinishedDownloading__,
                     (MethodInfo *)0x0);
          if (this_01 != (StreamedSpriteToImageManual *)0x0) {
            StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                      (this_01,(String *)method_00,(UnityAction *)this_02,(MethodInfo *)0x0);
            (this->fields).previewImageUrl = (String *)method_00;
            return;
          }
        }
      }
      goto code_?;
    }
  }
  else {
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
  func_?();
  func_?();
code_?:
  func_?(0);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void BackToShop() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_BackToShop
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).accessoryLoader;
  (this->fields).rootTransform = (Transform *)0x0;
  if (this_00 != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              (this_00,(MethodInfo *)0x0);
  }
  pAVar4 = (this->fields).previewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar4 = (this->fields).previewer;
    if (pAVar4 == (AccessoryPreviewer *)0x0) goto code_?;
    AccessoryPreviewer::AccessoryPreviewer_Destroy(pAVar4,(MethodInfo *)0x0);
  }
  this_01 = (this->fields).tabMenu;
  if (this_01 != (TabMenuAccessoryShop *)0x0) {
    x = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                  (this_01,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryView_DestroyFeaturedTab(this,(MethodInfo *)0x0);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AccessoryView->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)0x0,
                 MethodInfo__AccessoryView___BackToShop_m__2_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
                );
      TypeInfo__AccessoryView->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)pUVar5;
    }
    pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryView->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar3,(BaseEventData *)0x0,pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AccessoryView->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)0x0,
                 MethodInfo__AccessoryView___BackToShop_m__3_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>__EventFunction_System__Object__void__
                );
      TypeInfo__AccessoryView->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)pUVar5;
    }
    pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryView->static_fields->__f__am_cache2;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar3,(BaseEventData *)0x0,pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
              );
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean CurrentlyViewingAccessory(AccessoryDataClient) */

bool Assembly-CSharp.dll::AccessoryView::AccessoryView_CurrentlyViewingAccessory
               (AccessoryView *this,AccessoryDataClient *data,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    if (data == (AccessoryDataClient *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pAVar1->fields)._.aMDID == (data->fields)._.aMDID) {
      return 1;
    }
  }
  return 0;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Destroy
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  pAVar2 = this;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  pTVar3 = (pAVar2->fields).rootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    method = (MethodInfo *)TypeInfo__UnityEngine__Object;
    this = (AccessoryView *)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  this = (AccessoryView *)0x0;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pTVar3 = (pAVar2->fields).rootTransform;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    in_stack_5 = &UNK_?;
    obj = (LevelRewardsManager__Class *)
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      in_stack_6 = TypeInfo__UnityEngine__Object;
      in_stack_7 = (LevelRewardsManager__Class *)&UNK_?;
      func_?();
    }
    in_stack_6 = (Object_1__Class *)0x0;
    in_stack_7 = obj;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  pAVar8 = (pAVar2->fields).previewer;
  (pAVar2->fields).rootTransform = (Transform *)0x0;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    in_stack_9 = TypeInfo__UnityEngine__Object;
    in_stack_10 = (Dictionary_2_System_Int32_System_Int32_ *)&UNK_?;
    func_?();
  }
  in_stack_9 = (Object_1__Class *)0x0;
  in_stack_10 = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  in_stack_7 = (LevelRewardsManager__Class *)&UNK_?;
  in_stack_6 = (Object_1__Class *)pAVar8;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pAVar8 = (pAVar2->fields).previewer;
    if (pAVar8 == (AccessoryPreviewer *)0x0) {
code_?:
      pAStack11 = (AccessoryView__Class *)0xADDR;
      pMStack12 = (MonitorData *)0x0;
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    _pAStack0000002c = (KeyValuePair_2_System_Int32_System_Int32_)ZEXT48(pAVar8);
    obj_00._._.m_CachedPtr =
         (Component_1__Fields)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)pAVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      in_stack_14 = TypeInfo__UnityEngine__Object;
      in_stack_15._._._.m_CachedPtr = (Behaviour__Fields)&UNK_?;
      func_?();
    }
    in_stack_14 = (Object_1__Class *)0x0;
    in_stack_15._._._.m_CachedPtr =
         (Behaviour__Fields)(Behaviour__Fields)obj_00._._.m_CachedPtr;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj_00._._.m_CachedPtr,(MethodInfo *)0x0);
  }
  object = in_stack_16;
  this = (AccessoryView *)(pAVar2->fields).accessoryLoader;
  if (this == (AccessoryView *)0x0) {
    return;
  }
  method = (MethodInfo *)0x0;
  in_stack_16 = (Button *)0xffffffff;
  pTStack17 = (Text *)&DAT_?;
  pSStack18 = (StreamedSpriteToImageManual *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0x00000040;
  pIStack19 = (Image *)&stack0xfffffff8;
  pIVar20 = (Image *)&stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar20 = pIStack19;
  }
  pIStack19 = pIVar20;
  pAStack11 = (AccessoryView__Class *)0x0;
  pMStack12 = (MonitorData *)0x0;
  in_stack_7 = (LevelRewardsManager__Class *)0x0;
  in_stack_6 = (Object_1__Class *)0x0;
  in_stack_10 = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  in_stack_9 = (Object_1__Class *)0x0;
  func_?();
  this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
            (in_stack_21->fields)._._.m_Material;
  in_stack_14 = (Object_1__Class *)&stack0xfffffff8;
  pIStack19 = (Image *)&stack0xfffffff8;
  if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
    in_stack_14 = (Object_1__Class *)&stack0xfffffff8;
    pIStack19 = (Image *)&stack0xfffffff8;
    pDVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &this,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                       );
    in_stack_7 = (LevelRewardsManager__Class *)pDVar22->dictionary;
    in_stack_6 = (Object_1__Class *)pDVar22->next;
    in_stack_10 = (Dictionary_2_System_Int32_System_Int32_ *)pDVar22->stamp;
    in_stack_9 = (Object_1__Class *)(pDVar22->current).key;
    in_stack_16 = (Button *)0x0;
    while (cVar23 = func_?(), cVar23 != '\0') {
      _pAStack0000002c =
           LevelRewardsManager::LevelRewardsManager_get_NextReward
                     ((LevelRewardsManager *)&stack0x00000018,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                     );
      this = (AccessoryView *)&stack0x0000002c;
      method = 
      MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
      ;
      iVar24 = func_?();
      if ((iVar24 == 0) || (object = *(Button **)(iVar24 + 0xc), object == (Button *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      (object->fields)._.m_Navigation.m_Mode = 0;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)object,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
    }
    object = (Button *)0x0;
    ((AccessoryDataClient *)in_stack_14)->klass = (AccessoryDataClient__Class *)0x44;
    in_stack_16 = (Button *)0xffffffff;
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(in_stack_21->fields)._._.m_Material;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Clear__
                );
      *unaff_FS_OFFSET = pSStack18;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(object,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void DestroyFeaturedTab() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_DestroyFeaturedTab
               (AccessoryView *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  this_01 = AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  bVar4 = false;
  if ((this_01 != (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)0x0) &&
     (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Values__
                          ),
     this_02 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffb4,this_02,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar5 = func_?(), cVar5 != '\0') {
      this_03 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)func_?();
      index = 0;
      while( true ) {
        if (this_03 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
        goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                           );
        if ((int)pOVar6 <= index) break;
        pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_03,index,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                           );
        if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
        if (*(char *)&pIVar7[6].klass == '\0') {
          pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (this_03,index,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                             );
          if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
          if (*(char *)((int)&pIVar7[2].klass + 2) != '\0') {
            bVar4 = true;
          }
        }
        index = index + 1;
      }
    }
    uStack_1 = 0xffffffff;
    func_?();
    if (!bVar4) {
      this_00 = (this->fields).tabMenu;
      if (this_00 == (TabMenuAccessoryShop *)0x0) goto code_?;
      TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
                (this_00,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void EquipPopupResultCallback() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_EquipPopupResultCallback
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryDataClient == (AccessoryDataClient *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AccessoryView->static_fields->__f__am_cache3 ==
        (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__AccessoryView___EquipPopupResultCallback_m__4_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
                );
      TypeInfo__AccessoryView->static_fields->__f__am_cache3 =
           (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryView->static_fields->__f__am_cache3;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AccessoryView->static_fields->__f__am_cache4 ==
        (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__AccessoryView___EquipPopupResultCallback_m__5_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>__EventFunction_System__Object__void__
                );
      TypeInfo__AccessoryView->static_fields->__f__am_cache4 =
           (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AccessoryView->static_fields->__f__am_cache4;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
              );
  }
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandleNotOwnedUI
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)this_02,(MethodInfo *)0x0);
      pAVar2 = (this->fields).accessoryDataClient;
      if (pAVar2 != (AccessoryDataClient *)0x0) {
        if ((int)pOVar1 < (pAVar2->fields)._.lvl) {
          AccessoryView_SetShowPrices(this,0,(MethodInfo *)0x0);
        }
        else {
          AccessoryView_HandlePrices(this,pAVar2,(MethodInfo *)0x0);
        }
        pAVar2 = (this->fields).accessoryDataClient;
        if ((pAVar2 != (AccessoryDataClient *)0x0) &&
           (pAVar3 = (this->fields).timeLimitDisplayer, pAVar3 != (AccessoryTimeLimitDisplayer *)0x0
           )) {
          (pAVar3->fields).accessoryTimeLimitData = (pAVar2->fields)._.time;
          pAVar3 = (this->fields).timeLimitDisplayer;
          if (pAVar3 != (AccessoryTimeLimitDisplayer *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pAVar3,(MethodInfo *)0x0);
            pAVar2 = (this->fields).accessoryDataClient;
            if (pAVar2 != (AccessoryDataClient *)0x0) {
              if ((pAVar2->fields)._.owns == 0) {
                if ((pAVar2 == (AccessoryDataClient *)0x0) ||
                   (this_00 = (pAVar2->fields)._.time, this_00 == (AccessoryTimelimit *)0x0))
                goto code_?;
                value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                        AccessoryTimelimit_get_IsTimeLimited(this_00,(MethodInfo *)0x0);
              }
              else {
                value = 0;
              }
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,value,(MethodInfo *)0x0);
                pAVar2 = (this->fields).accessoryDataClient;
                if ((pAVar2 != (AccessoryDataClient *)0x0) &&
                   (pGVar4 = (this->fields).newAccessoryImage, pGVar4 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,(pAVar2->fields)._.iNew,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePreviewing(MVBody) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandlePreviewing
               (AccessoryView *this,MVBody *avatarBody,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryDataClient;
  (this->fields).avatarBody = avatarBody;
  if ((pAVar1 != (AccessoryDataClient *)0x0) && (avatarBody != (MVBody *)0x0)) {
    bVar2 = MVBody::MVBody_IsAccessoryEquipped(avatarBody,(pAVar1->fields)._.sAID,(MethodInfo *)0x0)
    ;
    pAVar3 = (this->fields).sizeSlider;
    (this->fields).isPreviewing = bVar2 == 0;
    if (pAVar3 != (AccessorySizeSlider *)0x0) {
      (pAVar3->fields).isInPreview = bVar2 == 0;
      pAVar4 = (this->fields).offsetSlider;
      if (pAVar4 != (AccessoryOffsetSlider *)0x0) {
        (pAVar4->fields).isInPreview = (this->fields).isPreviewing;
        pAVar1 = (this->fields).accessoryDataClient;
        if (pAVar1 != (AccessoryDataClient *)0x0) {
          bVar2 = MVBody::MVBody_IsAccessoryEquipped
                            (avatarBody,(pAVar1->fields)._.sAID,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            MVBody::MVBody_PreviewAccessory
                      (avatarBody,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePrices(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandlePrices
               (AccessoryView *this,AccessoryDataClient *streamingAssetInfo,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonAnimation;
  puStack_2 = (undefined *)0x0;
  if (((this_00 != (AccessoryShinyButton *)0x0) &&
      (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
     && (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                   (pGVar3,1,(MethodInfo *)0x0), streamingAssetInfo != (AccessoryDataClient *)0x0))
  {
    iVar4 = (streamingAssetInfo->fields)._.dsc;
    pTVar5 = (this->fields).originalPriceText;
    if ((pTVar5 != (Text *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar5,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0 < iVar4,(MethodInfo *)0x0);
      pTVar5 = (this->fields).goldSavedText;
      if (pTVar5 != (Text *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar5,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          uVar6 = (uint)(0 < iVar4);
          puVar7 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0 < iVar4,(MethodInfo *)0x0);
          pGVar8 = (this->fields).discountTag;
          if (pGVar8 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,0 < (int)uVar6,(MethodInfo *)0x0);
            pTVar5 = (this->fields).claimText;
            if ((pTVar5 != (Text *)0x0) &&
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pTVar5,(MethodInfo *)0x0),
               pGVar8 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,0,(MethodInfo *)0x0);
              this_01 = (this->fields).purchaseButton;
              if (this_01 != (Button *)0x0) {
                pIVar9 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   ((Selectable *)this_01,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__Styles->_1).cctor_started == 0)) {
                  func_?();
                }
                pCVar10 = Styles::Styles_GetColor
                                   ((Color *)&stack0xffffffdc,ColorStyle__Enum_ButtonSuccess,
                                    (MethodInfo *)0x0);
                if (pIVar9 != (Image *)0x0) {
                  (*(code *)(pIVar9->klass->vtable).set_color.method)
                            (pIVar9,pCVar10->r,pCVar10->g,pCVar10->b,pCVar10->a,
                             (pIVar9->klass->vtable).get_raycastTarget.methodPtr);
                  pGVar8 = (this->fields).lockIcon;
                  if (pGVar8 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar8,0,(MethodInfo *)0x0);
                    if ((int)uVar6 < 1) {
                      pTVar5 = (this->fields).priceTextWithoutDiscount;
                      if ((pTVar5 == (Text *)0x0) ||
                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                         pGVar8 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar8,1,(MethodInfo *)0x0);
                      pTVar5 = (this->fields).priceText;
                      if ((pTVar5 == (Text *)0x0) ||
                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                         pGVar8 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 0;
                    }
                    else {
                      pTVar5 = (this->fields).discountTagText;
                      pSVar11 = StringLiteral_FREE;
                      if ((int)uVar6 < 100) {
                        pSVar11 = (String *)func_?(&stack0xfffffff8,0);
                        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                             != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                          func_?(TypeInfo__System__String);
                        }
                        pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                           (::StringLiteral__,pSVar11,::StringLiteral__,
                                            (MethodInfo *)0x0);
                      }
                      if (pTVar5 == (Text *)0x0) goto code_?;
                      (*(code *)(pTVar5->klass->vtable).set_text.method)
                                (pTVar5,pSVar11,
                                 (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      puVar12 = puVar7;
                      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Mathf);
                      }
                      puStack_2 = (undefined *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                                             (((float)(int)uVar6 / _UNK_?) *
                                              (float)(int)puVar7,(MethodInfo *)0x0);
                      pTVar5 = (this->fields).originalPriceText;
                      pGVar3 = (GameObject *)(puVar12 + -(int)puStack_2);
                      pSVar11 = (String *)func_?(&stack0xfffffff0,StringLiteral_N0,0);
                      if ((pSVar11 == (String *)0x0) ||
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                             (pSVar11,::StringLiteral__,::StringLiteral__,
                                              (MethodInfo *)0x0), pTVar5 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar5->klass->vtable).set_text.method)
                                (pTVar5,pSVar11,
                                 (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar5 = (this->fields).goldSavedText;
                      if ((pTVar5 == (Text *)0x0) ||
                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                         pGVar8 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar8,1,(MethodInfo *)0x0);
                      pTVar5 = (this->fields).goldSavedText;
                      pSVar11 = (String *)func_?(&puStack_2,StringLiteral_N0,0);
                      if ((pSVar11 == (String *)0x0) ||
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                             (pSVar11,::StringLiteral__,::StringLiteral__,
                                              (MethodInfo *)0x0), pTVar5 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar5->klass->vtable).set_text.method)
                                (pTVar5,pSVar11,
                                 (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar5 = (this->fields).priceTextWithoutDiscount;
                      if ((pTVar5 == (Text *)0x0) ||
                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                         pGVar8 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar8,0,(MethodInfo *)0x0);
                      pTVar5 = (this->fields).priceText;
                      if ((pTVar5 == (Text *)0x0) ||
                         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_gameObject
                                             ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                         pGVar8 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 1;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar8,(bool)this,(MethodInfo *)0x0);
                    pTVar5 = (pAVar1->fields).priceText;
                    pSVar11 = (String *)func_?(&stack0xfffffff4,StringLiteral_N0,0);
                    if ((pSVar11 != (String *)0x0) &&
                       (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                           (pSVar11,::StringLiteral__,::StringLiteral__,
                                            (MethodInfo *)0x0), pTVar5 != (Text *)0x0)) {
                      (*(code *)(pTVar5->klass->vtable).set_text.method)
                                (pTVar5,pSVar11,
                                 (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar5 = (pAVar1->fields).priceTextWithoutDiscount;
                      pSVar11 = (String *)func_?(&stack0xfffffff4,StringLiteral_N0,0);
                      if ((pSVar11 != (String *)0x0) &&
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                             (pSVar11,::StringLiteral__,::StringLiteral__,
                                              (MethodInfo *)0x0), pTVar5 != (Text *)0x0)) {
                        (*(code *)(pTVar5->klass->vtable).set_text.method)
                                  (pTVar5,pSVar11,
                                   (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        this_02 = (pAVar1->fields).levelRequirementPurchaseButton;
                        if ((this_02 != (RawImage *)0x0) &&
                           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_gameObject
                                               ((Component_1 *)this_02,(MethodInfo *)0x0),
                           pGVar8 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar8,0,(MethodInfo *)0x0);
                          if (pGVar3 != (GameObject *)0x0) {
                            return;
                          }
                          pTVar5 = (pAVar1->fields).goldSavedText;
                          if ((pTVar5 != (Text *)0x0) &&
                             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_gameObject
                                                 ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                             pGVar3 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                            pTVar5 = (pAVar1->fields).priceTextWithoutDiscount;
                            if ((pTVar5 != (Text *)0x0) &&
                               (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_1_get_gameObject
                                                   ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                               pGVar3 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                              pTVar5 = (pAVar1->fields).priceText;
                              if ((pTVar5 != (Text *)0x0) &&
                                 (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                           Component_1_get_gameObject
                                                     ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                                 pGVar3 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                pGVar3 = (pAVar1->fields).discountTag;
                                if (pGVar3 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                  pTVar5 = (pAVar1->fields).originalPriceText;
                                  if ((pTVar5 != (Text *)0x0) &&
                                     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                               Component_1_get_gameObject
                                                         ((Component_1 *)pTVar5,(MethodInfo *)0x0),
                                     pGVar3 != (GameObject *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                    pTVar5 = (pAVar1->fields).claimText;
                                    if ((pTVar5 != (Text *)0x0) &&
                                       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                 ::Component_1_get_gameObject
                                                           ((Component_1 *)pTVar5,(MethodInfo *)0x0)
                                       , pGVar3 != (GameObject *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void HideNotLoadedStreamingAssetsObject() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HideNotLoadedStreamingAssetsObject
               (AccessoryView *this,MethodInfo *method)

{
  this_00 = (this->fields).timeLimitDisplayer;
  if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).newAccessoryImage;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).discountTag;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Initialize
               (AccessoryView *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar3,(MethodInfo *)0x0)
  ;
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar3,(MethodInfo *)0x0);
    (this->fields).rootTransform = pTVar1;
    if ((pTVar1 != (Transform *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
       )) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pGVar3,StringLiteral_Accessory_Preview,(MethodInfo *)0x0);
      (this->fields).accessoryDataClient = accessoryData;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar4 == MVGameMode__Enum_CharacterEditor) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__AccessoryView___Initialize_m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                  );
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
        pMVar7 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar6,(MethodInfo *)0x0);
        pAVar8 = (this->fields).accessoryDataClient;
        (this->fields).avatarBody = pMVar7;
        if ((pAVar8 == (AccessoryDataClient *)0x0) || (pMVar7 == (MVBody *)0x0))
        goto code_?;
        bVar2 = MVBody::MVBody_IsAccessoryEquipped
                           (pMVar7,(pAVar8->fields)._.sAID,(MethodInfo *)0x0);
        pAVar9 = (this->fields).sizeSlider;
        (this->fields).isPreviewing = bVar2 == 0;
        if (pAVar9 == (AccessorySizeSlider *)0x0) goto code_?;
        (pAVar9->fields).isInPreview = bVar2 == 0;
        pAVar10 = (this->fields).offsetSlider;
        if (pAVar10 == (AccessoryOffsetSlider *)0x0) goto code_?;
        (pAVar10->fields).isInPreview = (this->fields).isPreviewing;
        pAVar8 = (this->fields).accessoryDataClient;
        if (pAVar8 == (AccessoryDataClient *)0x0) goto code_?;
        bVar2 = MVBody::MVBody_IsAccessoryEquipped
                           (pMVar7,(pAVar8->fields)._.sAID,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          MVBody::MVBody_PreviewAccessory
                    (pMVar7,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
        }
      }
      pTVar11 = (this->fields).goldSavedText;
      if ((pTVar11 != (Text *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar11,(MethodInfo *)0x0),
         pGVar3 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pTVar11 = (this->fields).nameText;
        if ((accessoryData != (AccessoryDataClient *)0x0) &&
           ((pSVar12 = (accessoryData->fields)._.name, pSVar12 != (String *)0x0 &&
            (mscorlib.dll::System::String::String_ToUpper(pSVar12,(MethodInfo *)0x0),
            pTVar11 != (Text *)0x0)))) {
          pTVar13 = pTVar11->klass;
          pAVar8 = (AccessoryDataClient *)
                   (pTVar13->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          (*(code *)(pTVar13->vtable).set_text.method)();
          pAVar10 = (this->fields).offsetSlider;
          iVar14 = (accessoryData->fields)._.slot;
          if (pAVar10 != (AccessoryOffsetSlider *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            (pAVar10->fields).accessorySlot = iVar14;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            if (MVar4 == MVGameMode__Enum_CharacterEditor) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pAVar10,(MethodInfo *)0x0);
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)pAVar10,
                         MethodInfo__AccessoryOffsetSlider___Initialize_m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar3,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                        );
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                  ((MethodInfo *)0x0);
              if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
              pMVar7 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar6,(MethodInfo *)0x0);
              pSVar15 = (pAVar10->fields).slider;
              (pAVar10->fields).avatarBody = pMVar7;
              if ((pAVar10->fields).isInPreview == 0) {
                if ((pMVar7 == (MVBody *)0x0) ||
                   (fVar16 = MVBody::MVBody_GetAccessoryOffset
                                       (pMVar7,(pAVar10->fields).accessorySlot,(MethodInfo *)0x0),
                   pSVar15 == (Slider *)0x0)) goto code_?;
              }
              else {
                if (pSVar15 == (Slider *)0x0) goto code_?;
                fVar16 = (pAVar10->fields).defaultValue;
              }
              (*(code *)(pSVar15->klass->vtable).set_value.method)(pSVar15,fVar16);
            }
            pAVar9 = (this->fields).sizeSlider;
            iVar14 = (pAVar8->fields)._.slot;
            if (pAVar9 != (AccessorySizeSlider *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              (pAVar9->fields).accessorySlot = iVar14;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar4 == MVGameMode__Enum_CharacterEditor) {
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pAVar9,(MethodInfo *)0x0);
                pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar5,(Object *)pAVar9,
                           MethodInfo__AccessorySizeSlider___Initialize_m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (pGVar3,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                          );
              }
              else {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                    ((MethodInfo *)0x0);
                if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
                pMVar7 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar6,(MethodInfo *)0x0);
                pSVar15 = (pAVar9->fields).slider;
                (pAVar9->fields).avatarBody = pMVar7;
                if ((pAVar9->fields).isInPreview == 0) {
                  if ((pMVar7 == (MVBody *)0x0) ||
                     (fVar16 = MVBody::MVBody_GetAccessoryScale
                                         (pMVar7,(pAVar9->fields).accessorySlot,(MethodInfo *)0x0),
                     pSVar15 == (Slider *)0x0)) goto code_?;
                }
                else {
                  if (pSVar15 == (Slider *)0x0) goto code_?;
                  fVar16 = (pAVar9->fields).defaultValue;
                }
                (*(code *)(pSVar15->klass->vtable).set_value.method)(pSVar15,fVar16);
              }
              this_00 = (this->fields).accessoryItemBackground;
              if (this_00 != (AccessoryItemBackground *)0x0) {
                AccessoryItemBackground::AccessoryItemBackground_Initialize
                          (this_00,pAVar8,(MethodInfo *)0x0);
                AccessoryView_SetShowNotOwnedUI(this,0,(MethodInfo *)0x0);
                pBVar17 = (this->fields).purchaseButton;
                if ((pBVar17 != (Button *)0x0) &&
                   (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject((Component_1 *)pBVar17,(MethodInfo *)0x0),
                   pGVar3 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,(pAVar8->fields)._.owns == 0,(MethodInfo *)0x0);
                  this_01 = (this->fields).levelRequirementPurchaseButton;
                  if ((this_01 != (RawImage *)0x0) &&
                     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0)
                     , pGVar3 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,0,(MethodInfo *)0x0);
                    pAVar18 = (this->fields).accessoryDataClient;
                    if (pAVar18 != (AccessoryDataClient *)0x0) {
                      if ((pAVar18->fields)._.owns == 0) {
                        AccessoryView_SetShowNotOwnedUI(this,1,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        this_05 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if ((this_05 == (MVNetworkGame *)0x0) ||
                           (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                (this_05,(MethodInfo *)0x0),
                           pMVar6 == (MVLocalPlayer *)0x0)) goto code_?;
                        pOVar19 = System.dll::System::Collections::Generic::
                                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                  ::Single,System::Object]::
                                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                              *)pMVar6,(MethodInfo *)0x0);
                        pAVar18 = (this->fields).accessoryDataClient;
                        if (pAVar18 == (AccessoryDataClient *)0x0) goto code_?;
                        if ((int)pOVar19 < (pAVar18->fields)._.lvl) {
                          AccessoryView_SetShowPrices(this,0,(MethodInfo *)0x0);
                        }
                        else {
                          AccessoryView_HandlePrices(this,pAVar18,(MethodInfo *)0x0);
                        }
                        pAVar18 = (this->fields).accessoryDataClient;
                        if ((pAVar18 == (AccessoryDataClient *)0x0) ||
                           (pAVar20 = (this->fields).timeLimitDisplayer,
                           pAVar20 == (AccessoryTimeLimitDisplayer *)0x0)) goto code_?;
                        (pAVar20->fields).accessoryTimeLimitData = (pAVar18->fields)._.time;
                        pAVar20 = (this->fields).timeLimitDisplayer;
                        if (pAVar20 == (AccessoryTimeLimitDisplayer *)0x0) goto code_?;
                        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_gameObject
                                            ((Component_1 *)pAVar20,(MethodInfo *)0x0);
                        pAVar18 = (this->fields).accessoryDataClient;
                        if (pAVar18 == (AccessoryDataClient *)0x0) goto code_?;
                        if ((pAVar18->fields)._.owns == 0) {
                          if ((pAVar18 == (AccessoryDataClient *)0x0) ||
                             (this_02 = (pAVar18->fields)._.time,
                             this_02 == (AccessoryTimelimit *)0x0)) goto code_?;
                          this._0_1_ = MVWorldObject.dll::MV::WorldObject::Accessories::
                                       AccessoryTimelimit::AccessoryTimelimit_get_IsTimeLimited
                                                 (this_02,(MethodInfo *)0x0);
                        }
                        else {
                          this._0_1_ = 0;
                        }
                        if (pGVar3 == (GameObject *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar3,(bool)this,(MethodInfo *)0x0);
                        pAVar18 = (object->fields).accessoryDataClient;
                        if ((pAVar18 == (AccessoryDataClient *)0x0) ||
                           (pGVar3 = (object->fields).newAccessoryImage,
                           pGVar3 == (GameObject *)0x0)) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar3,(pAVar18->fields)._.iNew,(MethodInfo *)0x0);
                      }
                      else {
                        AccessoryView_SetShowNotOwnedUI(this,0,(MethodInfo *)0x0);
                      }
                      pAVar20 = (object->fields).timeLimitDisplayer;
                      if ((pAVar20 != (AccessoryTimeLimitDisplayer *)0x0) &&
                         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_gameObject
                                              ((Component_1 *)pAVar20,(MethodInfo *)0x0),
                         pGVar3 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar3,0,(MethodInfo *)0x0);
                        pGVar3 = (object->fields).newAccessoryImage;
                        if (pGVar3 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar3,0,(MethodInfo *)0x0);
                          pGVar3 = (object->fields).discountTag;
                          if (pGVar3 != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                            pGVar3 = (object->fields).loadingWheel;
                            if (pGVar3 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                              pGVar3 = (object->fields).emptyFrame;
                              if (pGVar3 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                                pSVar12 = (pAVar8->fields)._.url;
                                this_03 = (object->fields).accessoryLoader;
                                pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?();
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar5,(Object *)object,
                                           MethodInfo__AccessoryView__AvatarAccessoryCreateHandler_AvatarAccessory_
                                           ,
                                           MethodInfo__System__Action<AvatarAccessory>__Action_System__Object__void__
                                          );
                                if (this_03 != (AccessoryLoader *)0x0) {
                                  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
                                  AccessoryLoader::AccessoryLoader_LoadAccessory
                                            (this_03,pSVar12,(Action_1_AvatarAccessory_ *)pUVar5,
                                             (MethodInfo *)0x0);
                                  this_04 = (object->fields).embeddedPlayerConfig;
                                  if (this_04 != (EmbeddedPlayerConfig *)0x0) {
                                    pEVar21 = EmbeddedPlayerConfig::
                                              EmbeddedPlayerConfig_GetCurrentSiteData
                                                        ((EmbeddedSiteConfigData *)&stack0xffffffec,
                                                         this_04,(MethodInfo *)0x0);
                                    uVar22._0_1_ = pEVar21->showTouristPromotion;
                                    uVar22._1_1_ = pEVar21->allowsOpenInNewTab;
                                    uVar22._2_1_ = pEVar21->allowsRedirectToWebpage;
                                    uVar22._3_1_ = pEVar21->allowsModals;
                                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                      func_?(TypeInfo__MVGameControllerBase);
                                    }
                                    bVar2 = MVGameControllerBase::
                                             MVGameControllerBase_get_IsTouristSession
                                                       ((MethodInfo *)0x0);
                                    if (bVar2 != 0) {
                                      pBVar17 = (object->fields).purchaseButton;
                                      if ((SUB41(uVar22,3) != 0) ||
                                         (bVar2 = SUB41(uVar22,2), SUB41(uVar22,1) != 0)) {
                                        bVar2 = 1;
                                      }
                                      if (pBVar17 == (Button *)0x0) goto code_?;
                                      UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                      Selectable_set_interactable
                                                ((Selectable *)pBVar17,bVar2 != 0,(MethodInfo *)0x0)
                                      ;
                                    }
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
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnDisable
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).shopCloseButton;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar1,1,(MethodInfo *)0x0);
  pAVar2 = (this->fields).accessoryDataClient;
  if ((pAVar2 != (AccessoryDataClient *)0x0) && ((pAVar2->fields)._.owns != 0)) {
    pMVar3 = (this->fields).avatarBody;
    if (pMVar3 == (MVBody *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    bVar4 = MVBody::MVBody_IsAccessoryEquipped(pMVar3,(pAVar2->fields)._.sAID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      this_02 = (ScaleAnimationBase *)
                func_?(TypeInfo__AccessoryView___OnDisable_c__AnonStorey0);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
      pAVar5 = (this->fields).avatarAccessoryEquipPopup;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pAVar5,
                          AvatarAccessoryEquipPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryEquipPopup>_AvatarAccessoryEquipPopup_
                         );
      if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
      (this_02->fields)._._._._.m_CachedPtr = pXVar6;
      pAVar2 = (this->fields).accessoryDataClient;
      if ((pAVar2 == (AccessoryDataClient *)0x0) ||
         (pMVar3 = (this->fields).avatarBody, pMVar3 == (MVBody *)0x0)) goto code_?;
      accessoryOffset =
           MVBody::MVBody_GetAccessoryOffset(pMVar3,(pAVar2->fields)._.slot,(MethodInfo *)0x0);
      pAVar2 = (this->fields).accessoryDataClient;
      if ((pAVar2 == (AccessoryDataClient *)0x0) ||
         (pMVar3 = (this->fields).avatarBody, pMVar3 == (MVBody *)0x0)) goto code_?;
      accessoryScale =
           MVBody::MVBody_GetAccessoryScale(pMVar3,(pAVar2->fields)._.slot,(MethodInfo *)0x0);
      pAVar5 = (this_02->fields)._._._._.m_CachedPtr;
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,MethodInfo__AccessoryView__EquipPopupResultCallback__,
                 (MethodInfo *)0x0);
      if (pAVar5 == (AvatarAccessoryEquipPopup *)0x0) goto code_?;
      AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Initialize
                (pAVar5,(UnityAction *)pUVar7,(this->fields).previewImageUrl,
                 (this->fields).accessoryDataClient,accessoryOffset,accessoryScale,(MethodInfo *)0x0
                );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this_02,
                 MethodInfo__AccessoryView___OnDisable_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar4 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar8 == (MVNetworkGame *)0x0) {
      return;
    }
    if ((this->fields).isPreviewing != 0) {
      pMVar3 = (this->fields).avatarBody;
      if (pMVar3 == (MVBody *)0x0) goto code_?;
      MVBody::MVBody_EndPreviewAccessory(pMVar3,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).tabMenu;
    if (this_00 == (TabMenuAccessoryShop *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_03 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                        (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if ((this_03 == (TabMenuButtonBase *)0x0) ||
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_03,(MethodInfo *)0x0),
         pGVar1 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
    pTVar10 = (this->fields).rootTransform;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pTVar10 = (this->fields).rootTransform;
      if (pTVar10 == (Transform *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pTVar10,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar1,(MethodInfo *)0x0);
      (this->fields).rootTransform = (Transform *)0x0;
    }
    pAVar11 = (this->fields).previewer;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar11 = (this->fields).previewer;
      if (pAVar11 == (AccessoryPreviewer *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pAVar11,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    }
    this_01 = (this->fields).accessoryLoader;
    if (this_01 != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy(this_01,(MethodInfo *)0x0);
    }
    (this->fields).accessoryDataClient = (AccessoryDataClient *)0x0;
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnEnable
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabMenu;
  if (this_00 == (TabMenuAccessoryShop *)0x0) goto code_?;
  this_01 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                      (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (this_01 == (TabMenuButtonBase *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  pGVar2 = (this->fields).shopCloseButton;
  if (pGVar2 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnGoldPurchaseDialogResult
               (AccessoryView *this,bool result,MethodInfo *method)

{
  if (result == 0) {
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
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).purchaseGoldURL;
    if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
      func_?(TypeInfo__BrowserComm);
    }
    BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnLevelRequirementLoaded
               (AccessoryView *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
          DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields).levelRequirementPurchaseButton;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)value,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Badge_not_loaded_for_accessory_l,(MethodInfo *)0x0);
  return;
}


/* Void OnPreviewImageFinishedDownloading() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnPreviewImageFinishedDownloading
               (AccessoryView *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pAVar2 = (this->fields).accessoryDataClient;
      if (pAVar2 != (AccessoryDataClient *)0x0) {
        if ((pAVar2->fields)._.owns != 0) {
          return;
        }
        this_00 = (this->fields).timeLimitDisplayer;
        if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
          pAVar2 = (this->fields).accessoryDataClient;
          if (((pAVar2 != (AccessoryDataClient *)0x0) &&
              (this_01 = (pAVar2->fields)._.time, this_01 != (AccessoryTimelimit *)0x0)) &&
             (value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                      AccessoryTimelimit_get_IsTimeLimited(this_01,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,value,(MethodInfo *)0x0);
            pAVar2 = (this->fields).accessoryDataClient;
            if ((pAVar2 != (AccessoryDataClient *)0x0) &&
               (pGVar1 = (this->fields).newAccessoryImage, pGVar1 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,(pAVar2->fields)._.iNew,(MethodInfo *)0x0);
              pAVar2 = (this->fields).accessoryDataClient;
              pGVar1 = (this->fields).discountTag;
              if (pAVar2 != (AccessoryDataClient *)0x0) {
                if ((pAVar2->fields)._.dsc < 1) {
                  value_00 = false;
                }
                else {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((this_02 == (MVNetworkGame *)0x0) ||
                     (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (this_02,(MethodInfo *)0x0),
                     this_03 == (MVLocalPlayer *)0x0)) goto code_?;
                  pOVar3 = System.dll::System::Collections::Generic::
                           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                           ::Single,System::Object]::
                           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                       *)this_03,(MethodInfo *)0x0);
                  pAVar2 = (this->fields).accessoryDataClient;
                  if (pAVar2 == (AccessoryDataClient *)0x0) goto code_?;
                  value_00 = (pAVar2->fields)._.lvl <= (int)pOVar3;
                }
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPurchaseButtonPressed() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnPurchaseButtonPressed
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (MethodInfo *)&UNK_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      bVar4 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar3 != (MVLocalPlayer *)0x0) {
            pMVar2 = (MethodInfo *)&UNK_?;
            pOVar5 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)pMVar3,(MethodInfo *)0x0);
            pAVar6 = (this->fields).accessoryDataClient;
            if (pAVar6 != (AccessoryDataClient *)0x0) {
              if ((pAVar6->fields)._.lvl <= (int)pOVar5) {
                AccessoryView_Purchase(this,(MethodInfo *)0x0);
                return;
              }
              pSVar7 = (ScaleAnimationBase *)
                       func_?(
                                      TypeInfo__AccessoryView___OnPurchaseButtonPressed_c__AnonStorey2
                                      );
              ScaleAnimationBase::ScaleAnimationBase_Play(pSVar7,0.0,pMVar2);
              pXVar8 = (XpBoostParticlePreviewer *)(this->fields).insufficientLevelPopup;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pXVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 (pXVar8,
                                  LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                                 );
              if (pSVar7 != (ScaleAnimationBase *)0x0) {
                (pSVar7->fields)._._._._.m_CachedPtr = pXVar8;
                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar10,(Object *)pSVar7,
                           MethodInfo__AccessoryView___OnPurchaseButtonPressed_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                          (pGVar9,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar10,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pAVar6 = (this->fields).accessoryDataClient;
                if ((pAVar6 != (AccessoryDataClient *)0x0) &&
                   (this_00 = (pSVar7->fields)._._._._.m_CachedPtr,
                   this_00 != (LevelErrorPopup *)0x0)) {
                  LevelErrorPopup::LevelErrorPopup_Initialize
                            (this_00,(UnityAction *)0x0,(pAVar6->fields)._.lvl,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      else {
        pSVar7 = (ScaleAnimationBase *)
                 func_?(TypeInfo__AccessoryView___OnPurchaseButtonPressed_c__AnonStorey1);
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar7,0.0,pMVar2);
        pAVar11 = (this->fields).touristErrorPopup;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)pAVar11,
                            AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                           );
        if (pSVar7 != (ScaleAnimationBase *)0x0) {
          (pSVar7->fields)._._._._.m_CachedPtr = pXVar8;
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar10,(Object *)pSVar7,
                     MethodInfo__AccessoryView___OnPurchaseButtonPressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                    (pGVar9,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar10,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pAVar11 = (pSVar7->fields)._._._._.m_CachedPtr;
          pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar10,(Object *)this,MethodInfo__AccessoryView__OnTouristSignupClicked_bool_,
                     MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                    );
          previewImageUrl = (this->fields).previewImageUrl;
          pAVar6 = (this->fields).accessoryDataClient;
          header = TM::TM__(StringLiteral_Signup_required,(MethodInfo *)0x0);
          buttonText = TM::TM__(StringLiteral_Sign_up,(MethodInfo *)0x0);
          if (pAVar11 != (AvatarAccessoryErrorPopup *)0x0) {
            AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                      (pAVar11,(UnityAction_1_System_Boolean_ *)pUVar10,previewImageUrl,pAVar6,header
                       ,buttonText,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnTouristSignupClicked(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnTouristSignupClicked
               (AccessoryView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (confirmed != 0) {
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pEVar2 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    if (pEVar2->allowsModals != 0) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,1,(MethodInfo *)0x0);
      return;
    }
    if (pEVar2->allowsOpenInNewTab != 0) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(1,0,(MethodInfo *)0x0);
      return;
    }
    if (pEVar2->allowsRedirectToWebpage == 0) {
      message = (Object *)func_?();
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Signup_not_permitted_for_site_,(MethodInfo *)0x0);
      return;
    }
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Pop(AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AccessoryView->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AccessoryView___Pop_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AccessoryView->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AccessoryView->static_fields->__f__am_cache0;
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


/* Void Purchase() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Purchase
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      iVar1 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        this_00 = (AccessoryData *)(this->fields).accessoryDataClient;
        if (this_00 != (AccessoryData *)0x0) {
          method_00 = (MethodInfo *)&UNK_?;
          iVar1 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                  AccessoryData_get_DiscountedPrice(this_00,(MethodInfo *)0x0);
          if (iVar2 < iVar1) {
            pSVar3 = (ScaleAnimationBase *)
                     func_?(TypeInfo__AccessoryView___Purchase_c__AnonStorey4);
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,method_00);
            if (pSVar3 != (ScaleAnimationBase *)0x0) {
              (pSVar3->fields).state = (int32_t)this;
              pAVar4 = (this->fields).insufficientResourcePopup;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pAVar4 = (AvatarAccessoryErrorPopup *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 ((XpBoostParticlePreviewer *)pAVar4,
                                  AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                                 );
              (pSVar3->fields)._._._._.m_CachedPtr = pAVar4;
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)this,
                         MethodInfo__AccessoryView__OnGoldPurchaseDialogResult_bool_,
                         MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                        );
              accessoryData = (this->fields).accessoryDataClient;
              header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
              resultCallback =
                   (UnityAction_1_System_Boolean_ *)
                   TM::TM__(StringLiteral_Get_gold,(MethodInfo *)0x0);
              if (pAVar4 != (AvatarAccessoryErrorPopup *)0x0) {
                AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                          (pAVar4,resultCallback,(String *)0x0,accessoryData,header,
                           (String *)resultCallback,(MethodInfo *)0x0);
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar5,(Object *)pSVar3,
                           MethodInfo__AccessoryView___Purchase_c__AnonStorey4____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
code_?:
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
          else {
            pSVar3 = (ScaleAnimationBase *)
                     func_?(TypeInfo__AccessoryView___Purchase_c__AnonStorey3);
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,method_00);
            if (pSVar3 != (ScaleAnimationBase *)0x0) {
              (pSVar3->fields).state = (int32_t)this;
              pAVar6 = (this->fields).AvatarAccessoryPurchasePopupPrefab;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pAVar6 = (AvatarAccessoryPurchasePopup *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 ((XpBoostParticlePreviewer *)pAVar6,
                                  AvatarAccessoryPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryPurchasePopup>_AvatarAccessoryPurchasePopup_
                                 );
              (pSVar3->fields)._._._._.m_CachedPtr = pAVar6;
              if (pAVar6 != (AvatarAccessoryPurchasePopup *)0x0) {
                AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Initialize
                          (pAVar6,(this->fields).accessoryDataClient,(this->fields).previewImageUrl,
                           (MethodInfo *)0x0);
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar5,(Object *)pSVar3,
                           MethodInfo__AccessoryView___Purchase_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetShowNotOwnedUI(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_SetShowNotOwnedUI
               (AccessoryView *this,bool shouldShow,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,shouldShow,(MethodInfo *)0x0);
      this_01 = (this->fields).timeLimitDisplayer;
      if (this_01 != (AccessoryTimeLimitDisplayer *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,shouldShow,(MethodInfo *)0x0);
          pGVar1 = (this->fields).newAccessoryImage;
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,shouldShow,(MethodInfo *)0x0);
            pTVar2 = (this->fields).originalPriceText;
            if (pTVar2 != (Text *)0x0) {
              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0);
              if (pGVar1 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,shouldShow,(MethodInfo *)0x0);
                pGVar1 = (this->fields).discountTag;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,shouldShow,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).goldSavedText;
                  if (pTVar2 != (Text *)0x0) {
                    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0);
                    if (pGVar1 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar1,shouldShow,(MethodInfo *)0x0);
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetShowPrices(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_SetShowPrices
               (AccessoryView *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonAnimation;
  if ((this_00 != (AccessoryShinyButton *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,shouldShow,(MethodInfo *)0x0);
    pTVar2 = (this->fields).priceTextWithoutDiscount;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,shouldShow,(MethodInfo *)0x0);
      pTVar2 = (this->fields).priceText;
      if ((pTVar2 != (Text *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,shouldShow,(MethodInfo *)0x0);
        pTVar2 = (this->fields).goldSavedText;
        if ((pTVar2 != (Text *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pTVar2,(MethodInfo *)0x0),
           pGVar1 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,shouldShow,(MethodInfo *)0x0);
          pTVar2 = (this->fields).originalPriceText;
          if ((pTVar2 != (Text *)0x0) &&
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,shouldShow,(MethodInfo *)0x0);
            pGVar1 = (this->fields).discountTag;
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,shouldShow,(MethodInfo *)0x0);
              pTVar2 = (this->fields).claimText;
              if ((pTVar2 != (Text *)0x0) &&
                 (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0),
                 pGVar1 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,shouldShow,(MethodInfo *)0x0);
                this_01 = (this->fields).levelRequirementPurchaseButton;
                if ((this_01 != (RawImage *)0x0) &&
                   (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0),
                   pGVar1 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,shouldShow ^ 1,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).claimText;
                  if ((pTVar2 != (Text *)0x0) &&
                     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)pTVar2,(MethodInfo *)0x0),
                     pGVar1 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,shouldShow,(MethodInfo *)0x0);
                    pBVar3 = (this->fields).purchaseButton;
                    if (pBVar3 != (Button *)0x0) {
                      pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                         ((Selectable *)pBVar3,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__Styles->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pCVar5 = Styles::Styles_GetColor
                                         ((Color *)&stack0xffffffec,ColorStyle__Enum_ButtonSuccess,
                                          (MethodInfo *)0x0);
                      if (pIVar4 != (Image *)0x0) {
                        (*(code *)(pIVar4->klass->vtable).set_color.method)
                                  (pIVar4,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                                   (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
                        if (shouldShow != 0) {
                          return;
                        }
                        pGVar1 = (this->fields).lockIcon;
                        if (pGVar1 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,1,(MethodInfo *)0x0);
                          pBVar3 = (this->fields).purchaseButton;
                          if (pBVar3 != (Button *)0x0) {
                            pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                     Selectable_get_image((Selectable *)pBVar3,(MethodInfo *)0x0);
                            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) !=
                                 0) && ((TypeInfo__Styles->_1).cctor_started == 0)) {
                              func_?(TypeInfo__Styles);
                            }
                            pCVar5 = Styles::Styles_GetColor
                                               ((Color *)&stack0xffffffec,
                                                ColorStyle__Enum_DisabledButton,(MethodInfo *)0x0);
                            if (pIVar4 != (Image *)0x0) {
                              (*(code *)(pIVar4->klass->vtable).set_color.method)
                                        (pIVar4,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                                         (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
                              pAVar6 = (this->fields).accessoryDataClient;
                              if (pAVar6 != (AccessoryDataClient *)0x0) {
                                level = (pAVar6->fields)._.lvl;
                                this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                           *)func_?(
                                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                                  );
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (this_02,(Object *)this,
                                           MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                                           ,
                                           MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                                          );
                                if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                BadgeManager::BadgeManager_GetBadgeTexture
                                          (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *
                                                 )this_02,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowLoadedStreamingAssetsObject() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_ShowLoadedStreamingAssetsObject
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    if ((pAVar1->fields)._.owns != 0) {
      return;
    }
    this_00 = (this->fields).timeLimitDisplayer;
    if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryDataClient;
      if (((pAVar1 != (AccessoryDataClient *)0x0) &&
          (this_01 = (pAVar1->fields)._.time, this_01 != (AccessoryTimelimit *)0x0)) &&
         (value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                  AccessoryTimelimit_get_IsTimeLimited(this_01,(MethodInfo *)0x0),
         pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
        pAVar1 = (this->fields).accessoryDataClient;
        if ((pAVar1 != (AccessoryDataClient *)0x0) &&
           (pGVar2 = (this->fields).newAccessoryImage, pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(pAVar1->fields)._.iNew,(MethodInfo *)0x0);
          pAVar1 = (this->fields).accessoryDataClient;
          pGVar2 = (this->fields).discountTag;
          if (pAVar1 != (AccessoryDataClient *)0x0) {
            if ((pAVar1->fields)._.dsc < 1) {
              value_00 = false;
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((this_02 == (MVNetworkGame *)0x0) ||
                 (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
                 this_03 == (MVLocalPlayer *)0x0)) goto code_?;
              pOVar3 = System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)this_03,(MethodInfo *)0x0);
              pAVar1 = (this->fields).accessoryDataClient;
              if (pAVar1 == (AccessoryDataClient *)0x0) goto code_?;
              value_00 = (pAVar1->fields)._.lvl <= (int)pOVar3;
            }
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <BackToShop>m__2(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__BackToShop_m__2
               (IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x,1);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <BackToShop>m__3(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__BackToShop_m__3
               (IAccessoryInventoryControl *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryInventoryControl *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <EquipPopupResultCallback>m__4(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__EquipPopupResultCallback_m__4
               (IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x,1);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <EquipPopupResultCallback>m__5(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__EquipPopupResultCallback_m__5
               (IAccessoryInventoryControl *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryInventoryControl *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Initialize>m__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__Initialize_m__0
               (AccessoryView *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryView__HandlePreviewing_MVBody_,
             MethodInfo__System__Action<MVBody>__Action_System__Object__void__);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Pop>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__Pop_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AccessoryView() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__ctor(AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AccessoryLoader *)
            func_?(
                           TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                           );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_00,(MethodInfo *)0x0);
  (this->fields).accessoryLoader = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

