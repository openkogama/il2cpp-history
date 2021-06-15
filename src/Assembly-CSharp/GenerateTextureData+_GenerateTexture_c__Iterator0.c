
/* Void Dispose() */

void Assembly-CSharp.dll::GenerateTextureData+<GenerateTexture>c__Iterator0::
     GenerateTextureData_GenerateTexture_c_Iterator0_Dispose
               (GenerateTextureData_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GenerateTextureData+<GenerateTexture>c__Iterator0::
     GenerateTextureData_GenerateTexture_c_Iterator0_MoveNext
               (GenerateTextureData_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField = 1;
    pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar3,(MethodInfo *)0x0);
    (pGVar1->fields)._screenshotCamObject___0 = pGVar3;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar3,iVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
      (pGVar1->fields)._skyboxManager___0 = pSVar5;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar7 = TypeInfo__SkyboxManager->static_fields;
        fVar8 = (pSVar7->defaultColor).r;
        fVar9 = (pSVar7->defaultColor).g;
        fVar10 = (pSVar7->defaultColor).b;
        fVar11 = (pSVar7->defaultColor).a;
      }
      else {
        pSVar5 = (pGVar1->fields)._skyboxManager___0;
        if (pSVar5 == (SkyboxManager *)0x0) goto code_?;
        fVar8 = (pSVar5->fields).currentColor.r;
        fVar9 = (pSVar5->fields).currentColor.g;
        fVar10 = (pSVar5->fields).currentColor.b;
        fVar11 = (pSVar5->fields).currentColor.a;
      }
      (pGVar1->fields)._color___0.r = fVar8;
      (pGVar1->fields)._color___0.g = fVar9;
      (pGVar1->fields)._color___0.b = fVar10;
      (pGVar1->fields)._color___0.a = fVar11;
      pGVar3 = (pGVar1->fields)._screenshotCamObject___0;
      if (pGVar3 != (GameObject *)0x0) {
        pCVar12 = (Camera *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            (pGVar3,
                             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                            );
        (pGVar1->fields)._screenshotCam___0 = pCVar12;
        pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((pCVar13 != (Camera *)0x0) &&
           (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                              (pCVar13,(MethodInfo *)0x0), pCVar12 != (Camera *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                    (pCVar12,value,(MethodInfo *)0x0);
          pCVar12 = (pGVar1->fields)._screenshotCam___0;
          if (pCVar12 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                      (pCVar12,(pGVar1->fields)._color___0,(MethodInfo *)0x0);
            pGVar3 = (pGVar1->fields)._screenshotCamObject___0;
            if (pGVar3 != (GameObject *)0x0) {
              pWVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_85
                                  (pGVar3,
                                   UnityEngine__Skybox_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Skybox>__
                                  );
              (pGVar1->fields)._skybox___0 = (Skybox *)pWVar14;
              pGVar3 = (pGVar1->fields)._screenshotCamObject___0;
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar3,
                           UnityEngine__FlareLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::FlareLayer>__
                          );
                this_01 = (pGVar1->fields)._skybox___0;
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (((this_03 != (MainCameraManager *)0x0) &&
                    (this_04 = (Skybox *)
                               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,
                                          (MethodInfo *)0x0), this_04 != (Skybox *)0x0)) &&
                   (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                                         (this_04,(MethodInfo *)0x0), this_01 != (Skybox *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                            (this_01,value_00,(MethodInfo *)0x0);
                  pCVar12 = (pGVar1->fields)._screenshotCam___0;
                  pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  if ((pCVar13 != (Camera *)0x0) &&
                     (this = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                       (pCVar13,(MethodInfo *)0x0), pCVar12 != (Camera *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              (pCVar12,(float)this,(MethodInfo *)0x0);
                    pCVar12 = (pGVar1->fields)._screenshotCam___0;
                    pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if ((pCVar13 != (Camera *)0x0) &&
                       (this = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                               UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                                         (pCVar13,(MethodInfo *)0x0), pCVar12 != (Camera *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                (pCVar12,(float)this,(MethodInfo *)0x0);
                      pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                          ((MethodInfo *)0x0);
                      if (pCVar12 != (Camera *)0x0) {
                        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                                           (pCVar12,(MethodInfo *)0x0);
                        this = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                               (_UNK_? / fVar8);
                        pCVar12 = (pGVar1->fields)._screenshotCam___0;
                        (pGVar1->fields)._height___0 = (int)(float)this;
                        pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                            ((MethodInfo *)0x0);
                        if ((pCVar13 != (Camera *)0x0) &&
                           (this = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                   Camera_get_nearClipPlane(pCVar13,(MethodInfo *)0x0),
                           pCVar12 != (Camera *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    (pCVar12,(float)this,(MethodInfo *)0x0);
                          pCVar12 = (pGVar1->fields)._screenshotCam___0;
                          (pGVar1->fields)._layers___0 = 0x1011;
                          this_05 = LayerUtil::LayerUtil_GetMask
                                              (LayerFlags__Enum_Player|LayerFlags__Enum_Water|
                                               LayerFlags__Enum_Default,(MethodInfo *)0x0);
                          pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,UnityEngine::Experimental::TerrainAPI::
                                   TerrainUtility+TerrainMap]::
                                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                             ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                               *)this_05.m_Mask,(MethodInfo *)0x0);
                          if (pCVar12 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                      (pCVar12,(int32_t)pOVar15,(MethodInfo *)0x0);
                            pGVar3 = (pGVar1->fields)._screenshotCamObject___0;
                            if (pGVar3 != (GameObject *)0x0) {
                              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                              pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_get_main((MethodInfo *)0x0);
                              if ((((pCVar12 != (Camera *)0x0) &&
                                   (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                             Component_1_get_gameObject
                                                       ((Component_1 *)pCVar12,(MethodInfo *)0x0),
                                   pGVar3 != (GameObject *)0x0)) &&
                                  (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                             GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
                                  pTVar17 != (Transform *)0x0)) &&
                                 (pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_position
                                                      ((Vector3 *)&stack0xffffffec,pTVar17,
                                                       (MethodInfo *)0x0),
                                 pTVar16 != (Transform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_position(pTVar16,*pVVar18,(MethodInfo *)0x0);
                                pGVar19 = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                                         (pGVar1->fields)._screenshotCamObject___0;
                                if (pGVar19 != (GenerateTextureData_GenerateTexture_c_Iterator0 *)0x0
                                   ) {
                                  method = (MethodInfo *)0x0;
                                  this = pGVar19;
                                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform
                                                      ((GameObject *)pGVar19,(MethodInfo *)0x0);
                                  method = (MethodInfo *)0x0;
                                  this = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                                         &UNK_?;
                                  pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                            Camera_get_main((MethodInfo *)0x0);
                                  if (((pCVar12 != (Camera *)0x0) &&
                                      (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_1_get_gameObject
                                                          ((Component_1 *)pCVar12,(MethodInfo *)0x0)
                                      , pGVar3 != (GameObject *)0x0)) &&
                                     ((pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                 ::GameObject_get_transform
                                                           (pGVar3,(MethodInfo *)0x0),
                                      pTVar17 != (Transform *)0x0 &&
                                      (pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                 ::Transform_get_rotation
                                                           ((Quaternion *)&stack0xffffffe8,pTVar17,
                                                            (MethodInfo *)0x0),
                                      pTVar16 != (Transform *)0x0)))) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_rotation(pTVar16,*pQVar20,(MethodInfo *)0x0);
                                    iVar4 = (pGVar1->fields)._height___0;
                                    pRVar21 = (RenderTexture *)func_?();
                                    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                    RenderTexture__ctor_6
                                              (pRVar21,0x398,iVar4,0x18,(MethodInfo *)0x0);
                                    (pGVar1->fields)._screenshotRenderTexture___0 = pRVar21;
                                    if (pRVar21 != (RenderTexture *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                      RenderTexture_set_antiAliasing(pRVar21,8,(MethodInfo *)0x0);
                                      pRVar21 = (pGVar1->fields)._screenshotRenderTexture___0;
                                      if (pRVar21 != (RenderTexture *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Texture::
                                        Texture_set_anisoLevel
                                                  ((Texture *)pRVar21,0x10,(MethodInfo *)0x0);
                                        pCVar12 = (pGVar1->fields)._screenshotCam___0;
                                        if (pCVar12 != (Camera *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_set_targetTexture
                                                    (pCVar12,(pGVar1->fields).
                                                             _screenshotRenderTexture___0,
                                                     (MethodInfo *)0x0);
                                          pOVar15 = (Object *)func_?();
                                          (pGVar1->fields)._current = pOVar15;
                                          if ((pGVar1->fields)._disposing != 0) {
                                            return 1;
                                          }
                                          (pGVar1->fields)._PC = 1;
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
  }
  else {
    if (iVar2 == 1) {
      this = (GenerateTextureData_GenerateTexture_c_Iterator0 *)0x0;
      pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pGVar1->fields)._current = pOVar15;
      if ((pGVar1->fields)._disposing != 0) {
        return 1;
      }
      (pGVar1->fields)._PC = 2;
      return 1;
    }
    if (iVar2 != 2) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((this->fields)._screenshotRenderTexture___0,(MethodInfo *)0x0);
    iVar4 = (pGVar1->fields)._height___0;
    pTVar22 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
              (pTVar22,0x398,iVar4,TextureFormat__Enum_RGB24,0,(MethodInfo *)0x0);
    (pGVar1->fields)._screenshotTexture___0 = pTVar22;
    fVar8 = (float)(pGVar1->fields)._height___0;
    fVar11 = 920.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
    func_?(&stack0xffffffe8);
    if (pTVar22 != (Texture2D *)0x0) {
      source.m_YMin = fVar10;
      source.m_XMin = fVar9;
      source.m_Width = fVar11;
      source.m_Height = fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (pTVar22,source,0,0,(MethodInfo *)0x0);
      pTVar22 = (pGVar1->fields)._screenshotTexture___0;
      if (pTVar22 != (Texture2D *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                  (pTVar22,(MethodInfo *)0x0);
        this_02 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                  ImageConversion_EncodeToPNG
                            ((pGVar1->fields)._screenshotTexture___0,(MethodInfo *)0x0);
        pGVar19 = (GenerateTextureData_GenerateTexture_c_Iterator0 *)
                 (pGVar1->fields).textureDataCallback;
        (pGVar1->fields)._bytes___0 = this_02;
        this = pGVar19;
        if ((this_02 != (Byte__Array *)0x0) &&
           (pOVar15 = mscorlib.dll::System::Array::Array_Clone((Array *)this_02,(MethodInfo *)0x0),
           pGVar19 != (GenerateTextureData_GenerateTexture_c_Iterator0 *)0x0)) {
          obj = (Dictionary_2_System_String_System_Object_ *)0x0;
          if ((pOVar15 == (Object *)0x0) ||
             (obj = (Dictionary_2_System_String_System_Object_ *)func_?(),
             obj != (Dictionary_2_System_String_System_Object_ *)0x0)) {
            mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
            String,System::Object]]::
            Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                      ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                        *)this,obj,
                       MethodInfo__System__Action<System::Byte_[]>__Invoke_System__Byte____);
            pCVar12 = (pGVar1->fields)._screenshotCam___0;
            if (pCVar12 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                        (pCVar12,(RenderTexture *)0x0,(MethodInfo *)0x0);
              pRVar21 = (pGVar1->fields)._screenshotRenderTexture___0;
              if (pRVar21 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                          (pRVar21,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                          ((RenderTexture *)0x0,(MethodInfo *)0x0);
                pGVar3 = (pGVar1->fields)._screenshotCamObject___0;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar3,(MethodInfo *)0x0);
                this_00 = (Component_1 *)(pGVar1->fields)._this;
                if (this_00 != (Component_1 *)0x0) {
                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject(this_00,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)pGVar3,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  TypeInfo__GenerateTextureData->static_fields->
                  _IsCreatingScreenShot_k__BackingField = 0;
                  (pGVar1->fields)._PC = -1;
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
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  bVar6 = (*pcVar23)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::GenerateTextureData+<GenerateTexture>c__Iterator0::
     GenerateTextureData_GenerateTexture_c_Iterator0_Reset
               (GenerateTextureData_GenerateTexture_c_Iterator0 *this,MethodInfo *method)

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

