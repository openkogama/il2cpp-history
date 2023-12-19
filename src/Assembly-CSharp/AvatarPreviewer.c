
/* Void FaceGameObject(GameObject) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_FaceGameObject
               (AvatarPreviewer *this,GameObject *go,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (go != (GameObject *)0x0) {
      target = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (go,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt
                  (this_01,target,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject, Vector3) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_Initialize
               (AvatarPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 cameraOffset,Transform *previewItemsRoot,Vector3 previewPosition,String *name
               ,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,
               Vector3 additionalCameraRotation,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Avatar_Previewer);
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral__Item_);
    func_?(&StringLiteral__woID_);
    func_?(&StringLiteral_Preview__0__RenderCam);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (((pTVar1 != (Transform *)0x0) &&
      (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                 (pTVar1,previewItemsRoot,(MethodInfo *)0x0), previewItemsRoot != (Transform *)0x0))
     && (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)previewItemsRoot,(MethodInfo *)0x0),
        pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar2,StringLiteral_Avatar_Previewer,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pGVar2,pSVar3,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      value_01 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Preview,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar2,value_01,(MethodInfo *)0x0);
        pRVar4 = (RenderTexture *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                  (pRVar4,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                   RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
        if (pRVar4 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                    (pRVar4,2,(MethodInfo *)0x0);
          (this->fields).previewTexture = pRVar4;
          func_?();
          pRVar4 = (this->fields).previewTexture;
          if (pRVar4 != (RenderTexture *)0x0) {
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Create
                              (pRVar4,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              pRVar4 = (this->fields).previewTexture;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pRVar4,(MethodInfo *)0x0);
              pRVar4 = (RenderTexture *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                        (pRVar4,textureWidth / textureHeight << 8,0x100,0x10,
                         RenderTextureFormat__Enum_ARGB32,RenderTextureReadWrite__Enum_Default,
                         (MethodInfo *)0x0);
              if (pRVar4 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                RenderTexture_set_antiAliasing(pRVar4,2,(MethodInfo *)0x0);
                (this->fields).previewTexture = pRVar4;
                func_?();
                pRVar4 = (this->fields).previewTexture;
                if (pRVar4 != (RenderTexture *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Create
                            (pRVar4,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            else {
code_?:
              puVar6 = &UNK_?;
              pRVar4 = (RenderTexture *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                        (pRVar4,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                         RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
              if (pRVar4 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                RenderTexture_set_antiAliasing(pRVar4,2,(MethodInfo *)0x0);
                (this->fields).previewTexture = pRVar4;
                func_?();
                pCVar7 = (this->fields).previewCam;
                if (pCVar7 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar7,(this->fields).previewTexture,(MethodInfo *)0x0);
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  func_?();
                  pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                  values = (String__Array *)func_?();
                  if (values != (String__Array *)0x0) {
                    if (values->max_length == 0) goto code_?;
                    values->vector[0] = StringLiteral_Preview_;
                    func_?();
                    if (values->max_length < 2) goto code_?;
                    values->vector[1] = name;
                    func_?();
                    if (values->max_length < 3) goto code_?;
                    values->vector[2] = StringLiteral__Item_;
                    func_?();
                    if (wo != (MVWorldObjectClient *)0x0) {
                      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                          ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
                      if (values->max_length < 4) goto code_?;
                      values->vector[3] = pSVar3;
                      func_?();
                      if (values->max_length < 5) goto code_?;
                      values->vector[4] = StringLiteral__woID_;
                      func_?();
                      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                          ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
                      if (values->max_length < 6) goto code_?;
                      values->vector[5] = pSVar3;
                      func_?();
                      pSVar3 = mscorlib.dll::System::String::String_Concat_6
                                          (values,(MethodInfo *)0x0);
                      if (pGVar2 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                  ((Object_1 *)pGVar2,pSVar3,(MethodInfo *)0x0);
                        pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                        if ((pGVar2 != (GameObject *)0x0) &&
                           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                           pTVar1 != (Transform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                    (pTVar1,previewItemsRoot,(MethodInfo *)0x0);
                          pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                          if (pGVar2 != (GameObject *)0x0) {
                            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            if (pTVar1 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_rotation
                                        (pTVar1,TypeInfo__UnityEngine__Quaternion->static_fields->
                                                identityQuaternion,(MethodInfo *)0x0);
                              pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                              if ((pGVar2 != (GameObject *)0x0) &&
                                 (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                           GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                                 pTVar1 != (Transform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_position(pTVar1,previewPosition,(MethodInfo *)0x0);
                                pfVar8 = (float *)(*(code *)(wo->klass->vtable).GetLocalBounds.
                                                             method)();
                                fVar9 = *pfVar8;
                                fVar10 = pfVar8[1];
                                fVar11 = pfVar8[2];
                                fVar12 = pfVar8[3];
                                uVar13 = *(undefined8 *)(pfVar8 + 4);
                                pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                                if ((pGVar2 != (GameObject *)0x0) &&
                                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                             GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                                   pTVar1 != (Transform *)0x0)) {
                                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_localScale
                                                      ((Vector3 *)&stack0xffffffc8,pTVar1,
                                                       (MethodInfo *)0x0);
                                  uVar15._0_4_ = pVVar14->x;
                                  uVar15._4_4_ = pVVar14->y;
                                  fVar16 = pVVar14->z;
                                  iVar17 = func_?();
                                  fVar18 = _UNK_?;
                                  if (iVar17 != 0) {
                                    if (*(int *)(iVar17 + 0xc) == 0) goto code_?;
                                    *(float *)(iVar17 + 0x10) = fVar12 * _UNK_?;
                                    if (*(uint *)(iVar17 + 0xc) < 2) goto code_?;
                                    *(float *)(iVar17 + 0x14) = (float)uVar13 * fVar18;
                                    if (*(uint *)(iVar17 + 0xc) < 3) goto code_?;
                                    *(float *)(iVar17 + 0x18) =
                                         (float)((ulonglong)uVar13 >> 0x20) * fVar18;
                                    uVar19 = *(uint *)(iVar17 + 0xc);
                                    if (uVar19 != 0) {
                                      fVar18 = *(float *)(iVar17 + 0x10);
                                      uVar20 = 1;
                                      if (1 < (int)uVar19) {
                                        pfVar8 = (float *)(iVar17 + 0x14);
                                        do {
                                          if (uVar19 <= uVar20) goto code_?;
                                          if (fVar18 < *pfVar8) {
                                            fVar18 = *pfVar8;
                                          }
                                          uVar20 = uVar20 + 1;
                                          pfVar8 = pfVar8 + 1;
                                        } while ((int)uVar20 < (int)uVar19);
                                      }
                                    }
                                    iVar17 = func_?();
                                    fVar18 = _UNK_?;
                                    if (iVar17 != 0) {
                                      if (*(int *)(iVar17 + 0xc) == 0) goto code_?;
                                      fVar21 = (float)uVar13 * _UNK_?;
                                      *(float *)(iVar17 + 0x10) =
                                           (float)uVar15 * fVar12 * _UNK_?;
                                      if (*(uint *)(iVar17 + 0xc) < 2) goto code_?;
                                      *(float *)(iVar17 + 0x14) = SUB84(uVar15,4) * fVar21;
                                      if (*(uint *)(iVar17 + 0xc) < 3) goto code_?;
                                      *(float *)(iVar17 + 0x18) =
                                           fVar16 * (float)((ulonglong)uVar13 >> 0x20) * fVar18;
                                      uVar19 = *(uint *)(iVar17 + 0xc);
                                      if (uVar19 == 0) {
                                        fVar12 = 0.0;
                                      }
                                      else {
                                        fVar12 = *(float *)(iVar17 + 0x10);
                                        uVar20 = 1;
                                        if (1 < (int)uVar19) {
                                          pfVar8 = (float *)(iVar17 + 0x14);
                                          do {
                                            if (uVar19 <= uVar20) goto code_?;
                                            if (fVar12 < *pfVar8) {
                                              fVar12 = *pfVar8;
                                            }
                                            uVar20 = uVar20 + 1;
                                            pfVar8 = pfVar8 + 1;
                                          } while ((int)uVar20 < (int)uVar19);
                                        }
                                      }
                                      fVar12 = (this->fields).previewObjMaxSize / fVar12;
                                      pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                                      if (pGVar2 != (GameObject *)0x0) {
                                        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                 ::GameObject_get_transform
                                                           (pGVar2,(MethodInfo *)0x0);
                                        if (pTVar1 != (Transform *)0x0) {
                                          value.y = SUB84(uVar15,4) * fVar12;
                                          value.x = (float)uVar15 * fVar12;
                                          value.z = fVar16 * fVar12;
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_set_localScale(pTVar1,value,(MethodInfo *)0x0);
                                          pGVar2 = (this->fields).
                                                    _PreviewGameObject_k__BackingField;
                                          if ((pGVar2 != (GameObject *)0x0) &&
                                             (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       GameObject::GameObject_get_transform
                                                                 (pGVar2,(MethodInfo *)0x0),
                                             pTVar1 != (Transform *)0x0)) {
                                            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_get_position
                                                                ((Vector3 *)&stack0xffffffd4,pTVar1,
                                                                 (MethodInfo *)0x0);
                                            uVar22 = pVVar14->x;
                                            uVar23 = pVVar14->y;
                                            fVar18 = pVVar14->z;
                                            (this->fields).pivotPoint.x =
                                                 (float)uVar22 + (float)uVar15 * fVar9 * fVar12;
                                            (this->fields).pivotPoint.y =
                                                 (float)uVar23 + SUB84(uVar15,4) * fVar10 * fVar12;
                                            (this->fields).pivotPoint.z =
                                                 fVar18 + fVar16 * fVar11 * fVar12;
                                            pCVar7 = (this->fields).previewCam;
                                            if (pCVar7 != (Camera *)0x0) {
                                              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       Component::Component_get_transform
                                                                 ((Component *)pCVar7,
                                                                  (MethodInfo *)0x0);
                                              uVar24 = (this->fields).pivotPoint.x;
                                              uVar25 = (this->fields).pivotPoint.y;
                                              fVar9 = (this->fields).previewObjMaxSize;
                                              if (pTVar1 != (Transform *)0x0) {
                                                value_00.y = (float)uVar25 +
                                                             (cameraOffset.y +
                                                             (this->fields).
                                                             previewCamAdditionalHeight) * fVar9;
                                                value_00.x = (float)uVar24 +
                                                             (cameraOffset.x + _UNK_?) *
                                                             fVar9;
                                                value_00.z = (this->fields).pivotPoint.z +
                                                             (cameraOffset.z +
                                                             (float)((uint)(this->fields).
                                                                           previewCamDist ^
                                                                                                                                        
                                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                  )) * fVar9;
                                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_set_position
                                                          (pTVar1,value_00,(MethodInfo *)0x0);
                                                pCVar7 = (this->fields).previewCam;
                                                if ((pCVar7 != (Camera *)0x0) &&
                                                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::Component_get_transform
                                                                       ((Component *)pCVar7,
                                                                        (MethodInfo *)0x0),
                                                   pTVar1 != (Transform *)0x0)) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_LookAt_2
                                                            (pTVar1,(this->fields).pivotPoint,
                                                             (MethodInfo *)0x0);
                                                  pCVar7 = (this->fields).previewCam;
                                                  if ((pCVar7 != (Camera *)0x0) &&
                                                     (pTVar1 = UnityEngine.CoreModule.dll::
                                                               UnityEngine::Component::
                                                               Component_get_transform
                                                                         ((Component *)pCVar7,
                                                                          (MethodInfo *)0x0),
                                                     pTVar1 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_Rotate_1
                                                              (pTVar1,additionalCameraRotation,
                                                               (MethodInfo *)0x0);
                                                    *unaff_FS_OFFSET = puVar6;
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
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnDestroy
               (AvatarPreviewer *this,MethodInfo *method)

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
    (this->fields).previewTexture = (RenderTexture *)0x0;
    func_?(&(this->fields).previewTexture,0);
  }
  pRVar3 = (this->fields).previewTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
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
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar3,(MethodInfo *)0x0);
    pRVar3 = (this->fields).previewTexture;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pRVar3,(MethodInfo *)0x0);
    (this->fields).previewTexture = (RenderTexture *)0x0;
    func_?();
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnPostRender
               (AvatarPreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnPreCull
               (AvatarPreviewer *this,MethodInfo *method)

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


/* Void OverrideCameraForPreviewer(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OverrideCameraForPreviewer
               (AvatarPreviewer *this,Vector3 cameraAngle,Vector3 cameraOffset,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    euler.y = cameraAngle.y * _UNK_?;
    euler.x = cameraAngle.x * _UNK_?;
    euler.z = cameraAngle.z * _UNK_?;
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_01,*pQVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,cameraOffset,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_UpdateRotation
               (AvatarPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (rotateSpeed != _UNK_?) {
    pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
      if (pGVar1 != (GameObject *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0);
        fVar3 = (this->fields).pivotPoint.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
        fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
        puVar6 = &UNK_?;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          point.y = fVar7 * rotateSpeed;
          point.x = (float)puVar6;
          point.z = fVar3;
          auVar8._4_4_ = fVar5;
          auVar8._0_4_ = uVar4;
          auVar8._8_4_ = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                    (this_00,point,(Vector3)(auVar8 << 0x20),fVar7 * rotateSpeed,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}


/* AvatarPreviewer() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer__ctor
               (AvatarPreviewer *this,MethodInfo *method)

{
  (this->fields).previewObjMaxSize = 2.0;
  (this->fields).previewCamAdditionalHeight = 0.5;
  (this->fields).previewCamDist = 1.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

