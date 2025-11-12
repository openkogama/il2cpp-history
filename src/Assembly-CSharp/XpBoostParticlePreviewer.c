
/* Void FaceGameObject(GameObject) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_FaceGameObject
               (XpBoostParticlePreviewer *this,GameObject *go,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (((this_00 == (Camera *)0x0) ||
      (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0), go == (GameObject *)0x0)) ||
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (go,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,obj_00,0);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj_00 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((obj_00->fields)._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (obj_00->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar2);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_5._0_4_ = (pVVar4->upVector).x;
      uStack_5._4_4_ = (pVVar4->upVector).y;
      fStack_6 = (pVVar4->upVector).z;
      uStack_7 = 0;
      uStack_8 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar2 = (obj->fields)._._.m_CachedPtr;
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
      (*pcRam_?)(pvVar2,&uStack_7,&uStack_5);
    }
  }
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Vector3) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_Initialize
               (XpBoostParticlePreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 *cameraOffset,Vector3 *previewPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview__0__RenderCam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).xpBoostParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar1,1,(MethodInfo *)0x0);
    (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                     ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_Preview__0__RenderCam;
    auStack_4 = (undefined1  [8])0x0;
    pOStack_5 = (Object *)0x0;
    pOStack_6 = (Object *)0x0;
    pOStack_7 = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              ((ParamsArray *)auStack_4,(Object *)arg0,(MethodInfo *)0x0);
    auStack_8 = auStack_4;
    pOStack_9 = pOStack_5;
    pOStack_10 = pOStack_6;
    pOStack_11 = pOStack_7;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,(ParamsArray *)auStack_8,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                ((Object_1 *)pGVar2,pSVar3,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Preview,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar2,value,(MethodInfo *)0x0);
        colorFormat = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                      RenderTexture_GetCompatibleFormat
                                (RenderTextureFormat__Enum_ARGB32,
                                 RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
        depthStencilFormat =
             UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
             RenderTexture_GetDepthStencilFormatLegacy_4(0x10,0,(MethodInfo *)0x0);
        iStack_12 = 0;
        auStack_8 = (undefined1  [8])0x0;
        pOStack_9 = (Object *)0x0;
        pOStack_10 = (Object *)0x0;
        pOStack_11 = (Object__Array *)0x0;
        iStack_13 = 0;
        iStack_14 = 0;
        iStack_15 = 0;
        uStack_16 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
        RenderTextureDescriptor__ctor
                  ((RenderTextureDescriptor *)auStack_8,textureWidth,textureHeight,colorFormat,
                   depthStencilFormat,(MethodInfo *)0x0);
        pOStack_9 = (Object *)CONCAT44(pOStack_9._4_4_,2);
        iStack_14 = 2;
        iStack_15 = 0;
        iStack_17 = 0;
        auStack_4 = auStack_8;
        pOStack_5 = pOStack_9;
        uStack_18._4_4_ = 2;
        uStack_18._0_4_ = iStack_13;
        lStack_19 = ((ulonglong)uStack_16 & 0xfffffbff) << 0x20;
        pOStack_6 = pOStack_10;
        pOStack_7 = pOStack_11;
        uStack_16 = uStack_16 & 0xfffffbff;
        pRVar20 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary
                           ((RenderTextureDescriptor *)auStack_4,(MethodInfo *)0x0);
        bVar21 = iRam_? != 0;
        (this->fields).previewTexture = pRVar20;
        if (bVar21) {
          uVar22 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
          lVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6) * 8;
          do {
            uVar24 = *(ulonglong *)(lVar23 + 0xADDR);
            puVar25 = (ulonglong *)(lVar23 + 0xADDR);
            LOCK();
            bVar21 = uVar24 == *puVar25;
            if (bVar21) {
              *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
            }
            UNLOCK();
          } while (!bVar21);
        }
        pCVar26 = (this->fields).previewCam;
        if (pCVar26 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar26,(this->fields).previewTexture,(MethodInfo *)0x0);
          pPVar1 = (this->fields).xpBoostParticles;
          if (pPVar1 != (ParticleSystem *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pPVar1,(MethodInfo *)0x0);
            bVar21 = iRam_? != 0;
            (this->fields)._PreviewGameObject_k__BackingField = pGVar2;
            if (bVar21) {
              uVar22 = (uint)((ulonglong)&(this->fields)._PreviewGameObject_k__BackingField >> 0xc);
              lVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6) * 8;
              do {
                uVar24 = *(ulonglong *)(lVar23 + 0xADDR);
                puVar25 = (ulonglong *)(lVar23 + 0xADDR);
                LOCK();
                bVar21 = uVar24 == *puVar25;
                if (bVar21) {
                  *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
                }
                UNLOCK();
              } while (!bVar21);
            }
            pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar27 != (Transform *)0x0) {
              uStack_28._0_4_ = previewPosition->x;
              uStack_28._4_4_ = previewPosition->y;
              fStack_29 = previewPosition->z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar30 = (pTVar27->fields)._._.m_CachedPtr;
              if (pvVar30 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
                pcVar31 = (code *)swi(3);
                (*pcVar31)();
                return;
              }
              pcVar31 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar31 = (code *)FUN_?(&UNK_?), pcVar31 == (code *)0x0)) {
                uVar32 = func_?(&UNK_?);
                FUN_?(uVar32,0);
                pcVar31 = (code *)swi(3);
                (*pcVar31)();
                return;
              }
              pcRam_? = pcVar31;
              (*pcRam_?)(pvVar30);
              pCVar26 = (this->fields).previewCam;
              if (pCVar26 != (Camera *)0x0) {
                pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar26,(MethodInfo *)0x0);
                pPVar1 = (this->fields).xpBoostParticles;
                if ((pPVar1 != (ParticleSystem *)0x0) &&
                   (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pPVar1,(MethodInfo *)0x0),
                   obj != (Transform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  VStack_33.x = 0.0;
                  VStack_33.y = 0.0;
                  VStack_33.z = 0.0;
                  pvVar30 = (obj->fields)._._.m_CachedPtr;
                  if (pvVar30 != (void *)0x0) {
                    pcVar31 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar31 = (code *)FUN_?(&UNK_?), pcVar31 == (code *)0x0)) {
                      uVar32 = func_?(&UNK_?);
                      FUN_?(uVar32,0);
                      pcVar31 = (code *)swi(3);
                      (*pcVar31)();
                      return;
                    }
                    pcRam_? = pcVar31;
                    (*pcRam_?)(pvVar30,&VStack_33);
                    if (pTVar27 == (Transform *)0x0) {
                      FUN_?();
                      pcVar31 = (code *)swi(3);
                      (*pcVar31)();
                      return;
                    }
                    VStack_34.x = VStack_33.x;
                    VStack_34.y = VStack_33.y;
                    VStack_34.z = VStack_33.z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                              (pTVar27,&VStack_34,(MethodInfo *)0x0);
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_OnDestroy
               (XpBoostParticlePreviewer *this,MethodInfo *method)

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
      if (pCVar1 == (Camera *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    }
  }
  pRVar3 = (this->fields).previewTexture;
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
  if (pRVar3 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar3 = (this->fields).previewTexture;
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
      if (pRVar3 != (RenderTexture *)0x0) {
        pvVar4 = (pRVar3->fields)._._.m_CachedPtr;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
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
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  pvVar4 = (void *)0x0;
  if (pGVar11 != (GameObject *)0x0) {
    pvVar4 = (pGVar11->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_OnPostRender
               (XpBoostParticlePreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_OnPreCull
               (XpBoostParticlePreviewer *this,MethodInfo *method)

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


/* Void OverrideCameraForPreviewer(Vector3, Vector3) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::
     XpBoostParticlePreviewer_OverrideCameraForPreviewer
               (XpBoostParticlePreviewer *this,Vector3 *cameraAngle,Vector3 *cameraOffset,
               MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this_00,(MethodInfo *)0x0);
  uStack_2._0_4_ = cameraAngle->x;
  uStack_2._4_4_ = cameraAngle->y;
  fStack_3 = cameraAngle->z * _UNK_?;
  uStack_4 = CONCAT44((float)uStack_2._4_4_ * _UNK_?,
                       (float)(undefined4)uStack_2 * _UNK_?);
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_4);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_8 = (undefined4)uStack_5;
  uStack_9 = uStack_5._4_4_;
  uStack_10 = (undefined4)uStack_6;
  uStack_11 = uStack_6._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (obj->fields)._._.m_CachedPtr;
  if (pvVar12 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar12);
    uStack_2._0_4_ = cameraOffset->x;
    uStack_2._4_4_ = cameraOffset->y;
    fStack_13 = cameraOffset->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (obj->fields)._._.m_CachedPtr;
    if (pvVar12 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_2);
      return;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartParticleSystem() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_StartParticleSystem
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  (this->fields).isParticlesPlaying = 1;
  pPVar1 = (this->fields).xpBoostParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    uVar2 = 0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).xpBoostParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                        ,CONCAT71(uVar3,1),0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar1 == (ParticleSystem *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pPVar1->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StopParticleSystem() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_StopParticleSystem
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  (this->fields).isParticlesPlaying = 0;
  pPVar1 = (this->fields).xpBoostParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar1,1,(MethodInfo *)0x0);
    pPVar1 = (this->fields).xpBoostParticles;
    if ((pPVar1 != (ParticleSystem *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
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

