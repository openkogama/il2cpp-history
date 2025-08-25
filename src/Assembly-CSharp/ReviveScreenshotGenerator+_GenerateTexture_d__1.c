
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
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar3,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar3,iVar4,(MethodInfo *)0x0);
      (pRVar1->fields)._screenshotCamObject_5__2 = pGVar3;
      func_?();
      method = (MethodInfo *)0x0;
      this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)&UNK_?;
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
        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
               MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
        if ((MainCameraManager *)this != (MainCameraManager *)0x0) {
          pCVar11 = (((MainCameraManager *)this)->fields).mainCamera;
          pCVar12 = (pRVar1->fields)._screenshotCam_5__3;
          value_03 = (float)(pRVar1->fields).width / (float)(pRVar1->fields).height;
          if ((pCVar11 != (Camera *)0x0) &&
             (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                                   (pCVar11,(MethodInfo *)0x0), pCVar12 != (Camera *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                      (pCVar12,value_00,(MethodInfo *)0x0);
            pCVar12 = (pRVar1->fields)._screenshotCam_5__3;
            if (pCVar12 != (Camera *)0x0) {
              value.g = fVar8;
              value.r = fVar7;
              value.b = fVar9;
              value.a = fVar10;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                        (pCVar12,value,(MethodInfo *)0x0);
              pGVar3 = (pRVar1->fields)._screenshotCamObject_5__2;
              if (pGVar3 != (GameObject *)0x0) {
                this_04 = (Skybox *)
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
                  pRVar13 = this;
                  this_01 = (Skybox *)(this->fields).cameraRot.y;
                  if ((this_01 != (Skybox *)0x0) &&
                     (value_01 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::
                                 Skybox_get_material(this_01,(MethodInfo *)0x0),
                     this_04 != (Skybox *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                              (this_04,value_01,(MethodInfo *)0x0);
                    this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                           (pRVar1->fields)._screenshotCam_5__3;
                    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                       (pCVar11,(MethodInfo *)0x0);
                    if (this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                ((Camera *)this,fVar7,(MethodInfo *)0x0);
                      pCVar12 = (pRVar1->fields)._screenshotCam_5__3;
                      if (pCVar12 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                  (pCVar12,value_03,(MethodInfo *)0x0);
                        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                               (pRVar1->fields)._screenshotCam_5__3;
                        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_nearClipPlane(pCVar11,(MethodInfo *)0x0);
                        if (this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    ((Camera *)this,fVar7,(MethodInfo *)0x0);
                          pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
                          ptr = mscorlib.dll::System::Threading::SemaphoreSlim::
                                SemaphoreSlim_GetResourceString((String *)0x11,(MethodInfo *)0x0);
                          value_02 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                     Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1
                                               ((Void *)ptr,(MethodInfo *)0x0);
                          if (pCVar11 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                      (pCVar11,(int32_t)value_02,(MethodInfo *)0x0);
                            this_02 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                                      (pRVar1->fields)._screenshotCam_5__3;
                            if (this_02 != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                              method = (MethodInfo *)0x0;
                              this = this_02;
                              pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)this_02,(MethodInfo *)0x0);
                              if (pTVar14 != (Transform *)0x0) {
                                pVVar15 = &(pRVar1->fields).cameraPos;
                                uVar16 = pVVar15->x;
                                uVar17 = pVVar15->y;
                                in_stack_18 = (undefined *)(pRVar1->fields).cameraPos.z;
                                this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)uVar16;
                                method = (MethodInfo *)uVar17;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_position(pTVar14,*pVVar15,(MethodInfo *)0x0);
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
                                             (MainCameraManager *)pRVar13,
                                             LayerFlags__Enum_Water|LayerFlags__Enum_Default,
                                             (MethodInfo *)0x0);
                                  iVar4 = (pRVar1->fields).width;
                                  iVar19 = (pRVar1->fields).height;
                                  pRVar13 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                                            func_?();
                                  this = pRVar13;
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture__ctor_10
                                            ((RenderTexture *)pRVar13,iVar4,iVar19,0x18,
                                             (MethodInfo *)0x0);
                                  if (pRVar13 !=
                                      (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                    RenderTexture_set_antiAliasing
                                              ((RenderTexture *)pRVar13,8,(MethodInfo *)0x0);
                                    UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                    Texture_set_anisoLevel
                                              ((Texture *)pRVar13,0x10,(MethodInfo *)0x0);
                                    (pRVar1->fields)._screenshotRenderTexture_5__4 =
                                         (RenderTexture *)pRVar13;
                                    func_?();
                                    pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
                                    if (pCVar11 != (Camera *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                      Camera_set_targetTexture
                                                (pCVar11,(pRVar1->fields).
                                                         _screenshotRenderTexture_5__4,
                                                 (MethodInfo *)0x0);
                                      if ((TypeInfo__CullingApiWrapper->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pCVar11 = CullingApiWrapper::
                                                CullingApiWrapper_get_TargetCamera
                                                          ((MethodInfo *)0x0);
                                      (pRVar1->fields)._cullingCam_5__5 = pCVar11;
                                      ppCStack20 = &(pRVar1->fields)._cullingCam_5__5;
                                      func_?();
                                      CullingApiWrapper::CullingApiWrapper_set_TargetCamera
                                                ((pRVar1->fields)._screenshotCam_5__3,
                                                 (MethodInfo *)0x0);
                                      this_05 = (UxmlObjectListAttributeDescription_1_System_Object_
                                                 *)func_?();
                                      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                      UxmlObjectListAttributeDescription`1[System::Object]::
                                      UxmlObjectListAttributeDescription_1_System_Object___ctor
                                                (this_05,(MethodInfo *)0x0);
                                      (pRVar1->fields).__2__current = (Object *)this_05;
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
      pOVar21 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pRVar1->fields).__2__current = pOVar21;
      func_?(&(pRVar1->fields).__2__current,pOVar21);
      (pRVar1->fields).__1__state = 2;
      return 1;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture_5__4,(MethodInfo *)0x0);
    iVar4 = (pRVar1->fields).width;
    iVar19 = (pRVar1->fields).height;
    pRVar13 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
              func_?(TypeInfo__UnityEngine__Texture2D);
    this = pRVar13;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              ((Texture2D *)pRVar13,iVar4,iVar19,TextureFormat__Enum_RGB24,0,(MethodInfo *)0x0);
    if (pRVar13 != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
      auVar22._4_4_ = (float)(pRVar1->fields).height;
      auVar22._0_4_ = (float)(pRVar1->fields).width;
      auVar22._8_8_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                ((Texture2D *)pRVar13,(Rect)(auVar22 << 0x40),0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                ((Texture2D *)pRVar13,(MethodInfo *)0x0);
      this_03 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                ImageConversion_EncodeToPNG((Texture2D *)pRVar13,(MethodInfo *)0x0);
      pAVar23 = (pRVar1->fields).textureDataCallback;
      if ((this_03 != (Byte__Array *)0x0) &&
         (pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                    PlayableBehaviour_Clone((PlayableBehaviour *)this_03,(MethodInfo *)0x0),
         pAVar23 != (Action_1_Byte_ *)0x0)) {
        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)TypeInfo__System__Byte;
        if ((pOVar21 != (Object *)0x0) && (iVar2 = func_?(), iVar2 == 0))
        goto code_?;
        (*(pAVar23->fields)._._.invoke_impl)();
        pCVar11 = (pRVar1->fields)._cullingCam_5__5;
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_06 = (Component *)&UNK_?;
        CullingApiWrapper::CullingApiWrapper_set_TargetCamera(pCVar11,(MethodInfo *)0x0);
        pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
        if (pCVar11 != (Camera *)0x0) {
          method = (MethodInfo *)0x0;
          this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar11,(RenderTexture *)0x0,(MethodInfo *)0x0);
          this_00 = (pRVar1->fields)._screenshotRenderTexture_5__4;
          if (this_00 != (RenderTexture *)0x0) {
            in_stack_18 = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                      (this_00,(MethodInfo *)0x0);
            in_stack_18 = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                      ((RenderTexture *)0x0,(MethodInfo *)0x0);
            pGVar3 = (pRVar1->fields)._screenshotCamObject_5__2;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar3,(MethodInfo *)0x0);
            if (this_06 != (Component *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_06,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
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
  pcVar24 = (code *)swi(3);
  bVar5 = (*pcVar24)();
  return bVar5;
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
  func_?(&
                  MethodInfo__ReviveScreenshotGenerator___GenerateTexture_d__1__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

