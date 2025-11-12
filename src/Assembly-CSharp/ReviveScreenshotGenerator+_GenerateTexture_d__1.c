
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>d__1::
     ReviveScreenshotGenerator_GenerateTexture_d_1_MoveNext
               (ReviveScreenshotGenerator_GenerateTexture_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
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
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
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
              ((this->fields)._screenshotRenderTexture_5__4,(MethodInfo *)0x0);
    iVar9 = (this->fields).width;
    iVar10 = (this->fields).height;
    this_02 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Texture);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_11._0_4_ = 0.0;
    auStack_11._4_4_ = 0.0;
    stack0xffffffffffffffa0 = (String *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
              (this_02,iVar9,iVar10,TextureFormat__Enum_RGB24,1,0,(void *)0x0,0,
               (MipmapLimitDescriptor *)auStack_11,(MethodInfo *)0x0);
    if (this_02 != (Texture2D *)0x0) {
      stack0xffffffffffffffa0 =
           (String *)CONCAT44((float)(this->fields).height,(float)(this->fields).width);
      auStack_11._0_4_ = 0.0;
      auStack_11._4_4_ = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_02,(Rect *)auStack_11,0,0,(MethodInfo *)0x0);
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
        pCVar18 = (this->fields)._cullingCam_5__5;
        if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        CullingApiWrapper::CullingApiWrapper_set_TargetCamera(pCVar18,(MethodInfo *)0x0);
        pCVar18 = (this->fields)._screenshotCam_5__3;
        if (pCVar18 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar18,(RenderTexture *)0x0,(MethodInfo *)0x0);
          pRVar19 = (this->fields)._screenshotRenderTexture_5__4;
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
            if (this_00 != (ReviveScreenshotGenerator *)0x0) {
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
              return 0;
            }
          }
        }
      }
    }
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    bVar17 = (*pcVar16)();
    return bVar17;
  }
  (this->fields).__1__state = -1;
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
  if (pSVar22 != (SkyboxManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar22->fields)._._._._.m_CachedPtr != (void *)0x0) {
      fVar23 = (pSVar22->fields).currentColor.r;
      fVar24 = (pSVar22->fields).currentColor.g;
      fVar25 = (pSVar22->fields).currentColor.b;
      fVar26 = (pSVar22->fields).currentColor.a;
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SkyboxManager);
  }
  pSVar27 = TypeInfo__SkyboxManager->static_fields;
  fVar23 = (pSVar27->defaultColor).r;
  fVar24 = (pSVar27->defaultColor).g;
  fVar25 = (pSVar27->defaultColor).b;
  fVar26 = (pSVar27->defaultColor).a;
code_?:
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
    if (mainCameraManager != (MainCameraManager *)0x0) {
      iVar1 = (this->fields).width;
      iVar28 = (this->fields).height;
      pCVar18 = (mainCameraManager->fields).mainCamera;
      pCVar29 = (this->fields)._screenshotCam_5__3;
      if ((pCVar18 != (Camera *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                            (pCVar18,(MethodInfo *)0x0), pCVar29 != (Camera *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                  (pCVar29,value,(MethodInfo *)0x0);
        pCVar29 = (this->fields)._screenshotCam_5__3;
        if (pCVar29 != (Camera *)0x0) {
          fStack_30 = fVar23;
          fStack_31 = fVar24;
          fStack_32 = fVar25;
          fStack_33 = fVar26;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar34 = (pCVar29->fields)._._._.m_CachedPtr;
          if (pvVar34 == (void *)0x0) {
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
          (*pcRam_?)(pvVar34,&fStack_30);
          pGVar21 = (this->fields)._screenshotCamObject_5__2;
          if (pGVar21 != (GameObject *)0x0) {
            this_03 = (Skybox *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar21,
                                 UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                );
            pGVar21 = (this->fields)._screenshotCamObject_5__2;
            if (pGVar21 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar21,
                         UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                        );
              this_01 = (mainCameraManager->fields).skybox;
              if ((this_01 != (Skybox *)0x0) &&
                 (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                                       (this_01,(MethodInfo *)0x0), this_03 != (Skybox *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                          (this_03,value_00,(MethodInfo *)0x0);
                pCVar29 = (this->fields)._screenshotCam_5__3;
                fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                   (pCVar18,(MethodInfo *)0x0);
                if (pCVar29 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                            (pCVar29,fVar23,(MethodInfo *)0x0);
                  pCVar29 = (this->fields)._screenshotCam_5__3;
                  if (pCVar29 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                              (pCVar29,(float)iVar1 / (float)iVar28,(MethodInfo *)0x0);
                    pCVar29 = (this->fields)._screenshotCam_5__3;
                    fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                             Camera_get_nearClipPlane(pCVar18,(MethodInfo *)0x0);
                    if (pCVar29 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                (pCVar29,fVar23,(MethodInfo *)0x0);
                      pCVar18 = (this->fields)._screenshotCam_5__3;
                      if (pCVar18 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                  (pCVar18,0x11,(MethodInfo *)0x0);
                        pCVar18 = (this->fields)._screenshotCam_5__3;
                        if ((pCVar18 != (Camera *)0x0) &&
                           (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pCVar18,(MethodInfo *)0x0),
                           pTVar35 != (Transform *)0x0)) {
                          auStack_11._0_4_ = (this->fields).cameraPos.x;
                          auStack_11._4_4_ = (this->fields).cameraPos.y;
                          stack0xffffffffffffffa0 =
                               (String *)CONCAT44(fStack_36,(this->fields).cameraPos.z);
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar34 = (pTVar35->fields)._._.m_CachedPtr;
                          if (pvVar34 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar35,(MethodInfo *)0x0);
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
                          (*pcRam_?)(pvVar34);
                          pCVar18 = (this->fields)._screenshotCam_5__3;
                          if ((pCVar18 != (Camera *)0x0) &&
                             (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pCVar18,(MethodInfo *)0x0),
                             pTVar35 != (Transform *)0x0)) {
                            uStack_37._0_4_ = (this->fields).cameraRot.x;
                            uStack_37._4_4_ = (this->fields).cameraRot.y;
                            uStack_38._0_4_ = (this->fields).cameraRot.z;
                            uStack_38._4_4_ = (this->fields).cameraRot.w;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar34 = (pTVar35->fields)._._.m_CachedPtr;
                            if (pvVar34 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pTVar35,(MethodInfo *)0x0);
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
                            (*pcRam_?)(pvVar34,&uStack_37);
                            GenerateTextureData::GenerateTextureData_AddPostProcessing
                                      ((this->fields)._screenshotCamObject_5__2,mainCameraManager,
                                       LayerFlags__Enum_Water|LayerFlags__Enum_Default,
                                       (MethodInfo *)0x0);
                            iVar9 = (this->fields).width;
                            iVar10 = (this->fields).height;
                            pRVar19 = (RenderTexture *)
                                      FUN_?(TypeInfo__UnityEngine__RenderTexture);
                            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                            RenderTexture__ctor_9
                                      (pRVar19,iVar9,iVar10,0x18,RenderTextureFormat__Enum_Default,
                                       (MethodInfo *)0x0);
                            if (pRVar19 != (RenderTexture *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                              RenderTexture_set_antiAliasing(pRVar19,8,(MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::Texture::
                              Texture_set_anisoLevel((Texture *)pRVar19,0x10,(MethodInfo *)0x0);
                              bVar8 = iRam_? != 0;
                              (this->fields)._screenshotRenderTexture_5__4 = pRVar19;
                              if (bVar8) {
                                uVar4 = (uint)((ulonglong)
                                                &(this->fields)._screenshotRenderTexture_5__4 >> 0xc
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
                              pCVar18 = (this->fields)._screenshotCam_5__3;
                              if (pCVar18 != (Camera *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_set_targetTexture
                                          (pCVar18,(this->fields)._screenshotRenderTexture_5__4,
                                           (MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__CullingApiWrapper);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
                                if (obj != (CullingGroup *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar34 = (obj->fields).m_Ptr;
                                  if (pvVar34 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)obj,(MethodInfo *)0x0);
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
                                  pvVar34 = (void *)(*pcRam_?)(pvVar34);
                                  pCVar18 = (Camera *)
                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            Unmarshal::Unmarshal_UnmarshalUnityObject
                                                      (pvVar34,
                                                  UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                                                  );
                                  bVar8 = iRam_? != 0;
                                  (this->fields)._cullingCam_5__5 = pCVar18;
                                  if (bVar8) {
                                    uVar4 = (uint)((ulonglong)&(this->fields)._cullingCam_5__5 >>
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
                                  CullingApiWrapper::CullingApiWrapper_set_TargetCamera
                                            ((this->fields)._screenshotCam_5__3,(MethodInfo *)0x0);
                                  pOVar3 = (Object *)
                                            FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
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
                                  (this->fields).__1__state = 1;
                                  return 1;
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

void Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>d__1::
     ReviveScreenshotGenerator_GenerateTexture_d_1_System_Collections_IEnumerator_Reset
               (ReviveScreenshotGenerator_GenerateTexture_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__ReviveScreenshotGenerator___GenerateTexture_d__1__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

