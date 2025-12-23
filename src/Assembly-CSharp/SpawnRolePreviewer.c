
/* Void ActivatePreview() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_ActivatePreview
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    uVar1 = (undefined7)((ulonglong)method >> 8);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    obj = (this->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71(uVar1,1),0);
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
      (*pcRam_?)(pvVar3,1);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeactivatePreview() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_DeactivatePreview
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    obj = (this->fields).rootObject;
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
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar2 = (obj->fields)._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   Int32, GameObject) */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_Initialize
               (SpawnRolePreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 *cameraOffset,Transform *previewSpawnRoleRoot,Vector3 *previewPosition,
               String *name,int32_t spawnRoleId,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                  ,CONCAT44(in_register_00000014,textureWidth),
                  CONCAT44(in_register_00000084,textureHeight),
                  CONCAT44(in_register_0000008c,clearFlags));
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview__0__RenderCam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (previewSpawnRoleRoot != (Transform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)previewSpawnRoleRoot,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).rootObject = pGVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).rootObject >> 0xc);
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
    fVar7 = cameraOffset->y;
    fVar8 = cameraOffset->z;
    (this->fields).previewCamOffset.x = cameraOffset->x;
    (this->fields).previewCamOffset.y = fVar7;
    (this->fields).previewCamOffset.z = fVar8;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar9,previewSpawnRoleRoot,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pSVar10 = StringLiteral_Preview__0__RenderCam;
      auStack_11 = (undefined1  [8])0x0;
      pOStack_12 = (Object *)0x0;
      pOStack_13 = (Object *)0x0;
      pOStack_14 = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                ((ParamsArray *)auStack_11,(Object *)name,(MethodInfo *)0x0);
      auStack_15 = auStack_11;
      pOStack_16 = pOStack_12;
      pOStack_17 = pOStack_13;
      pOStack_18 = pOStack_14;
      pSVar10 = mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar10,(ParamsArray *)auStack_15,
                           (MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                  ((Object_1 *)pGVar1,pSVar10,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        iVar19 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Preview,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar1,iVar19,(MethodInfo *)0x0);
          colorFormat = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                        RenderTexture_GetCompatibleFormat
                                  (RenderTextureFormat__Enum_ARGB32,
                                   RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
          depthStencilFormat =
               UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
               RenderTexture_GetDepthStencilFormatLegacy_4(0x10,0,(MethodInfo *)0x0);
          iStack_20 = 0;
          auStack_15 = (undefined1  [8])0x0;
          pOStack_16 = (Object *)0x0;
          pOStack_17 = (Object *)0x0;
          pOStack_18 = (Object__Array *)0x0;
          iStack_21 = 0;
          iStack_22 = 0;
          iStack_23 = 0;
          uStack_24 = 0;
          UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
          RenderTextureDescriptor__ctor
                    ((RenderTextureDescriptor *)auStack_15,textureWidth,textureHeight,colorFormat,
                     depthStencilFormat,(MethodInfo *)0x0);
          pOStack_16 = (Object *)CONCAT44(pOStack_16._4_4_,2);
          iStack_22 = 2;
          iStack_23 = 0;
          iStack_25 = 0;
          auStack_11 = auStack_15;
          pOStack_12 = pOStack_16;
          uStack_26._4_4_ = 2;
          uStack_26._0_4_ = iStack_21;
          lStack_27 = ((ulonglong)uStack_24 & 0xfffffbff) << 0x20;
          pOStack_13 = pOStack_17;
          pOStack_14 = pOStack_18;
          uStack_24 = uStack_24 & 0xfffffbff;
          pRVar28 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                    RenderTexture_GetTemporary
                              ((RenderTextureDescriptor *)auStack_11,(MethodInfo *)0x0);
          bVar2 = iRam_? != 0;
          (this->fields).previewTexture = pRVar28;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
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
          pRVar28 = (this->fields).previewTexture;
          if (pRVar28 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                      ((Object_1 *)pRVar28,name,(MethodInfo *)0x0);
            pRVar28 = (this->fields).previewTexture;
            if (pRVar28 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)pRVar28,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              pRVar28 = (this->fields).previewTexture;
              if (pRVar28 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)pRVar28,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar29 = (this->fields).previewCam;
                if (pCVar29 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar29,(this->fields).previewTexture,(MethodInfo *)0x0);
                  bVar2 = iRam_? != 0;
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  if (bVar2) {
                    uVar3 = (uint)((ulonglong)&(this->fields)._PreviewGameObject_k__BackingField >>
                                   0xc);
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
                  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                  pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                      ((Int32 *)&spawnRoleId,(MethodInfo *)0x0);
                  pSVar10 = mscorlib.dll::System::String::String_Concat_6
                                      (StringLiteral_Preview_,name,::StringLiteral__,pSVar10,
                                       (MethodInfo *)0x0);
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                              ((Object_1 *)pGVar1,pSVar10,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                    if ((pGVar1 != (GameObject *)0x0) &&
                       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                       pTVar9 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                (pTVar9,previewSpawnRoleRoot,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                      if (pGVar1 != (GameObject *)0x0) {
                        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Quaternion);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (pTVar9 != (Transform *)0x0) {
                          auStack_11 = *(undefined1 (*) [8])
                                        &TypeInfo__UnityEngine__Quaternion->static_fields->
                                         identityQuaternion;
                          pOStack_12 = *(Object **)
                                        &(TypeInfo__UnityEngine__Quaternion->static_fields->
                                         identityQuaternion).z;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar30 = (pTVar9->fields)._._.m_CachedPtr;
                          if (pvVar30 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar9,(MethodInfo *)0x0);
                            pcVar31 = (code *)swi(3);
                            (*pcVar31)();
                            return;
                          }
                          pcVar31 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar31 = (code *)FUN_?(&UNK_?),
                             pcVar31 == (code *)0x0)) {
                            uVar32 = func_?(&UNK_?);
                            FUN_?(uVar32,0);
                            pcVar31 = (code *)swi(3);
                            (*pcVar31)();
                            return;
                          }
                          pcRam_? = pcVar31;
                          (*pcRam_?)(pvVar30);
                          pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                          if ((pGVar1 != (GameObject *)0x0) &&
                             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                             pTVar9 != (Transform *)0x0)) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar30 = (pTVar9->fields)._._.m_CachedPtr;
                            if (pvVar30 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pTVar9,(MethodInfo *)0x0);
                              pcVar31 = (code *)swi(3);
                              (*pcVar31)();
                              return;
                            }
                            pcVar31 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar31 = (code *)FUN_?(&UNK_?),
                               pcVar31 == (code *)0x0)) {
                              uVar32 = func_?(&UNK_?);
                              FUN_?(uVar32,0);
                              pcVar31 = (code *)swi(3);
                              (*pcVar31)();
                              return;
                            }
                            pcRam_? = pcVar31;
                            (*pcRam_?)(pvVar30);
                            pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                            if (pGVar1 != (GameObject *)0x0) {
                              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                              uVar32._0_4_ = (this->fields).pivotPoint.x;
                              uVar32._4_4_ = (this->fields).pivotPoint.y;
                              fVar8 = (this->fields).pivotPoint.z;
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pVVar33 = TypeInfo__UnityEngine__Vector3->static_fields;
                              if (pTVar9 != (Transform *)0x0) {
                                VStack_34.x = (pVVar33->upVector).x;
                                VStack_34.y = (pVVar33->upVector).y;
                                VStack_34.z = (pVVar33->upVector).z;
                                VStack_35._0_8_ = uVar32;
                                VStack_35.z = fVar8;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_RotateAround
                                          (pTVar9,&VStack_35,&VStack_34,_UNK_?,
                                           (MethodInfo *)0x0);
                                pCVar29 = (this->fields).previewCam;
                                if (pCVar29 != (Camera *)0x0) {
                                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pCVar29,(MethodInfo *)0x0);
                                  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if ((pGVar1 != (GameObject *)0x0) &&
                                     (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform(pGVar1,(MethodInfo *)0x0)
                                     , pTVar36 != (Transform *)0x0)) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar30 = (pTVar36->fields)._._.m_CachedPtr;
                                    if (pvVar30 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pTVar36,(MethodInfo *)0x0);
                                      pcVar31 = (code *)swi(3);
                                      (*pcVar31)();
                                      return;
                                    }
                                    pcVar31 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar31 = (code *)FUN_?(&UNK_?),
                                       pcVar31 == (code *)0x0)) {
                                      uVar32 = func_?(&UNK_?);
                                      FUN_?(uVar32,0);
                                      pcVar31 = (code *)swi(3);
                                      (*pcVar31)();
                                      return;
                                    }
                                    pcRam_? = pcVar31;
                                    (*pcRam_?)(pvVar30);
                                    VStack_35.x = (this->fields).previewCamOffset.x;
                                    VStack_35.y = (this->fields).previewCamOffset.y;
                                    fVar8 = (this->fields).previewCamOffset.z + 0.0;
                                    if (pTVar9 != (Transform *)0x0) {
                                      VStack_35.y = VStack_35.y + 0.0;
                                      VStack_35.x = VStack_35.x + 0.0;
                                      VStack_35.z = fVar8;
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pvVar30 = (pTVar9->fields)._._.m_CachedPtr;
                                      if (pvVar30 == (void *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  ((Object *)pTVar9,(MethodInfo *)0x0);
                                        pcVar31 = (code *)swi(3);
                                        (*pcVar31)();
                                        return;
                                      }
                                      pcVar31 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar31 = (code *)FUN_?(&UNK_?),
                                         pcVar31 == (code *)0x0)) {
                                        uVar32 = func_?(&UNK_?);
                                        FUN_?(uVar32,0);
                                        pcVar31 = (code *)swi(3);
                                        (*pcVar31)();
                                        return;
                                      }
                                      pcRam_? = pcVar31;
                                      (*pcRam_?)(pvVar30,&VStack_35);
                                      pGVar1 = (this->fields).blobShadowPrefab;
                                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c ==
                                          0) {
                                        FUN_?();
                                      }
                                      pGVar1 = (GameObject *)
                                               UnityEngine.CoreModule.dll::UnityEngine::Object::
                                               Object_1_Instantiate_4
                                                         ((Object *)pGVar1,
                                                                                                                    
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                      if (pGVar1 != (GameObject *)0x0) {
                                        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar1,(MethodInfo *)0x0);
                                        this_00 = (this->fields)._PreviewGameObject_k__BackingField;
                                        if ((this_00 != (GameObject *)0x0) &&
                                           (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (this_00,(MethodInfo *)0x0),
                                           pTVar9 != (Transform *)0x0)) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_SetParent_1(pTVar9,pTVar36,0,(MethodInfo *)0x0)
                                          ;
                                          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar1,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pVVar33 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          if (pTVar9 != (Transform *)0x0) {
                                            VStack_34.x = (pVVar33->zeroVector).x;
                                            VStack_34.y = (pVVar33->zeroVector).y;
                                            VStack_34.z = (pVVar33->zeroVector).z;
                                            if (cRam_? == '\0') {
                                              FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pvVar30 = (pTVar9->fields)._._.m_CachedPtr;
                                            if (pvVar30 == (void *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                              ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                        ((Object *)pTVar9,(MethodInfo *)0x0);
                                              pcVar31 = (code *)swi(3);
                                              (*pcVar31)();
                                              return;
                                            }
                                            pcVar31 = pcRam_?;
                                            if ((pcRam_? == (code *)0x0) &&
                                               (pcVar31 = (code *)FUN_?(&UNK_?),
                                               pcVar31 == (code *)0x0)) {
                                              uVar32 = func_?(&UNK_?);
                                              FUN_?(uVar32,0);
                                              pcVar31 = (code *)swi(3);
                                              (*pcVar31)();
                                              return;
                                            }
                                            pcRam_? = pcVar31;
                                            (*pcRam_?)(pvVar30);
                                            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar1,(MethodInfo *)0x0);
                                            if (pTVar9 != (Transform *)0x0) {
                                              if (cRam_? == '\0') {
                                                FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pvVar30 = (pTVar9->fields)._._.m_CachedPtr;
                                              if (pvVar30 == (void *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                                ThrowHelper::
                                                ThrowHelper_2_ThrowNullReferenceException
                                                          ((Object *)pTVar9,(MethodInfo *)0x0);
                                                pcVar31 = (code *)swi(3);
                                                (*pcVar31)();
                                                return;
                                              }
                                              pcVar31 = pcRam_?;
                                              if ((pcRam_? == (code *)0x0) &&
                                                 (pcVar31 = (code *)FUN_?(&UNK_?),
                                                 pcVar31 == (code *)0x0)) {
                                                uVar32 = func_?(&UNK_?);
                                                FUN_?(uVar32,0);
                                                pcVar31 = (code *)swi(3);
                                                (*pcVar31)();
                                                return;
                                              }
                                              pcRam_? = pcVar31;
                                              (*pcRam_?)(pvVar30);
                                              pMVar37 = 
                                              MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                                              ;
                                              pGVar1 = (this->fields).
                                                       _PreviewGameObject_k__BackingField;
                                              if (pGVar1 != (GameObject *)0x0) {
                                                if ((
                                                  MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                                                  ->field7_0x38).rgctx_data ==
                                                  (Il2CppRGCTXData *)0x0) {
                                                  FUN_?(
                                                  MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                                                  );
                                                }
                                                pMVar38 = (MVBodyObject *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentInChildren_3
                                                                    (pGVar1,0,((pMVar37->field7_0x38)
                                                                              .rgctx_data)->method);
                                                bVar2 = iRam_? != 0;
                                                (this->fields).body = pMVar38;
                                                if (bVar2) {
                                                  uVar3 = (uint)((ulonglong)&(this->fields).body >>
                                                                 0xc);
                                                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR)
                                                    ;
                                                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar2 = uVar5 == *puVar6;
                                                    if (bVar2) {
                                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar2);
                                                }
                                                pGVar1 = (this->fields).
                                                         _PreviewGameObject_k__BackingField;
                                                if (pGVar1 != (GameObject *)0x0) {
                                                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar1,(MethodInfo *)0x0);
                                                  iVar19 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          LayerMask::LayerMask_NameToLayer
                                                                    (StringLiteral_Preview,
                                                                     (MethodInfo *)0x0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively
                                                            (pTVar9,iVar19,(MethodInfo *)0x0);
                                                  this_01 = (this->fields).grayScaleEffect;
                                                  if (this_01 != (GrayscaleEffect *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Behaviour::Behaviour_set_enabled
                                                              ((Behaviour *)this_01,0,
                                                               (MethodInfo *)0x0);
                                                    SpawnRolePreviewer_StartInactiveAnimation
                                                              (this,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          FUN_?();
                                          pcVar31 = (code *)swi(3);
                                          (*pcVar31)();
                                          return;
                                        }
                                      }
                                    }
                                    FUN_?();
                                    pcVar31 = (code *)swi(3);
                                    (*pcVar31)();
                                    return;
                                  }
                                }
                              }
                              goto code_?;
                            }
                          }
                        }
                        FUN_?();
                        pcVar31 = (code *)swi(3);
                        (*pcVar31)();
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
code_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnDestroy
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).previewCam;
      if (pCVar1 == (Camera *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    }
  }
  pRVar2 = (this->fields).previewTexture;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar2 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar2 = (this->fields).previewTexture;
      if (pRVar2 == (RenderTexture *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
                (pRVar2,(MethodInfo *)0x0);
      pRVar2 = (this->fields).previewTexture;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar4 = (void *)0x0;
      if (pRVar2 != (RenderTexture *)0x0) {
        pvVar4 = (pRVar2->fields)._._.m_CachedPtr;
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
      (*pcRam_?)(pvVar4);
      bVar6 = iRam_? != 0;
      (this->fields).previewTexture = (RenderTexture *)0x0;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
  }
  pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
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
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pGVar11,0.0,(MethodInfo *)0x0);
  pGVar11 = (this->fields).rootObject;
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
  pvVar4 = (void *)0x0;
  if (pGVar11 != (GameObject *)0x0) {
    pvVar4 = (pGVar11->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnPostRender
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
  layerName = StringLiteral_Hidden;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  layersToChange.m_Mask = 1 << ((byte)iVar4 & 0x1f);
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layerName,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,layersToChange.m_Mask,iVar4,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_5[0] = 0;
  if ((pTVar3 != (Transform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar2;
      bVar8 = (*pcRam_?)(pvVar6);
      uVar9 = 1 << (bVar8 & 0x1f);
      if ((uVar9 & layersToChange.m_Mask) == uVar9) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar1,iVar4,(MethodInfo *)0x0);
      }
      pIVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar3,(MethodInfo *)0x0);
      uStack_11 = 0;
      puStack_12 = &stack0x00000008;
      plStack_13 = alStack_5;
      while (pIVar10 != (IEnumerator *)0x0) {
        cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar14 == '\0') {
          alStack_5[0] = FUN_?(pIVar10,TypeInfo__System__IDisposable);
          if (alStack_5[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_5[0]);
          }
          return;
        }
        if (pIVar10 == (IEnumerator *)0x0) goto code_?;
        pIVar15 = pIVar10->klass;
        uVar16 = 0;
        uVar17._0_1_ = (pIVar15->_1).rank;
        uVar17._1_1_ = (pIVar15->_1).minimumAlignment;
        if (uVar17 != 0) {
          do {
            if (pIVar15->interfaceOffsets[uVar16].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar18 = &(pIVar15->vtable).MoveNext + (pIVar15->interfaceOffsets[uVar16].offset + 1);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar17);
        }
        pVVar18 = (VirtualInvokeData *)
                  FUN_?(pIVar10,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar19 = (Transform *)(*pVVar18->methodPtr)(pIVar10,pVVar18->method);
        pTVar3 = (Transform *)0x0;
        if (pTVar19 != (Transform *)0x0) {
          bVar8 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar19->klass->_1).naturalAligment < bVar8) ||
             (pTVar3 = pTVar19,
             (pTVar19->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        }
        LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,iVar4,(MethodInfo *)0x0);
      }
    }
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnPreCull
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
  layersToChange.m_Mask = (this->fields).layersToRender;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,layersToChange.m_Mask,value,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_4[0] = 0;
  if ((pTVar3 != (Transform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar2;
      bVar7 = (*pcRam_?)(pvVar5);
      uVar8 = 1 << (bVar7 & 0x1f);
      if ((uVar8 & layersToChange.m_Mask) == uVar8) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar1,value,(MethodInfo *)0x0);
      }
      pIVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar3,(MethodInfo *)0x0);
      uStack_10 = 0;
      puStack_11 = &stack0x00000008;
      plStack_12 = alStack_4;
      while (pIVar9 != (IEnumerator *)0x0) {
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          alStack_4[0] = FUN_?(pIVar9,TypeInfo__System__IDisposable);
          if (alStack_4[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_4[0]);
          }
          return;
        }
        if (pIVar9 == (IEnumerator *)0x0) goto code_?;
        pIVar14 = pIVar9->klass;
        uVar15 = 0;
        uVar16._0_1_ = (pIVar14->_1).rank;
        uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar17 = &(pIVar14->vtable).MoveNext + (pIVar14->interfaceOffsets[uVar15].offset + 1);
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
        pVVar17 = (VirtualInvokeData *)
                 FUN_?(pIVar9,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar18 = (Transform *)(*pVVar17->methodPtr)(pIVar9,pVVar17->method);
        pTVar3 = (Transform *)0x0;
        if (pTVar18 != (Transform *)0x0) {
          bVar7 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar18->klass->_1).naturalAligment < bVar7) ||
             (pTVar3 = pTVar18,
             (pTVar18->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        }
        LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,value,(MethodInfo *)0x0);
      }
    }
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRenderGrey(Boolean) */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey
               (SpawnRolePreviewer *this,bool shouldRenderAsGrey,MethodInfo *method)

{
  obj = (this->fields).grayScaleEffect;
  if (obj == (GrayscaleEffect *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,CONCAT71(in_register_00000011,shouldRenderAsGrey),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GrayscaleEffect *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,shouldRenderAsGrey);
  return;
}


/* Void StartActiveAnimation() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_StartActiveAnimation
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).body;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (MVBodyObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).body;
      if (((pMVar1 != (MVBodyObject *)0x0) &&
          (pBVar2 = (pMVar1->fields).boneAnimation, pBVar2 != (BoneAnimation *)0x0)) &&
         ((pBVar2->fields).fallbackWalkSpeed = 5.6, pMVar1 != (MVBodyObject *)0x0)) {
        pBVar2 = (pMVar1->fields).boneAnimation;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (this_00 = (pMVar3->fields).game, this_00 != (MVNetworkGame *)0x0)) &&
           (iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (this_00,(MethodInfo *)0x0), pBVar2 != (BoneAnimation *)0x0)) {
          BoneAnimation::BoneAnimation_StartAnimation
                    (pBVar2,StringLiteral_Walk,iVar4 + -500,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void StartInactiveAnimation() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_StartInactiveAnimation
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).body;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (MVBodyObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      iVar4 = (*pcRam_?)(0,80000);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar5 != (MVGameControllerBase *)0x0) &&
         (this_00 = (pMVar5->fields).game, this_00 != (MVNetworkGame *)0x0)) {
        iVar6 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0)
        ;
        pMVar1 = (this->fields).body;
        if ((pMVar1 != (MVBodyObject *)0x0) &&
           (this_01 = (pMVar1->fields).boneAnimation, this_01 != (BoneAnimation *)0x0)) {
          BoneAnimation::BoneAnimation_StartAnimation
                    (this_01,StringLiteral_Idle,iVar6 + (-500 - iVar4),(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* SpawnRolePreviewer() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer__ctor
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).previewCamOffset.x = (pVVar2->zeroVector).x;
  (this->fields).previewCamOffset.y = fVar3;
  (this->fields).previewCamOffset.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).pivotPoint.x = (pVVar2->zeroVector).x;
  (this->fields).pivotPoint.y = fVar3;
  (this->fields).pivotPoint.z = fVar4;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar10 = (uint)ppMVar9;
      LOCK();
      bVar5 = uVar10 != uRam_?;
      uVar11 = uVar10;
      uVar12 = uVar10 + 1;
      if (bVar5) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar5) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar11, uVar10 = uVar11, uVar11 != 2)
            );
    while (uVar10 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar10 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar13 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar5 = *(int *)puVar13 == 1;
  if (bVar5) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar10 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar5 = *puVar14 == 1;
  if (bVar5) {
    *puVar14 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar10 = GetCurrentThreadId();
    psVar15 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar5 = (ulonglong)uVar10 == *psVar15;
    if (bVar5) {
      *psVar15 = (ulonglong)uVar10;
    }
    UNLOCK();
    if (bVar5) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar5 = *(int *)puVar13 == 1;
      if (bVar5) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar5) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar10 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar10;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar10 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar17 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar9 = pIVar17->methods;
            pMVar18 = *ppMVar9;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar7;
                while (ppMVar20 = ppMVar19 + 0x3052af36,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar21 = _UNK_?;
    uVar22 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_23 = 0;
    uStack_24 = _UNK_?;
    uStack_25 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar20 = &pppppppuStack_78;
    if (0xf < uStack_25) {
      pppppppuVar20 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar20);
    if (uStack_25 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar20 = apppppppuStack_58;
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
      }
      uStack_24 = uVar22;
      uStack_25 = uVar21;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar20);
      if (lVar8 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar10 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar27 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar28 = *puVar27;
            LOCK();
            uVar21 = *puVar27;
            if (uVar28 == uVar21) {
              *puVar27 = uVar28 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar28 != uVar21);
        }
      }
      FUN_?(pOVar6,lVar16);
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
        if ((0xfff < uStack_26 + 1) &&
           (pppppppuVar20 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar20))))
        goto code_?;
        func_?(pppppppuVar20);
      }
      goto code_?;
    }
    pppppppuVar20 = pppppppuStack_78;
    if ((uStack_25 + 1 < 0x1000) ||
       (pppppppuVar20 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar20)) < 0x20)) {
      func_?(pppppppuVar20);
      uVar22 = _UNK_?;
      uVar21 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar22._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar22._4_4_ = (pOVar6->_1).cctor_started;
  uVar22 = FUN_?(uVar22);
  FUN_?(uVar22,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

