
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
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Preview__0__RenderCam);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (previewSpawnRoleRoot != (Transform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)previewSpawnRoleRoot,(MethodInfo *)0x0);
    (this->fields).rootObject = pGVar2;
    func_?(&(this->fields).rootObject,pGVar2);
    (this->fields).previewCamOffset.x = (float)(int)cameraOffset._0_8_;
    (this->fields).previewCamOffset.y = (float)(int)((ulonglong)cameraOffset._0_8_ >> 0x20);
    (this->fields).previewCamOffset.z = cameraOffset.z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar3,previewSpawnRoleRoot,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar2,pSVar4,(MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Preview,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar2,iVar5,(MethodInfo *)0x0);
          pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                    RenderTexture_GetTemporary_4
                              (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                               RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
          (this->fields).previewTexture = pRVar6;
          func_?(&(this->fields).previewTexture,pRVar6);
          pRVar6 = (this->fields).previewTexture;
          if (pRVar6 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)pRVar6,name,(MethodInfo *)0x0);
            pRVar6 = (this->fields).previewTexture;
            if (pRVar6 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)pRVar6,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              pRVar6 = (this->fields).previewTexture;
              if (pRVar6 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)pRVar6,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar7 = (this->fields).previewCam;
                if (pCVar7 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar7,(this->fields).previewTexture,(MethodInfo *)0x0);
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  func_?(&(this->fields)._PreviewGameObject_k__BackingField,
                                  woGameObjectCopy);
                  pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                                      ((Int32 *)&spawnRoleId,(MethodInfo *)0x0);
                  pSVar4 = mscorlib.dll::System::String::String_Concat_5
                                      (StringLiteral_Preview_,name,::StringLiteral__,pSVar4,
                                       (MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                              ((Object_1 *)pGVar2,pSVar4,(MethodInfo *)0x0);
                    pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                    if ((pGVar2 != (GameObject *)0x0) &&
                       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                       pTVar3 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                (pTVar3,previewSpawnRoleRoot,(MethodInfo *)0x0);
                      pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                      if (pGVar2 != (GameObject *)0x0) {
                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__UnityEngine__Quaternion);
                          cRam_? = '\x01';
                        }
                        if (pTVar3 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation
                                    (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->
                                             identityQuaternion,(MethodInfo *)0x0);
                          pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                          if ((pGVar2 != (GameObject *)0x0) &&
                             (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                             pTVar3 != (Transform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position(pTVar3,previewPosition,(MethodInfo *)0x0);
                            pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                            if (pGVar2 != (GameObject *)0x0) {
                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                              uVar8._0_4_ = (this->fields).pivotPoint.x;
                              uVar8._4_4_ = (this->fields).pivotPoint.y;
                              fVar9 = (this->fields).pivotPoint.z;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              if (pTVar3 != (Transform *)0x0) {
                                VVar10.z = fVar9;
                                VVar10.x = (float)(int)uVar8;
                                VVar10.y = (float)(int)((ulonglong)uVar8 >> 0x20);
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_RotateAround
                                          (pTVar3,VVar10,
                                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                           180.0,(MethodInfo *)0x0);
                                pCVar7 = (this->fields).previewCam;
                                if (pCVar7 != (Camera *)0x0) {
                                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pCVar7,(MethodInfo *)0x0);
                                  pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if ((pGVar2 != (GameObject *)0x0) &&
                                     (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar2,(MethodInfo *)0x0),
                                     pTVar11 != (Transform *)0x0)) {
                                    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_position
                                                        ((Vector3 *)&stack0xffffffd8,pTVar11,
                                                         (MethodInfo *)0x0);
                                    uVar13 = pVVar12->x;
                                    uVar14 = pVVar12->y;
                                    uVar15 = (this->fields).previewCamOffset.x;
                                    uVar16 = (this->fields).previewCamOffset.y;
                                    if (pTVar3 != (Transform *)0x0) {
                                      this = (SpawnRolePreviewer *)
                                             ((this->fields).previewCamOffset.z + pVVar12->z);
                                      fVar17 = (float)uVar16 + (float)uVar14;
                                      VVar10.x = (float)uVar15 + (float)uVar13;
                                      VVar10 = (Vector3)CONCAT84(uVar18,VVar10.x);
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_position(pTVar3,VVar10,(MethodInfo *)0x0);
                                      pGVar2 = (pSVar1->fields).blobShadowPrefab;
                                      if ((TypeInfo__UnityEngine__Object->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pGVar2 = (GameObject *)
                                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                Object_1_Instantiate_4
                                                          ((Object *)pGVar2,
                                                                                                                      
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                      if (pGVar2 != (GameObject *)0x0) {
                                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar2,(MethodInfo *)0x0);
                                        this_00 = (pSVar1->fields).
                                                  _PreviewGameObject_k__BackingField;
                                        if ((this_00 != (GameObject *)0x0) &&
                                           (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (this_00,(MethodInfo *)0x0),
                                           pTVar3 != (Transform *)0x0)) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_SetParent_1(pTVar3,pTVar11,0,(MethodInfo *)0x0)
                                          ;
                                          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar2,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            func_?(&TypeInfo__UnityEngine__Vector3);
                                            cRam_? = '\x01';
                                          }
                                          if (pTVar3 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_localPosition
                                                      (pTVar3,TypeInfo__UnityEngine__Vector3->
                                                               static_fields->zeroVector,
                                                       (MethodInfo *)0x0);
                                            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar2,(MethodInfo *)0x0);
                                            if (pTVar3 != (Transform *)0x0) {
                                              value.z = 0.2;
                                              value.x = 0.2;
                                              value.y = 0.1;
                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_set_localScale
                                                        (pTVar3,value,(MethodInfo *)0x0);
                                              pGVar2 = (pSVar1->fields).
                                                        _PreviewGameObject_k__BackingField;
                                              if (pGVar2 != (GameObject *)0x0) {
                                                pMVar19 = (MVBodyObject *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::
                                                          GameObject_GetComponentInChildren_1
                                                                    (pGVar2,
                                                  MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                                                  );
                                                (pSVar1->fields).body = pMVar19;
                                                func_?();
                                                pGVar2 = (pSVar1->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if (pGVar2 != (GameObject *)0x0) {
                                                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar2,(MethodInfo *)0x0);
                                                  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           LayerMask::LayerMask_NameToLayer
                                                                     (StringLiteral_Preview,
                                                                      (MethodInfo *)0x0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively
                                                            (pTVar3,iVar5,(MethodInfo *)0x0);
                                                  this_01 = (pSVar1->fields).grayScaleEffect;
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
                                                    pMVar19 = (pSVar1->fields).body;
                                                    if ((TypeInfo__UnityEngine__Object->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__UnityEngine__Object)
                                                      ;
                                                    }
                                                    bVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Object::Object_1_op_Inequality
                                                                       ((Object_1 *)pMVar19,
                                                                        (Object_1 *)0x0,
                                                                        (MethodInfo *)0x0);
                                                    if (bVar20 == 0) {
                                                      return;
                                                    }
                                                    iVar5 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Random::Random_1_RandomRangeInt
                                                                       (0,80000,(MethodInfo *)0x0);
                                                    this_03 = MVGameControllerBase::
                                                              MVGameControllerBase_get_Game
                                                                        ((MethodInfo *)0x0);
                                                    if (this_03 != (MVNetworkGame *)0x0) {
                                                      iVar21 = MVNetworkGame::
                                                                                                                              
                                                  MVNetworkGame_get_ServerTimeInMilliSeconds
                                                            (this_03,(MethodInfo *)0x0);
                                                  pMVar19 = (pSVar1->fields).body;
                                                  if ((pMVar19 != (MVBodyObject *)0x0) &&
                                                     (this_02 = (pMVar19->fields).boneAnimation,
                                                     this_02 != (BoneAnimation *)0x0)) {
                                                    BoneAnimation::BoneAnimation_StartAnimation
                                                              (this_02,StringLiteral_Idle,
                                                               (iVar21 - iVar5) + -500,
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
              (transfrom,StringLiteral_Preview,StringLiteral_Hidden,(MethodInfo *)0x0);
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
    func_?(&StringLiteral_Preview);
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
                      (StringLiteral_Preview,(MethodInfo *)0x0);
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

