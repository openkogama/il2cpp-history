
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GenerateTextureData+<GenerateTexture>d__5::
     GenerateTextureData_GenerateTexture_d_5_MoveNext
               (GenerateTextureData_GenerateTexture_d_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField = 1;
    pGVar2 = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar2,(MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar2,iVar3,(MethodInfo *)0x0);
      (this->fields)._screenshotCamObject_5__2 = pGVar2;
      func_?();
      x = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar5 = TypeInfo__SkyboxManager->static_fields;
        auStack_6._0_4_ = (pSVar5->defaultColor).r;
        auStack_6._4_4_ = (pSVar5->defaultColor).g;
        fStack_7 = (pSVar5->defaultColor).b;
        fStack_8 = (pSVar5->defaultColor).a;
      }
      else {
        if (x == (SkyboxManager *)0x0) goto code_?;
        auStack_6._0_4_ = (x->fields).currentColor.r;
        auStack_6._4_4_ = (x->fields).currentColor.g;
        fStack_7 = (x->fields).currentColor.b;
        fStack_8 = (x->fields).currentColor.a;
      }
      pGVar2 = (this->fields)._screenshotCamObject_5__2;
      if (pGVar2 != (GameObject *)0x0) {
        pCVar9 = (Camera *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar2,
                             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                            );
        (this->fields)._screenshotCam_5__3 = pCVar9;
        func_?();
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        uVar11 = 0;
        puVar12 = &UNK_?;
        pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar9 != (Camera *)0x0) {
          pBStack_13 = (Byte__Array__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                                (pCVar9,(MethodInfo *)0x0);
          pCVar14 = (this->fields)._screenshotCam_5__3;
          uVar15 = 0;
          puVar16 = &UNK_?;
          pCVar17 = pCVar9;
          value_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                               (pCVar9,(MethodInfo *)0x0);
          if (pCVar14 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                      (pCVar14,value_00,(MethodInfo *)0x0);
            pCVar14 = (this->fields)._screenshotCam_5__3;
            if (pCVar14 != (Camera *)0x0) {
              uVar18 = 0;
              puVar19 = &UNK_?;
              value.g = (float)auStack_6._4_4_;
              value.r = (float)auStack_6._0_4_;
              value.b = fStack_7;
              value.a = fStack_8;
              fVar20 = (float)auStack_6._0_4_;
              fVar21 = (float)auStack_6._4_4_;
              fVar22 = fStack_7;
              fVar23 = fStack_8;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                        (pCVar14,value,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._screenshotCamObject_5__2;
              if (pGVar2 != (GameObject *)0x0) {
                puVar24 = &UNK_?;
                this_05 = (Skybox *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (pGVar2,
                                     UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                    );
                this_08 = (this->fields)._screenshotCamObject_5__2;
                if (this_08 != (GameObject *)0x0) {
                  puVar25 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (this_08,
                             UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                            );
                  if ((pMVar10 != (MainCameraManager *)0x0) &&
                     (this_01 = (pMVar10->fields).skybox, this_01 != (Skybox *)0x0)) {
                    puVar26 = &UNK_?;
                    value_01 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                                         (this_01,(MethodInfo *)0x0);
                    if (this_05 != (Skybox *)0x0) {
                      puVar27 = &UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                                (this_05,value_01,(MethodInfo *)0x0);
                      this_09 = (this->fields)._screenshotCam_5__3;
                      uVar28 = 0;
                      puVar29 = &UNK_?;
                      pCVar30 = pCVar9;
                      value_02 = (PostProcessLayer *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_fieldOfView(pCVar9,(MethodInfo *)0x0);
                      pPStack_31 = value_02;
                      if (this_09 != (Camera *)0x0) {
                        puVar32 = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                  (this_09,(float)value_02,(MethodInfo *)0x0);
                        pCVar33 = (this->fields)._screenshotCam_5__3;
                        if (pCVar33 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                    (pCVar33,(float)pBStack_13,(MethodInfo *)0x0);
                          pCVar33 = (this->fields)._screenshotCam_5__3;
                          pPStack_31 = (PostProcessLayer *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                      Camera_get_nearClipPlane(pCVar9,(MethodInfo *)0x0);
                          if (pCVar33 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_nearClipPlane(pCVar33,(float)pPStack_31,(MethodInfo *)0x0);
                            pCVar33 = (this->fields)._screenshotCam_5__3;
                            p_Var14 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                      Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1
                                                ((Void *)0x1011,(MethodInfo *)0x0);
                            p_Var14 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                      Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1
                                                ((Void *)p_Var14,(MethodInfo *)0x0);
                            if (pCVar33 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_cullingMask(pCVar33,(int32_t)p_Var14,(MethodInfo *)0x0);
                              this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pCVar9,(MethodInfo *)0x0);
                              pGVar34 = (this->fields)._screenshotCamObject_5__2;
                              if ((((pGVar34 != (GameObject *)0x0) &&
                                   (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(pGVar34,(MethodInfo *)0x0),
                                   this_06 != (GameObject *)0x0)) &&
                                  (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                             GameObject_get_transform(this_06,(MethodInfo *)0x0),
                                  pTVar36 != (Transform *)0x0)) &&
                                 (pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_position
                                                      ((Vector3 *)(auStack_6 + 4),pTVar36,
                                                       (MethodInfo *)0x0),
                                 pTVar35 != (Transform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_position(pTVar35,*pVVar37,(MethodInfo *)0x0);
                                pGVar34 = (this->fields)._screenshotCamObject_5__2;
                                if (pGVar34 != (GameObject *)0x0) {
                                  pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar34,(MethodInfo *)0x0);
                                  pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(this_06,(MethodInfo *)0x0);
                                  if ((pTVar36 != (Transform *)0x0) &&
                                     (pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_rotation
                                                          ((Quaternion *)auStack_6,pTVar36,
                                                           (MethodInfo *)0x0),
                                     pTVar35 != (Transform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_rotation(pTVar35,*pQVar38,(MethodInfo *)0x0);
                                    pPStack_31 = (PostProcessLayer *)
                                                (this->fields)._screenshotCamObject_5__2;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      func_?();
                                      func_?();
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    if (TypeInfo__MainCameraManager->static_fields->
                                        gameHasCameraEffects == 0) {
code_?:
                                      fVar20 = _UNK_? / (float)pBStack_13;
                                      (this->fields)._height_5__4 = (int)fVar20;
                                      pRVar39 = (RenderTexture *)func_?();
                                      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                      RenderTexture__ctor_10
                                                (pRVar39,0x398,(int)fVar20,0x18,(MethodInfo *)0x0);
                                      if (pRVar39 != (RenderTexture *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                        RenderTexture_set_antiAliasing(pRVar39,8,(MethodInfo *)0x0);
                                        UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                        Texture_set_anisoLevel
                                                  ((Texture *)pRVar39,0x10,(MethodInfo *)0x0);
                                        (this->fields)._screenshotRenderTexture_5__5 = pRVar39;
                                        func_?();
                                        pCVar9 = (this->fields)._screenshotCam_5__3;
                                        if (pCVar9 != (Camera *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_set_targetTexture
                                                    (pCVar9,(this->fields).
                                                             _screenshotRenderTexture_5__5,
                                                     (MethodInfo *)0x0);
                                          pOVar40 = (Object *)func_?();
                                          (this->fields).__2__current = pOVar40;
                                          func_?();
                                          (this->fields).__1__state = 1;
                                          return 1;
                                        }
                                      }
                                    }
                                    else {
                                      if ((TypeInfo__MainCameraManager->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pPVar41 = &TypeInfo__MainCameraManager->static_fields->
                                                 CurrentPostProcessingSettings;
                                      puVar42 = (undefined4 *)&stack0xffffff38;
                                      for (iVar1 = 0x2a; this_02 = pPStack_31, iVar1 != 0;
                                          iVar1 = iVar1 + -1) {
                                        *puVar42 = *(undefined4 *)&pPVar41->colorSettings;
                                        pPVar41 = (PostProcessingSettings *)
                                                  &(pPVar41->colorSettings).postExposure;
                                        puVar42 = puVar42 + 1;
                                      }
                                      if ((pPStack_31 != (PostProcessLayer *)0x0) &&
                                         (this_07 = (PostProcessLayer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_AddComponent_1
                                                              ((GameObject *)pPStack_31,
                                                                                                                              
                                                  UnityEngine__Rendering__PostProcessing__PostProcessLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessLayer>__
                                                  ), pPStack_31 = this_07,
                                         this_07 != (PostProcessLayer *)0x0)) {
                                        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::
                                        PostProcessing::PostProcessLayer::PostProcessLayer_Init
                                                  (this_07,(pMVar10->fields).postProcessResources,
                                                   (MethodInfo *)0x0);
                                        pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            ((GameObject *)this_02,(MethodInfo *)0x0
                                                            );
                                        (this_07->fields).volumeTrigger = pTVar35;
                                        func_?();
                                        p_Var14 = UnityEngine.CoreModule.dll::Unity::Collections::
                                                  LowLevel::Unsafe::UnsafeUtility::
                                                  UnsafeUtility_AsRef_1
                                                            ((Void *)0x1011,(MethodInfo *)0x0);
                                        (this_07->fields).volumeLayer.m_Mask = (int32_t)p_Var14;
                                        (this_07->fields).antialiasingMode = 0;
                                        (this_07->fields).stopNaNPropagation = 1;
                                        (this_07->fields).finalBlitToCameraTarget = 0;
                                        ppVolume = (PostProcessVolume *)
                                                   UnityEngine.CoreModule.dll::UnityEngine::
                                                   GameObject::GameObject_AddComponent_1
                                                             ((GameObject *)this_02,
                                                                                                                            
                                                  UnityEngine__Rendering__PostProcessing__PostProcessVolume_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessVolume>__
                                                  );
                                        if (ppVolume != (PostProcessVolume *)0x0) {
                                          (ppVolume->fields).isGlobal = 1;
                                          (ppVolume->fields).weight = 0.0;
                                          pPVar43 = (PostProcessProfile *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    ScriptableObject::
                                                    ScriptableObject_CreateInstance_1
                                                              (
                                                  UnityEngine__Rendering__PostProcessing__PostProcessProfile_MethodInfo__UnityEngine__ScriptableObject__CreateInstance<UnityEngine::Rendering::PostProcessing::PostProcessProfile>__
                                                  );
                                          (ppVolume->fields).m_InternalProfile = pPVar43;
                                          func_?();
                                          method_00 = (MethodInfo *)0x0;
                                          puVar42 = (undefined4 *)&stack0xffffff38;
                                          puVar44 = (undefined4 *)&stack0xfffffe24;
                                          for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
                                            *puVar44 = *puVar42;
                                            puVar42 = puVar42 + 1;
                                            puVar44 = puVar44 + 1;
                                          }
                                          data.bloomSettings.color.b = (float)puVar12;
                                          auVar45 = in_stack_46._0_20_;
                                          data.colorSettings.colors = auVar45[0];
                                          data.colorSettings._1_3_ = auVar45._1_3_;
                                          data.colorSettings.postExposure = auVar45._4_4_;
                                          data.colorSettings.temperature = auVar45._8_4_;
                                          data.colorSettings.saturation = auVar45._12_4_;
                                          data.colorSettings.contrast = auVar45._16_4_;
                                          data.bloomSettings.bloom = in_stack_46[0x14];
                                          data.bloomSettings._1_3_ = in_stack_46._21_3_;
                                          data.bloomSettings.intensity = in_stack_46._24_4_;
                                          data.bloomSettings.softKnee = in_stack_46._28_4_;
                                          data.bloomSettings.diffusion = in_stack_46._32_4_;
                                          data.bloomSettings.color.r =
                                               (float)in_stack_46._36_4_;
                                          data.bloomSettings.color.g =
                                               (float)in_stack_46._40_4_;
                                          data.bloomSettings.color.a = (float)uVar11;
                                          data.ambientOcclusionSettings.ambientOcclusion =
                                               in_stack_47[0];
                                          data.ambientOcclusionSettings._1_3_ =
                                               in_stack_47._1_3_;
                                          data.ambientOcclusionSettings.intensity =
                                               in_stack_47._4_4_;
                                          data.ambientOcclusionSettings.thickness =
                                               in_stack_47._8_4_;
                                          data.ambientOcclusionSettings.color.r = (float)puVar16;
                                          data.ambientOcclusionSettings.color.g = (float)pCVar17;
                                          data.ambientOcclusionSettings.color.b = (float)uVar15;
                                          data.ambientOcclusionSettings.color.a = (float)puVar19;
                                          data.depthOfFieldSettings._0_4_ = pCVar14;
                                          data.depthOfFieldSettings.focusDistance = (int32_t)fVar20;
                                          data.depthOfFieldSettings.aperture = (int32_t)fVar21;
                                          data.depthOfFieldSettings.focalLength = (int32_t)fVar22;
                                          data.depthOfFieldSettings.maxBlurSize = (int32_t)fVar23;
                                          data.vignetteSettings._0_4_ = uVar18;
                                          data.vignetteSettings.intensity = in_stack_48._0_4_;
                                          data.vignetteSettings.smoothness = in_stack_48._4_4_
                                          ;
                                          data.vignetteSettings.roundness = in_stack_48._8_4_;
                                          data.vignetteSettings.color.r = (float)puVar24;
                                          data.vignetteSettings.color.g = (float)pGVar2;
                                          data.vignetteSettings.color.b = (float)puVar25;
                                          data.vignetteSettings.color.a = (float)this_08;
                                          data.vignetteSettings._32_4_ = puVar26;
                                          data.grainSettings._0_4_ = puVar27;
                                          data.grainSettings.intensity = (int32_t)puVar29;
                                          data.grainSettings.size = (int32_t)pCVar30;
                                          data.grainSettings.luminanceContribution = uVar28;
                                          data.lensDistortionSettings._0_4_ = in_stack_49;
                                          data.lensDistortionSettings.intensity = (int32_t)puVar32;
                                          data.lensDistortionSettings.xMultiplier = (int32_t)this_09
                                          ;
                                          data.lensDistortionSettings.yMultiplier =
                                               (int32_t)value_02;
                                          MainCameraManager::MainCameraManager_ApplyPostProcessing
                                                    (pPStack_31,ppVolume,data,method_00);
                                          goto code_?;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      pOVar40 = (Object *)func_?();
      (this->fields).__2__current = pOVar40;
      func_?();
      (this->fields).__1__state = 2;
      return 1;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture_5__5,(MethodInfo *)0x0);
    iVar3 = (this->fields)._height_5__4;
    this_03 = (Texture2D *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              (this_03,0x398,iVar3,TextureFormat__Enum_RGB24,0,(MethodInfo *)0x0);
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    fStack_7 = 920.0;
    fStack_8 = (float)(this->fields)._height_5__4;
    if (this_03 != (Texture2D *)0x0) {
      auVar50 = ZEXT412(0x44660000) << 0x40;
      source.m_Height = fStack_8;
      source.m_XMin = (float)auVar50._0_4_;
      source.m_YMin = (float)auVar50._4_4_;
      source.m_Width = (float)auVar50._8_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_03,source,0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (this_03,(MethodInfo *)0x0);
      this_04 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                ImageConversion_EncodeToPNG(this_03,(MethodInfo *)0x0);
      pAVar51 = (this->fields).textureDataCallback;
      if ((this_04 != (Byte__Array *)0x0) &&
         (pOVar40 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                   PlayableBehaviour_Clone((PlayableBehaviour *)this_04,(MethodInfo *)0x0),
         pAVar51 != (Action_1_Byte_ *)0x0)) {
        pBStack_13 = TypeInfo__System__Byte;
        if ((pOVar40 != (Object *)0x0) && (iVar1 = func_?(), iVar1 == 0))
        goto code_?;
        (*(pAVar51->fields)._._.invoke_impl)();
        pCVar9 = (this->fields)._screenshotCam_5__3;
        if (pCVar9 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar9,(RenderTexture *)0x0,(MethodInfo *)0x0);
          pRVar39 = (this->fields)._screenshotRenderTexture_5__5;
          if (pRVar39 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                      (pRVar39,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                      ((RenderTexture *)0x0,(MethodInfo *)0x0);
            pGVar2 = (this->fields)._screenshotCamObject_5__2;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar2,(MethodInfo *)0x0);
            if (this_00 != (GenerateTextureData *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar2,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
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
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar52 = (code *)swi(3);
  bVar4 = (*pcVar52)();
  return bVar4;
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
  func_?(&
                  MethodInfo__GenerateTextureData___GenerateTexture_d__5__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

