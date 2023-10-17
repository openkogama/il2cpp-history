
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
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  (this->fields).woId = woId;
  (this->fields).onSelectedCallback = onSelectedCallback;
  func_?(&(this->fields).onSelectedCallback,onSelectedCallback);
  (this->fields).onActivatedCallback = onActivatedCallback;
  func_?(&(this->fields).onActivatedCallback,onActivatedCallback);
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
    (*(this->klass->vtable).Select.methodPtr)(this,(this->klass->vtable).Select.method);
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
  x = *(Object_1 **)(in_stack_2 + 0x38);
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
    if ((*(int *)(in_stack_2 + 0x38) != 0) &&
       (this_00 = *(BoneAnimation **)(*(int *)(in_stack_2 + 0x38) + 0x14),
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
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)avatarObject,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      for (; (int)pMVar2 < (int)pIVar1[1].monitor; pMVar2 = pMVar2 + 1) {
        if (pIVar1[1].monitor <= pMVar2) goto code_?;
        if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pIVar3->klass,1,(MethodInfo *)0x0);
        pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
      }
      pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)avatarObject,
                          PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                         );
      pMVar2 = (MonitorData *)0x0;
      if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
        pIVar3 = pIVar1 + 2;
        while( true ) {
          if ((int)pIVar1[1].monitor <= (int)pMVar2) {
            return;
          }
          if (pIVar1[1].monitor <= pMVar2) break;
          if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar3->klass,(MethodInfo *)0x0);
          if (this_00 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          pMVar2 = pMVar2 + 1;
          pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
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
  (this->fields).spawnRolePreviewObject = spawnRoleObject;
  func_?(&(this->fields).spawnRolePreviewObject,spawnRoleObject);
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
    pIVar2 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_01,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    pMVar3 = (MonitorData *)0x0;
    if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar4 = pIVar2 + 2;
      for (; (int)pMVar3 < (int)pIVar2[1].monitor; pMVar3 = pMVar3 + 1) {
        if (pIVar2[1].monitor <= pMVar3) goto code_?;
        if (pIVar4->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pIVar4->klass,1,(MethodInfo *)0x0);
        pIVar4 = (IEnumerable_1_System_Object_ *)&pIVar4->monitor;
      }
      pIVar2 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_01,
                          PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                         );
      pMVar3 = (MonitorData *)0x0;
      if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
        pIVar4 = pIVar2 + 2;
        for (; (int)pMVar3 < (int)pIVar2[1].monitor; pMVar3 = pMVar3 + 1) {
          if (pIVar2[1].monitor <= pMVar3) goto code_?;
          if (pIVar4->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar4->klass,(MethodInfo *)0x0);
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
          pIVar4 = (IEnumerable_1_System_Object_ *)&pIVar4->monitor;
        }
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        if (pTVar6 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar6,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          pGVar7 = TypeInfo__UnityEngine__GameObject;
          pGVar5 = (GameObject *)func_?();
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (pGVar5,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar5,(MethodInfo *)0x0);
            pSVar1 = (this->fields).spawnRolePreviewer;
            if (pSVar1 != (SpawnRolePreviewer *)0x0) {
              cameraOffset.y = 1.5;
              cameraOffset.x = (float)pGVar7;
              cameraOffset.z = -6.0;
              previewPosition.z =
                   (float)(this->fields).spawnRoleIndex * _UNK_? + _UNK_?;
              previewPosition.x = 500.0;
              previewPosition.y = 100.0;
              SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                        (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                         CameraClearFlags__Enum_Color,
                         LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,cameraOffset,
                         pTVar6,previewPosition,StringLiteral_SpawnRole,
                         (this->fields).spawnRoleIndex,this_01,(MethodInfo *)0x0);
              pSVar1 = (this->fields).spawnRolePreviewer;
              if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
                 (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                          (this_00,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_IsDragging(Boolean) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_set_IsDragging
               (DefaultSpawnRoleSelectionElement *this,bool value,MethodInfo *method)

{
  (this->fields).isDragging = value;
  return;
}

