
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
    this_02 = (MethodInfo *)func_?(TypeInfo__UnityEngine__GameObject);
    this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)&UNK_?;
    method = this_02;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              ((GameObject *)this_02,(MethodInfo *)0x0);
    method = (MethodInfo *)StringLiteral_Default;
    this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)&UNK_?;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    if (this_02 != (MethodInfo *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                ((GameObject *)this_02,iVar3,(MethodInfo *)0x0);
      ppGVar4 = &(pRVar1->fields)._screenshotCamObject_5__2;
      *ppGVar4 = (GameObject *)this_02;
      func_?();
      x = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
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
      if (*ppGVar4 != (GameObject *)0x0) {
        pCVar11 = (Camera *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (*ppGVar4,
                             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                            );
        ppCVar12 = &(pRVar1->fields)._screenshotCam_5__3;
        *ppCVar12 = pCVar11;
        func_?();
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar13 != (MainCameraManager *)0x0) {
          iVar3 = (pRVar1->fields).width;
          this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)(pMVar13->fields).mainCamera;
          iVar14 = (pRVar1->fields).height;
          pCVar11 = *ppCVar12;
          if ((this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) &&
             (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                                   ((Camera *)this,(MethodInfo *)0x0), pCVar11 != (Camera *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                      (pCVar11,value_00,(MethodInfo *)0x0);
            if (*ppCVar12 != (Camera *)0x0) {
              value.g = fVar8;
              value.r = fVar7;
              value.b = fVar9;
              value.a = fVar10;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                        (*ppCVar12,value,(MethodInfo *)0x0);
              if (*ppGVar4 != (GameObject *)0x0) {
                this_03 = (Skybox *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (*ppGVar4,
                                     UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                    );
                if (*ppGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (*ppGVar4,
                             UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                            );
                  this_00 = (pMVar13->fields).skybox;
                  if ((this_00 != (Skybox *)0x0) &&
                     (value_01 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::
                                 Skybox_get_material(this_00,(MethodInfo *)0x0),
                     this_03 != (Skybox *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                              (this_03,value_01,(MethodInfo *)0x0);
                    pCVar11 = *ppCVar12;
                    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                       ((Camera *)this,(MethodInfo *)0x0);
                    if (pCVar11 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                (pCVar11,fVar7,(MethodInfo *)0x0);
                      if (*ppCVar12 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                  (*ppCVar12,(float)iVar3 / (float)iVar14,(MethodInfo *)0x0);
                        pCVar11 = *ppCVar12;
                        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                               UnityEngine.CoreModule.dll::UnityEngine::Camera::
                               Camera_get_nearClipPlane((Camera *)this,(MethodInfo *)0x0);
                        if (pCVar11 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    (pCVar11,(float)this,(MethodInfo *)0x0);
                          this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)*ppCVar12;
                          ptr = mscorlib.dll::System::Threading::SemaphoreSlim::
                                SemaphoreSlim_GetResourceString((String *)0x11,(MethodInfo *)0x0);
                          value_02 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                     Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1
                                               ((Void *)ptr,(MethodInfo *)0x0);
                          if (this != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                      ((Camera *)this,(int32_t)value_02,(MethodInfo *)0x0);
                            if ((*ppCVar12 != (Camera *)0x0) &&
                               (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)*ppCVar12,(MethodInfo *)0x0),
                               pTVar15 != (Transform *)0x0)) {
                              pVVar16 = &(pRVar1->fields).cameraPos;
                              pMVar13 = (MainCameraManager *)pVVar16->x;
                              this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_position(pTVar15,*pVVar16,(MethodInfo *)0x0);
                              if ((*ppCVar12 != (Camera *)0x0) &&
                                 (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)*ppCVar12,(MethodInfo *)0x0),
                                 pTVar15 != (Transform *)0x0)) {
                                method = (MethodInfo *)&UNK_?;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_rotation
                                          (pTVar15,(pRVar1->fields).cameraRot,(MethodInfo *)0x0);
                                GenerateTextureData::GenerateTextureData_AddPostProcessing
                                          (*ppGVar4,pMVar13,
                                           LayerFlags__Enum_Water|LayerFlags__Enum_Default,
                                           (MethodInfo *)0x0);
                                iVar3 = (pRVar1->fields).width;
                                iVar14 = (pRVar1->fields).height;
                                pRVar17 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                                          func_?();
                                this = pRVar17;
                                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                RenderTexture__ctor_10
                                          ((RenderTexture *)pRVar17,iVar3,iVar14,0x18,
                                           (MethodInfo *)0x0);
                                if (pRVar17 != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0)
                                {
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture_set_antiAliasing
                                            ((RenderTexture *)pRVar17,8,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                  Texture_set_anisoLevel((Texture *)pRVar17,0x10,(MethodInfo *)0x0);
                                  ppRVar18 = &(pRVar1->fields)._screenshotRenderTexture_5__4;
                                  *ppRVar18 = (RenderTexture *)pRVar17;
                                  func_?();
                                  pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
                                  if (pCVar11 != (Camera *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_set_targetTexture(pCVar11,*ppRVar18,(MethodInfo *)0x0);
                                    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    pCVar11 = CullingApiWrapper::CullingApiWrapper_get_TargetCamera
                                                        ((MethodInfo *)0x0);
                                    ppCStack19 = &(pRVar1->fields)._cullingCam_5__5;
                                    *ppCStack19 = pCVar11;
                                    func_?();
                                    CullingApiWrapper::CullingApiWrapper_set_TargetCamera
                                              ((pRVar1->fields)._screenshotCam_5__3,
                                               (MethodInfo *)0x0);
                                    this_04 = (UxmlObjectListAttributeDescription_1_System_Object_ *
                                              )func_?();
                                    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                    UxmlObjectListAttributeDescription`1[System::Object]::
                                    UxmlObjectListAttributeDescription_1_System_Object___ctor
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
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0;
      pOVar20 = (Object *)func_?(TypeInfo__System__Int32,&this);
      ppOVar21 = &(pRVar1->fields).__2__current;
      *ppOVar21 = pOVar20;
      func_?(ppOVar21,pOVar20);
      (pRVar1->fields).__1__state = 2;
      return 1;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture_5__4,(MethodInfo *)0x0);
    iVar3 = (pRVar1->fields).width;
    iVar14 = (pRVar1->fields).height;
    pRVar17 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
              func_?(TypeInfo__UnityEngine__Texture2D);
    this = pRVar17;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              ((Texture2D *)pRVar17,iVar3,iVar14,TextureFormat__Enum_RGB24,0,(MethodInfo *)0x0);
    if (pRVar17 != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
      auVar22._4_4_ = (float)(pRVar1->fields).height;
      auVar22._0_4_ = (float)(pRVar1->fields).width;
      auVar22._8_8_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                ((Texture2D *)pRVar17,(Rect)(auVar22 << 0x40),0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                ((Texture2D *)pRVar17,(MethodInfo *)0x0);
      this_01 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                ImageConversion_EncodeToPNG((Texture2D *)pRVar17,(MethodInfo *)0x0);
      pAVar23 = (pRVar1->fields).textureDataCallback;
      if ((this_01 != (Byte__Array *)0x0) &&
         (pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                    PlayableBehaviour_Clone((PlayableBehaviour *)this_01,(MethodInfo *)0x0),
         pAVar23 != (Action_1_Byte_ *)0x0)) {
        this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)TypeInfo__System__Byte;
        if ((pOVar20 != (Object *)0x0) && (iVar2 = func_?(), iVar2 == 0))
        goto code_?;
        (*(pAVar23->fields)._._.invoke_impl)();
        pCVar11 = (pRVar1->fields)._cullingCam_5__5;
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        CullingApiWrapper::CullingApiWrapper_set_TargetCamera(pCVar11,(MethodInfo *)0x0);
        pCVar11 = (pRVar1->fields)._screenshotCam_5__3;
        if (pCVar11 != (Camera *)0x0) {
          this_05 = (Component *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar11,(RenderTexture *)0x0,(MethodInfo *)0x0);
          pRVar17 = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)
                    (pRVar1->fields)._screenshotRenderTexture_5__4;
          if (pRVar17 != (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0) {
            method = (MethodInfo *)0x0;
            this = pRVar17;
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                      ((RenderTexture *)pRVar17,(MethodInfo *)0x0);
            method = (MethodInfo *)0x0;
            this = (ReviveScreenshotGenerator_GenerateTexture_d_1 *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                      ((RenderTexture *)0x0,(MethodInfo *)0x0);
            pGVar24 = (pRVar1->fields)._screenshotCamObject_5__2;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar24,(MethodInfo *)0x0);
            if (this_05 != (Component *)0x0) {
              pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_05,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar24,(MethodInfo *)0x0);
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
  pcVar25 = (code *)swi(3);
  bVar5 = (*pcVar25)();
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

