
/* Void Initialize(Int32, MVAvatarSpawnRoleCreator) */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_Initialize
               (SpawnRoleLooksEditorMenu *this,int32_t spawnRoleId,
               MVAvatarSpawnRoleCreator *spawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__);
    func_?(&MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleRedoObjectLinks__);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleId = spawnRoleId;
  (this->fields).spawnRole = spawnRole;
  func_?(&(this->fields).spawnRole,spawnRole);
  if (spawnRole == (MVAvatarSpawnRoleCreator *)0x0) {
    uVar1 = func_?();
    goto code_?;
  }
  spawnRolePreviewObject =
       MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                 (spawnRole,(MethodInfo *)0x0);
  SpawnRoleLooksEditorMenu_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
  pAVar2 = (spawnRole->fields).OnBodyUpdate;
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
  uVar1 = CONCAT44(TypeInfo__System__Action,pAVar2);
  pAStack4 = (Action *)0x0;
  if (pAVar2 == (Action *)0x0) {
    (spawnRole->fields).OnBodyUpdate = (Action *)0x0;
  }
  else {
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAStack4 = pAVar2;
    }
    if (pAStack4 == (Action *)0x0) goto code_?;
    (spawnRole->fields).OnBodyUpdate = pAStack4;
    uVar1 = CONCAT44(TypeInfo__System__Action,pAVar2);
    pAStack4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAStack4 = pAVar2;
    }
    if (pAStack4 == (Action *)0x0) goto code_?;
  }
  ppAStack5 = &(spawnRole->fields).OnBodyUpdate;
  func_?();
  pAStack6 = TypeInfo__System__Action;
  pAVar2 = (spawnRole->fields).OnRedoObjectLinks;
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,
             MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleRedoObjectLinks__,(MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
  uVar1 = CONCAT44(TypeInfo__System__Action,pAVar2);
  if (pAVar2 == (Action *)0x0) {
    (spawnRole->fields).OnRedoObjectLinks = (Action *)0x0;
    ppAStack5 = &(spawnRole->fields).OnRedoObjectLinks;
    pAStack4 = (Action *)0x0;
    func_?();
    return;
  }
  pAVar7 = (Action *)0x0;
  if (pAVar2->klass == TypeInfo__System__Action) {
    pAVar7 = pAVar2;
  }
  if (pAVar7 != (Action *)0x0) {
    (spawnRole->fields).OnRedoObjectLinks = pAVar7;
    uVar1 = CONCAT44(TypeInfo__System__Action,pAVar2);
    pAStack4 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAStack4 = pAVar2;
    }
    if (pAStack4 != (Action *)0x0) {
      ppAStack5 = &(spawnRole->fields).OnRedoObjectLinks;
      func_?();
      return;
    }
  }
code_?:
  _ppAStack00000018 = uVar1;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnAvatarChangeButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::
     SpawnRoleLooksEditorMenu_OnAvatarChangeButtonPressed
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleAvatarSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionMenu>_SpawnRoleAvatarSelectionMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleLooksEditorMenu____c__DisplayClass11_0___OnAvatarChangeButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleLooksEditorMenu____c__DisplayClass11_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleLooksEditorMenu____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).avatarSelectionMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleAvatarSelectionMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionMenu>_SpawnRoleAvatarSelectionMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar3 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,value,
               MethodInfo__SpawnRoleLooksEditorMenu____c__DisplayClass11_0___OnAvatarChangeButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = value[1].klass;
    pIVar4 = (Il2CppClass *)(this->fields).spawnRoleId;
    if (pOVar1 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_b__9_0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
                       );
        cRam_? = '\x01';
      }
      (pOVar1->_0).castClass = pIVar4;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pOVar1,(MethodInfo *)0x0);
      pEVar3 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pOVar1,
                 MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_b__9_0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
                );
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_OnDestroy
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__);
    func_?(&MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleRedoObjectLinks__);
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  pMVar1 = (this->fields).spawnRole;
  if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
    pAVar2 = (pMVar1->fields).OnBodyUpdate;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pMVar1->fields).OnBodyUpdate = (Action *)0x0;
    }
    else {
      pAVar4 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar2;
      }
      if (pAVar4 == (Action *)0x0) goto code_?;
      (pMVar1->fields).OnBodyUpdate = pAVar4;
      pAVar4 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar2;
      }
      if (pAVar4 == (Action *)0x0) goto code_?;
    }
    func_?();
    pMVar1 = (this->fields).spawnRole;
    if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
      pAVar2 = (pMVar1->fields).OnRedoObjectLinks;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,
                 MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleRedoObjectLinks__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pMVar1->fields).OnRedoObjectLinks = (Action *)0x0;
        func_?();
        return;
      }
      pAVar4 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar2;
      }
      if (pAVar4 != (Action *)0x0) {
        (pMVar1->fields).OnRedoObjectLinks = pAVar4;
        pAVar4 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar2;
        }
        if (pAVar4 != (Action *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
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


/* Void OnSpawnRoleRedoObjectLinks() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::
     SpawnRoleLooksEditorMenu_OnSpawnRoleRedoObjectLinks
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleLooksEditorMenu____c___OnSpawnRoleRedoObjectLinks_b__10_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleLooksEditorMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SpawnRoleLooksEditorMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SpawnRoleLooksEditorMenu____c);
  }
  callbackFunction = TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9__10_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__SpawnRoleLooksEditorMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleLooksEditorMenu____c);
    }
    object = TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SpawnRoleLooksEditorMenu____c___OnSpawnRoleRedoObjectLinks_b__10_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9__10_0 = callbackFunction;
    func_?(&TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9__10_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_SetupPreviewImage
               (SpawnRoleLooksEditorMenu *this,GameObject *spawnRolePreviewObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&
                    SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    func_?(&StringLiteral_SpawnRole);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = (this->fields).spawnRolePreviewer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pSVar1,(MethodInfo *)0x0);
  }
  if (spawnRolePreviewObject != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (spawnRolePreviewObject,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar3,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).spawnRolePreviewerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar1 = (SpawnRolePreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pSVar1,
                        SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                       );
    (this->fields).spawnRolePreviewer = pSVar1;
    func_?(&(this->fields).spawnRolePreviewer,pSVar1);
    this_01 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)spawnRolePreviewObject,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    if (this_01 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_02,(MethodInfo *)0x0);
          pSVar1 = (this->fields).spawnRolePreviewer;
          if (pSVar1 != (SpawnRolePreviewer *)0x0) {
            cameraOffset.z = -4.5;
            cameraOffset.x = 0.0;
            cameraOffset.y = 1.0;
            previewPosition.z = -700.0;
            previewPosition.x = -300.0;
            previewPosition.y = -500.0;
            SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                      (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                       CameraClearFlags__Enum_Color,
                       LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar3
                       ,previewPosition,StringLiteral_SpawnRole,0,this_01,(MethodInfo *)0x0);
            pSVar1 = (this->fields).spawnRolePreviewer;
            if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
               (this_00 = (this->fields).spawnRoleAvatarPreviewImage, this_00 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (spawnRolePreviewObject,(MethodInfo *)0x0);
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                        (pTVar3,1,(MethodInfo *)0x0);
              return;
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


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_Update
               (SpawnRoleLooksEditorMenu *this,MethodInfo *method)

{
  if ((-1 < (this->fields).renewPreviewerFrameDelay) &&
     (iVar1 = (this->fields).renewPreviewerFrameDelay + -1,
     (this->fields).renewPreviewerFrameDelay = iVar1, iVar1 == -1)) {
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

