
/* Void ActivatePreview() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_ActivatePreview
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DeactivatePreview() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_DeactivatePreview
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (this->fields).rootObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   Int32, GameObject) */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_Initialize
               (SpawnRolePreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 cameraOffset,Transform *previewSpawnRoleRoot,Vector3 previewPosition,
               String *name,int32_t spawnRoleId,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&::StringLiteral_Preview);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Preview__0__RenderCam);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (previewSpawnRoleRoot != (Transform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)previewSpawnRoleRoot,(MethodInfo *)0x0);
    (this->fields).rootObject = pGVar1;
    func_?(&(this->fields).rootObject,pGVar1);
    (this->fields).previewCamOffset.x = cameraOffset.x;
    (this->fields).previewCamOffset.y = cameraOffset.y;
    (this->fields).previewCamOffset.z = cameraOffset.z;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,previewSpawnRoleRoot,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar1,pSVar3,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (::StringLiteral_Preview,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar1,iVar4,(MethodInfo *)0x0);
          pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                    RenderTexture_GetTemporary_4
                              (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                               RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
          (this->fields).previewTexture = pRVar5;
          func_?(&(this->fields).previewTexture,pRVar5);
          pRVar5 = (this->fields).previewTexture;
          if (pRVar5 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)pRVar5,name,(MethodInfo *)0x0);
            pRVar5 = (this->fields).previewTexture;
            if (pRVar5 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)pRVar5,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              pRVar5 = (this->fields).previewTexture;
              if (pRVar5 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)pRVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar6 = (this->fields).previewCam;
                if (pCVar6 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar6,(this->fields).previewTexture,(MethodInfo *)0x0);
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  func_?(&(this->fields)._PreviewGameObject_k__BackingField,
                                  woGameObjectCopy);
                  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                      ((Int32 *)&spawnRoleId,(MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                      (StringLiteral_Preview_,name,::StringLiteral__,pSVar3,
                                       (MethodInfo *)0x0);
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                              ((Object_1 *)pGVar1,pSVar3,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                    if ((pGVar1 != (GameObject *)0x0) &&
                       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                       pTVar2 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                (pTVar2,previewSpawnRoleRoot,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                      if (pGVar1 != (GameObject *)0x0) {
                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__UnityEngine__Quaternion);
                          cRam_? = '\x01';
                        }
                        if (pTVar2 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation
                                    (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->
                                             identityQuaternion,(MethodInfo *)0x0);
                          pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                          if ((pGVar1 != (GameObject *)0x0) &&
                             (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                             pTVar2 != (Transform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position(pTVar2,previewPosition,(MethodInfo *)0x0);
                            pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                            if (pGVar1 != (GameObject *)0x0) {
                              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                              uVar7._0_4_ = (this->fields).pivotPoint.x;
                              uVar7._4_4_ = (this->fields).pivotPoint.y;
                              fVar8 = (this->fields).pivotPoint.z;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              if (pTVar2 != (Transform *)0x0) {
                                point.z = fVar8;
                                point.x = (float)(int)uVar7;
                                point.y = (float)(int)((ulonglong)uVar7 >> 0x20);
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_RotateAround
                                          (pTVar2,point,
                                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                           180.0,(MethodInfo *)0x0);
                                pCVar6 = (this->fields).previewCam;
                                if (pCVar6 != (Camera *)0x0) {
                                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pCVar6,(MethodInfo *)0x0);
                                  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if ((pGVar1 != (GameObject *)0x0) &&
                                     (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar1,(MethodInfo *)0x0),
                                     pTVar9 != (Transform *)0x0)) {
                                    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_position
                                                        ((Vector3 *)&stack0xfffffff0,pTVar9,
                                                         (MethodInfo *)0x0);
                                    uVar11 = pVVar10->x;
                                    uVar12 = pVVar10->y;
                                    uVar13 = (this->fields).previewCamOffset.x;
                                    uVar14 = (this->fields).previewCamOffset.y;
                                    if (pTVar2 != (Transform *)0x0) {
                                      value.y = (float)uVar14 + (float)uVar12;
                                      value.x = (float)uVar13 + (float)uVar11;
                                      value.z = (this->fields).previewCamOffset.z + pVVar10->z;
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_position(pTVar2,value,(MethodInfo *)0x0);
                                      pGVar1 = (this->fields).blobShadowPrefab;
                                      if ((TypeInfo__UnityEngine__Object->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pGVar1 = (GameObject *)
                                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                Object_1_Instantiate_4
                                                          ((Object *)pGVar1,
                                                                                                                      
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                      if (pGVar1 != (GameObject *)0x0) {
                                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar1,(MethodInfo *)0x0);
                                        this_00 = (this->fields)._PreviewGameObject_k__BackingField;
                                        if ((this_00 != (GameObject *)0x0) &&
                                           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (this_00,(MethodInfo *)0x0),
                                           pTVar2 != (Transform *)0x0)) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_SetParent_1(pTVar2,pTVar9,0,(MethodInfo *)0x0)
                                          ;
                                          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar1,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            func_?(&TypeInfo__UnityEngine__Vector3);
                                            cRam_? = '\x01';
                                          }
                                          if (pTVar2 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_localPosition
                                                      (pTVar2,TypeInfo__UnityEngine__Vector3->
                                                               static_fields->zeroVector,
                                                       (MethodInfo *)0x0);
                                            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar1,(MethodInfo *)0x0);
                                            if (pTVar2 != (Transform *)0x0) {
                                              value_00.z = 0.2;
                                              value_00.x = 0.2;
                                              value_00.y = 0.1;
                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_set_localScale
                                                        (pTVar2,value_00,(MethodInfo *)0x0);
                                              pGVar1 = (this->fields).
                                                        _PreviewGameObject_k__BackingField;
                                              if (pGVar1 != (GameObject *)0x0) {
                                                pMVar15 = (MVBodyObject *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentInChildren_1
                                                                    (pGVar1,
                                                  MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                                                  );
                                                (this->fields).body = pMVar15;
                                                func_?();
                                                pGVar1 = (this->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if (pGVar1 != (GameObject *)0x0) {
                                                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar1,(MethodInfo *)0x0);
                                                  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           LayerMask::LayerMask_NameToLayer
                                                                     (::StringLiteral_Preview,
                                                                      (MethodInfo *)0x0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively
                                                            (pTVar2,iVar4,(MethodInfo *)0x0);
                                                  this_01 = (this->fields).grayScaleEffect;
                                                  if (this_01 != (GrayscaleEffect *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Behaviour::Behaviour_set_enabled
                                                              ((Behaviour *)this_01,0,
                                                               (MethodInfo *)0x0);
                                                    if (cRam_? == '\0') {
                                                      func_?(&TypeInfo__UnityEngine__Object
                                                                     );
                                                      func_?(&StringLiteral_Idle);
                                                      cRam_? = '\x01';
                                                    }
                                                    pMVar15 = (this->fields).body;
                                                    if ((TypeInfo__UnityEngine__Object->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__UnityEngine__Object)
                                                      ;
                                                    }
                                                    bVar16 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_op_Inequality
                                                                      ((Object_1 *)pMVar15,
                                                                       (Object_1 *)0x0,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar16 == 0) {
                                                      return;
                                                    }
                                                    iVar4 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Random::Random_1_RandomRangeInt
                                                                       (0,80000,(MethodInfo *)0x0);
                                                    this_03 = MVGameControllerBase::
                                                              MVGameControllerBase_get_Game
                                                                        ((MethodInfo *)0x0);
                                                    if (this_03 != (MVNetworkGame *)0x0) {
                                                      iVar17 = MVNetworkGame::
                                                                                                                              
                                                  MVNetworkGame_get_ServerTimeInMilliSeconds
                                                            (this_03,(MethodInfo *)0x0);
                                                  pMVar15 = (this->fields).body;
                                                  if ((pMVar15 != (MVBodyObject *)0x0) &&
                                                     (this_02 = (pMVar15->fields).boneAnimation,
                                                     this_02 != (BoneAnimation *)0x0)) {
                                                    BoneAnimation::BoneAnimation_StartAnimation
                                                              (this_02,StringLiteral_Idle,
                                                               (iVar17 - iVar4) + -500,
                                                               (MethodInfo *)0x0);
                                                    return;
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
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnDestroy
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields).previewCam;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
  }
  pRVar3 = (this->fields).previewTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar3 = (this->fields).previewTexture;
    if (pRVar3 == (RenderTexture *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
              (pRVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              ((this->fields).previewTexture,(MethodInfo *)0x0);
    (this->fields).previewTexture = (RenderTexture *)0x0;
    func_?();
  }
  obj = (this->fields)._PreviewGameObject_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)(this->fields).rootObject,(MethodInfo *)0x0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnPostRender
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_3
              (transfrom,::StringLiteral_Preview,StringLiteral_Hidden,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnPreCull
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral_Preview);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    layersToChange.m_Mask =
         (int32_t)UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)(this->fields).layersToRender,(MethodInfo *)0x0);
    layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (::StringLiteral_Preview,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_2(transfrom,layersToChange,layer,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetRenderGrey(Boolean) */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_SetRenderGrey
               (SpawnRolePreviewer *this,bool shouldRenderAsGrey,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).grayScaleEffect;
  if (pGVar2 != (GrayscaleEffect *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_shouldRenderAsGrey;
    pGStack_3 = pGVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StartActiveAnimation() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_StartActiveAnimation
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Walk);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).body;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pMVar1 = (this->fields).body;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pBVar3 = (pMVar1->fields).boneAnimation, pBVar3 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_set_FallBackWalkSpeed(pBVar3,0.7,(MethodInfo *)0x0);
    pMVar1 = (this->fields).body;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pBVar3 = (pMVar1->fields).boneAnimation;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_00 != (MVNetworkGame *)0x0) &&
         (iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                            (this_00,(MethodInfo *)0x0), pBVar3 != (BoneAnimation *)0x0)) {
        BoneAnimation::BoneAnimation_StartAnimation
                  (pBVar3,StringLiteral_Walk,iVar4 + -500,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartInactiveAnimation() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_StartInactiveAnimation
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).body;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (0,80000,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    pMVar1 = (this->fields).body;
    if ((pMVar1 != (MVBodyObject *)0x0) &&
       (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
      BoneAnimation::BoneAnimation_StartAnimation
                (this_00,StringLiteral_Idle,(iVar4 - iVar3) + -500,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SpawnRolePreviewer() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer__ctor
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).previewCamOffset.x = (pVVar1->zeroVector).x;
  (this->fields).previewCamOffset.y = fVar2;
  (this->fields).previewCamOffset.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).pivotPoint.x = (pVVar1->zeroVector).x;
  (this->fields).pivotPoint.y = fVar2;
  (this->fields).pivotPoint.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

