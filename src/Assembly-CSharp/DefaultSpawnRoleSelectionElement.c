
/* Void Activate() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Activate
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

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

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Deactivate
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

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


/* Void Initialize(Int32, Int32, GamePassTier, MVTeam, UnityAction`1[System.Int32],
   UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Initialize
               (DefaultSpawnRoleSelectionElement *this,int32_t spawnRoleIndex,int32_t woId,
               GamePassTier__Enum tierRequirement,MVTeam__Enum team,
               UnityAction_1_System_Int32_ *onSelectedCallback,
               UnityAction_1_System_Int32_ *onActivatedCallback,MethodInfo *method)

{
  ppUVar1 = &(this->fields).onSelectedCallback;
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  (this->fields).woId = woId;
  *ppUVar1 = onSelectedCallback;
  func_?(ppUVar1,onSelectedCallback);
  ppUVar1 = &(this->fields).onActivatedCallback;
  *ppUVar1 = onActivatedCallback;
  func_?(ppUVar1,onActivatedCallback);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnDestroy
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

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


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnPointerUp
               (DefaultSpawnRoleSelectionElement *this,PointerEventData *eventData,
               MethodInfo *method)

{
  if ((this->fields).isDragging == 0) {
    (*(code *)(this->klass->vtable).Select.method)
              (this,(this->klass->vtable).OnSelctionHighlight.methodPtr);
  }
  return;
}


/* Void OnUnSelected() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnUnSelected
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  this_01 = (this->fields).spawnRolePreviewer;
  (this->fields).isSelected = 0;
  if ((this_01 == (SpawnRolePreviewer *)0x0) ||
     (SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey(this_01,1,(MethodInfo *)0x0),
     (this->fields).spawnRolePreviewer == (SpawnRolePreviewer *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_2 + 0x3c);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (0,80000,(MethodInfo *)0x0);
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_02,(MethodInfo *)0x0);
    if ((*(int *)(in_stack_2 + 0x3c) != 0) &&
       (this_00 = *(BoneAnimation **)(*(int *)(in_stack_2 + 0x3c) + 0x18),
       this_00 != (BoneAnimation *)0x0)) {
      BoneAnimation::BoneAnimation_StartAnimation
                (this_00,StringLiteral_Idle,(iVar5 - iVar4) + -500,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetAvatarRenderers(GameObject) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_ResetAvatarRenderers
               (DefaultSpawnRoleSelectionElement *this,GameObject *avatarObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                   );
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  if (avatarObject != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (avatarObject,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      for (; (int)uVar2 < (int)pOVar1->max_length; uVar2 = uVar2 + 1) {
        if (pOVar1->max_length <= uVar2) goto code_?;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar3,1,(MethodInfo *)0x0);
        ppOVar3 = ppOVar3 + 1;
      }
      pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (avatarObject,
                          PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                         );
      uVar2 = 0;
      if (pOVar1 != (Object__Array *)0x0) {
        ppOVar3 = pOVar1->vector;
        while( true ) {
          if ((int)pOVar1->max_length <= (int)uVar2) {
            return;
          }
          if (pOVar1->max_length <= uVar2) break;
          if ((Component *)*ppOVar3 == (Component *)0x0) goto code_?;
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)*ppOVar3,(MethodInfo *)0x0);
          if (this_00 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          ppOVar3 = ppOVar3 + 1;
        }
code_?:
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Select
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).isSelected == 0) {
    pUVar2 = (this->fields).onSelectedCallback;
    if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) {
      uVar3 = func_?(&pvStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puStack_1 = (pUVar2->fields)._._.method;
    iStack_6 = (this->fields).spawnRoleIndex;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
  }
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_SetupPreviewImage
               (DefaultSpawnRoleSelectionElement *this,GameObject *spawnRoleObject,
               MethodInfo *method)

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
  ppGVar1 = &(this->fields).spawnRolePreviewObject;
  *ppGVar1 = spawnRoleObject;
  func_?(ppGVar1,spawnRoleObject);
  pSVar2 = (this->fields).spawnRolePreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar2 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar2,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  ppSVar3 = &(this->fields).spawnRolePreviewer;
  *ppSVar3 = pSVar2;
  func_?(ppSVar3,pSVar2);
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRoleObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (cRam_? == '\0') {
    func_?(&
                    PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                   );
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  if (this_01 != (GameObject *)0x0) {
    pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_01,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    uVar5 = 0;
    if (pOVar4 != (Object__Array *)0x0) {
      ppOVar6 = pOVar4->vector;
      for (; (int)uVar5 < (int)pOVar4->max_length; uVar5 = uVar5 + 1) {
        if (pOVar4->max_length <= uVar5) goto code_?;
        if ((Renderer *)*ppOVar6 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar6,1,(MethodInfo *)0x0);
        ppOVar6 = ppOVar6 + 1;
      }
      pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (this_01,
                          PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                         );
      uVar5 = 0;
      if (pOVar4 != (Object__Array *)0x0) {
        ppOVar6 = pOVar4->vector;
        while( true ) {
          if ((int)pOVar4->max_length <= (int)uVar5) break;
          if (pOVar4->max_length <= uVar5) goto code_?;
          if ((Component *)*ppOVar6 == (Component *)0x0) goto code_?;
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)*ppOVar6,(MethodInfo *)0x0);
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,0,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          ppOVar6 = ppOVar6 + 1;
        }
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        if (pTVar8 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          pGVar9 = TypeInfo__UnityEngine__GameObject;
          pGVar7 = (GameObject *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                    (pGVar7,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
          if (pGVar7 != (GameObject *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar7,(MethodInfo *)0x0);
            spawnRoleId = (this->fields).spawnRoleIndex;
            pSVar2 = (this->fields).spawnRolePreviewer;
            if (pSVar2 != (SpawnRolePreviewer *)0x0) {
              cameraOffset.y = 1.5;
              cameraOffset.x = (float)pGVar9;
              cameraOffset.z = -6.0;
              previewPosition.z = (float)spawnRoleId * _UNK_? + _UNK_?;
              previewPosition.x = 500.0;
              previewPosition.y = 100.0;
              SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                        (pSVar2,(this->fields).previewWidth,(this->fields).previewHeight,
                         CameraClearFlags__Enum_Color,
                         LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,
                         pTVar8,previewPosition,StringLiteral_SpawnRole,spawnRoleId,this_01,
                         (MethodInfo *)0x0);
              pSVar2 = (this->fields).spawnRolePreviewer;
              if ((pSVar2 != (SpawnRolePreviewer *)0x0) &&
                 (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                          (this_00,(Texture *)(pSVar2->fields).previewTexture,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

