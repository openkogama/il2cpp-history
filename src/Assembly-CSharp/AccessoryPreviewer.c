
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
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar2->zeroVector).x;
    uStack_5._4_4_ = (pVVar2->zeroVector).y;
    fStack_6 = (pVVar2->zeroVector).z;
    (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_3;
    fVar7 = _UNK_?;
    (__return_storage_ptr__->m_Center).y = uStack_3._4_4_;
    fStack_6 = fStack_6 * _UNK_?;
    (__return_storage_ptr__->m_Center).z = (float)ppOStack_4;
    (__return_storage_ptr__->m_Extents).x = (float)(undefined4)uStack_5 * fVar7;
    (__return_storage_ptr__->m_Extents).y = (float)uStack_5._4_4_ * fVar7;
    (__return_storage_ptr__->m_Extents).z = fStack_6;
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
                           ((Bounds *)&stack0xffffff70,(Renderer *)pOVar1->vector[0],
                            (MethodInfo *)0x0);
        fVar7 = (pBVar8->m_Extents).x;
        uStack_3._0_4_ = (pBVar8->m_Extents).y;
        uStack_3._4_4_ = (pBVar8->m_Extents).z;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (go,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          fVar10 = 0.0;
          pVVar11 = aVStack_12;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (pVVar11,pTVar9,(MethodInfo *)0x0);
          uStack_5._0_4_ = pVVar13->x;
          uStack_5._4_4_ = pVVar13->y;
          fStack_6 = fVar10 - pVVar13->z;
          ppOStack_4 = pOVar1->vector;
          uStack_14 = 1;
          (__return_storage_ptr__->m_Center).x = (float)pVVar11 - (float)(undefined4)uStack_5;
          (__return_storage_ptr__->m_Center).y = (float)pTVar9 - (float)uStack_5._4_4_;
          (__return_storage_ptr__->m_Center).z = fStack_6;
          (__return_storage_ptr__->m_Extents).x = fVar7;
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
                               ((Bounds *)&stack0xffffff70,(Renderer *)*ppOStack_4,
                                (MethodInfo *)0x0);
            fVar15 = (pBVar8->m_Extents).x;
            fVar7 = (pBVar8->m_Extents).y;
            fVar10 = (pBVar8->m_Extents).z;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (go,(MethodInfo *)0x0);
            if (pTVar9 == (Transform *)0x0) goto code_?;
            fVar16 = 0.0;
            pVVar11 = &VStack_17;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (pVVar11,pTVar9,(MethodInfo *)0x0);
            uStack_5._0_4_ = pVVar13->x;
            uStack_5._4_4_ = pVVar13->y;
            fStack_6 = pVVar13->z;
            fStack_18 = (float)pVVar11 - (float)(undefined4)uStack_5;
            fStack_19 = (float)pTVar9 - (float)uStack_5._4_4_;
            uStack_3 = CONCAT44(fVar16 - fStack_6,(undefined4)uStack_3);
            fVar10 = (fVar16 - fStack_6) - fVar10;
            fVar16 = 0.0;
            point.y = fStack_19 - fVar7;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryPreviewer);
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__System__Single);
    func_?(&::StringLiteral_Preview);
    func_?(&StringLiteral_RenderCam_Preview__0_);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  (this->fields).rootTransform = rootTransform;
  func_?(&(this->fields).rootTransform,rootTransform);
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (((pGVar1 != (GameObject *)0x0) &&
      (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,rootTransform,(MethodInfo *)0x0), woGameObjectCopy != (GameObject *)0x0)) {
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_RenderCam_Preview__0_,(Object *)pSVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar1,pSVar3,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (::StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,iVar4,(MethodInfo *)0x0);
    this_00 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
              (this_00,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    (this->fields).previewTexture = this_00;
    func_?();
    pRVar5 = (this->fields).previewTexture;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    if (pRVar5 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pRVar5,pSVar3,(MethodInfo *)0x0);
      pRVar5 = (this->fields).previewTexture;
      if (pRVar5 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                  (pRVar5,2,(MethodInfo *)0x0);
        pRVar5 = (this->fields).previewTexture;
        if (pRVar5 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)pRVar5,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          pRVar5 = (this->fields).previewTexture;
          if (pRVar5 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            pCVar6 = (Camera *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                );
            (this->fields).previewCam = pCVar6;
            func_?(&(this->fields).previewCam,pCVar6);
            pCVar6 = (this->fields).previewCam;
            if (pCVar6 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                        (pCVar6,(CameraClearFlags__Enum)&(this->fields).previewTexture,
                         (MethodInfo *)0x0);
              pCVar6 = (this->fields).previewCam;
              if (pCVar6 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                          (pCVar6,(Color)ZEXT816(0),(MethodInfo *)0x0);
                pCVar6 = (this->fields).previewCam;
                if (pCVar6 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                            (pCVar6,35.0,(MethodInfo *)0x0);
                  pCVar6 = (this->fields).previewCam;
                  if (pCVar6 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                              (pCVar6,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0)
                    ;
                    pCVar6 = (this->fields).previewCam;
                    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                             LayerMask_NameToLayer(::StringLiteral_Preview,(MethodInfo *)0x0);
                    if (pCVar6 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                (pCVar6,1 << ((byte)iVar4 & 0x1f),(MethodInfo *)0x0);
                      pCVar6 = (this->fields).previewCam;
                      if (pCVar6 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                  (pCVar6,0.05,(MethodInfo *)0x0);
                        pCVar6 = (this->fields).previewCam;
                        if (pCVar6 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                    (pCVar6,100.0,(MethodInfo *)0x0);
                          pCVar6 = (this->fields).previewCam;
                          if (pCVar6 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_targetTexture
                                      (pCVar6,(this->fields).previewTexture,(MethodInfo *)0x0);
                            pCVar6 = (this->fields).previewCam;
                            if (pCVar6 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_orthographic(pCVar6,1,(MethodInfo *)0x0);
                              pCVar6 = (this->fields).previewCam;
                              if (pCVar6 != (Camera *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_set_orthographicSize(pCVar6,0.88,(MethodInfo *)0x0);
                                (this->fields).previewGameObject = woGameObjectCopy;
                                func_?(&(this->fields).previewGameObject,woGameObjectCopy);
                                pGVar1 = (this->fields).previewGameObject;
                                pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                          Object_1_get_name((Object_1 *)woGameObjectCopy,
                                                            (MethodInfo *)0x0);
                                pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                                    (StringLiteral_Preview_,pSVar3,
                                                     (MethodInfo *)0x0);
                                if (pGVar1 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                            ((Object_1 *)pGVar1,pSVar3,(MethodInfo *)0x0);
                                  pGVar1 = (this->fields).previewGameObject;
                                  if ((pGVar1 != (GameObject *)0x0) &&
                                     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar1,(MethodInfo *)0x0),
                                     pTVar2 != (Transform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_parent(pTVar2,rootTransform,(MethodInfo *)0x0);
                                    pGVar1 = (this->fields).previewGameObject;
                                    if (pGVar1 != (GameObject *)0x0) {
                                      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar1,(MethodInfo *)0x0);
                                      if (cRam_? == '\0') {
                                        func_?(&TypeInfo__UnityEngine__Quaternion);
                                        cRam_? = '\x01';
                                      }
                                      if (pTVar2 != (Transform *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_set_localRotation
                                                  (pTVar2,TypeInfo__UnityEngine__Quaternion->
                                                           static_fields->identityQuaternion,
                                                   (MethodInfo *)0x0);
                                        pGVar1 = (this->fields).previewGameObject;
                                        if (pGVar1 != (GameObject *)0x0) {
                                          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar1,(MethodInfo *)0x0);
                                          if ((TypeInfo__AccessoryPreviewer->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          if (pTVar2 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (pTVar2,TypeInfo__AccessoryPreviewer->
                                                               static_fields->previewPosition,
                                                       (MethodInfo *)0x0);
                                            pAVar7 = TypeInfo__AccessoryPreviewer->static_fields;
                                            uVar8 = (pAVar7->previewPosition).x;
                                            uVar9 = (pAVar7->previewPosition).y;
                                            fVar10 = (pAVar7->previewPosition).z;
                                            pAVar7 = TypeInfo__AccessoryPreviewer->static_fields;
                                            (pAVar7->previewPosition).x =
                                                 (float)uVar8 + _UNK_?;
                                            (pAVar7->previewPosition).y = (float)uVar9 + 0.0;
                                            (pAVar7->previewPosition).z = fVar10 + 0.0;
                                            pGVar1 = (this->fields).previewGameObject;
                                            if (pGVar1 != (GameObject *)0x0) {
                                              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar1,(MethodInfo *)0x0);
                                              pGVar1 = (this->fields).previewGameObject;
                                              if ((pGVar1 != (GameObject *)0x0) &&
                                                 (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar1,(MethodInfo *)0x0),
                                                 pTVar11 != (Transform *)0x0)) {
                                                pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_position
                                                                    ((Vector3 *)&stack0xffffffe4,
                                                                     pTVar11,(MethodInfo *)0x0);
                                                uVar13._0_4_ = pVVar12->x;
                                                uVar13._4_4_ = pVVar12->y;
                                                fVar10 = pVVar12->z;
                                                if (cRam_? == '\0') {
                                                  puVar14 = &UNK_?;
                                                  func_?();
                                                  uVar13 = CONCAT44(puVar14,(undefined4)uVar13);
                                                  cRam_? = '\x01';
                                                }
                                                if (pTVar2 != (Transform *)0x0) {
                                                  point.z = fVar10;
                                                  point.x = (float)(int)uVar13;
                                                  point.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_RotateAround
                                                            (pTVar2,point,
                                                             TypeInfo__UnityEngine__Vector3->
                                                             static_fields->upVector,215.0,
                                                             (MethodInfo *)0x0);
                                                  pBVar15 = AccessoryPreviewer_ComputeLocalBounds
                                                                      ((Bounds *)&puStack_16,
                                                                       (this->fields).
                                                                       previewGameObject,
                                                                       (MethodInfo *)0x0);
                                                  fVar10 = (pBVar15->m_Center).y;
                                                  fVar17 = (pBVar15->m_Extents).x;
                                                  uVar18 = (pBVar15->m_Extents).y;
                                                  uVar19 = (pBVar15->m_Extents).z;
                                                  pGVar1 = (this->fields).previewGameObject;
                                                  if ((pGVar1 != (GameObject *)0x0) &&
                                                     (pTVar2 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar1,(MethodInfo *)0x0
                                                                          ),
                                                     pTVar2 != (Transform *)0x0)) {
                                                    pVVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_localScale
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar2,(MethodInfo *)0x0)
                                                    ;
                                                    fVar20 = pVVar12->x;
                                                    uVar21 = pVVar12->y;
                                                    fVar22 = pVVar12->z;
                                                    iVar23 = func_?();
                                                    fVar24 = _UNK_?;
                                                    if (iVar23 != 0) {
                                                      if (*(int *)(iVar23 + 0xc) == 0)
                                                      goto code_?;
                                                      fVar25 = (float)uVar18 * _UNK_?;
                                                      *(float *)(iVar23 + 0x10) =
                                                           fVar20 * fVar17 * _UNK_?;
                                                      if (*(uint *)(iVar23 + 0xc) < 2)
                                                      goto code_?;
                                                      *(float *)(iVar23 + 0x14) =
                                                           (float)uVar21 * fVar25;
                                                      if (*(uint *)(iVar23 + 0xc) < 3)
                                                      goto code_?;
                                                      *(float *)(iVar23 + 0x18) =
                                                           fVar22 * (float)uVar19 * fVar24;
                                                      uVar26 = *(uint *)(iVar23 + 0xc);
                                                      if (uVar26 == 0) {
                                                        rootTransform = (Transform *)0x0;
                                                      }
                                                      else {
                                                        pTVar2 = *(Transform **)(iVar23 + 0x10);
                                                        uVar27 = 1;
                                                        rootTransform = pTVar2;
                                                        if (1 < (int)uVar26) {
                                                          pfVar28 = (float *)(iVar23 + 0x14);
                                                          do {
                                                            if (uVar26 <= uVar27)
                                                            goto code_?;
                                                            pTVar11 = (Transform *)*pfVar28;
                                                            if ((float)pTVar2 < (float)pTVar11) {
                                                              pTVar2 = pTVar11;
                                                              rootTransform = pTVar11;
                                                            }
                                                            uVar27 = uVar27 + 1;
                                                            pfVar28 = pfVar28 + 1;
                                                          } while ((int)uVar27 < (int)uVar26);
                                                        }
                                                      }
                                                      pGVar1 = (this->fields).previewGameObject;
                                                      if (pGVar1 != (GameObject *)0x0) {
                                                        pTVar2 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar1,(MethodInfo *)
                                                                                     0x0);
                                                        fVar24 = _UNK_? /
                                                                 (float)rootTransform;
                                                        fVar17 = fVar20 * fVar24;
                                                        if (_UNK_? <= fVar20 * fVar24) {
                                                          fVar17 = _UNK_?;
                                                        }
                                                        fVar20 = (float)uVar21 * fVar24;
                                                        if (_UNK_? <= (float)uVar21 * fVar24)
                                                        {
                                                          fVar20 = _UNK_?;
                                                        }
                                                        fVar25 = fVar22 * fVar24;
                                                        if (_UNK_? <= fVar22 * fVar24) {
                                                          fVar25 = _UNK_?;
                                                        }
                                                        if (pTVar2 != (Transform *)0x0) {
                                                          value.y = fVar20;
                                                          value.x = fVar17;
                                                          value.z = fVar25;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_localScale
                                                                    (pTVar2,value,(MethodInfo *)0x0
                                                                    );
                                                          pGVar1 = (this->fields).previewGameObject
                                                          ;
                                                          if (pGVar1 != (GameObject *)0x0) {
                                                            pTVar2 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar1,(MethodInfo
                                                                                          *)0x0);
                                                            pGVar1 = (this->fields).
                                                                      previewGameObject;
                                                            if ((pGVar1 != (GameObject *)0x0) &&
                                                               (pTVar11 = UnityEngine.CoreModule.dll
                                                                          ::UnityEngine::GameObject
                                                                          ::GameObject_get_transform
                                                                                    (pGVar1,(
                                                  MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
                                                    pVVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar11,(MethodInfo *)0x0)
                                                    ;
                                                    uVar29 = pVVar12->x;
                                                    uVar30 = pVVar12->y;
                                                    if (pTVar2 != (Transform *)0x0) {
                                                      value_00.y = (float)uVar30 -
                                                                   (fVar10 - (float)uVar18);
                                                      value_00.x = (float)uVar29 - 0.0;
                                                      value_00.z = pVVar12->z - 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar2,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar6 = (this->fields).previewCam;
                                                      if (pCVar6 != (Camera *)0x0) {
                                                        pTVar2 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar6,
                                                                             (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields).previewGameObject;
                                                        if ((pGVar1 != (GameObject *)0x0) &&
                                                           (pTVar11 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar1,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar11 != (Transform *)0x0)) {
                                                          pVVar12 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_position
                                                                              ((Vector3 *)
                                                                               &stack0xffffffe4,
                                                                               pTVar11,(MethodInfo *
                                                                                       )0x0);
                                                          uVar31 = pVVar12->x;
                                                          uVar32 = pVVar12->y;
                                                          if (pTVar2 != (Transform *)0x0) {
                                                            value_01.y = cameraPosOffset.y +
                                                                         (float)uVar32;
                                                            value_01.x = (float)this_00 +
                                                                         (float)uVar31;
                                                            value_01.z = cameraPosOffset.z +
                                                                         pVVar12->z;
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_set_position
                                                                      (pTVar2,value_01,
                                                                       (MethodInfo *)0x0);
                                                            pCVar6 = (this->fields).previewCam;
                                                            if ((pCVar6 != (Camera *)0x0) &&
                                                               (pTVar2 = UnityEngine.CoreModule.dll
                                                                          ::UnityEngine::Component::
                                                                          Component_get_transform
                                                                                    ((Component *)
                                                                                     pCVar6,(
                                                  MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
                                                    pVVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar2,(MethodInfo *)0x0)
                                                    ;
                                                    uVar33 = pVVar12->x;
                                                    fVar10 = pVVar12->z;
                                                    pCVar6 = (this->fields).previewCam;
                                                    if ((pCVar6 != (Camera *)0x0) &&
                                                       (pTVar2 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar6,
                                                                             (MethodInfo *)0x0),
                                                       pTVar2 != (Transform *)0x0)) {
                                                      value_02.y = cameraPosOffset.y;
                                                      value_02.x = (float)uVar33;
                                                      value_02.z = fVar10;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar2,value_02,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar6 = (this->fields).previewCam;
                                                      if (pCVar6 != (Camera *)0x0) {
                                                        pTVar2 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar6,
                                                                             (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields).previewGameObject;
                                                        if ((pGVar1 != (GameObject *)0x0) &&
                                                           (pTVar11 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar1,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar2 != (Transform *)0x0)) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_LookAt
                                                                    (pTVar2,pTVar11,
                                                                     (MethodInfo *)0x0);
                                                          pCVar6 = (this->fields).previewCam;
                                                          if ((pCVar6 != (Camera *)0x0) &&
                                                             (pTVar2 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pCVar6,(
                                                  MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_Rotate_1
                                                              (pTVar2,cameraRotOffset,
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
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPreCull
               (AccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral_Preview);
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
                      (::StringLiteral_Preview,(MethodInfo *)0x0);
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

