
/* Void Initialize(Int32, MVAvatarSpawnRoleCreator) */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_Initialize
               (SpawnRoleLooksEditorMenu *this,int32_t spawnRoleId,
               MVAvatarSpawnRoleCreator *spawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleId = spawnRoleId;
  (this->fields).spawnRole = spawnRole;
  if (spawnRole != (MVAvatarSpawnRoleCreator *)0x0) {
    spawnRolePreviewObject =
         MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                   (spawnRole,(MethodInfo *)0x0);
    SpawnRoleLooksEditorMenu_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
    pAVar1 = (spawnRole->fields).OnBodyUpdate;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__,
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
      pAStack3 = TypeInfo__System__Action;
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (spawnRole->fields).OnBodyUpdate = pAVar1;
    return;
  }
  func_?(0);
  pAStack2 = extraout_ECX;
  pAStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAvatarChangeButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::
     SpawnRoleLooksEditorMenu_OnAvatarChangeButtonPressed
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleLooksEditorMenu___OnAvatarChangeButtonPressed_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  original = (this->fields).avatarSelectionMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      SpawnRoleAvatarSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionMenu>_SpawnRoleAvatarSelectionMenu_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this_01,
               MethodInfo__SpawnRoleLooksEditorMenu___OnAvatarChangeButtonPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this_01->fields)._._._._.m_CachedPtr;
    pvVar4 = (void *)(this->fields).spawnRoleId;
    if (this_00 != (Component_1 *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00[2].fields._.m_CachedPtr = pvVar4;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (this_00,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_00,
                 MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_m__0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
                );
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_OnDestroy
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  pMVar1 = (this->fields).spawnRole;
  if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
    pAVar2 = (pMVar1->fields).OnBodyUpdate;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pMVar1->fields).OnBodyUpdate = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSpawnRoleBodyUpdate() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_OnSpawnRoleBodyUpdate
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  (this->fields).renewPreviewerFrameDelay = 3;
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_SetupPreviewImage
               (SpawnRoleLooksEditorMenu *this,GameObject *spawnRolePreviewObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  pSVar4 = (this->fields).spawnRolePreviewer;
  fStack_5 = 0.0;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    pSVar4 = (this->fields).spawnRolePreviewer;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pSVar4,(MethodInfo *)0x0);
  }
  if (spawnRolePreviewObject != (GameObject *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (spawnRolePreviewObject,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      QStack_8.y = (float)TypeInfo__SharedCubeFunctions;
      QStack_8.x = (float)&UNK_?;
      func_?();
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar7,0,(MethodInfo *)0x0);
    pSVar4 = (this->fields).spawnRolePreviewerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar4 = (SpawnRolePreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pSVar4,
                        SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                       );
    (this->fields).spawnRolePreviewer = pSVar4;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)spawnRolePreviewObject,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    if (this_01 != (XpBoostParticlePreviewer *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         (&QStack_8,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar7,*pQVar9,(MethodInfo *)0x0);
        this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_02,(MethodInfo *)0x0);
          QStack_8.y = 0.0;
          QStack_8.x = -700.0;
          func_?(&uStack_1,0xc3960000,0xc3fa0000);
          QStack_8.y = 0.0;
          QStack_8.x = -4.5;
          func_?(&uStack_3,0,0x3f800000);
          pSVar4 = (this->fields).spawnRolePreviewer;
          if (pSVar4 != (SpawnRolePreviewer *)0x0) {
            cameraOffset.z = fStack_5;
            cameraOffset.x = (float)(undefined4)uStack_3;
            cameraOffset.y = (float)uStack_3._4_4_;
            previewPosition.z = fStack_2;
            previewPosition.x = (float)(undefined4)uStack_1;
            previewPosition.y = (float)uStack_1._4_4_;
            SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                      (pSVar4,(this->fields).previewWidth,(this->fields).previewHeight,
                       CameraClearFlags__Enum_Color,
                       LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar7
                       ,previewPosition,StringLiteral_SpawnRole,0,(GameObject *)this_01,
                       (MethodInfo *)0x0);
            pSVar4 = (this->fields).spawnRolePreviewer;
            if ((pSVar4 != (SpawnRolePreviewer *)0x0) &&
               (this_00 = (this->fields).spawnRoleAvatarPreviewImage, this_00 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,(Texture *)(pSVar4->fields).previewTexture,(MethodInfo *)0x0);
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (spawnRolePreviewObject,(MethodInfo *)0x0);
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                        (pTVar7,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_Update
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  iVar1 = (this->fields).renewPreviewerFrameDelay;
  if ((-1 < iVar1) &&
     (iVar1 = iVar1 + -1, (this->fields).renewPreviewerFrameDelay = iVar1, iVar1 == -1)) {
    this_00 = (this->fields).spawnRole;
    if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    spawnRolePreviewObject =
         MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                   (this_00,(MethodInfo *)0x0);
    SpawnRoleLooksEditorMenu_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
  }
  return;
}


/* SpawnRoleLooksEditorMenu() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu__ctor
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  (this->fields).renewPreviewerFrameDelay = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

