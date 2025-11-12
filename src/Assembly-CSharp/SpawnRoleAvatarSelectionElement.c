
/* Void Activate() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    uVar2 = (undefined7)((ulonglong)method >> 8);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    obj = (pSVar1->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71(uVar2,1),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
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
    obj = (pSVar1->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
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
  bVar1 = iRam_? != 0;
  (this->fields).elementIndex = elementIndex;
  (this->fields).avatarId = avatarId;
  (this->fields).onSelectedCallback = onSelectedCallback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onSelectedCallback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_OnDestroy
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pSVar1 != (SpawnRolePreviewer *)0x0) {
    pvVar2 = (pSVar1->fields)._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnSelected() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_OnSelected
               (SpawnRoleAvatarSelectionElement *this,MethodInfo *method)

{
  pUVar1 = (this->fields).onSelectedCallback;
  if (pUVar1 != (UnityAction_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(this->fields).avatarId,(pUVar1->fields)._._.method)
    ;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionElement::
     SpawnRoleAvatarSelectionElement_SetupPreviewImage
               (SpawnRoleAvatarSelectionElement *this,GameObject *spawnRoleObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___TierShopItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnRole);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).spawnRolePreviewer = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRolePreviewer >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar7 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)spawnRoleObject,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (pGVar7 == (GameObject *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (pGVar7,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar9 == (Transform *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  VStack_11.x = (pQVar10->identityQuaternion).x;
  VStack_11.y = (pQVar10->identityQuaternion).y;
  VStack_11.z = (pQVar10->identityQuaternion).z;
  fStack_12 = (pQVar10->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (pTVar9->fields)._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar13);
  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (pGVar7,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (pTVar9 != (Transform *)0x0) {
    uStack_16._0_4_ = (pVVar15->zeroVector).x;
    uStack_16._4_4_ = (pVVar15->zeroVector).y;
    fStack_17 = (pVVar15->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar13,&uStack_16);
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    name = StringLiteral_Preview_Root___TierShopItem;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,name,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      pSVar1 = (this->fields).spawnRolePreviewer;
      if (pSVar1 != (SpawnRolePreviewer *)0x0) {
        VStack_18.y = _UNK_?;
        VStack_18.x = _UNK_?;
        VStack_18.z = _UNK_?;
        VStack_11.z = _UNK_?;
        VStack_11._0_8_ = (ulonglong)_UNK_? << 0x20;
        SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                  (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,
                   LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,&VStack_11,pTVar9,
                   &VStack_18,StringLiteral_SpawnRole,(this->fields).elementIndex,pGVar7,
                   (MethodInfo *)0x0);
        this_00 = (this->fields).noAvatarImage;
        if ((this_00 != (Image *)0x0) &&
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,0,(MethodInfo *)0x0);
          pRVar19 = (this->fields).avatarImage;
          if ((pRVar19 != (RawImage *)0x0) &&
             (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar19,(MethodInfo *)0x0),
             pGVar7 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,1,(MethodInfo *)0x0);
            pSVar1 = (this->fields).spawnRolePreviewer;
            if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
               (pRVar19 = (this->fields).avatarImage, pRVar19 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (pRVar19,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

