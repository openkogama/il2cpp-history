
/* Bounds ComputeLocalBounds(GameObject) */

Bounds * Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&StringLiteral_Renderers_required_for_correct_b);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (go != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (go,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar2->zeroVector).x;
    uStack_3._4_4_ = (pVVar2->zeroVector).y;
    fStack_4 = (pVVar2->zeroVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar5 = _UNK_?;
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar2->zeroVector).x;
    uStack_6._4_4_ = (pVVar2->zeroVector).y;
    fStack_7 = (pVVar2->zeroVector).z;
    (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_3;
    (__return_storage_ptr__->m_Center).y = uStack_3._4_4_;
    fStack_7 = fStack_7 * fVar5;
    (__return_storage_ptr__->m_Center).z = fStack_4;
    (__return_storage_ptr__->m_Extents).x = (float)(undefined4)uStack_6 * fVar5;
    (__return_storage_ptr__->m_Extents).y = (float)uStack_6._4_4_ * fVar5;
    (__return_storage_ptr__->m_Extents).z = fStack_7;
    if (pOVar1 != (Object__Array *)0x0) {
      if (pOVar1->max_length == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Renderers_required_for_correct_b,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
      if ((Renderer *)pOVar1->vector[0] != (Renderer *)0x0) {
        pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                           ((Bounds *)&stack0xffffff80,(Renderer *)pOVar1->vector[0],
                            (MethodInfo *)0x0);
        fVar5 = (pBVar8->m_Extents).x;
        uStack_3._0_4_ = (pBVar8->m_Extents).y;
        uStack_3._4_4_ = (pBVar8->m_Extents).z;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (go,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          fVar10 = 0.0;
          pVVar11 = aVStack_12;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (pVVar11,pTVar9,(MethodInfo *)0x0);
          uStack_6._0_4_ = pVVar13->x;
          uStack_6._4_4_ = pVVar13->y;
          fStack_7 = fVar10 - pVVar13->z;
          ppOStack_14 = pOVar1->vector;
          fStack_4 = 1.4013e-45;
          (__return_storage_ptr__->m_Center).x = (float)pVVar11 - (float)(undefined4)uStack_6;
          (__return_storage_ptr__->m_Center).y = (float)pTVar9 - (float)uStack_6._4_4_;
          (__return_storage_ptr__->m_Center).z = fStack_7;
          (__return_storage_ptr__->m_Extents).x = fVar5;
          (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_3;
          (__return_storage_ptr__->m_Extents).z = uStack_3._4_4_;
          while( true ) {
            ppOStack_14 = ppOStack_14 + 1;
            if ((int)pOVar1->max_length <= (int)fStack_4) {
              return __return_storage_ptr__;
            }
            fStack_15 = fStack_4;
            if (pOVar1->max_length <= (uint)fStack_4) break;
            if ((Renderer *)*ppOStack_14 == (Renderer *)0x0) goto code_?;
            pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                               ((Bounds *)&stack0xffffff80,(Renderer *)*ppOStack_14,
                                (MethodInfo *)0x0);
            fVar16 = (pBVar8->m_Extents).x;
            fVar5 = (pBVar8->m_Extents).y;
            fVar10 = (pBVar8->m_Extents).z;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (go,(MethodInfo *)0x0);
            if (pTVar9 == (Transform *)0x0) goto code_?;
            fVar17 = 0.0;
            pVVar11 = &VStack_18;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (pVVar11,pTVar9,(MethodInfo *)0x0);
            uStack_6._0_4_ = pVVar13->x;
            uStack_6._4_4_ = pVVar13->y;
            fStack_7 = pVVar13->z;
            fStack_4 = (float)pVVar11 - (float)(undefined4)uStack_6;
            fStack_19 = (float)pTVar9 - (float)uStack_6._4_4_;
            uStack_3 = CONCAT44(fVar17 - fStack_7,(undefined4)uStack_3);
            fVar10 = (fVar17 - fStack_7) - fVar10;
            fVar17 = 0.0;
            point.y = fStack_19 - fVar5;
            point.x = fStack_4 - fVar16;
            point.z = fVar10;
            fStack_20 = fVar10;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                      (__return_storage_ptr__,point,(MethodInfo *)0x0);
            aVStack_12[0].z = fVar17 + uStack_3._4_4_;
            point_00.y = fVar10 + fStack_19;
            point_00.x = fVar16 + fStack_4;
            point_00.z = aVStack_12[0].z;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                      (__return_storage_ptr__,point_00,(MethodInfo *)0x0);
            fStack_4 = (float)((int)fStack_15 + 1);
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar21)();
  return pBVar8;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_Destroy
               (AccessoryPreviewer *this,MethodInfo *method)

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
    pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                       (pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).previewCam;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    if (pRVar3 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar3,(MethodInfo *)0x0);
  }
  ppTVar4 = &(this->fields).rootTransform;
  x = *ppTVar4;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*ppTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar6,(MethodInfo *)0x0);
    *ppTVar4 = (Transform *)0x0;
    func_?();
  }
  pRVar3 = (this->fields).previewTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar3 = (this->fields).previewTexture;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pRVar3,(MethodInfo *)0x0);
  }
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)pGVar6,(MethodInfo *)0x0);
  return;
}


/* Void Initialize(Int32, Int32, LayerFlags, CameraClearFlags, Vector3, Vector3, GameObject,
   Transform) */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_Initialize
               (AccessoryPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               LayerFlags__Enum layersToRender,CameraClearFlags__Enum clearFlags,
               Vector3 cameraPosOffset,Vector3 cameraRotOffset,GameObject *woGameObjectCopy,
               Transform *rootTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryPreviewer);
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral_RenderCam_Preview__0_);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  ppTVar2 = &(this->fields).rootTransform;
  *ppTVar2 = rootTransform;
  func_?(ppTVar2,rootTransform);
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (((pGVar1 != (GameObject *)0x0) &&
      (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar3,rootTransform,(MethodInfo *)0x0), woGameObjectCopy != (GameObject *)0x0)) {
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_RenderCam_Preview__0_,(Object *)pSVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar1,pSVar4,(MethodInfo *)0x0);
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,iVar5,(MethodInfo *)0x0);
    this_01 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
              (this_01,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    (this->fields).previewTexture = this_01;
    value = &(this->fields).previewTexture;
    func_?();
    this_00 = *value;
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    if (this_00 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)this_00,pSVar4,(MethodInfo *)0x0);
      if (*value != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                  (*value,2,(MethodInfo *)0x0);
        if (*value != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)*value,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          if (*value != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)*value,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            pCVar6 = (Camera *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                );
            ppCVar7 = &(this->fields).previewCam;
            *ppCVar7 = pCVar6;
            func_?(ppCVar7,pCVar6);
            if (*ppCVar7 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                        (*ppCVar7,(CameraClearFlags__Enum)value,(MethodInfo *)0x0);
              if (*ppCVar7 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                          (*ppCVar7,(Color)ZEXT816(0),(MethodInfo *)0x0);
                if (*ppCVar7 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                            (*ppCVar7,35.0,(MethodInfo *)0x0);
                  if (*ppCVar7 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                              (*ppCVar7,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0
                              );
                    pCVar6 = *ppCVar7;
                    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                             LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
                    if (pCVar6 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                (pCVar6,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
                      if (*ppCVar7 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                  (*ppCVar7,0.05,(MethodInfo *)0x0);
                        if (*ppCVar7 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                    (*ppCVar7,100.0,(MethodInfo *)0x0);
                          if (*ppCVar7 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_targetTexture
                                      (*ppCVar7,(this->fields).previewTexture,(MethodInfo *)0x0);
                            if (*ppCVar7 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_orthographic(*ppCVar7,1,(MethodInfo *)0x0);
                              if (*ppCVar7 != (Camera *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_set_orthographicSize(*ppCVar7,0.88,(MethodInfo *)0x0);
                                ppGVar8 = &(this->fields).previewGameObject;
                                *ppGVar8 = woGameObjectCopy;
                                func_?(ppGVar8,woGameObjectCopy);
                                pGVar1 = *ppGVar8;
                                pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                          Object_1_get_name((Object_1 *)woGameObjectCopy,
                                                            (MethodInfo *)0x0);
                                pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                                    (StringLiteral_Preview_,pSVar4,
                                                     (MethodInfo *)0x0);
                                if (pGVar1 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                            ((Object_1 *)pGVar1,pSVar4,(MethodInfo *)0x0);
                                  if ((*ppGVar8 != (GameObject *)0x0) &&
                                     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (*ppGVar8,(MethodInfo *)0x0),
                                     pTVar3 != (Transform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_parent(pTVar3,rootTransform,(MethodInfo *)0x0);
                                    if (*ppGVar8 != (GameObject *)0x0) {
                                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (*ppGVar8,(MethodInfo *)0x0);
                                      if (cRam_? == '\0') {
                                        func_?(&TypeInfo__UnityEngine__Quaternion);
                                        cRam_? = '\x01';
                                      }
                                      if (pTVar3 != (Transform *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_set_localRotation
                                                  (pTVar3,TypeInfo__UnityEngine__Quaternion->
                                                           static_fields->identityQuaternion,
                                                   (MethodInfo *)0x0);
                                        if (*ppGVar8 != (GameObject *)0x0) {
                                          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (*ppGVar8,(MethodInfo *)0x0);
                                          if ((TypeInfo__AccessoryPreviewer->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          if (pTVar3 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (pTVar3,TypeInfo__AccessoryPreviewer->
                                                               static_fields->previewPosition,
                                                       (MethodInfo *)0x0);
                                            pAVar9 = TypeInfo__AccessoryPreviewer->static_fields;
                                            uVar10 = (pAVar9->previewPosition).x;
                                            uVar11 = (pAVar9->previewPosition).y;
                                            (pAVar9->previewPosition).x =
                                                 (float)uVar10 + _UNK_?;
                                            (pAVar9->previewPosition).y = (float)uVar11 + 0.0;
                                            (pAVar9->previewPosition).z =
                                                 (pAVar9->previewPosition).z + 0.0;
                                            if (*ppGVar8 != (GameObject *)0x0) {
                                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (*ppGVar8,(MethodInfo *)0x0);
                                              if ((*ppGVar8 != (GameObject *)0x0) &&
                                                 (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (*ppGVar8,(MethodInfo *)0x0),
                                                 pTVar12 != (Transform *)0x0)) {
                                                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_position
                                                                    ((Vector3 *)&stack0xffffffe4,
                                                                     pTVar12,(MethodInfo *)0x0);
                                                uVar14._0_4_ = pVVar13->x;
                                                uVar14._4_4_ = pVVar13->y;
                                                fVar15 = pVVar13->z;
                                                if (cRam_? == '\0') {
                                                  puVar16 = &UNK_?;
                                                  func_?();
                                                  uVar14 = CONCAT44(puVar16,(undefined4)uVar14);
                                                  cRam_? = '\x01';
                                                }
                                                if (pTVar3 != (Transform *)0x0) {
                                                  point.z = fVar15;
                                                  point.x = (float)(int)uVar14;
                                                  point.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_RotateAround
                                                            (pTVar3,point,
                                                             TypeInfo__UnityEngine__Vector3->
                                                             static_fields->upVector,215.0,
                                                             (MethodInfo *)0x0);
                                                  pBVar17 = AccessoryPreviewer_ComputeLocalBounds
                                                                      ((Bounds *)&puStack_18,
                                                                       *ppGVar8,(MethodInfo *)0x0);
                                                  fVar15 = (pBVar17->m_Center).y;
                                                  fVar19 = (pBVar17->m_Extents).x;
                                                  uVar20 = (pBVar17->m_Extents).y;
                                                  uVar21 = (pBVar17->m_Extents).z;
                                                  if ((*ppGVar8 != (GameObject *)0x0) &&
                                                     (pTVar3 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (*ppGVar8,
                                                                           (MethodInfo *)0x0),
                                                     pTVar3 != (Transform *)0x0)) {
                                                    pVVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_localScale
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar3,(MethodInfo *)0x0)
                                                    ;
                                                    fVar22 = pVVar13->x;
                                                    uVar23 = pVVar13->y;
                                                    fVar24 = pVVar13->z;
                                                    iVar25 = func_?();
                                                    fVar26 = _UNK_?;
                                                    if (iVar25 != 0) {
                                                      if (*(int *)(iVar25 + 0xc) == 0)
                                                      goto code_?;
                                                      fVar27 = (float)uVar20 * _UNK_?;
                                                      *(float *)(iVar25 + 0x10) =
                                                           fVar22 * fVar19 * _UNK_?;
                                                      if (*(uint *)(iVar25 + 0xc) < 2)
                                                      goto code_?;
                                                      pfVar28 = (float *)(iVar25 + 0x14);
                                                      *pfVar28 = (float)uVar23 * fVar27;
                                                      if (*(uint *)(iVar25 + 0xc) < 3)
                                                      goto code_?;
                                                      *(float *)(iVar25 + 0x18) =
                                                           fVar24 * (float)uVar21 * fVar26;
                                                      uVar29 = *(uint *)(iVar25 + 0xc);
                                                      if (uVar29 == 0) {
                                                        rootTransform = (Transform *)0x0;
                                                      }
                                                      else {
                                                        pTVar3 = *(Transform **)(iVar25 + 0x10);
                                                        uVar30 = 1;
                                                        rootTransform = pTVar3;
                                                        if (1 < (int)uVar29) {
                                                          bVar31 = 1 < uVar29;
                                                          do {
                                                            if (!bVar31) goto code_?;
                                                            pTVar12 = (Transform *)*pfVar28;
                                                            if ((float)pTVar3 < (float)pTVar12) {
                                                              pTVar3 = pTVar12;
                                                              rootTransform = pTVar12;
                                                            }
                                                            uVar30 = uVar30 + 1;
                                                            pfVar28 = pfVar28 + 1;
                                                            bVar31 = uVar30 < uVar29;
                                                          } while ((int)uVar30 < (int)uVar29);
                                                        }
                                                      }
                                                      if (*ppGVar8 != (GameObject *)0x0) {
                                                        pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (*ppGVar8,
                                                                             (MethodInfo *)0x0);
                                                        fVar26 = _UNK_? /
                                                                 (float)rootTransform;
                                                        fVar19 = fVar22 * fVar26;
                                                        if (_UNK_? <= fVar22 * fVar26) {
                                                          fVar19 = _UNK_?;
                                                        }
                                                        fVar22 = (float)uVar23 * fVar26;
                                                        if (_UNK_? <= (float)uVar23 * fVar26)
                                                        {
                                                          fVar22 = _UNK_?;
                                                        }
                                                        fVar27 = fVar24 * fVar26;
                                                        if (_UNK_? <= fVar24 * fVar26) {
                                                          fVar27 = _UNK_?;
                                                        }
                                                        if (pTVar3 != (Transform *)0x0) {
                                                          value_00.y = fVar22;
                                                          value_00.x = fVar19;
                                                          value_00.z = fVar27;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_localScale
                                                                    (pTVar3,value_00,
                                                                     (MethodInfo *)0x0);
                                                          if (*ppGVar8 != (GameObject *)0x0) {
                                                            pTVar3 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (*ppGVar8,
                                                                                 (MethodInfo *)0x0);
                                                            if ((*ppGVar8 != (GameObject *)0x0) &&
                                                               (pTVar12 = UnityEngine.CoreModule.dll
                                                                          ::UnityEngine::GameObject
                                                                          ::GameObject_get_transform
                                                                                    (*ppGVar8,
                                                                                     (MethodInfo *)
                                                                                     0x0),
                                                               pTVar12 != (Transform *)0x0)) {
                                                              pVVar13 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_get_position
                                                                                  ((Vector3 *)
                                                                                   &stack0xffffffe4,
                                                                                   pTVar12,(
                                                  MethodInfo *)0x0);
                                                  uVar32 = pVVar13->x;
                                                  uVar33 = pVVar13->y;
                                                  if (pTVar3 != (Transform *)0x0) {
                                                    value_01.y = (float)uVar33 -
                                                                 (fVar15 - (float)uVar20);
                                                    value_01.x = (float)uVar32 - 0.0;
                                                    value_01.z = pVVar13->z - 0.0;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar3,value_01,(MethodInfo *)0x0);
                                                    if (*ppCVar7 != (Camera *)0x0) {
                                                      pTVar3 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)*ppCVar7,
                                                                           (MethodInfo *)0x0);
                                                      if ((*ppGVar8 != (GameObject *)0x0) &&
                                                         (pTVar12 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::GameObject::
                                                                    GameObject_get_transform
                                                                              (*ppGVar8,
                                                                               (MethodInfo *)0x0),
                                                         pTVar12 != (Transform *)0x0)) {
                                                        pVVar13 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_position
                                                                            ((Vector3 *)
                                                                             &stack0xfffffff0,
                                                                             pTVar12,(MethodInfo *)
                                                                                     0x0);
                                                        uVar34 = pVVar13->x;
                                                        uVar35 = pVVar13->y;
                                                        if (pTVar3 != (Transform *)0x0) {
                                                          value_02.y = cameraPosOffset.y +
                                                                       (float)uVar35;
                                                          value_02.x = (float)this_01 + (float)uVar34
                                                          ;
                                                          value_02.z = cameraPosOffset.z +
                                                                       pVVar13->z;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_position
                                                                    (pTVar3,value_02,
                                                                     (MethodInfo *)0x0);
                                                          if ((*ppCVar7 != (Camera *)0x0) &&
                                                             (pTVar3 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   *ppCVar7,(
                                                  MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                    pVVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xfffffff0
                                                                         ,pTVar3,(MethodInfo *)0x0)
                                                    ;
                                                    uVar36 = pVVar13->x;
                                                    fVar15 = pVVar13->z;
                                                    uVar37._4_4_ = cameraPosOffset.y;
                                                    uVar37._0_4_ = (float)uVar36;
                                                    if ((*ppCVar7 != (Camera *)0x0) &&
                                                       (pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)*ppCVar7,
                                                                             (MethodInfo *)0x0),
                                                       pTVar3 != (Transform *)0x0)) {
                                                      value_03.z = fVar15;
                                                      value_03.x = (float)uVar37;
                                                      value_03.y = SUB84(uVar37,4);
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar3,value_03,(MethodInfo *)0x0)
                                                      ;
                                                      if (*ppCVar7 != (Camera *)0x0) {
                                                        pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)*ppCVar7,
                                                                             (MethodInfo *)0x0);
                                                        if ((*ppGVar8 != (GameObject *)0x0) &&
                                                           (pTVar12 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (*ppGVar8,
                                                                                 (MethodInfo *)0x0),
                                                           pTVar3 != (Transform *)0x0)) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_LookAt
                                                                    (pTVar3,pTVar12,
                                                                     (MethodInfo *)0x0);
                                                          if ((*ppCVar7 != (Camera *)0x0) &&
                                                             (pTVar3 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   *ppCVar7,(
                                                  MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_Rotate_1
                                                              (pTVar3,cameraRotOffset,
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
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPostRender
               (AccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewGameObject;
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

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPreCull
               (AccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Preview);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewGameObject;
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


/* AccessoryPreviewer() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryPreviewer);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryPreviewer->static_fields;
  (pAVar1->previewPosition).x = 0.0;
  (pAVar1->previewPosition).y = 0.0;
  (pAVar1->previewPosition).z = 0.0;
  return;
}

