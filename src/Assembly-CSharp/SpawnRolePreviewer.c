
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (previewSpawnRoleRoot == (Transform *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)previewSpawnRoleRoot,(MethodInfo *)0x0);
    (this->fields).rootObject = pGVar2;
    (this->fields).previewCamOffset.x = cameraOffset.x;
    (this->fields).previewCamOffset.y = cameraOffset.y;
    (this->fields).previewCamOffset.z = cameraOffset.z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar3,previewSpawnRoleRoot,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      uStack_4 = CONCAT44(TypeInfo__System__String,&UNK_?);
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar2,pSVar5,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar2,iVar6,(MethodInfo *)0x0);
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                        (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                         RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
    (this->fields).previewTexture = pRVar7;
    if (pRVar7 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pRVar7,name,(MethodInfo *)0x0);
    pRVar7 = (this->fields).previewTexture;
    if (pRVar7 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              ((Texture *)pRVar7,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
    pRVar7 = (this->fields).previewTexture;
    if (pRVar7 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pRVar7,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
    pCVar8 = (this->fields).previewCam;
    if (pCVar8 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar8,(this->fields).previewTexture,(MethodInfo *)0x0);
    (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Preview_ != (String *)0x0) &&
       (iVar9 = func_?(StringLiteral_Preview_,(args->klass->_0).element_class),
       iVar9 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Preview_;
    if ((name != (String *)0x0) &&
       (iVar9 = func_?(name,(args->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)name;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar9 = func_?(::StringLiteral__,(args->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)::StringLiteral__;
    layersToRender = spawnRoleId;
    pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&layersToRender);
    if ((pOVar10 == (Object *)0x0) ||
       (iVar9 = func_?(pOVar10,(args->klass->_0).element_class), iVar9 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar10;
      pSVar5 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if (woGameObjectCopy != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)woGameObjectCopy,pSVar5,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
        if ((pGVar2 != (GameObject *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar3,previewSpawnRoleRoot,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
          if (pGVar2 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
            }
            pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                                ((Quaternion *)&stack0xffffffd8,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar3,*pQVar11,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
              if ((pGVar2 != (GameObject *)0x0) &&
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                 pTVar3 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar3,previewPosition,(MethodInfo *)0x0);
                pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                if (pGVar2 != (GameObject *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                  uStack_12._0_4_ = (this->fields).pivotPoint.x;
                  uStack_12._4_4_ = (this->fields).pivotPoint.y;
                  fVar13 = (this->fields).pivotPoint.z;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Vector3);
                  }
                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                      (&VStack_15,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    point.z = fVar13;
                    point.x = (float)(undefined4)uStack_12;
                    point.y = (float)uStack_12._4_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                              (pTVar3,point,*pVVar14,180.0,(MethodInfo *)0x0);
                    pCVar8 = (this->fields).previewCam;
                    if (pCVar8 != (Camera *)0x0) {
                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)pCVar8,(MethodInfo *)0x0);
                      pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                      if ((pGVar2 != (GameObject *)0x0) &&
                         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                         pTVar16 != (Transform *)0x0)) {
                        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position(&VStack_15,pTVar16,(MethodInfo *)0x0);
                        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Addition(&VStack_15,*pVVar14,
                                                      (this->fields).previewCamOffset,
                                                      (MethodInfo *)0x0);
                        if (pTVar3 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                    (pTVar3,*pVVar14,(MethodInfo *)0x0);
                          pXVar17 = (XpBoostParticlePreviewer *)(this->fields).blobShadowPrefab;
                          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          pXVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_Instantiate_251
                                              (pXVar17,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                              );
                          if (pXVar17 != (XpBoostParticlePreviewer *)0x0) {
                            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_transform
                                               ((GameObject *)pXVar17,(MethodInfo *)0x0);
                            pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                            if ((pGVar2 != (GameObject *)0x0) &&
                               (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                               pTVar3 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_SetParent_1(pTVar3,pTVar16,0,(MethodInfo *)0x0);
                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform
                                                 ((GameObject *)pXVar17,(MethodInfo *)0x0);
                              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                        Vector3_get_zero(&VStack_15,(MethodInfo *)0x0);
                              if (pTVar3 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_localPosition(pTVar3,*pVVar14,(MethodInfo *)0x0);
                                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                         GameObject_get_transform
                                                   ((GameObject *)pXVar17,(MethodInfo *)0x0);
                                fStack_18 = 0.0;
                                uStack_4 = 0;
                                VStack_15.z = 0.0;
                                VStack_15.y = 0.2;
                                VStack_15.x = 0.1;
                                func_?(&uStack_4);
                                if (pTVar3 != (Transform *)0x0) {
                                  value.z = fStack_18;
                                  value.x = (float)(undefined4)uStack_4;
                                  value.y = (float)uStack_4._4_4_;
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_localScale(pTVar3,value,(MethodInfo *)0x0);
                                  pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar2 != (GameObject *)0x0) {
                                    pUVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_29
                                                        (pGVar2,
                                                  MVBodyObject_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVBodyObject>__
                                                  );
                                    (this->fields).body = (MVBodyObject *)pUVar19;
                                    pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                                    if (pGVar2 != (GameObject *)0x0) {
                                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                               GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                                      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                                              LayerMask_NameToLayer
                                                        (StringLiteral_Preview,(MethodInfo *)0x0);
                                      LayerUtil::LayerUtil_SetLayerRecursively
                                                (pTVar3,iVar6,(MethodInfo *)0x0);
                                      this_00 = (this->fields).grayScaleEffect;
                                      if (this_00 != (GrayscaleEffect *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled
                                                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
                                        if (cRam_? == '\0') {
                                          func_?(_UNK_?);
                                          cRam_? = '\x01';
                                        }
                                        pMVar20 = (this->fields).body;
                                        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.
                                                    methodPtr & 0x2000000) != 0) &&
                                           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0))
                                        {
                                          func_?(TypeInfo__UnityEngine__Object);
                                        }
                                        bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                Object_1_op_Inequality
                                                          ((Object_1 *)pMVar20,(Object_1 *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar21 == 0) {
                                          return;
                                        }
                                        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::
                                                Random_1_RandomRangeInt(0,80000,(MethodInfo *)0x0);
                                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                    methodPtr & 0x2000000) != 0) &&
                                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)
                                           ) {
                                          func_?(TypeInfo__MVGameControllerBase);
                                        }
                                        this_01 = MVGameControllerBase::
                                                  MVGameControllerBase_get_Game((MethodInfo *)0x0);
                                        if (this_01 != (MVNetworkGame *)0x0) {
                                          iVar22 = MVNetworkGame::
                                                   MVNetworkGame_get_ServerTimeInMilliSeconds
                                                             (this_01,(MethodInfo *)0x0);
                                          pMVar20 = (this->fields).body;
                                          if ((pMVar20 != (MVBodyObject *)0x0) &&
                                             (this_02 = (BoneAnimation *)
                                                        MVWorldObject.dll::MV::WorldObject::
                                                        KogamaSettings::KogamaSettingsCore::
                                                        KogamaSettingTypes::
                                                        KogamaSettingNumericBase`1[System::Single]::
                                                                                                                
                                                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                                            ((
                                                  KogamaSettingNumericBase_1_System_Single_ *)pMVar20
                                                  ,(MethodInfo *)0x0),
                                             this_02 != (BoneAnimation *)0x0)) {
                                            BoneAnimation::BoneAnimation_StartAnimation
                                                      (this_02,StringLiteral_Idle,
                                                       (iVar22 - iVar6) + -500,(MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnDestroy
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  }
  obj = (this->fields)._PreviewGameObject_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_OnPreCull
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    layersToChange.m_Mask =
         (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this->fields).layersToRender,(MethodInfo *)0x0);
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
  pGVar1 = (this->fields).grayScaleEffect;
  if (pGVar1 == (GrayscaleEffect *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pGVar1,_shouldRenderAsGrey);
  return;
}


/* Void StartActiveAnimation() */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_StartActiveAnimation
               (SpawnRolePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).body;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pMVar1 = (this->fields).body;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pBVar3 = (BoneAnimation *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar1,(MethodInfo *)0x0),
     pBVar3 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_set_FallBackWalkSpeed(pBVar3,0.7,(MethodInfo *)0x0);
    pMVar1 = (this->fields).body;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pBVar3 = (BoneAnimation *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).body;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (0,80000,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).body;
    if ((pMVar1 != (MVBodyObject *)0x0) &&
       (this_01 = (BoneAnimation *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            ((KogamaSettingNumericBase_1_System_Single_ *)pMVar1,(MethodInfo *)0x0),
       this_01 != (BoneAnimation *)0x0)) {
      BoneAnimation::BoneAnimation_StartAnimation
                (this_01,StringLiteral_Idle,(iVar4 - iVar3) + -500,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).previewCamOffset.x = pVVar1->x;
  (this->fields).previewCamOffset.y = fVar3;
  (this->fields).previewCamOffset.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).pivotPoint.x = pVVar1->x;
  (this->fields).pivotPoint.y = fVar3;
  (this->fields).pivotPoint.z = fVar4;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_PreviewGameObject(GameObject) */

void Assembly-CSharp.dll::SpawnRolePreviewer::SpawnRolePreviewer_set_PreviewGameObject
               (SpawnRolePreviewer *this,GameObject *value,MethodInfo *method)

{
  (this->fields)._PreviewGameObject_k__BackingField = value;
  return;
}

