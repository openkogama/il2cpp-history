
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GenerateTextureData+<GenerateTexture>d__5::
     GenerateTextureData_GenerateTexture_d_5_MoveNext
               (GenerateTextureData_GenerateTexture_d_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkyboxManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      lVar2 = lRam_?;
      pOVar3 = (Object *)0x0;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
        }
      }
      else {
        pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar8 = iRam_? != 0;
      (this->fields).__2__current = pOVar3;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture_5__5,(MethodInfo *)0x0);
    iVar9 = (this->fields)._height_5__4;
    this_02 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Texture);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_10._0_4_ = 0.0;
    auStack_10._4_4_ = 0.0;
    uStack_11 = (String *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
              (this_02,0x398,iVar9,TextureFormat__Enum_RGB24,1,0,(void *)0x0,0,
               (MipmapLimitDescriptor *)auStack_10,(MethodInfo *)0x0);
    if (this_02 != (Texture2D *)0x0) {
      auStack_10._0_4_ = 0.0;
      auStack_10._4_4_ = 0.0;
      uStack_11 = (String *)CONCAT44((float)(this->fields)._height_5__4,0x44660000);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_02,(Rect *)auStack_10,0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply
                (this_02,1,0,(MethodInfo *)0x0);
      pBVar12 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                ImageConversion_EncodeToPNG(this_02,(MethodInfo *)0x0);
      pAVar13 = (this->fields).textureDataCallback;
      if ((pBVar12 != (Byte__Array *)0x0) &&
         (lVar2 = FUN_?(pBVar12), pBVar14 = TypeInfo__System__Byte,
         pAVar13 != (Action_1_Byte_ *)0x0)) {
        if ((lVar2 != 0) && (lVar15 = FUN_?(lVar2,TypeInfo__System__Byte), lVar15 == 0)) {
          FUN_?(lVar2,pBVar14);
          pcVar16 = (code *)swi(3);
          bVar17 = (*pcVar16)();
          return bVar17;
        }
        (*(pAVar13->fields)._._.invoke_impl)((pAVar13->fields)._._.method_code);
        pCVar18 = (this->fields)._screenshotCam_5__3;
        if (pCVar18 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar18,(RenderTexture *)0x0,(MethodInfo *)0x0);
          pRVar19 = (this->fields)._screenshotRenderTexture_5__5;
          if (pRVar19 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                      (pRVar19,(MethodInfo *)0x0);
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
            pcVar16 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
              uVar20 = func_?(&UNK_?);
              FUN_?(uVar20,0);
              pcVar16 = (code *)swi(3);
              bVar17 = (*pcVar16)();
              return bVar17;
            }
            pcRam_? = pcVar16;
            (*pcRam_?)(0);
            pGVar21 = (this->fields)._screenshotCamObject_5__2;
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
                      ((Object_1 *)pGVar21,0.0,(MethodInfo *)0x0);
            if (this_00 != (GenerateTextureData *)0x0) {
              pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
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
                        ((Object_1 *)pGVar21,0.0,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GenerateTextureData);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField =
                   0;
              return 0;
            }
          }
        }
      }
    }
    goto code_?;
  }
  bVar8 = cRam_? == '\0';
  (this->fields).__1__state = -1;
  if (bVar8) {
    FUN_?(&TypeInfo__GenerateTextureData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField = 1;
  pGVar21 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
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
            (pGVar21,(String *)0x0,(MethodInfo *)0x0);
  iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Default,(MethodInfo *)0x0);
  if (pGVar21 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar21,iVar9,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (this->fields)._screenshotCamObject_5__2 = pGVar21;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields)._screenshotCamObject_5__2 >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pSVar22 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
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
  if (pSVar22 == (SkyboxManager *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SkyboxManager);
    }
    pSVar23 = TypeInfo__SkyboxManager->static_fields;
    fVar24 = (pSVar23->defaultColor).r;
    fVar25 = (pSVar23->defaultColor).g;
    fVar26 = (pSVar23->defaultColor).b;
    fVar27 = (pSVar23->defaultColor).a;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar22->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    fVar24 = (pSVar22->fields).currentColor.r;
    fVar25 = (pSVar22->fields).currentColor.g;
    fVar26 = (pSVar22->fields).currentColor.b;
    fVar27 = (pSVar22->fields).currentColor.a;
  }
  pGVar21 = (this->fields)._screenshotCamObject_5__2;
  if (pGVar21 != (GameObject *)0x0) {
    pCVar18 = (Camera *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar21,
                         UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                        );
    bVar8 = iRam_? != 0;
    (this->fields)._screenshotCam_5__3 = pCVar18;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&(this->fields)._screenshotCam_5__3 >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    mainCameraManager =
         MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (pCVar18 != (Camera *)0x0) {
      fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                         (pCVar18,(MethodInfo *)0x0);
      pCVar29 = (this->fields)._screenshotCam_5__3;
      value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                        (pCVar18,(MethodInfo *)0x0);
      if (pCVar29 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                  (pCVar29,value,(MethodInfo *)0x0);
        pCVar29 = (this->fields)._screenshotCam_5__3;
        if (pCVar29 != (Camera *)0x0) {
          auStack_10._4_4_ = fVar25;
          auStack_10._0_4_ = fVar24;
          uStack_11 = (String *)CONCAT44(fVar27,fVar26);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar30 = (pCVar29->fields)._._._.m_CachedPtr;
          if (pvVar30 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar29,(MethodInfo *)0x0);
            pcVar16 = (code *)swi(3);
            bVar17 = (*pcVar16)();
            return bVar17;
          }
          pcVar16 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
            uVar20 = func_?(&UNK_?);
            FUN_?(uVar20,0);
            pcVar16 = (code *)swi(3);
            bVar17 = (*pcVar16)();
            return bVar17;
          }
          pcRam_? = pcVar16;
          (*pcRam_?)(pvVar30,auStack_10);
          pGVar21 = (this->fields)._screenshotCamObject_5__2;
          if (pGVar21 != (GameObject *)0x0) {
            this_03 = (Skybox *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar21,
                                 UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                );
            pGVar21 = (this->fields)._screenshotCamObject_5__2;
            if ((((pGVar21 != (GameObject *)0x0) &&
                 (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar21,
                             UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                            ), mainCameraManager != (MainCameraManager *)0x0)) &&
                (this_01 = (mainCameraManager->fields).skybox, this_01 != (Skybox *)0x0)) &&
               (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                                     (this_01,(MethodInfo *)0x0), this_03 != (Skybox *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                        (this_03,value_00,(MethodInfo *)0x0);
              pCVar29 = (this->fields)._screenshotCam_5__3;
              fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                 (pCVar18,(MethodInfo *)0x0);
              if (pCVar29 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                          (pCVar29,fVar24,(MethodInfo *)0x0);
                pCVar29 = (this->fields)._screenshotCam_5__3;
                if (pCVar29 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                            (pCVar29,fVar28,(MethodInfo *)0x0);
                  pCVar29 = (this->fields)._screenshotCam_5__3;
                  fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                     (pCVar18,(MethodInfo *)0x0);
                  if (pCVar29 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                              (pCVar29,fVar24,(MethodInfo *)0x0);
                    pCVar29 = (this->fields)._screenshotCam_5__3;
                    if (pCVar29 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                (pCVar29,0x1011,(MethodInfo *)0x0);
                      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pCVar18,(MethodInfo *)0x0);
                      pGVar21 = (this->fields)._screenshotCamObject_5__2;
                      if (((pGVar21 != (GameObject *)0x0) &&
                          (pTVar31 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_transform(pGVar21,(MethodInfo *)0x0),
                          this_04 != (GameObject *)0x0)) &&
                         (pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(this_04,(MethodInfo *)0x0),
                         pTVar32 != (Transform *)0x0)) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar30 = (pTVar32->fields)._._.m_CachedPtr;
                        if (pvVar30 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar32,(MethodInfo *)0x0);
                          pcVar16 = (code *)swi(3);
                          bVar17 = (*pcVar16)();
                          return bVar17;
                        }
                        pcVar16 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)
                           ) {
                          uVar20 = func_?(&UNK_?);
                          FUN_?(uVar20,0);
                          pcVar16 = (code *)swi(3);
                          bVar17 = (*pcVar16)();
                          return bVar17;
                        }
                        pcRam_? = pcVar16;
                        (*pcRam_?)(pvVar30);
                        if (pTVar31 != (Transform *)0x0) {
                          auStack_10._0_4_ = 0.0;
                          auStack_10._4_4_ = 0.0;
                          uStack_11 = (String *)((ulonglong)uStack_11 & 0xffffffff00000000);
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar30 = (pTVar31->fields)._._.m_CachedPtr;
                          if (pvVar30 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar31,(MethodInfo *)0x0);
                            pcVar16 = (code *)swi(3);
                            bVar17 = (*pcVar16)();
                            return bVar17;
                          }
                          pcVar16 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar16 = (code *)FUN_?(&UNK_?),
                             pcVar16 == (code *)0x0)) {
                            uVar20 = func_?(&UNK_?);
                            FUN_?(uVar20,0);
                            pcVar16 = (code *)swi(3);
                            bVar17 = (*pcVar16)();
                            return bVar17;
                          }
                          pcRam_? = pcVar16;
                          (*pcRam_?)(pvVar30);
                          pGVar21 = (this->fields)._screenshotCamObject_5__2;
                          if (pGVar21 != (GameObject *)0x0) {
                            pTVar31 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar21,(MethodInfo *)0x0);
                            pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(this_04,(MethodInfo *)0x0);
                            if (pTVar32 != (Transform *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar30 = (pTVar32->fields)._._.m_CachedPtr;
                              if (pvVar30 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pTVar32,(MethodInfo *)0x0);
                                pcVar16 = (code *)swi(3);
                                bVar17 = (*pcVar16)();
                                return bVar17;
                              }
                              pcVar16 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar16 = (code *)FUN_?(&UNK_?),
                                 pcVar16 == (code *)0x0)) {
                                uVar20 = func_?(&UNK_?);
                                FUN_?(uVar20,0);
                                pcVar16 = (code *)swi(3);
                                bVar17 = (*pcVar16)();
                                return bVar17;
                              }
                              pcRam_? = pcVar16;
                              (*pcRam_?)(pvVar30);
                              if (pTVar31 != (Transform *)0x0) {
                                uStack_33 = 0;
                                uStack_34 = 0;
                                uStack_35 = 0;
                                uStack_36 = 0;
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar30 = (pTVar31->fields)._._.m_CachedPtr;
                                if (pvVar30 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar31,(MethodInfo *)0x0);
                                  pcVar16 = (code *)swi(3);
                                  bVar17 = (*pcVar16)();
                                  return bVar17;
                                }
                                pcVar16 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar16 = (code *)FUN_?(&UNK_?),
                                   pcVar16 == (code *)0x0)) {
                                  uVar20 = func_?(&UNK_?);
                                  FUN_?(uVar20,0);
                                  pcVar16 = (code *)swi(3);
                                  bVar17 = (*pcVar16)();
                                  return bVar17;
                                }
                                pcRam_? = pcVar16;
                                (*pcRam_?)(pvVar30,&uStack_33);
                                GenerateTextureData::GenerateTextureData_AddPostProcessing
                                          ((this->fields)._screenshotCamObject_5__2,
                                           mainCameraManager,
                                           LayerFlags__Enum_Player|LayerFlags__Enum_Water|
                                           LayerFlags__Enum_Default,(MethodInfo *)0x0);
                                fVar28 = _UNK_? / fVar28;
                                (this->fields)._height_5__4 = (int)fVar28;
                                pRVar19 = (RenderTexture *)
                                          FUN_?(TypeInfo__UnityEngine__RenderTexture);
                                pOVar3 = (Object *)0x0;
                                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                RenderTexture__ctor_9
                                          (pRVar19,0x398,(int)fVar28,0x18,
                                           RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
                                if (pRVar19 != (RenderTexture *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture_set_antiAliasing(pRVar19,8,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                  Texture_set_anisoLevel((Texture *)pRVar19,0x10,(MethodInfo *)0x0);
                                  bVar8 = iRam_? != 0;
                                  (this->fields)._screenshotRenderTexture_5__5 = pRVar19;
                                  if (bVar8) {
                                    uVar4 = (uint)((ulonglong)
                                                    &(this->fields)._screenshotRenderTexture_5__5 >>
                                                   0xc);
                                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                    do {
                                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                      LOCK();
                                      bVar8 = uVar6 == *puVar7;
                                      if (bVar8) {
                                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar8);
                                  }
                                  pCVar18 = (this->fields)._screenshotCam_5__3;
                                  if (pCVar18 != (Camera *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_set_targetTexture
                                              (pCVar18,(this->fields)._screenshotRenderTexture_5__5,
                                               (MethodInfo *)0x0);
                                    lVar2 = lRam_?;
                                    uStackX_8 = 0;
                                    if (*(int *)(lRam_? + 0x28) < 0) {
                                      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                                         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                                        pOVar3 = (Object *)FUN_?(lRam_?);
                                        FUN_?(pOVar3 + 1,&uStackX_8,
                                                      (longlong)*(int *)(lVar2 + 0xf8) + -0x10);
                                        if (iRam_? != 0) {
                                          uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                                          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                          do {
                                            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                            LOCK();
                                            bVar8 = uVar6 == *puVar7;
                                            if (bVar8) {
                                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar8);
                                        }
                                      }
                                    }
                                    else {
                                      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
                                    }
                                    bVar8 = iRam_? != 0;
                                    (this->fields).__2__current = pOVar3;
                                    if (bVar8) {
                                      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc
                                                     );
                                      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                      do {
                                        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                        LOCK();
                                        bVar8 = uVar6 == *puVar7;
                                        if (bVar8) {
                                          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar8);
                                    }
                                    (this->fields).__1__state = 1;
                                    return 1;
                                  }
                                }
                              }
                              FUN_?();
                              pcVar16 = (code *)swi(3);
                              bVar17 = (*pcVar16)();
                              return bVar17;
                            }
                          }
                        }
                        FUN_?();
                        pcVar16 = (code *)swi(3);
                        bVar17 = (*pcVar16)();
                        return bVar17;
                      }
                    }
code_?:
                    FUN_?();
                    pcVar16 = (code *)swi(3);
                    bVar17 = (*pcVar16)();
                    return bVar17;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GenerateTextureData+<GenerateTexture>d__5::
     GenerateTextureData_GenerateTexture_d_5_System_Collections_IEnumerator_Reset
               (GenerateTextureData_GenerateTexture_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__GenerateTextureData___GenerateTexture_d__5__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

