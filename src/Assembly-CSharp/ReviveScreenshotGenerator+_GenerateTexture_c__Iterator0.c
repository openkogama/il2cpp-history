
/* Void Dispose() */

void Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
     ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_Dispose
               (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
     ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_MoveNext
               (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    (this->fields)._targetLayers___0 = 0x11;
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (pCVar3 != (Camera *)0x0) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                         (pCVar3,(MethodInfo *)0x0);
      (pRVar1->fields)._oldLayers___0 = iVar4;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar5 != (MainCameraManager *)0x0) {
        pCVar3 = (Camera *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar5,
                             (MethodInfo *)0x0);
        (pRVar1->fields)._mainCam___0 = pCVar3;
        pGVar6 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                  (pGVar6,(MethodInfo *)0x0);
        (pRVar1->fields)._screenshotCamObject___0 = pGVar6;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Default,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar6,iVar4,(MethodInfo *)0x0);
          pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
          (pRVar1->fields)._skyboxManager___0 = pSVar7;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pSVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar9 = TypeInfo__SkyboxManager->static_fields;
            fVar10 = (pSVar9->defaultColor).r;
            fVar11 = (pSVar9->defaultColor).g;
            fVar12 = (pSVar9->defaultColor).b;
            fVar13 = (pSVar9->defaultColor).a;
          }
          else {
            pSVar7 = (pRVar1->fields)._skyboxManager___0;
            if (pSVar7 == (SkyboxManager *)0x0) goto code_?;
            fVar10 = (pSVar7->fields).currentColor.r;
            fVar11 = (pSVar7->fields).currentColor.g;
            fVar12 = (pSVar7->fields).currentColor.b;
            fVar13 = (pSVar7->fields).currentColor.a;
          }
          (pRVar1->fields)._color___0.r = fVar10;
          (pRVar1->fields)._color___0.g = fVar11;
          (pRVar1->fields)._color___0.b = fVar12;
          (pRVar1->fields)._color___0.a = fVar13;
          iVar4 = (pRVar1->fields).width;
          iVar14 = (pRVar1->fields).height;
          pRVar15 = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)func_?();
          this = pRVar15;
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_6
                    ((RenderTexture *)pRVar15,iVar4,iVar14,0x18,(MethodInfo *)0x0);
          (pRVar1->fields)._screenshotRenderTexture___0 = (RenderTexture *)pRVar15;
          if (pRVar15 != (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                      ((RenderTexture *)pRVar15,8,(MethodInfo *)0x0);
            pRVar16 = (pRVar1->fields)._screenshotRenderTexture___0;
            if (pRVar16 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                        ((Texture *)pRVar16,0x10,(MethodInfo *)0x0);
              pGVar6 = (pRVar1->fields)._screenshotCamObject___0;
              if (pGVar6 != (GameObject *)0x0) {
                pCVar17 = (Camera *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_85
                                    (pGVar6,
                                     UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                    );
                pCVar3 = (pRVar1->fields)._mainCam___0;
                (pRVar1->fields)._screenshotCam___0 = pCVar17;
                if ((pCVar3 != (Camera *)0x0) &&
                   (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                                      (pCVar3,(MethodInfo *)0x0), pCVar17 != (Camera *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                            (pCVar17,value,(MethodInfo *)0x0);
                  pCVar3 = (pRVar1->fields)._screenshotCam___0;
                  if (pCVar3 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                              (pCVar3,(pRVar1->fields)._color___0,(MethodInfo *)0x0);
                    pCVar3 = (pRVar1->fields)._mainCam___0;
                    pCVar17 = (pRVar1->fields)._screenshotCam___0;
                    if ((pCVar3 != (Camera *)0x0) &&
                       (this = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)
                               UnityEngine.CoreModule.dll::UnityEngine::Camera::
                               Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0),
                       pCVar17 != (Camera *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                                (pCVar17,(float)this,(MethodInfo *)0x0);
                      pCVar3 = (pRVar1->fields)._screenshotCam___0;
                      if (pCVar3 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                  (pCVar3,(float)(pRVar1->fields).width /
                                           (float)(pRVar1->fields).height,(MethodInfo *)0x0);
                        pCVar3 = (pRVar1->fields)._mainCam___0;
                        pCVar17 = (pRVar1->fields)._screenshotCam___0;
                        if ((pCVar3 != (Camera *)0x0) &&
                           (this = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                   Camera_get_nearClipPlane(pCVar3,(MethodInfo *)0x0),
                           pCVar17 != (Camera *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    (pCVar17,(float)this,(MethodInfo *)0x0);
                          pCVar3 = (pRVar1->fields)._screenshotCam___0;
                          if ((pCVar3 != (Camera *)0x0) &&
                             (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_get_transform
                                                  ((Component_1 *)pCVar3,(MethodInfo *)0x0),
                             pTVar18 != (Transform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position
                                      (pTVar18,(pRVar1->fields).cameraPos,(MethodInfo *)0x0);
                            pCVar3 = (pRVar1->fields)._screenshotCam___0;
                            if ((pCVar3 != (Camera *)0x0) &&
                               (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_get_transform
                                                    ((Component_1 *)pCVar3,(MethodInfo *)0x0),
                               pTVar18 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_rotation
                                        (pTVar18,(pRVar1->fields).cameraRot,(MethodInfo *)0x0);
                              pCVar3 = (pRVar1->fields)._screenshotCam___0;
                              if (pCVar3 != (Camera *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_set_cullingMask
                                          (pCVar3,(pRVar1->fields)._targetLayers___0,
                                           (MethodInfo *)0x0);
                                pCVar3 = (pRVar1->fields)._screenshotCam___0;
                                if (pCVar3 != (Camera *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_set_targetTexture
                                            (pCVar3,(pRVar1->fields)._screenshotRenderTexture___0,
                                             (MethodInfo *)0x0);
                                  pGVar6 = (pRVar1->fields)._screenshotCamObject___0;
                                  if (pGVar6 != (GameObject *)0x0) {
                                    pWVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_AddComponent_85
                                                        (pGVar6,
                                                  UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                                  );
                                    (pRVar1->fields)._skybox___0 = (Skybox *)pWVar19;
                                    pGVar6 = (pRVar1->fields)._screenshotCamObject___0;
                                    if (pGVar6 != (GameObject *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_AddComponent_85
                                                (pGVar6,
                                                 UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                                                );
                                      this_02 = (pRVar1->fields)._skybox___0;
                                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0))
                                      {
                                        func_?(TypeInfo__MVGameControllerBase);
                                      }
                                      pMVar5 = MVGameControllerBase::
                                                MVGameControllerBase_get_MainCameraManager
                                                          ((MethodInfo *)0x0);
                                      if (((pMVar5 != (MainCameraManager *)0x0) &&
                                          (this_04 = (Skybox *)
                                                     UnityEngine.UI.dll::UnityEngine::UI::
                                                     CoroutineTween::
                                                                                                          
                                                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                                            ((
                                                  TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                                  pMVar5,(MethodInfo *)0x0),
                                          this_04 != (Skybox *)0x0)) &&
                                         (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Skybox
                                                     ::Skybox_get_material
                                                               (this_04,(MethodInfo *)0x0),
                                         this_02 != (Skybox *)0x0)) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Skybox::
                                        Skybox_set_material(this_02,value_00,(MethodInfo *)0x0);
                                        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.
                                                    methodPtr & 0x2000000) != 0) &&
                                           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
                                          func_?();
                                        }
                                        pCVar3 = CullingApiWrapper::
                                                  CullingApiWrapper_get_TargetCamera
                                                            ((MethodInfo *)0x0);
                                        (pRVar1->fields)._cullingCam___0 = pCVar3;
                                        CullingApiWrapper::CullingApiWrapper_set_TargetCamera
                                                  ((pRVar1->fields)._screenshotCam___0,
                                                   (MethodInfo *)0x0);
                                        this_05 = (
                                                  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1
                                                  *)func_?();
                                        WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
                                        WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                                                  (this_05,(MethodInfo *)0x0);
                                        (pRVar1->fields)._current = (Object *)this_05;
                                        if ((pRVar1->fields)._disposing != 0) {
                                          return 1;
                                        }
                                        (pRVar1->fields)._PC = 1;
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
  }
  else {
    if (iVar2 == 1) {
      this = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)0x0;
      pOVar20 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pRVar1->fields)._current = pOVar20;
      if ((pRVar1->fields)._disposing != 0) {
        return 1;
      }
      (pRVar1->fields)._PC = 2;
      return 1;
    }
    if (iVar2 != 2) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture___0,(MethodInfo *)0x0);
    iVar4 = (pRVar1->fields).width;
    iVar14 = (pRVar1->fields).height;
    pRVar15 = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)
             func_?(TypeInfo__UnityEngine__Texture2D);
    this = pRVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
              ((Texture2D *)pRVar15,iVar4,iVar14,TextureFormat__Enum_RGB24,0,(MethodInfo *)0x0);
    (pRVar1->fields)._screenshotTexture___0 = (Texture2D *)pRVar15;
    fVar10 = (float)(pRVar1->fields).height;
    fVar11 = (float)(pRVar1->fields).width;
    uVar21 = 0;
    uVar22 = 0;
    func_?(&stack0xffffffec);
    if (pRVar15 != (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)0x0) {
      source.m_YMin = (float)uVar21;
      source.m_XMin = (float)uVar22;
      source.m_Width = fVar11;
      source.m_Height = fVar10;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                ((Texture2D *)pRVar15,source,0,0,(MethodInfo *)0x0);
      this_00 = (pRVar1->fields)._screenshotTexture___0;
      if (this_00 != (Texture2D *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                  (this_00,(MethodInfo *)0x0);
        this_03 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                  ImageConversion_EncodeToPNG
                            ((pRVar1->fields)._screenshotTexture___0,(MethodInfo *)0x0);
        pRVar15 = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)
                 (pRVar1->fields).textureDataCallback;
        (pRVar1->fields)._bytes___0 = this_03;
        this = pRVar15;
        if ((this_03 != (Byte__Array *)0x0) &&
           (pOVar20 = mscorlib.dll::System::Array::Array_Clone((Array *)this_03,(MethodInfo *)0x0),
           pBVar23 = TypeInfo__System__Byte,
           pRVar15 != (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)0x0)) {
          obj = (Dictionary_2_System_String_System_Object_ *)0x0;
          if ((pOVar20 == (Object *)0x0) ||
             (obj = (Dictionary_2_System_String_System_Object_ *)func_?(pOVar20),
             obj != (Dictionary_2_System_String_System_Object_ *)0x0)) {
            mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
            String,System::Object]]::
            Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                      ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                        *)this,obj,
                       MethodInfo__System__Action<System::Byte_[]>__Invoke_System__Byte____);
            pCVar3 = (pRVar1->fields)._screenshotCam___0;
            if (pCVar3 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                        (pCVar3,(RenderTexture *)0x0,(MethodInfo *)0x0);
              pCVar3 = (pRVar1->fields)._cullingCam___0;
              if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
                func_?(TypeInfo__CullingApiWrapper);
              }
              CullingApiWrapper::CullingApiWrapper_set_TargetCamera(pCVar3,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                        ((RenderTexture *)0x0,(MethodInfo *)0x0);
              pRVar16 = (pRVar1->fields)._screenshotRenderTexture___0;
              if (pRVar16 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                          (pRVar16,(MethodInfo *)0x0);
                pGVar6 = (pRVar1->fields)._screenshotCamObject___0;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar6,(MethodInfo *)0x0);
                this_01 = (pRVar1->fields)._this;
                if (this_01 != (ReviveScreenshotGenerator *)0x0) {
                  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)pGVar6,(MethodInfo *)0x0);
                  (pRVar1->fields)._PC = -1;
                  return 0;
                }
              }
            }
          }
          else {
            func_?(pOVar20,pBVar23);
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  bVar8 = (*pcVar24)();
  return bVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
     ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_Reset
               (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object System.Collections.IEnumerator.get_Current() */

Object * Assembly-CSharp.dll::ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
         ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                   (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

{
  return (this->fields)._current;
}

