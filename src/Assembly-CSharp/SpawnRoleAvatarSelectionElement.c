
/* Void Activate() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_Deactivate
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (pSVar1->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Int32, Int32, UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_Initialize
               (SpawnRoleAvatarSelectionElement *this,int32_t elementIndex,int32_t avatarId,
               UnityAction_1_System_Int32_ *onSelectedCallback,MethodInfo *method)

{
  (this->fields).elementIndex = elementIndex;
  (this->fields).avatarId = avatarId;
  ppUVar1 = &(this->fields).onSelectedCallback;
  *ppUVar1 = onSelectedCallback;
  func_?(ppUVar1,onSelectedCallback);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_OnDestroy
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void OnSelected() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_OnSelected
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).onSelectedCallback;
  if (pUVar2 != (UnityAction_1_System_Int32_ *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    iStack_3 = (this->fields).avatarId;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_SetupPreviewImage
               (SpawnRoleAvatarSelectionElement *this,GameObject *spawnRoleObject,MethodInfo *method
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
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    func_?(&StringLiteral_SpawnRole);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  ppSVar2 = &(this->fields).spawnRolePreviewer;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  pGVar3 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)spawnRoleObject,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (pGVar3 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar4,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_01,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_01,(MethodInfo *)0x0);
          if (*ppSVar2 != (SpawnRolePreviewer *)0x0) {
            cameraOffset.z = -4.5;
            cameraOffset.x = 0.0;
            cameraOffset.y = 1.0;
            previewPosition.z = 30.0;
            previewPosition.x = 1500.0;
            previewPosition.y = 1500.0;
            SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                      (*ppSVar2,(this->fields).previewWidth,(this->fields).previewHeight,
                       CameraClearFlags__Enum_Color,
                       LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar4
                       ,previewPosition,StringLiteral_SpawnRole,(this->fields).elementIndex,pGVar3,
                       (MethodInfo *)0x0);
            this_00 = (this->fields).noAvatarImage;
            if (this_00 != (Image *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0,(MethodInfo *)0x0);
                pRVar5 = (this->fields).avatarImage;
                if (pRVar5 != (RawImage *)0x0) {
                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0);
                  if (pGVar3 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar3,1,(MethodInfo *)0x0);
                    if ((*ppSVar2 != (SpawnRolePreviewer *)0x0) &&
                       (pRVar5 = (this->fields).avatarImage, pRVar5 != (RawImage *)0x0)) {
                      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                (pRVar5,(Texture *)((*ppSVar2)->fields).previewTexture,
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
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

