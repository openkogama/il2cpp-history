
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
      ppGVar4 = &(this->fields)._screenshotCamObject_5__2;
      *ppGVar4 = pGVar2;
      func_?();
      x = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar6 = TypeInfo__SkyboxManager->static_fields;
        auStack_7._0_4_ = (pSVar6->defaultColor).r;
        auStack_7._4_4_ = (pSVar6->defaultColor).g;
        fStack_8 = (pSVar6->defaultColor).b;
        fStack_9 = (pSVar6->defaultColor).a;
      }
      else {
        if (x == (SkyboxManager *)0x0) goto code_?;
        auStack_7._0_4_ = (x->fields).currentColor.r;
        auStack_7._4_4_ = (x->fields).currentColor.g;
        fStack_8 = (x->fields).currentColor.b;
        fStack_9 = (x->fields).currentColor.a;
      }
      if (*ppGVar4 != (GameObject *)0x0) {
        pCVar10 = (Camera *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (*ppGVar4,
                             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                            );
        ppCVar11 = &(this->fields)._screenshotCam_5__3;
        *ppCVar11 = pCVar10;
        func_?();
        pMStack_12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
        uVar13 = 0;
        puVar14 = &UNK_?;
        pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar10 != (Camera *)0x0) {
          pBStack_15 = (Byte__Array__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                                 (pCVar10,(MethodInfo *)0x0);
          pCStack_16 = *ppCVar11;
          uVar17 = 0;
          puVar18 = &UNK_?;
          pCVar19 = pCVar10;
          value_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                               (pCVar10,(MethodInfo *)0x0);
          if (pCStack_16 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                      (pCStack_16,value_00,(MethodInfo *)0x0);
            this_06 = *ppCVar11;
            if (this_06 != (Camera *)0x0) {
              uVar20 = 0;
              puVar21 = &UNK_?;
              value.g = (float)auStack_7._4_4_;
              value.r = (float)auStack_7._0_4_;
              value.b = fStack_8;
              value.a = fStack_9;
              fVar22 = (float)auStack_7._0_4_;
              fVar23 = (float)auStack_7._4_4_;
              fVar24 = fStack_8;
              fVar25 = fStack_9;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                        (this_06,value,(MethodInfo *)0x0);
              pGVar2 = *ppGVar4;
              if (pGVar2 != (GameObject *)0x0) {
                puVar26 = &UNK_?;
                pCStack_16 = (Camera *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar2,
                                       UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                      );
                this_07 = *ppGVar4;
                if (this_07 != (GameObject *)0x0) {
                  puVar27 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (this_07,
                             UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                            );
                  if ((pMStack_12 != (MainCameraManager *)0x0) &&
                     (this_01 = (pMStack_12->fields).skybox, this_01 != (Skybox *)0x0)) {
                    puVar28 = &UNK_?;
                    value_01 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                                         (this_01,(MethodInfo *)0x0);
                    if (pCStack_16 != (Camera *)0x0) {
                      puVar29 = &UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                                ((Skybox *)pCStack_16,value_01,(MethodInfo *)0x0);
                      pCStack_16 = *ppCVar11;
                      uVar30 = 0;
                      puVar31 = &UNK_?;
                      pCVar32 = pCVar10;
                      value_02 = (PostProcessLayer *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_fieldOfView(pCVar10,(MethodInfo *)0x0);
                      pPStack_33 = value_02;
                      if (pCStack_16 != (Camera *)0x0) {
                        puVar34 = &UNK_?;
                        pCVar35 = pCStack_16;
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                  (pCStack_16,(float)value_02,(MethodInfo *)0x0);
                        if (*ppCVar11 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                    (*ppCVar11,(float)pBStack_15,(MethodInfo *)0x0);
                          pPStack_33 = (PostProcessLayer *)*ppCVar11;
                          pCStack_16 = (Camera *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                      Camera_get_nearClipPlane(pCVar10,(MethodInfo *)0x0);
                          if (pPStack_33 != (PostProcessLayer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_nearClipPlane
                                      ((Camera *)pPStack_33,(float)pCStack_16,(MethodInfo *)0x0);
                            this_02 = *ppCVar11;
                            p_Var14 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                      Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1
                                                ((Void *)0x1011,(MethodInfo *)0x0);
                            p_Var14 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                      Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1
                                                ((Void *)p_Var14,(MethodInfo *)0x0);
                            if (this_02 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_cullingMask(this_02,(int32_t)p_Var14,(MethodInfo *)0x0);
                              pGVar36 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pCVar10,(MethodInfo *)0x0);
                              if ((((*ppGVar4 != (GameObject *)0x0) &&
                                   (pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(*ppGVar4,(MethodInfo *)0x0),
                                   pGVar36 != (GameObject *)0x0)) &&
                                  (pTVar38 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                             GameObject_get_transform(pGVar36,(MethodInfo *)0x0),
                                  pTVar38 != (Transform *)0x0)) &&
                                 (pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_position
                                                      ((Vector3 *)(auStack_7 + 4),pTVar38,
                                                       (MethodInfo *)0x0),
                                 pTVar37 != (Transform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_position(pTVar37,*pVVar39,(MethodInfo *)0x0);
                                if (*ppGVar4 != (GameObject *)0x0) {
                                  pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(*ppGVar4,(MethodInfo *)0x0);
                                  pTVar38 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar36,(MethodInfo *)0x0);
                                  if ((pTVar38 != (Transform *)0x0) &&
                                     (pQVar40 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_rotation
                                                          ((Quaternion *)auStack_7,pTVar38,
                                                           (MethodInfo *)0x0),
                                     pTVar37 != (Transform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_rotation(pTVar37,*pQVar40,(MethodInfo *)0x0);
                                    pGVar36 = *ppGVar4;
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
                                      fVar22 = _UNK_? / (float)pBStack_15;
                                      (this->fields)._height_5__4 = (int)fVar22;
                                      pRVar41 = (RenderTexture *)func_?();
                                      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                      RenderTexture__ctor_10
                                                (pRVar41,0x398,(int)fVar22,0x18,(MethodInfo *)0x0);
                                      if (pRVar41 != (RenderTexture *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                        RenderTexture_set_antiAliasing(pRVar41,8,(MethodInfo *)0x0);
                                        UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                        Texture_set_anisoLevel
                                                  ((Texture *)pRVar41,0x10,(MethodInfo *)0x0);
                                        ppRVar42 = &(this->fields)._screenshotRenderTexture_5__5;
                                        *ppRVar42 = pRVar41;
                                        func_?();
                                        pCVar10 = (this->fields)._screenshotCam_5__3;
                                        if (pCVar10 != (Camera *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_set_targetTexture
                                                    (pCVar10,*ppRVar42,(MethodInfo *)0x0);
                                          pOVar43 = (Object *)func_?();
                                          (this->fields).__2__current = pOVar43;
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
                                      pMVar44 = TypeInfo__MainCameraManager->static_fields;
                                      puVar45 = (undefined4 *)&stack0xffffff30;
                                      for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
                                        *puVar45 = *(undefined4 *)
                                                    &(pMVar44->CurrentPostProcessingSettings).
                                                     colorSettings;
                                        pMVar44 = (MainCameraManager__StaticFields *)
                                                  &(pMVar44->CurrentPostProcessingSettings).
                                                   colorSettings.postExposure;
                                        puVar45 = puVar45 + 1;
                                      }
                                      if ((pGVar36 != (GameObject *)0x0) &&
                                         (this_05 = (PostProcessLayer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_AddComponent_1
                                                              (pGVar36,
                                                  UnityEngine__Rendering__PostProcessing__PostProcessLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessLayer>__
                                                  ), pPStack_33 = this_05,
                                         this_05 != (PostProcessLayer *)0x0)) {
                                        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::
                                        PostProcessing::PostProcessLayer::PostProcessLayer_Init
                                                  (this_05,(pMStack_12->fields).postProcessResources
                                                   ,(MethodInfo *)0x0);
                                        pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar36,(MethodInfo *)0x0);
                                        (this_05->fields).volumeTrigger = pTVar37;
                                        func_?();
                                        p_Var14 = UnityEngine.CoreModule.dll::Unity::Collections::
                                                  LowLevel::Unsafe::UnsafeUtility::
                                                  UnsafeUtility_AsRef_1
                                                            ((Void *)0x1011,(MethodInfo *)0x0);
                                        (this_05->fields).volumeLayer.m_Mask = (int32_t)p_Var14;
                                        (this_05->fields).antialiasingMode = 0;
                                        (this_05->fields).stopNaNPropagation = 1;
                                        (this_05->fields).finalBlitToCameraTarget = 0;
                                        ppVolume = (PostProcessVolume *)
                                                   UnityEngine.CoreModule.dll::UnityEngine::
                                                   GameObject::GameObject_AddComponent_1
                                                             (pGVar36,
                                                  UnityEngine__Rendering__PostProcessing__PostProcessVolume_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessVolume>__
                                                  );
                                        if (ppVolume != (PostProcessVolume *)0x0) {
                                          (ppVolume->fields).isGlobal = 1;
                                          (ppVolume->fields).weight = 0.0;
                                          pPVar46 = (PostProcessProfile *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    ScriptableObject::
                                                    ScriptableObject_CreateInstance_1
                                                              (
                                                  UnityEngine__Rendering__PostProcessing__PostProcessProfile_MethodInfo__UnityEngine__ScriptableObject__CreateInstance<UnityEngine::Rendering::PostProcessing::PostProcessProfile>__
                                                  );
                                          (ppVolume->fields).m_InternalProfile = pPVar46;
                                          func_?();
                                          method_00 = (MethodInfo *)0x0;
                                          puVar45 = (undefined4 *)&stack0xffffff30;
                                          puVar47 = (undefined4 *)&stack0xfffffe1c;
                                          for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
                                            *puVar47 = *puVar45;
                                            puVar45 = puVar45 + 1;
                                            puVar47 = puVar47 + 1;
                                          }
                                          data.bloomSettings.color.b = (float)puVar14;
                                          auVar48 = in_stack_49._0_20_;
                                          data.colorSettings.colors = auVar48[0];
                                          data.colorSettings._1_3_ = auVar48._1_3_;
                                          data.colorSettings.postExposure = auVar48._4_4_;
                                          data.colorSettings.temperature = auVar48._8_4_;
                                          data.colorSettings.saturation = auVar48._12_4_;
                                          data.colorSettings.contrast = auVar48._16_4_;
                                          data.bloomSettings.bloom = in_stack_49[0x14];
                                          data.bloomSettings._1_3_ = in_stack_49._21_3_;
                                          data.bloomSettings.intensity = in_stack_49._24_4_;
                                          data.bloomSettings.softKnee = in_stack_49._28_4_;
                                          data.bloomSettings.diffusion = in_stack_49._32_4_;
                                          data.bloomSettings.color.r =
                                               (float)in_stack_49._36_4_;
                                          data.bloomSettings.color.g =
                                               (float)in_stack_49._40_4_;
                                          data.bloomSettings.color.a = (float)uVar13;
                                          data.ambientOcclusionSettings.ambientOcclusion =
                                               in_stack_50[0];
                                          data.ambientOcclusionSettings._1_3_ =
                                               in_stack_50._1_3_;
                                          data.ambientOcclusionSettings.intensity =
                                               in_stack_50._4_4_;
                                          data.ambientOcclusionSettings.thickness =
                                               in_stack_50._8_4_;
                                          data.ambientOcclusionSettings.color.r = (float)puVar18;
                                          data.ambientOcclusionSettings.color.g = (float)pCVar19;
                                          data.ambientOcclusionSettings.color.b = (float)uVar17;
                                          data.ambientOcclusionSettings.color.a = (float)puVar21;
                                          data.depthOfFieldSettings._0_4_ = this_06;
                                          data.depthOfFieldSettings.focusDistance = (int32_t)fVar22;
                                          data.depthOfFieldSettings.aperture = (int32_t)fVar23;
                                          data.depthOfFieldSettings.focalLength = (int32_t)fVar24;
                                          data.depthOfFieldSettings.maxBlurSize = (int32_t)fVar25;
                                          data.vignetteSettings._0_4_ = uVar20;
                                          data.vignetteSettings.intensity = in_stack_51._0_4_;
                                          data.vignetteSettings.smoothness = in_stack_51._4_4_
                                          ;
                                          data.vignetteSettings.roundness = in_stack_51._8_4_;
                                          data.vignetteSettings.color.r = (float)puVar26;
                                          data.vignetteSettings.color.g = (float)pGVar2;
                                          data.vignetteSettings.color.b = (float)puVar27;
                                          data.vignetteSettings.color.a = (float)this_07;
                                          data.vignetteSettings._32_4_ = puVar28;
                                          data.grainSettings._0_4_ = puVar29;
                                          data.grainSettings.intensity = (int32_t)puVar31;
                                          data.grainSettings.size = (int32_t)pCVar32;
                                          data.grainSettings.luminanceContribution = uVar30;
                                          data.lensDistortionSettings._0_4_ = in_stack_52;
                                          data.lensDistortionSettings.intensity = (int32_t)puVar34;
                                          data.lensDistortionSettings.xMultiplier = (int32_t)pCVar35
                                          ;
                                          data.lensDistortionSettings.yMultiplier =
                                               (int32_t)value_02;
                                          MainCameraManager::MainCameraManager_ApplyPostProcessing
                                                    (pPStack_33,ppVolume,data,method_00);
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
      pOVar43 = (Object *)func_?();
      (this->fields).__2__current = pOVar43;
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
    auStack_7._0_4_ = 0.0;
    auStack_7._4_4_ = 0.0;
    fStack_8 = 920.0;
    fStack_9 = (float)(this->fields)._height_5__4;
    if (this_03 != (Texture2D *)0x0) {
      auVar53 = ZEXT412(0x44660000) << 0x40;
      source.m_Height = fStack_9;
      source.m_XMin = (float)auVar53._0_4_;
      source.m_YMin = (float)auVar53._4_4_;
      source.m_Width = (float)auVar53._8_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_03,source,0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (this_03,(MethodInfo *)0x0);
      this_04 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                ImageConversion_EncodeToPNG(this_03,(MethodInfo *)0x0);
      pAVar54 = (this->fields).textureDataCallback;
      if ((this_04 != (Byte__Array *)0x0) &&
         (pOVar43 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                   PlayableBehaviour_Clone((PlayableBehaviour *)this_04,(MethodInfo *)0x0),
         pAVar54 != (Action_1_Byte_ *)0x0)) {
        pBStack_15 = TypeInfo__System__Byte;
        if ((pOVar43 != (Object *)0x0) && (iVar1 = func_?(), iVar1 == 0))
        goto code_?;
        (*(pAVar54->fields)._._.invoke_impl)();
        pCVar10 = (this->fields)._screenshotCam_5__3;
        if (pCVar10 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar10,(RenderTexture *)0x0,(MethodInfo *)0x0);
          pRVar41 = (this->fields)._screenshotRenderTexture_5__5;
          if (pRVar41 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                      (pRVar41,(MethodInfo *)0x0);
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
  pcVar55 = (code *)swi(3);
  bVar5 = (*pcVar55)();
  return bVar5;
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

