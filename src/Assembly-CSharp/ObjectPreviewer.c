
/* Bounds ComputeLocalBounds(GameObject) */

Bounds * Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_ComputeLocalBounds
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


/* ObjectPreviewer Create(Int32, CameraClearFlags, LayerFlags, Transform, String, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create
          (int32_t textureSize,CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
          Transform *previewItemsRoot,String *name,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObjectPreviewer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ObjectPreviewer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObjectPreviewer);
  }
  iVar1 = TypeInfo__ObjectPreviewer->static_fields->previewerIndex;
  TypeInfo__ObjectPreviewer->static_fields->previewerIndex = iVar1 + 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  previewPosition.y = 300.0;
  previewPosition.x = (float)(iVar1 * 10);
  previewPosition.z = 0.0;
  pOVar2 = ObjectPreviewer_Create_2
                     (textureSize,textureSize,clearFlags,layersToRender,
                      TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,previewItemsRoot,
                      previewPosition,name,(MVWorldObjectClient *)0x0,woGameObjectCopy,
                      (MethodInfo *)0x0);
  return pOVar2;
}


/* ObjectPreviewer Create(Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create_1
          (int32_t textureSize,CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
          Vector3 cameraOffset,Transform *previewItemsRoot,Vector3 previewPosition,String *name,
          MVWorldObjectClient *wo,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObjectPreviewer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ObjectPreviewer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObjectPreviewer);
  }
  pOVar1 = ObjectPreviewer_Create_2
                     (textureSize,textureSize,clearFlags,layersToRender,cameraOffset,
                      previewItemsRoot,previewPosition,name,wo,woGameObjectCopy,(MethodInfo *)0x0);
  return pOVar1;
}


/* ObjectPreviewer Create(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3,
   String, MVWorldObjectClient, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create_2
          (int32_t textureWidth,int32_t textureHeight,CameraClearFlags__Enum clearFlags,
          LayerFlags__Enum layersToRender,Vector3 cameraOffset,Transform *previewItemsRoot,
          Vector3 previewPosition,String *name,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&
                    TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                   );
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    func_?(&
                    ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                   );
    func_?(&
                    UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                   );
    func_?(&
                    AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                   );
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&
                    SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MVMovingPlatformGroup);
    func_?(&TypeInfo__ObjectPreviewer);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral__Item_);
    func_?(&StringLiteral__woID_);
    func_?(&StringLiteral_Preview__0__RenderCam);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0)
  ;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pOVar2 = (ObjectPreviewer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                          ), pOVar2 != (ObjectPreviewer *)0x0)) {
    (pOVar2->fields).previewCamOffset.x = cameraOffset.x;
    (pOVar2->fields).previewCamOffset.y = cameraOffset.y;
    (pOVar2->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
    (pOVar2->fields).previewCamOffset.z = cameraOffset.z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar3,previewItemsRoot,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pGVar1,pSVar4,(MethodInfo *)0x0);
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Preview,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar1,iVar5,(MethodInfo *)0x0);
      this = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                (this,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                 (MethodInfo *)0x0);
      (pOVar2->fields)._PreviewTexture_k__BackingField = this;
      func_?();
      pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
      if (pRVar6 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pRVar6,name,(MethodInfo *)0x0);
        pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
        if (pRVar6 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                    (pRVar6,2,(MethodInfo *)0x0);
          pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
          if (pRVar6 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                      ((Texture *)pRVar6,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
            pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
            if (pRVar6 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)pRVar6,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
              pCVar7 = (Camera *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar1,
                                   UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                  );
              (pOVar2->fields).previewCam = pCVar7;
              func_?(&(pOVar2->fields).previewCam,pCVar7);
              pCVar7 = (pOVar2->fields).previewCam;
              if (pCVar7 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                          (pCVar7,(CameraClearFlags__Enum)this,(MethodInfo *)0x0);
                pCVar7 = (pOVar2->fields).previewCam;
                if (pCVar7 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                            (pCVar7,(Color)ZEXT816(0),(MethodInfo *)0x0);
                  pCVar7 = (pOVar2->fields).previewCam;
                  if (pCVar7 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              (pCVar7,35.0,(MethodInfo *)0x0);
                    pCVar7 = (pOVar2->fields).previewCam;
                    if (pCVar7 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                (pCVar7,2.708901e+08 /
                                         (float)(int)&(pOVar2->fields).
                                                      _PreviewTexture_k__BackingField,
                                 (MethodInfo *)0x0);
                      pCVar7 = (pOVar2->fields).previewCam;
                      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                               LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
                      if (pCVar7 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                  (pCVar7,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
                        pCVar7 = (pOVar2->fields).previewCam;
                        if (pCVar7 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    (pCVar7,0.05,(MethodInfo *)0x0);
                          pCVar7 = (pOVar2->fields).previewCam;
                          if (pCVar7 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                      (pCVar7,100.0,(MethodInfo *)0x0);
                            pCVar7 = (pOVar2->fields).previewCam;
                            if (pCVar7 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_targetTexture
                                        (pCVar7,(pOVar2->fields)._PreviewTexture_k__BackingField,
                                         (MethodInfo *)0x0);
                              (pOVar2->fields)._PreviewGameObject_k__BackingField =
                                   woGameObjectCopy;
                              func_?(&(pOVar2->fields)._PreviewGameObject_k__BackingField,
                                              woGameObjectCopy);
                              pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                              if (wo == (MVWorldObjectClient *)0x0) {
                                pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                                    (StringLiteral_Preview_,name,(MethodInfo *)0x0);
                              }
                              else {
                                values = (String__Array *)
                                         func_?(TypeInfo__System__String,6);
                                pSVar4 = StringLiteral_Preview_;
                                if (values == (String__Array *)0x0) goto code_?;
                                if (values->max_length == 0) goto code_?;
                                values->vector[0] = StringLiteral_Preview_;
                                func_?(values->vector,pSVar4);
                                if (values->max_length < 2) goto code_?;
                                values->vector[1] = name;
                                func_?(values->vector + 1,name);
                                pSVar4 = StringLiteral__Item_;
                                if (values->max_length < 3) goto code_?;
                                values->vector[2] = StringLiteral__Item_;
                                func_?(values->vector + 2,pSVar4);
                                pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                                if (values->max_length < 4) goto code_?;
                                values->vector[3] = pSVar4;
                                func_?(values->vector + 3,pSVar4);
                                pSVar4 = StringLiteral__woID_;
                                if (values->max_length < 5) goto code_?;
                                values->vector[4] = StringLiteral__woID_;
                                func_?(values->vector + 4,pSVar4);
                                pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                                if (values->max_length < 6) goto code_?;
                                values->vector[5] = pSVar4;
                                func_?(values->vector + 5,pSVar4);
                                pSVar4 = mscorlib.dll::System::String::String_Concat_6
                                                    (values,(MethodInfo *)0x0);
                              }
                              if (pGVar1 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                          ((Object_1 *)pGVar1,pSVar4,(MethodInfo *)0x0);
                                pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                                if ((pGVar1 != (GameObject *)0x0) &&
                                   (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                                   pTVar3 != (Transform *)0x0)) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_parent(pTVar3,previewItemsRoot,(MethodInfo *)0x0);
                                  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar1 != (GameObject *)0x0) {
                                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    if (pTVar3 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_localRotation
                                                (pTVar3,TypeInfo__UnityEngine__Quaternion->
                                                         static_fields->identityQuaternion,
                                                 (MethodInfo *)0x0);
                                      pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField
                                      ;
                                      if ((pGVar1 != (GameObject *)0x0) &&
                                         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar1,(MethodInfo *)0x0),
                                         pTVar3 != (Transform *)0x0)) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_set_position
                                                  (pTVar3,previewPosition,(MethodInfo *)0x0);
                                        pGVar1 = (pOVar2->fields).
                                                  _PreviewGameObject_k__BackingField;
                                        if (pGVar1 != (GameObject *)0x0) {
                                          pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponentsInChildren
                                                              (pGVar1,
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                                  );
                                          IVar9.m_value = 0;
                                          if (pOVar8 != (Object__Array *)0x0) {
                                            for (; IVar9.m_value < (int)pOVar8->max_length;
                                                IVar9.m_value = IVar9.m_value + 1) {
                                              if (pOVar8->max_length <= (uint)IVar9.m_value)
                                              goto code_?;
                                              pRVar10 = (Renderer *)pOVar8->vector[IVar9.m_value];
                                              if (pRVar10 == (Renderer *)0x0) goto code_?;
                                              pOVar11 = (Object_1 *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_GetComponent_1
                                                                  ((Component *)pRVar10,
                                                                                                                                      
                                                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                                  );
                                              if ((TypeInfo__UnityEngine__Object->_1).
                                                  cctor_finished_or_no_cctor == 0) {
                                                func_?();
                                              }
                                              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       Object::Object_1_op_Inequality
                                                                 (pOVar11,(Object_1 *)0x0,
                                                                  (MethodInfo *)0x0);
                                              if (bVar12 != 0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                                Renderer_set_enabled(pRVar10,0,(MethodInfo *)0x0);
                                              }
                                            }
                                            pGVar1 = (pOVar2->fields).
                                                      _PreviewGameObject_k__BackingField;
                                            if (pGVar1 != (GameObject *)0x0) {
                                              pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::
                                                        GameObject_GetComponentsInChildren
                                                                  (pGVar1,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                              IVar9.m_value = 0;
                                              if (pOVar8 != (Object__Array *)0x0) {
                                                for (; IVar9.m_value < (int)pOVar8->max_length;
                                                    IVar9.m_value = IVar9.m_value + 1) {
                                                  if (pOVar8->max_length <= (uint)IVar9.m_value)
                                                  goto code_?;
                                                  if (((Component *)pOVar8->vector[IVar9.m_value]
                                                       == (Component *)0x0) ||
                                                     (pRVar10 = (Renderer *)
                                                                UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_GetComponent_1
                                                                          ((Component *)
                                                                           pOVar8->vector
                                                                           [IVar9.m_value],
                                                                                                                                                      
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pRVar10 == (Renderer *)0x0))
                                                  goto code_?;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Renderer
                                                  ::Renderer_set_enabled
                                                            (pRVar10,0,(MethodInfo *)0x0);
                                                }
                                                if (wo == (MVWorldObjectClient *)0x0) {
                                                  pGVar1 = (pOVar2->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar1 == (GameObject *)0x0)
                                                  goto code_?;
                                                  pOVar11 = (Object_1 *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_GetComponent_1
                                                                      (pGVar1,
                                                  AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                                                  );
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           Object::Object_1_op_Inequality
                                                                     (pOVar11,(Object_1 *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if (bVar12 == 0) {
                                                    pGVar1 = (pOVar2->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if ((TypeInfo__ObjectPreviewer->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__ObjectPreviewer);
                                                    }
                                                    pBVar13 = ObjectPreviewer_ComputeLocalBounds
                                                                        ((Bounds *)&stack0xffffffcc,
                                                                         pGVar1,(MethodInfo *)0x0);
                                                  }
                                                  else {
                                                    if (pOVar11 == (Object_1 *)0x0)
                                                    goto code_?;
                                                    pBVar13 = (Bounds *)
                                                              (*(code *)pOVar11->klass[1]._0.klass)
                                                                        (&stack0xffffffcc,pOVar11,
                                                                         pOVar11->klass[1]._0.fields
                                                                        );
                                                  }
                                                }
                                                else {
                                                  pBVar13 = (Bounds *)
                                                            (*(code *)(wo->klass->vtable).
                                                                      GetLocalBounds.method)
                                                                      (&stack0xffffffcc,wo,2,
                                                                       (wo->klass->vtable).Select.
                                                                       methodPtr);
                                                }
                                                fVar14 = (pBVar13->m_Extents).z;
                                                pGVar1 = (pOVar2->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if ((pGVar1 != (GameObject *)0x0) &&
                                                   (pTVar3 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar1,(MethodInfo *)0x0),
                                                   pTVar3 != (Transform *)0x0)) {
                                                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_localScale
                                                                      ((Vector3 *)&stack0xffffffd8,
                                                                       pTVar3,(MethodInfo *)0x0);
                                                  fVar16 = 4.2039e-45;
                                                  fVar17 = pVVar15->x;
                                                  fVar18 = pVVar15->y;
                                                  fVar19 = pVVar15->z;
                                                  pSVar20 = TypeInfo__System__Single;
                                                  iVar21 = func_?();
                                                  fVar22 = _UNK_?;
                                                  if (iVar21 != 0) {
                                                    if (*(int *)(iVar21 + 0xc) == 0)
                                                    goto code_?;
                                                    *(float *)(iVar21 + 0x10) =
                                                         (float)pSVar20 * _UNK_?;
                                                    if (*(uint *)(iVar21 + 0xc) < 2)
                                                    goto code_?;
                                                    *(float *)(iVar21 + 0x14) = fVar16 * fVar22;
                                                    if (*(uint *)(iVar21 + 0xc) < 3)
                                                    goto code_?;
                                                    *(float *)(iVar21 + 0x18) = fVar14 * fVar22;
                                                    uVar23 = *(uint *)(iVar21 + 0xc);
                                                    if (uVar23 != 0) {
                                                      fVar22 = *(float *)(iVar21 + 0x10);
                                                      uVar24 = 1;
                                                      if (1 < (int)uVar23) {
                                                        pfVar25 = (float *)(iVar21 + 0x14);
                                                        do {
                                                          if (uVar23 <= uVar24)
                                                          goto code_?;
                                                          if (fVar22 < *pfVar25) {
                                                            fVar22 = *pfVar25;
                                                          }
                                                          uVar24 = uVar24 + 1;
                                                          pfVar25 = pfVar25 + 1;
                                                        } while ((int)uVar24 < (int)uVar23);
                                                      }
                                                    }
                                                    iVar21 = func_?(
                                                  TypeInfo__System__Single,3);
                                                  fVar22 = _UNK_?;
                                                  if (iVar21 == 0) goto code_?;
                                                  if (*(int *)(iVar21 + 0xc) == 0)
                                                  goto code_?;
                                                  fVar16 = fVar16 * _UNK_?;
                                                  *(float *)(iVar21 + 0x10) =
                                                       fVar17 * (float)pSVar20 * _UNK_?;
                                                  if (*(uint *)(iVar21 + 0xc) < 2)
                                                  goto code_?;
                                                  *(float *)(iVar21 + 0x14) = fVar18 * fVar16;
                                                  if (*(uint *)(iVar21 + 0xc) < 3)
                                                  goto code_?;
                                                  *(float *)(iVar21 + 0x18) =
                                                       fVar19 * fVar14 * fVar22;
                                                  uVar23 = *(uint *)(iVar21 + 0xc);
                                                  if (uVar23 == 0) {
                                                    fVar14 = 0.0;
                                                  }
                                                  else {
                                                    fVar14 = *(float *)(iVar21 + 0x10);
                                                    uVar24 = 1;
                                                    if (1 < (int)uVar23) {
                                                      pfVar25 = (float *)(iVar21 + 0x14);
                                                      do {
                                                        if (uVar23 <= uVar24) goto code_?;
                                                        if (fVar14 < *pfVar25) {
                                                          fVar14 = *pfVar25;
                                                        }
                                                        uVar24 = uVar24 + 1;
                                                        pfVar25 = pfVar25 + 1;
                                                      } while ((int)uVar24 < (int)uVar23);
                                                    }
                                                  }
                                                  fVar22 = fVar22 / fVar14;
                                                  if (((wo == (MVWorldObjectClient *)0x0) ||
                                                      ((wo->klass->_1).naturalAligment <
                                                       (TypeInfo__MVMovingPlatformGroup->_1).
                                                       naturalAligment)) ||
                                                     ((MVMovingPlatformGroup__Class *)
                                                      (wo->klass->_1).typeHierarchy
                                                      [(TypeInfo__MVMovingPlatformGroup->_1).
                                                       naturalAligment - 1] !=
                                                      TypeInfo__MVMovingPlatformGroup)) {
code_?:
                                                    pGVar1 = (pOVar2->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if (pGVar1 != (GameObject *)0x0) {
                                                      pTVar3 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar1,(MethodInfo *)0x0
                                                                          );
                                                      fVar14 = fVar17 * fVar22;
                                                      fVar16 = fVar18 * fVar22;
                                                      if (pTVar3 != (Transform *)0x0) {
                                                        value.y = fVar16;
                                                        value.x = fVar14;
                                                        value.z = fVar19 * fVar22;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_localScale
                                                                  (pTVar3,value,(MethodInfo *)0x0);
                                                        fVar17 = fVar17 * (float)pTVar3 * fVar22;
                                                        fVar14 = fVar18 * fVar14 * fVar22;
                                                        fVar22 = fVar19 * fVar16 * fVar22;
                                                        pGVar1 = (pOVar2->fields).
                                                                  _PreviewGameObject_k__BackingField
                                                        ;
                                                        if ((pGVar1 != (GameObject *)0x0) &&
                                                           (pTVar3 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar1,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar3 != (Transform *)0x0)) {
                                                          pVVar15 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_position
                                                                              ((Vector3 *)
                                                                               &stack0xffffffc0,
                                                                               pTVar3,(MethodInfo *
                                                                                       )0x0);
                                                          uVar26 = pVVar15->x;
                                                          uVar27 = pVVar15->y;
                                                          fVar18 = pVVar15->z;
                                                          (pOVar2->fields).pivotPoint.x =
                                                               (float)uVar26 + fVar17;
                                                          (pOVar2->fields).pivotPoint.y =
                                                               (float)uVar27 + fVar14;
                                                          (pOVar2->fields).pivotPoint.z =
                                                               fVar18 + fVar22;
                                                          pGVar1 = (pOVar2->fields).
                                                                                                                                        
                                                  _PreviewGameObject_k__BackingField;
                                                  if (pGVar1 != (GameObject *)0x0) {
                                                    pTVar3 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar1,(MethodInfo *)0x0);
                                                    uVar28._0_4_ = (pOVar2->fields).pivotPoint.x;
                                                    uVar28._4_4_ = (pOVar2->fields).pivotPoint.y;
                                                    fVar14 = (pOVar2->fields).pivotPoint.z;
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      cRam_? = '\x01';
                                                    }
                                                    if (pTVar3 != (Transform *)0x0) {
                                                      point.z = fVar14;
                                                      point.x = (float)(int)uVar28;
                                                      point.y = (float)(int)((ulonglong)uVar28 >>
                                                                            0x20);
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_RotateAround
                                                                (pTVar3,point,
                                                                 TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->upVector,180.0,
                                                                 (MethodInfo *)0x0);
                                                      pCVar7 = (pOVar2->fields).previewCam;
                                                      if (pCVar7 != (Camera *)0x0) {
                                                        pTVar3 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar7,
                                                                             (MethodInfo *)0x0);
                                                        uVar29 = (pOVar2->fields).pivotPoint.x;
                                                        uVar30 = (pOVar2->fields).pivotPoint.y;
                                                        uVar31 = (pOVar2->fields).previewCamOffset.x
                                                        ;
                                                        uVar32 = (pOVar2->fields).previewCamOffset.
                                                                 y;
                                                        fVar14 = (pOVar2->fields).previewCamOffset.z
                                                                - _UNK_?;
                                                        if (pTVar3 != (Transform *)0x0) {
                                                          value_00.y = (float)uVar30 +
                                                                       (float)uVar32 + _UNK_?
                                                                       + (float)uVar32 +
                                                                         _UNK_?;
                                                          value_00.x = (float)uVar29 +
                                                                       (float)uVar31 + 0.0 +
                                                                       (float)uVar31 + 0.0;
                                                          value_00.z = (pOVar2->fields).pivotPoint.
                                                                       z + fVar14 + fVar14;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_position
                                                                    (pTVar3,value_00,
                                                                     (MethodInfo *)0x0);
                                                          pCVar7 = (pOVar2->fields).previewCam;
                                                          if ((pCVar7 != (Camera *)0x0) &&
                                                             (pTVar3 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pCVar7,(
                                                  MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_LookAt_2
                                                              (pTVar3,(pOVar2->fields).pivotPoint,
                                                               (MethodInfo *)0x0);
                                                    return pOVar2;
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
                                                    pGVar1 = (pOVar2->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if (pGVar1 != (GameObject *)0x0) {
                                                      fVar14 = fVar22 * _UNK_?;
                                                      this_00 = (LineRenderer *)
                                                                UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_GetComponentInChildren_1
                                                                          (pGVar1,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                                  if (this_00 != (LineRenderer *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LineRenderer::LineRenderer_set_startWidth
                                                              (this_00,fVar14,(MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LineRenderer::LineRenderer_set_endWidth
                                                              (this_00,fVar14,(MethodInfo *)0x0);
                                                    goto code_?;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  pOVar2 = (ObjectPreviewer *)(*pcVar33)();
  return pOVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Destroy
               (ObjectPreviewer *this,MethodInfo *method)

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
    if (pCVar1 != (Camera *)0x0) {
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                         (pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).previewCam;
      if (pCVar1 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                  (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
        if (pRVar3 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                    (pRVar3,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  pRVar3 = (this->fields)._PreviewTexture_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar3 = (this->fields)._PreviewTexture_k__BackingField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pRVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_OnPostRender
               (ObjectPreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_OnPreCull
               (ObjectPreviewer *this,MethodInfo *method)

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


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_UpdateRotation
               (ObjectPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    fVar3 = (this->fields).pivotPoint.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    if (rotateSpeed <= _UNK_?) {
      rotateSpeed = _UNK_?;
    }
    puVar5 = &UNK_?;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      auVar7._4_4_ = fVar3;
      auVar7._0_4_ = puVar5;
      auVar7._8_4_ = 0;
      axis.y = 0.0;
      axis.x = fVar6 * rotateSpeed;
      axis.z = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (this_00,(Vector3)(auVar7 << 0x20),axis,fVar6 * rotateSpeed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ObjectPreviewer() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObjectPreviewer);
    cRam_? = '\x01';
  }
  TypeInfo__ObjectPreviewer->static_fields->previewerIndex = 1;
  return;
}


/* ObjectPreviewer() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer__ctor
               (ObjectPreviewer *this,MethodInfo *method)

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
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

