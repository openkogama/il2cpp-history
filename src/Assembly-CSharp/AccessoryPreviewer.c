
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
    ppOStack_4 = (Object **)(pVVar2->zeroVector).z;
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
    (__return_storage_ptr__->m_Center).z = (float)ppOStack_4;
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
          ppOStack_4 = pOVar1->vector;
          uStack_14 = 1;
          (__return_storage_ptr__->m_Center).x = (float)pVVar11 - (float)(undefined4)uStack_6;
          (__return_storage_ptr__->m_Center).y = (float)pTVar9 - (float)uStack_6._4_4_;
          (__return_storage_ptr__->m_Center).z = fStack_7;
          (__return_storage_ptr__->m_Extents).x = fVar5;
          (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_3;
          (__return_storage_ptr__->m_Extents).z = uStack_3._4_4_;
          while( true ) {
            ppOStack_4 = ppOStack_4 + 1;
            if ((int)pOVar1->max_length <= (int)uStack_14) {
              return __return_storage_ptr__;
            }
            if (pOVar1->max_length <= uStack_14) break;
            if ((Renderer *)*ppOStack_4 == (Renderer *)0x0) goto code_?;
            pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                               ((Bounds *)&stack0xffffff80,(Renderer *)*ppOStack_4,
                                (MethodInfo *)0x0);
            fVar15 = (pBVar8->m_Extents).x;
            fVar5 = (pBVar8->m_Extents).y;
            fVar10 = (pBVar8->m_Extents).z;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (go,(MethodInfo *)0x0);
            if (pTVar9 == (Transform *)0x0) goto code_?;
            fVar16 = 0.0;
            pVVar11 = &VStack_17;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (pVVar11,pTVar9,(MethodInfo *)0x0);
            uStack_6._0_4_ = pVVar13->x;
            uStack_6._4_4_ = pVVar13->y;
            fStack_7 = pVVar13->z;
            fStack_18 = (float)pVVar11 - (float)(undefined4)uStack_6;
            fStack_19 = (float)pTVar9 - (float)uStack_6._4_4_;
            uStack_3 = CONCAT44(fVar16 - fStack_7,(undefined4)uStack_3);
            fVar10 = (fVar16 - fStack_7) - fVar10;
            fVar16 = 0.0;
            point.y = fStack_19 - fVar5;
            point.x = fStack_18 - fVar15;
            point.z = fVar10;
            fStack_20 = fVar10;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                      (__return_storage_ptr__,point,(MethodInfo *)0x0);
            aVStack_12[0].z = fVar16 + uStack_3._4_4_;
            point_00.y = fVar10 + fStack_19;
            point_00.x = fVar15 + fStack_18;
            point_00.z = aVStack_12[0].z;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                      (__return_storage_ptr__,point_00,(MethodInfo *)0x0);
            uStack_14 = uStack_14 + 1;
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
  pTVar4 = (this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = (this->fields).rootTransform;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar6,(MethodInfo *)0x0);
    (this->fields).rootTransform = (Transform *)0x0;
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
  pAVar1 = this;
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  (this->fields).rootTransform = rootTransform;
  pGVar2 = this_00;
  func_?(&(this->fields).rootTransform,rootTransform);
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (((this_00 != (GameObject *)0x0) &&
      (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar3,rootTransform,(MethodInfo *)0x0), woGameObjectCopy != (GameObject *)0x0)) {
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_RenderCam_Preview__0_,(Object *)pSVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)this_00,pSVar4,(MethodInfo *)0x0);
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this_00,iVar5,(MethodInfo *)0x0);
    this_01 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
              (this_01,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    (this->fields).previewTexture = this_01;
    func_?();
    pRVar6 = (this->fields).previewTexture;
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    if (pRVar6 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pRVar6,pSVar4,(MethodInfo *)0x0);
      pRVar6 = (this->fields).previewTexture;
      if (pRVar6 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                  (pRVar6,2,(MethodInfo *)0x0);
        pRVar6 = (this->fields).previewTexture;
        if (pRVar6 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)pRVar6,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          pRVar6 = (this->fields).previewTexture;
          if (pRVar6 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar6,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            pCVar7 = (Camera *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar2,
                                 UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                );
            (this->fields).previewCam = pCVar7;
            func_?(&(this->fields).previewCam,pCVar7);
            pCVar7 = (this->fields).previewCam;
            if (pCVar7 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                        (pCVar7,(CameraClearFlags__Enum)&(this->fields).previewTexture,
                         (MethodInfo *)0x0);
              pCVar7 = (this->fields).previewCam;
              if (pCVar7 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                          (pCVar7,(Color)ZEXT816(0),(MethodInfo *)0x0);
                pCVar7 = (this->fields).previewCam;
                if (pCVar7 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                            (pCVar7,35.0,(MethodInfo *)0x0);
                  pCVar7 = (this->fields).previewCam;
                  if (pCVar7 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                              (pCVar7,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0)
                    ;
                    pCVar7 = (this->fields).previewCam;
                    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                             LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
                    if (pCVar7 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                (pCVar7,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
                      pCVar7 = (this->fields).previewCam;
                      if (pCVar7 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                  (pCVar7,0.05,(MethodInfo *)0x0);
                        pCVar7 = (this->fields).previewCam;
                        if (pCVar7 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                    (pCVar7,100.0,(MethodInfo *)0x0);
                          pCVar7 = (this->fields).previewCam;
                          if (pCVar7 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_targetTexture
                                      (pCVar7,(this->fields).previewTexture,(MethodInfo *)0x0);
                            pCVar7 = (this->fields).previewCam;
                            if (pCVar7 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_orthographic(pCVar7,1,(MethodInfo *)0x0);
                              pCVar7 = (this->fields).previewCam;
                              if (pCVar7 != (Camera *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_set_orthographicSize(pCVar7,0.88,(MethodInfo *)0x0);
                                (this->fields).previewGameObject = woGameObjectCopy;
                                func_?(&(this->fields).previewGameObject,woGameObjectCopy);
                                pGVar2 = (this->fields).previewGameObject;
                                pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                          Object_1_get_name((Object_1 *)woGameObjectCopy,
                                                            (MethodInfo *)0x0);
                                pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                                    (StringLiteral_Preview_,pSVar4,
                                                     (MethodInfo *)0x0);
                                if (pGVar2 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                            ((Object_1 *)pGVar2,pSVar4,(MethodInfo *)0x0);
                                  pGVar2 = (this->fields).previewGameObject;
                                  if ((pGVar2 != (GameObject *)0x0) &&
                                     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar2,(MethodInfo *)0x0),
                                     pTVar3 != (Transform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_parent(pTVar3,rootTransform,(MethodInfo *)0x0);
                                    pGVar2 = (this->fields).previewGameObject;
                                    if (pGVar2 != (GameObject *)0x0) {
                                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar2,(MethodInfo *)0x0);
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
                                        pGVar2 = (this->fields).previewGameObject;
                                        if (pGVar2 != (GameObject *)0x0) {
                                          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar2,(MethodInfo *)0x0);
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
                                            pAVar8 = TypeInfo__AccessoryPreviewer->static_fields;
                                            uVar9 = (pAVar8->previewPosition).x;
                                            uVar10 = (pAVar8->previewPosition).y;
                                            fVar11 = (pAVar8->previewPosition).z;
                                            pAVar8 = TypeInfo__AccessoryPreviewer->static_fields;
                                            (pAVar8->previewPosition).x =
                                                 (float)uVar9 + _UNK_?;
                                            (pAVar8->previewPosition).y = (float)uVar10 + 0.0;
                                            (pAVar8->previewPosition).z = fVar11 + 0.0;
                                            pGVar2 = (this->fields).previewGameObject;
                                            if (pGVar2 != (GameObject *)0x0) {
                                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar2,(MethodInfo *)0x0);
                                              pGVar2 = (this->fields).previewGameObject;
                                              if ((pGVar2 != (GameObject *)0x0) &&
                                                 (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar2,(MethodInfo *)0x0),
                                                 pTVar12 != (Transform *)0x0)) {
                                                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_position
                                                                    ((Vector3 *)&stack0xffffffe4,
                                                                     pTVar12,(MethodInfo *)0x0);
                                                uVar14._0_4_ = pVVar13->x;
                                                uVar14._4_4_ = pVVar13->y;
                                                fVar11 = pVVar13->z;
                                                if (cRam_? == '\0') {
                                                  puVar15 = &UNK_?;
                                                  func_?();
                                                  uVar14 = CONCAT44(puVar15,(undefined4)uVar14);
                                                  cRam_? = '\x01';
                                                }
                                                if (pTVar3 != (Transform *)0x0) {
                                                  point.z = fVar11;
                                                  point.x = (float)(int)uVar14;
                                                  point.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_RotateAround
                                                            (pTVar3,point,
                                                             TypeInfo__UnityEngine__Vector3->
                                                             static_fields->upVector,215.0,
                                                             (MethodInfo *)0x0);
                                                  pBVar16 = AccessoryPreviewer_ComputeLocalBounds
                                                                      ((Bounds *)&puStack_17,
                                                                       (this->fields).
                                                                       previewGameObject,
                                                                       (MethodInfo *)0x0);
                                                  fVar11 = (pBVar16->m_Center).y;
                                                  fVar18 = (pBVar16->m_Extents).x;
                                                  uVar19 = (pBVar16->m_Extents).y;
                                                  uVar20 = (pBVar16->m_Extents).z;
                                                  pGVar2 = (this->fields).previewGameObject;
                                                  if ((pGVar2 != (GameObject *)0x0) &&
                                                     (pTVar3 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar2,(MethodInfo *)0x0
                                                                          ),
                                                     pTVar3 != (Transform *)0x0)) {
                                                    pVVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_localScale
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar3,(MethodInfo *)0x0)
                                                    ;
                                                    fVar21 = pVVar13->x;
                                                    uVar22 = pVVar13->y;
                                                    fVar23 = pVVar13->z;
                                                    iVar24 = func_?();
                                                    fVar25 = _UNK_?;
                                                    if (iVar24 != 0) {
                                                      if (*(int *)(iVar24 + 0xc) == 0)
                                                      goto code_?;
                                                      fVar26 = (float)uVar19 * _UNK_?;
                                                      *(float *)(iVar24 + 0x10) =
                                                           fVar21 * fVar18 * _UNK_?;
                                                      if (*(uint *)(iVar24 + 0xc) < 2)
                                                      goto code_?;
                                                      *(float *)(iVar24 + 0x14) =
                                                           (float)uVar22 * fVar26;
                                                      if (*(uint *)(iVar24 + 0xc) < 3)
                                                      goto code_?;
                                                      *(float *)(iVar24 + 0x18) =
                                                           fVar23 * (float)uVar20 * fVar25;
                                                      uVar27 = *(uint *)(iVar24 + 0xc);
                                                      if (uVar27 == 0) {
                                                        this = (AccessoryPreviewer *)0x0;
                                                      }
                                                      else {
                                                        pAVar28 = *(AccessoryPreviewer **)
                                                                   (iVar24 + 0x10);
                                                        uVar29 = 1;
                                                        this = pAVar28;
                                                        if (1 < (int)uVar27) {
                                                          pfVar30 = (float *)(iVar24 + 0x14);
                                                          do {
                                                            if (uVar27 <= uVar29)
                                                            goto code_?;
                                                            pAVar31 = (AccessoryPreviewer *)*pfVar30;
                                                            if ((float)pAVar28 < (float)pAVar31) {
                                                              pAVar28 = pAVar31;
                                                              this = pAVar31;
                                                            }
                                                            uVar29 = uVar29 + 1;
                                                            pfVar30 = pfVar30 + 1;
                                                          } while ((int)uVar29 < (int)uVar27);
                                                        }
                                                      }
                                                      pGVar2 = (pAVar1->fields).previewGameObject;
                                                      if (pGVar2 != (GameObject *)0x0) {
                                                        pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar2,(MethodInfo *)
                                                                                     0x0);
                                                        fVar25 = _UNK_? / (float)this;
                                                        fVar18 = fVar21 * fVar25;
                                                        if (_UNK_? <= fVar21 * fVar25) {
                                                          fVar18 = _UNK_?;
                                                        }
                                                        fVar21 = (float)uVar22 * fVar25;
                                                        if (_UNK_? <= (float)uVar22 * fVar25)
                                                        {
                                                          fVar21 = _UNK_?;
                                                        }
                                                        fVar26 = fVar23 * fVar25;
                                                        if (_UNK_? <= fVar23 * fVar25) {
                                                          fVar26 = _UNK_?;
                                                        }
                                                        if (pTVar3 != (Transform *)0x0) {
                                                          value.y = fVar21;
                                                          value.x = fVar18;
                                                          value.z = fVar26;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_localScale
                                                                    (pTVar3,value,(MethodInfo *)0x0
                                                                    );
                                                          pGVar2 = (pAVar1->fields).
                                                                    previewGameObject;
                                                          if (pGVar2 != (GameObject *)0x0) {
                                                            pTVar3 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar2,(MethodInfo
                                                                                          *)0x0);
                                                            pGVar2 = (pAVar1->fields).
                                                                      previewGameObject;
                                                            if ((pGVar2 != (GameObject *)0x0) &&
                                                               (pTVar12 = UnityEngine.CoreModule.dll
                                                                          ::UnityEngine::GameObject
                                                                          ::GameObject_get_transform
                                                                                    (pGVar2,(
                                                  MethodInfo *)0x0), pTVar12 != (Transform *)0x0)) {
                                                    pVVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar12,(MethodInfo *)0x0)
                                                    ;
                                                    uVar32 = pVVar13->x;
                                                    uVar33 = pVVar13->y;
                                                    if (pTVar3 != (Transform *)0x0) {
                                                      value_00.y = (float)uVar33 -
                                                                   (fVar11 - (float)uVar19);
                                                      value_00.x = (float)uVar32 - 0.0;
                                                      value_00.z = pVVar13->z - 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar3,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar7 = (pAVar1->fields).previewCam;
                                                      if (pCVar7 != (Camera *)0x0) {
                                                        pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar7,
                                                                             (MethodInfo *)0x0);
                                                        pGVar2 = (pAVar1->fields).
                                                                  previewGameObject;
                                                        if ((pGVar2 != (GameObject *)0x0) &&
                                                           (pTVar12 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar2,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar12 != (Transform *)0x0)) {
                                                          pVVar13 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_position
                                                                              ((Vector3 *)
                                                                               &stack0xfffffff0,
                                                                               pTVar12,(MethodInfo *
                                                                                       )0x0);
                                                          uVar34 = pVVar13->x;
                                                          uVar35 = pVVar13->y;
                                                          if (pTVar3 != (Transform *)0x0) {
                                                            value_01.y = cameraPosOffset.y +
                                                                         (float)uVar35;
                                                            value_01.x = (float)this_01 +
                                                                         (float)uVar34;
                                                            value_01.z = cameraPosOffset.z +
                                                                         pVVar13->z;
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_set_position
                                                                      (pTVar3,value_01,
                                                                       (MethodInfo *)0x0);
                                                            pCVar7 = (pAVar1->fields).previewCam;
                                                            if ((pCVar7 != (Camera *)0x0) &&
                                                               (pTVar3 = UnityEngine.CoreModule.dll
                                                                          ::UnityEngine::Component::
                                                                          Component_get_transform
                                                                                    ((Component *)
                                                                                     pCVar7,(
                                                  MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                    pVVar13 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xfffffff0
                                                                         ,pTVar3,(MethodInfo *)0x0)
                                                    ;
                                                    uVar36 = pVVar13->x;
                                                    fVar11 = pVVar13->z;
                                                    pCVar7 = (pAVar1->fields).previewCam;
                                                    uVar37._4_4_ = cameraPosOffset.y;
                                                    uVar37._0_4_ = (float)uVar36;
                                                    if ((pCVar7 != (Camera *)0x0) &&
                                                       (pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar7,
                                                                             (MethodInfo *)0x0),
                                                       pTVar3 != (Transform *)0x0)) {
                                                      value_02.z = fVar11;
                                                      value_02.x = (float)uVar37;
                                                      value_02.y = SUB84(uVar37,4);
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar3,value_02,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar7 = (pAVar1->fields).previewCam;
                                                      if (pCVar7 != (Camera *)0x0) {
                                                        pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar7,
                                                                             (MethodInfo *)0x0);
                                                        pGVar2 = (pAVar1->fields).
                                                                  previewGameObject;
                                                        if ((pGVar2 != (GameObject *)0x0) &&
                                                           (pTVar12 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar2,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar3 != (Transform *)0x0)) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_LookAt
                                                                    (pTVar3,pTVar12,
                                                                     (MethodInfo *)0x0);
                                                          pCVar7 = (pAVar1->fields).previewCam;
                                                          if ((pCVar7 != (Camera *)0x0) &&
                                                             (pTVar3 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pCVar7,(
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

