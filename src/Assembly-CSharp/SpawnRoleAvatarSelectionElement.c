
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  (this->fields).onSelectedCallback = onSelectedCallback;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_OnDestroy
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

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
  return;
}


/* Void OnSelected() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_OnSelected
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).onSelectedCallback;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(this->fields).avatarId,
               MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_SetupPreviewImage
               (SpawnRoleAvatarSelectionElement *this,GameObject *spawnRoleObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  fVar2 = 0.0;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)spawnRoleObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (XpBoostParticlePreviewer *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd4,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar3,*pQVar4,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        puVar6 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,*pVVar5,(MethodInfo *)0x0);
        pGVar7 = (GameObject *)func_?();
        uVar8 = ZEXT48(StringLiteral_Preview_Root___TierShopItem);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar7,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
        if (pGVar7 != (GameObject *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar7,(MethodInfo *)0x0);
          func_?();
          func_?();
          pSVar1 = (this->fields).spawnRolePreviewer;
          if (pSVar1 != (SpawnRolePreviewer *)0x0) {
            cameraOffset.z = fVar2;
            cameraOffset.x = (float)(int)uVar8;
            cameraOffset.y = (float)(int)(uVar8 >> 0x20);
            auVar9._4_8_ = 0;
            auVar9._0_4_ = puVar6;
            SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                      (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                       CameraClearFlags__Enum_Color,
                       LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,pTVar3
                       ,(Vector3)(auVar9 << 0x40),StringLiteral_SpawnRole,
                       (this->fields).elementIndex,(GameObject *)this_01,(MethodInfo *)0x0);
            this_00 = (this->fields).noAvatarImage;
            if (this_00 != (Image *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,0,(MethodInfo *)0x0);
                pRVar10 = (this->fields).avatarImage;
                if (pRVar10 != (RawImage *)0x0) {
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pRVar10,(MethodInfo *)0x0);
                  if (pGVar7 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar7,1,(MethodInfo *)0x0);
                    pSVar1 = (this->fields).spawnRolePreviewer;
                    if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
                       (pRVar10 = (this->fields).avatarImage, pRVar10 != (RawImage *)0x0)) {
                      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                (pRVar10,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0
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
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

