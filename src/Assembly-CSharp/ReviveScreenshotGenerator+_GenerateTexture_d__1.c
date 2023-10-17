
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>d__1::
     ReviveScreenshotGenerator_GenerateTexture_d_1_MoveNext
               (ReviveScreenshotGenerator_GenerateTexture_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    func_?(&
                    UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                   );
    func_?(&
                    UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__SkyboxManager);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                (pGVar3,(MethodInfo *)0x0);
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar3,iVar4,(MethodInfo *)0x0);
      (pRVar1->fields)._screenshotCamObject_5__2 = pGVar3;
      func_?();
      method = (MethodInfo *)&UNK_?;
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
        fVar7 = (pSVar6->defaultColor).r;
        fVar8 = (pSVar6->defaultColor).g;
        fVar9 = (pSVar6->defaultColor).b;
        fVar10 = (pSVar6->defaultColor).a;
      }
      else {
        if (x == (SkyboxManager *)0x0) goto code_?;
        fVar7 = (x->fields).currentColor.r;
        fVar8 = (x->fields).currentColor.g;
        fVar9 = (x->fields).currentColor.b;
        fVar10 = (x->fields).currentColor.a;
      }
      pGVar3 = (pRVar1->fields)._screenshotCamObject_5__2;
      if (pGVar3 != (GameObject *)0x0) {
        pCVar11 = (Camera *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar3,
                             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                            );
        (pRVar1->fields)._screenshotCam_5__3 = pCVar11;
        func_?();
        mainCameraManager =
             MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
        if (mainCameraManager != (MainCameraManager *)0x0) {
          iVar4 = (pRVar1->fields).width;
          pCVar11 = (mainCameraManager->fields).mainCamera;
          iVar12 = (pRVar1->fields).height;
          this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                 (pRVar1->fields)._screenshotCam_5__3;
          if ((pCVar11 != (Camera *)0x0) &&
             (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                                   (pCVar11,(MethodInfo *)0x0),
             this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                      ((Camera *)this,value_00,(MethodInfo *)0x0);
            pCVar13 = (pRVar1->fields)._screenshotCam_5__3;
            if (pCVar13 != (Camera *)0x0) {
              value.g = fVar8;
              value.r = fVar7;
              value.b = fVar9;
              value.a = fVar10;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                        (pCVar13,value,(MethodInfo *)0x0);
              pGVar3 = (pRVar1->fields)._screenshotCamObject_5__2;
              if (pGVar3 != (GameObject *)0x0) {
                this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_AddComponent_1
                                 (pGVar3,
                                  UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                 );
                pGVar3 = (pRVar1->fields)._screenshotCamObject_5__2;
                if (pGVar3 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar3,
                             UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                            );
                  this_00 = (mainCameraManager->fields).skybox;
                  if ((this_00 != (Skybox *)0x0) &&
                     (value_01 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::
                                 Skybox_get_material(this_00,(MethodInfo *)0x0),
                     this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                              ((Skybox *)this,value_01,(MethodInfo *)0x0);
                    this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                           (pRVar1->fields)._screenshotCam_5__3;
                    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                       (pCVar11,(MethodInfo *)0x0);
                    if (this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                ((Camera *)this,fVar7,(MethodInfo *)0x0);
                      pCVar13 = (pRVar1->fields)._screenshotCam_5__3;
                      if (pCVar13 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                  (pCVar13,(float)iVar4 / (float)iVar12,(MethodInfo *)0x0);
                        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                               (pRVar1->fields)._screenshotCam_5__3;
                        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_nearClipPlane(pCVar11,(MethodInfo *)0x0);
                        if (this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    ((Camera *)this,fVar7,(MethodInfo *)0x0);
                          this_01 = (MethodInfo *)(pRVar1->fields)._screenshotCam_5__3;
                          source_00 = mscorlib.dll::System::Threading::SemaphoreSlim::
                                      SemaphoreSlim_GetResourceString
                                                ((String *)0x11,(MethodInfo *)0x0);
                          value_02 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::
                                     Unsafe_AsRef_4((Void *)source_00,(MethodInfo *)0x0);
                          if (this_01 != (MethodInfo *)0x0) {
                            this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)&UNK_?;
                            method = this_01;
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                      ((Camera *)this_01,(int32_t)value_02,(MethodInfo *)0x0);
                            pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
                            if ((pCVar11 != (Camera *)0x0) &&
                               (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)pCVar11,(MethodInfo *)0x0),
                               pTVar14 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_position
                                        (pTVar14,(pRVar1->fields).cameraPos,(MethodInfo *)0x0);
                              pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
                              if ((pCVar11 != (Camera *)0x0) &&
                                 (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pCVar11,(MethodInfo *)0x0),
                                 pTVar14 != (Transform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_rotation
                                          (pTVar14,(pRVar1->fields).cameraRot,(MethodInfo *)0x0);
                                GenerateTextureData::GenerateTextureData_AddPostProcessing
                                          ((pRVar1->fields)._screenshotCamObject_5__2,
                                           mainCameraManager,
                                           LayerFlags__Enum_Water|LayerFlags__Enum_Default,
                                           (MethodInfo *)0x0);
                                this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                                       (pRVar1->fields).height;
                                iVar4 = (pRVar1->fields).width;
                                pRVar15 = (RenderTexture *)func_?();
                                if (pRVar15 != (RenderTexture *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture__ctor_10
                                            (pRVar15,iVar4,(int32_t)this,0x18,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture_set_antiAliasing(pRVar15,8,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                  Texture_set_anisoLevel((Texture *)pRVar15,0x10,(MethodInfo *)0x0);
                                  (pRVar1->fields)._screenshotRenderTexture_5__4 = pRVar15;
                                  func_?();
                                  pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
                                  if (pCVar11 != (Camera *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_set_targetTexture
                                              (pCVar11,(pRVar1->fields).
                                                       _screenshotRenderTexture_5__4,
                                               (MethodInfo *)0x0);
                                    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    pCVar11 = CullingApiWrapper::CullingApiWrapper_get_TargetCamera
                                                        ((MethodInfo *)0x0);
                                    (pRVar1->fields)._cullingCam_5__5 = pCVar11;
                                    func_?();
                                    CullingApiWrapper::CullingApiWrapper_set_TargetCamera
                                              ((pRVar1->fields)._screenshotCam_5__3,
                                               (MethodInfo *)0x0);
                                    this_04 = (TweenRunner_1_FloatTween_ *)func_?();
                                    if (this_04 != (TweenRunner_1_FloatTween_ *)0x0) {
                                      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                      TweenRunner`1[FloatTween]::TweenRunner_1_FloatTween___ctor
                                                (this_04,(MethodInfo *)0x0);
                                      (pRVar1->fields).__2__current = (Object *)this_04;
                                      func_?();
                                      (pRVar1->fields).__1__state = 1;
                                      return 1;
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
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0;
      pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pRVar1->fields).__2__current = pOVar16;
      func_?(&(pRVar1->fields).__2__current,pOVar16);
      (pRVar1->fields).__1__state = 2;
      return 1;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture_5__4,(MethodInfo *)0x0);
    this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)(pRVar1->fields).height;
    iVar4 = (pRVar1->fields).width;
    this_02 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
              func_?(TypeInfo__UnityEngine__Texture2D);
    if (this_02 != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
                ((Texture2D *)this_02,iVar4,(int32_t)this,TextureFormat__Enum_RGB24,0,
                 (MethodInfo *)0x0);
      fVar7 = (float)(pRVar1->fields).height;
      this_05 = (Component *)(float)(pRVar1->fields).width;
      fVar9 = 0.0;
      fVar8 = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                ((Vector4 *)&stack0xffffffe0,0.0,0.0,(float)this_05,fVar7,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0;
      source.m_YMin = fVar9;
      source.m_XMin = fVar8;
      source.m_Width = (float)this_05;
      source.m_Height = fVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                ((Texture2D *)this_02,source,0,0,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      this = this_02;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                ((Texture2D *)this_02,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      this = this_02;
      this_03 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                ImageConversion_EncodeToPNG((Texture2D *)this_02,(MethodInfo *)0x0);
      pAVar17 = (pRVar1->fields).textureDataCallback;
      if ((this_03 != (Byte__Array *)0x0) &&
         (pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                   PlayableBehaviour_Clone((PlayableBehaviour *)this_03,(MethodInfo *)0x0),
         pAVar17 != (Action_1_Byte_ *)0x0)) {
        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)TypeInfo__System__Byte;
        if ((pOVar16 == (Object *)0x0) || (iVar2 = func_?(), iVar2 != 0)) {
          (*(pAVar17->fields)._._.invoke_impl)();
          pCVar11 = (pRVar1->fields)._cullingCam_5__5;
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          CullingApiWrapper::CullingApiWrapper_set_TargetCamera(pCVar11,(MethodInfo *)0x0);
          pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
          if (pCVar11 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar11,(RenderTexture *)0x0,(MethodInfo *)0x0);
            pRVar15 = (pRVar1->fields)._screenshotRenderTexture_5__4;
            if (pRVar15 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                        (pRVar15,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                        ((RenderTexture *)0x0,(MethodInfo *)0x0);
              pGVar3 = (pRVar1->fields)._screenshotCamObject_5__2;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
              if (this_05 != (Component *)0x0) {
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject(this_05,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar3,(MethodInfo *)0x0);
                return 0;
              }
            }
          }
        }
        else {
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  bVar5 = (*pcVar18)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>d__1::
     ReviveScreenshotGenerator_GenerateTexture_d_1_System_Collections_IEnumerator_Reset
               (ReviveScreenshotGenerator_GenerateTexture_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__ReviveScreenshotGenerator___GenerateTexture_d__1__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

