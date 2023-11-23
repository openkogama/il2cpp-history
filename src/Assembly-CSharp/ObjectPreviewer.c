
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
    func_?(&::StringLiteral_Preview);
    func_?(&StringLiteral__Item_);
    func_?(&StringLiteral__woID_);
    func_?(&StringLiteral_Preview__0__RenderCam);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  pGVar2 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar2,(MethodInfo *)0x0)
  ;
  if ((pGVar2 != (GameObject *)0x0) &&
     (pOVar3 = (ObjectPreviewer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar2,
                           ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                          ), pOVar3 != (ObjectPreviewer *)0x0)) {
    (pOVar3->fields).previewCamOffset.x = cameraOffset.x;
    (pOVar3->fields).previewCamOffset.y = cameraOffset.y;
    (pOVar3->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
    (pOVar3->fields).previewCamOffset.z = cameraOffset.z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar4,previewItemsRoot,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pGVar2,pSVar5,(MethodInfo *)0x0);
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (::StringLiteral_Preview,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar2,iVar6,(MethodInfo *)0x0);
      this = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                (this,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                 (MethodInfo *)0x0);
      (pOVar3->fields)._PreviewTexture_k__BackingField = this;
      func_?();
      pRVar7 = (pOVar3->fields)._PreviewTexture_k__BackingField;
      if (pRVar7 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pRVar7,name,(MethodInfo *)0x0);
        pRVar7 = (pOVar3->fields)._PreviewTexture_k__BackingField;
        if (pRVar7 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                    (pRVar7,2,(MethodInfo *)0x0);
          pRVar7 = (pOVar3->fields)._PreviewTexture_k__BackingField;
          if (pRVar7 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                      ((Texture *)pRVar7,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
            pRVar7 = (pOVar3->fields)._PreviewTexture_k__BackingField;
            if (pRVar7 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)pRVar7,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
              pCVar8 = (Camera *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  ((GameObject *)this,
                                   UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                  );
              (pOVar3->fields).previewCam = pCVar8;
              func_?(&(pOVar3->fields).previewCam,pCVar8);
              pCVar8 = (pOVar3->fields).previewCam;
              if (pCVar8 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                          (pCVar8,clearFlags,(MethodInfo *)0x0);
                pCVar8 = (pOVar3->fields).previewCam;
                if (pCVar8 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                            (pCVar8,(Color)ZEXT816(0),(MethodInfo *)0x0);
                  pCVar8 = (pOVar3->fields).previewCam;
                  if (pCVar8 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              (pCVar8,35.0,(MethodInfo *)0x0);
                    pCVar8 = (pOVar3->fields).previewCam;
                    if (pCVar8 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                (pCVar8,(float)textureWidth / (float)textureHeight,
                                 (MethodInfo *)0x0);
                      pCVar8 = (pOVar3->fields).previewCam;
                      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                               LayerMask_NameToLayer(::StringLiteral_Preview,(MethodInfo *)0x0);
                      if (pCVar8 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                  (pCVar8,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
                        pCVar8 = (pOVar3->fields).previewCam;
                        if (pCVar8 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    (pCVar8,0.05,(MethodInfo *)0x0);
                          pCVar8 = (pOVar3->fields).previewCam;
                          if (pCVar8 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                      (pCVar8,100.0,(MethodInfo *)0x0);
                            pCVar8 = (pOVar3->fields).previewCam;
                            if (pCVar8 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_targetTexture
                                        (pCVar8,(pOVar3->fields)._PreviewTexture_k__BackingField,
                                         (MethodInfo *)0x0);
                              (pOVar3->fields)._PreviewGameObject_k__BackingField =
                                   woGameObjectCopy;
                              func_?(&(pOVar3->fields)._PreviewGameObject_k__BackingField,
                                              woGameObjectCopy);
                              pGVar2 = (pOVar3->fields)._PreviewGameObject_k__BackingField;
                              if (wo == (MVWorldObjectClient *)0x0) {
                                pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                                    (StringLiteral_Preview_,name,(MethodInfo *)0x0);
                              }
                              else {
                                values = (String__Array *)
                                         func_?(TypeInfo__System__String,6);
                                pSVar5 = StringLiteral_Preview_;
                                if (values == (String__Array *)0x0) goto code_?;
                                if (values->max_length == 0) goto code_?;
                                values->vector[0] = StringLiteral_Preview_;
                                func_?(values->vector,pSVar5);
                                if (values->max_length < 2) goto code_?;
                                values->vector[1] = name;
                                func_?(values->vector + 1,name);
                                pSVar5 = StringLiteral__Item_;
                                if (values->max_length < 3) goto code_?;
                                values->vector[2] = StringLiteral__Item_;
                                func_?(values->vector + 2,pSVar5);
                                IStack_1.m_value = (wo->fields)._.itemId;
                                pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                                    (&IStack_1,(MethodInfo *)0x0);
                                if (values->max_length < 4) goto code_?;
                                values->vector[3] = pSVar5;
                                func_?(values->vector + 3,pSVar5);
                                pSVar5 = StringLiteral__woID_;
                                if (values->max_length < 5) goto code_?;
                                values->vector[4] = StringLiteral__woID_;
                                func_?(values->vector + 4,pSVar5);
                                IStack_1.m_value = (wo->fields)._.id;
                                pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                                    (&IStack_1,(MethodInfo *)0x0);
                                if (values->max_length < 6) goto code_?;
                                values->vector[5] = pSVar5;
                                func_?(values->vector + 5,pSVar5);
                                pSVar5 = mscorlib.dll::System::String::String_Concat_6
                                                    (values,(MethodInfo *)0x0);
                              }
                              if (pGVar2 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                          ((Object_1 *)pGVar2,pSVar5,(MethodInfo *)0x0);
                                pGVar2 = (pOVar3->fields)._PreviewGameObject_k__BackingField;
                                if ((pGVar2 != (GameObject *)0x0) &&
                                   (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                                   pTVar4 != (Transform *)0x0)) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_parent(pTVar4,previewItemsRoot,(MethodInfo *)0x0);
                                  pGVar2 = (pOVar3->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar2 != (GameObject *)0x0) {
                                    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    if (pTVar4 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_localRotation
                                                (pTVar4,TypeInfo__UnityEngine__Quaternion->
                                                         static_fields->identityQuaternion,
                                                 (MethodInfo *)0x0);
                                      pGVar2 = (pOVar3->fields)._PreviewGameObject_k__BackingField
                                      ;
                                      if ((pGVar2 != (GameObject *)0x0) &&
                                         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar2,(MethodInfo *)0x0),
                                         pTVar4 != (Transform *)0x0)) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_set_position
                                                  (pTVar4,previewPosition,(MethodInfo *)0x0);
                                        pGVar2 = (pOVar3->fields).
                                                  _PreviewGameObject_k__BackingField;
                                        if (pGVar2 != (GameObject *)0x0) {
                                          VStack_9.z = (float)UnityEngine.CoreModule.dll::
                                                               UnityEngine::GameObject::
                                                               GameObject_GetComponentsInChildren
                                                                         (pGVar2,
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                                  );
                                          IStack_1.m_value = 0;
                                          if ((Object__Array *)VStack_9.z != (Object__Array *)0x0)
                                          {
                                            for (; IStack_1.m_value <
                                                   (int)*(il2cpp_array_size_t *)
                                                         ((int)VStack_9.z + 0xc);
                                                IStack_1.m_value = IStack_1.m_value + 1) {
                                              if (*(il2cpp_array_size_t *)((int)VStack_9.z + 0xc)
                                                  <= (uint)IStack_1.m_value) goto code_?;
                                              pRVar10 = (Renderer *)
                                                        ((Object **)((int)VStack_9.z + 0x10))
                                                        [IStack_1.m_value];
                                              if (pRVar10 == (Renderer *)0x0) goto code_?;
                                              pOVar11 = (Object_1 *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_GetComponent_1
                                                                  ((Component *)pRVar10,
                                                                                                                                      
                                                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                                  );
                                              if ((TypeInfo__UnityEngine__Object->_1).
                                                  cctor_finished_or_no_cctor == 0) {
                                                func_?(TypeInfo__UnityEngine__Object);
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
                                            pGVar2 = (pOVar3->fields).
                                                      _PreviewGameObject_k__BackingField;
                                            if (pGVar2 != (GameObject *)0x0) {
                                              pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::
                                                        GameObject_GetComponentsInChildren
                                                                  (pGVar2,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                              IStack_1.m_value = 0;
                                              if (pOVar13 != (Object__Array *)0x0) {
                                                for (; IStack_1.m_value < (int)pOVar13->max_length;
                                                    IStack_1.m_value = IStack_1.m_value + 1) {
                                                  if (pOVar13->max_length <= (uint)IStack_1.m_value
                                                     ) goto code_?;
                                                  if (((Component *)
                                                       pOVar13->vector[IStack_1.m_value] ==
                                                       (Component *)0x0) ||
                                                     (pRVar10 = (Renderer *)
                                                                UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_GetComponent_1
                                                                          ((Component *)
                                                                           pOVar13->vector
                                                                           [IStack_1.m_value],
                                                                                                                                                      
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pRVar10 == (Renderer *)0x0))
                                                  goto code_?;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Renderer
                                                  ::Renderer_set_enabled
                                                            (pRVar10,0,(MethodInfo *)0x0);
                                                }
                                                if (wo == (MVWorldObjectClient *)0x0) {
                                                  pGVar2 = (pOVar3->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar2 == (GameObject *)0x0)
                                                  goto code_?;
                                                  pOVar11 = (Object_1 *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_GetComponent_1
                                                                      (pGVar2,
                                                  AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                                                  );
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?(TypeInfo__UnityEngine__Object);
                                                  }
                                                  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           Object::Object_1_op_Inequality
                                                                     (pOVar11,(Object_1 *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if (bVar12 == 0) {
                                                    pGVar2 = (pOVar3->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if ((TypeInfo__ObjectPreviewer->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__ObjectPreviewer);
                                                    }
                                                    pBVar14 = ObjectPreviewer_ComputeLocalBounds
                                                                        ((Bounds *)&stack0xffffffa8,
                                                                         pGVar2,(MethodInfo *)0x0);
                                                  }
                                                  else {
                                                    if (pOVar11 == (Object_1 *)0x0)
                                                    goto code_?;
                                                    pBVar14 = (Bounds *)
                                                              (*(code *)pOVar11->klass[1]._0.klass)
                                                                        (&stack0xffffffa8,pOVar11,
                                                                         pOVar11->klass[1]._0.fields
                                                                        );
                                                  }
                                                }
                                                else {
                                                  pBVar14 = (Bounds *)
                                                            (*(code *)(wo->klass->vtable).
                                                                      GetLocalBounds.method)
                                                                      (&stack0xffffffa8,wo,2,
                                                                       (wo->klass->vtable).Select.
                                                                       methodPtr);
                                                }
                                                uVar15._0_4_ = (pBVar14->m_Extents).y;
                                                uVar15._4_4_ = (pBVar14->m_Extents).z;
                                                pGVar2 = (pOVar3->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if ((pGVar2 != (GameObject *)0x0) &&
                                                   (pTVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar2,(MethodInfo *)0x0),
                                                   pTVar4 != (Transform *)0x0)) {
                                                  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_localScale
                                                                      (&VStack_9,pTVar4,
                                                                       (MethodInfo *)0x0);
                                                  fVar17 = 4.2039e-45;
                                                  fVar18 = pVVar16->x;
                                                  fVar19 = pVVar16->y;
                                                  fVar20 = pVVar16->z;
                                                  iVar21 = func_?(TypeInfo__System__Single)
                                                  ;
                                                  fVar22 = _UNK_?;
                                                  if (iVar21 != 0) {
                                                    if (*(int *)(iVar21 + 0xc) == 0)
                                                    goto code_?;
                                                    *(float *)(iVar21 + 0x10) =
                                                         fVar17 * _UNK_?;
                                                    if (*(uint *)(iVar21 + 0xc) < 2)
                                                    goto code_?;
                                                    *(float *)(iVar21 + 0x14) =
                                                         (float)uVar15 * fVar22;
                                                    if (*(uint *)(iVar21 + 0xc) < 3)
                                                    goto code_?;
                                                    *(float *)(iVar21 + 0x18) =
                                                         (float)((ulonglong)uVar15 >> 0x20) * fVar22
                                                    ;
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
                                                  *(float *)(iVar21 + 0x10) =
                                                       fVar17 * _UNK_? * fVar18;
                                                  if (*(uint *)(iVar21 + 0xc) < 2)
                                                  goto code_?;
                                                  *(float *)(iVar21 + 0x14) =
                                                       (float)uVar15 * fVar22 * fVar19;
                                                  if (*(uint *)(iVar21 + 0xc) < 3)
                                                  goto code_?;
                                                  *(float *)(iVar21 + 0x18) =
                                                       (float)((ulonglong)uVar15 >> 0x20) * fVar22 *
                                                       fVar20;
                                                  uVar23 = *(uint *)(iVar21 + 0xc);
                                                  if (uVar23 == 0) {
                                                    fVar17 = 0.0;
                                                  }
                                                  else {
                                                    fVar17 = *(float *)(iVar21 + 0x10);
                                                    uVar24 = 1;
                                                    if (1 < (int)uVar23) {
                                                      pfVar25 = (float *)(iVar21 + 0x14);
                                                      do {
                                                        if (uVar23 <= uVar24) goto code_?;
                                                        if (fVar17 < *pfVar25) {
                                                          fVar17 = *pfVar25;
                                                        }
                                                        uVar24 = uVar24 + 1;
                                                        pfVar25 = pfVar25 + 1;
                                                        fVar22 = _UNK_?;
                                                      } while ((int)uVar24 < (int)uVar23);
                                                    }
                                                  }
                                                  fVar22 = fVar22 / fVar17;
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
                                                    pGVar2 = (pOVar3->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if (pGVar2 != (GameObject *)0x0) {
                                                      pTVar4 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar2,(MethodInfo *)0x0
                                                                          );
                                                      fVar26 = fVar18 * fVar22;
                                                      fVar17 = fVar19 * fVar22;
                                                      VStack_9.z = fVar20 * fVar22;
                                                      VStack_9.y = fVar17;
                                                      VStack_9.x = fVar26;
                                                      if (pTVar4 != (Transform *)0x0) {
                                                        value.y = fVar17;
                                                        value.x = fVar26;
                                                        value.z = VStack_9.z;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_localScale
                                                                  (pTVar4,value,(MethodInfo *)0x0);
                                                        fVar18 = fVar26 * fVar18 * fVar22;
                                                        VStack_9.z = VStack_9.z * fVar20 * fVar22;
                                                        pGVar2 = (pOVar3->fields).
                                                                  _PreviewGameObject_k__BackingField
                                                        ;
                                                        if ((pGVar2 != (GameObject *)0x0) &&
                                                           (pTVar4 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar2,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar4 != (Transform *)0x0)) {
                                                          pVVar16 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_position
                                                                              ((Vector3 *)
                                                                               &stack0xffffffb0,
                                                                               pTVar4,(MethodInfo *
                                                                                       )0x0);
                                                          uVar27 = pVVar16->x;
                                                          uVar28 = pVVar16->y;
                                                          fVar20 = pVVar16->z;
                                                          (pOVar3->fields).pivotPoint.x =
                                                               fVar18 + (float)uVar27;
                                                          (pOVar3->fields).pivotPoint.y =
                                                               fVar17 * fVar19 * fVar22 +
                                                               (float)uVar28;
                                                          (pOVar3->fields).pivotPoint.z =
                                                               VStack_9.z + fVar20;
                                                          pGVar2 = (pOVar3->fields).
                                                                                                                                        
                                                  _PreviewGameObject_k__BackingField;
                                                  if (pGVar2 != (GameObject *)0x0) {
                                                    pTVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar2,(MethodInfo *)0x0);
                                                    VStack_9.x = (pOVar3->fields).pivotPoint.x;
                                                    VStack_9.y = (pOVar3->fields).pivotPoint.y;
                                                    fVar18 = (pOVar3->fields).pivotPoint.z;
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      cRam_? = '\x01';
                                                    }
                                                    if (pTVar4 != (Transform *)0x0) {
                                                      point.z = fVar18;
                                                      point.x = VStack_9.x;
                                                      point.y = VStack_9.y;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_RotateAround
                                                                (pTVar4,point,
                                                                 TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->upVector,180.0,
                                                                 (MethodInfo *)0x0);
                                                      pCVar8 = (pOVar3->fields).previewCam;
                                                      if (pCVar8 != (Camera *)0x0) {
                                                        pTVar4 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar8,
                                                                             (MethodInfo *)0x0);
                                                        VStack_9.x = (pOVar3->fields).pivotPoint.x
                                                        ;
                                                        VStack_9.y = (pOVar3->fields).pivotPoint.y
                                                        ;
                                                        VStack_9.z = (pOVar3->fields).pivotPoint.z
                                                        ;
                                                        uVar29 = (pOVar3->fields).previewCamOffset.x
                                                        ;
                                                        uVar30 = (pOVar3->fields).previewCamOffset.y
                                                        ;
                                                        fVar18 = (pOVar3->fields).previewCamOffset.z
                                                                - _UNK_?;
                                                        if (pTVar4 != (Transform *)0x0) {
                                                          value_00.y = (float)uVar30 + _UNK_?
                                                                       + (float)uVar30 +
                                                                         _UNK_? + VStack_9.y
                                                          ;
                                                          value_00.x = (float)uVar29 + 0.0 +
                                                                       (float)uVar29 + 0.0 +
                                                                       VStack_9.x;
                                                          value_00.z = fVar18 + fVar18 + VStack_9.z;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_position
                                                                    (pTVar4,value_00,
                                                                     (MethodInfo *)0x0);
                                                          pCVar8 = (pOVar3->fields).previewCam;
                                                          if ((pCVar8 != (Camera *)0x0) &&
                                                             (pTVar4 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pCVar8,(
                                                  MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_LookAt_2
                                                              (pTVar4,(pOVar3->fields).pivotPoint,
                                                               (MethodInfo *)0x0);
                                                    return pOVar3;
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
                                                    pGVar2 = (pOVar3->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if (pGVar2 != (GameObject *)0x0) {
                                                      VStack_9.z = fVar22 * _UNK_?;
                                                      this_00 = (LineRenderer *)
                                                                UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_GetComponentInChildren_1
                                                                          (pGVar2,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                                  if (this_00 != (LineRenderer *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LineRenderer::LineRenderer_set_startWidth
                                                              (this_00,VStack_9.z,(MethodInfo *)0x0
                                                              );
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LineRenderer::LineRenderer_set_endWidth
                                                              (this_00,VStack_9.z,(MethodInfo *)0x0
                                                              );
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
  pcVar31 = (code *)swi(3);
  pOVar3 = (ObjectPreviewer *)(*pcVar31)();
  return pOVar3;
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

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_OnPreCull
               (ObjectPreviewer *this,MethodInfo *method)

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

