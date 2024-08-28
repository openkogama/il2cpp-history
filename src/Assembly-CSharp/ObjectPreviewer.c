
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
     (pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                          ), pOVar2 != (Object *)0x0)) {
    pOVar2[2].klass = (Object__Class *)cameraOffset.x;
    pOVar2[2].monitor = (MonitorData *)cameraOffset.y;
    pOVar2[3].monitor = (MonitorData *)(layersToRender | LayerFlags__Enum_Hidden);
    pOVar2[3].klass = (Object__Class *)cameraOffset.z;
    pOVar3 = pOVar2;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar4,previewItemsRoot,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pGVar1,pSVar5,(MethodInfo *)0x0);
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Preview,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar1,iVar6,(MethodInfo *)0x0);
      pOVar7 = (Object__Class *)func_?(TypeInfo__UnityEngine__RenderTexture);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                ((RenderTexture *)pOVar7,textureWidth,textureHeight,0x10,
                 RenderTextureFormat__Enum_ARGB32,(MethodInfo *)0x0);
      pOVar2[6].klass = pOVar7;
      pOVar2 = pOVar2 + 6;
      func_?();
      if (pOVar2->klass != (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pOVar2->klass,name,(MethodInfo *)0x0);
        if (pOVar2->klass != (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                    ((RenderTexture *)pOVar2->klass,2,(MethodInfo *)0x0);
          if (pOVar2->klass != (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                      ((Texture *)pOVar2->klass,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
            if (pOVar2->klass != (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)pOVar2->klass,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
              pOVar8 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar1,
                                   UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                  );
              pOVar3[4].klass = pOVar8;
              func_?(pOVar3 + 4,pOVar8);
              if (pOVar3[4].klass != (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                          ((Camera *)pOVar3[4].klass,(CameraClearFlags__Enum)pOVar7,
                           (MethodInfo *)0x0);
                if (pOVar3[4].klass != (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                            ((Camera *)pOVar3[4].klass,(Color)ZEXT816(0),(MethodInfo *)0x0);
                  if (pOVar3[4].klass != (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              ((Camera *)pOVar3[4].klass,35.0,(MethodInfo *)0x0);
                    if (pOVar3[4].klass != (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                                ((Camera *)pOVar3[4].klass,2.7093555e+08 / (float)(int)pOVar2,
                                 (MethodInfo *)0x0);
                      pOVar7 = pOVar3[4].klass;
                      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                               LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
                      if (pOVar7 != (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                  ((Camera *)pOVar7,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
                        if (pOVar3[4].klass != (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                    ((Camera *)pOVar3[4].klass,0.05,(MethodInfo *)0x0);
                          if (pOVar3[4].klass != (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                      ((Camera *)pOVar3[4].klass,100.0,(MethodInfo *)0x0);
                            if (pOVar3[4].klass != (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_targetTexture
                                        ((Camera *)pOVar3[4].klass,(RenderTexture *)pOVar2->klass,
                                         (MethodInfo *)0x0);
                              ppMVar9 = &pOVar3[6].monitor;
                              *ppMVar9 = (MonitorData *)woGameObjectCopy;
                              func_?(ppMVar9,woGameObjectCopy);
                              pOVar10 = (Object_1 *)*ppMVar9;
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
                                pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                                if (values->max_length < 4) goto code_?;
                                values->vector[3] = pSVar5;
                                func_?(values->vector + 3,pSVar5);
                                pSVar5 = StringLiteral__woID_;
                                if (values->max_length < 5) goto code_?;
                                values->vector[4] = StringLiteral__woID_;
                                func_?(values->vector + 4,pSVar5);
                                pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                                if (values->max_length < 6) goto code_?;
                                values->vector[5] = pSVar5;
                                func_?(values->vector + 5,pSVar5);
                                pSVar5 = mscorlib.dll::System::String::String_Concat_6
                                                    (values,(MethodInfo *)0x0);
                              }
                              if (pOVar10 != (Object_1 *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                          (pOVar10,pSVar5,(MethodInfo *)0x0);
                                if (((GameObject *)*ppMVar9 != (GameObject *)0x0) &&
                                   (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform
                                                        ((GameObject *)*ppMVar9,(MethodInfo *)0x0),
                                   pTVar4 != (Transform *)0x0)) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_parent(pTVar4,previewItemsRoot,(MethodInfo *)0x0);
                                  if ((GameObject *)*ppMVar9 != (GameObject *)0x0) {
                                    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform
                                                        ((GameObject *)*ppMVar9,(MethodInfo *)0x0);
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
                                      if (((GameObject *)*ppMVar9 != (GameObject *)0x0) &&
                                         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              ((GameObject *)*ppMVar9,
                                                               (MethodInfo *)0x0),
                                         pTVar4 != (Transform *)0x0)) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_set_position
                                                  (pTVar4,previewPosition,(MethodInfo *)0x0);
                                        if ((GameObject *)*ppMVar9 != (GameObject *)0x0) {
                                          pOVar11 = (ObjectPreviewer *)
                                                                                                        
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                          ;
                                          pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponentsInChildren
                                                              ((GameObject *)*ppMVar9,
                                                                                                                              
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                                  );
                                          IVar13.m_value = 0;
                                          if (pOVar12 != (Object__Array *)0x0) {
                                            for (; IVar13.m_value < (int)pOVar12->max_length;
                                                IVar13.m_value = IVar13.m_value + 1) {
                                              if (pOVar12->max_length <= (uint)IVar13.m_value)
                                              goto code_?;
                                              pRVar14 = (Renderer *)pOVar12->vector[IVar13.m_value];
                                              if (pRVar14 == (Renderer *)0x0) goto code_?;
                                              pOVar10 = (Object_1 *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_GetComponent_1
                                                                  ((Component *)pRVar14,
                                                                                                                                      
                                                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                                  );
                                              if ((TypeInfo__UnityEngine__Object->_1).
                                                  cctor_finished_or_no_cctor == 0) {
                                                func_?();
                                              }
                                              bVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       Object::Object_1_op_Inequality
                                                                 (pOVar10,(Object_1 *)0x0,
                                                                  (MethodInfo *)0x0);
                                              if (bVar15 != 0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                                Renderer_set_enabled(pRVar14,0,(MethodInfo *)0x0);
                                              }
                                            }
                                            pGVar1 = (pOVar11->fields).
                                                      _PreviewGameObject_k__BackingField;
                                            if (pGVar1 != (GameObject *)0x0) {
                                              pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::
                                                        GameObject_GetComponentsInChildren
                                                                  (pGVar1,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                              IVar13.m_value = 0;
                                              if (pOVar12 != (Object__Array *)0x0) {
                                                for (; IVar13.m_value < (int)pOVar12->max_length;
                                                    IVar13.m_value = IVar13.m_value + 1) {
                                                  if (pOVar12->max_length <= (uint)IVar13.m_value)
                                                  goto code_?;
                                                  if (((Component *)pOVar12->vector[IVar13.m_value]
                                                       == (Component *)0x0) ||
                                                     (pRVar14 = (Renderer *)
                                                                UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_GetComponent_1
                                                                          ((Component *)
                                                                           pOVar12->vector
                                                                           [IVar13.m_value],
                                                                                                                                                      
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pRVar14 == (Renderer *)0x0))
                                                  goto code_?;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Renderer
                                                  ::Renderer_set_enabled
                                                            (pRVar14,0,(MethodInfo *)0x0);
                                                }
                                                if (wo == (MVWorldObjectClient *)0x0) {
                                                  pGVar1 = (pOVar11->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar1 == (GameObject *)0x0)
                                                  goto code_?;
                                                  pOVar10 = (Object_1 *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_GetComponent_1
                                                                      (pGVar1,
                                                  AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                                                  );
                                                  if ((TypeInfo__UnityEngine__Object->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  bVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           Object::Object_1_op_Inequality
                                                                     (pOVar10,(Object_1 *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if (bVar15 == 0) {
                                                    pGVar1 = (pOVar11->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if ((TypeInfo__ObjectPreviewer->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__ObjectPreviewer);
                                                    }
                                                    pBVar16 = ObjectPreviewer_ComputeLocalBounds
                                                                        ((Bounds *)&stack0xffffffcc,
                                                                         pGVar1,(MethodInfo *)0x0);
                                                  }
                                                  else {
                                                    if (pOVar10 == (Object_1 *)0x0)
                                                    goto code_?;
                                                    pBVar16 = (Bounds *)
                                                              (*(code *)pOVar10->klass[1]._0.klass)
                                                                        (&stack0xffffffcc,pOVar10,
                                                                         pOVar10->klass[1]._0.fields
                                                                        );
                                                  }
                                                }
                                                else {
                                                  pBVar16 = (Bounds *)
                                                            (*(code *)(wo->klass->vtable).
                                                                      GetLocalBounds.method)
                                                                      (&stack0xffffffcc,wo,2,
                                                                       (wo->klass->vtable).Select.
                                                                       methodPtr);
                                                }
                                                fVar17 = (pBVar16->m_Extents).z;
                                                pGVar1 = (pOVar11->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if ((pGVar1 != (GameObject *)0x0) &&
                                                   (pTVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar1,(MethodInfo *)0x0),
                                                   pTVar4 != (Transform *)0x0)) {
                                                  pVVar18 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_localScale
                                                                      ((Vector3 *)&stack0xffffffe4,
                                                                       pTVar4,(MethodInfo *)0x0);
                                                  fVar19 = 4.2039e-45;
                                                  fVar20 = pVVar18->x;
                                                  fVar21 = pVVar18->y;
                                                  uVar22._0_4_ = pVVar18->z;
                                                  pSVar23 = TypeInfo__System__Single;
                                                  iVar24 = func_?();
                                                  uVar22._4_4_ = _UNK_?;
                                                  fVar25 = (float)pSVar23 * _UNK_?;
                                                  if (iVar24 != 0) {
                                                    if (*(int *)(iVar24 + 0xc) == 0)
                                                    goto code_?;
                                                    *(float *)(iVar24 + 0x10) = fVar25;
                                                    fVar19 = fVar19 * uVar22._4_4_;
                                                    if (*(uint *)(iVar24 + 0xc) < 2)
                                                    goto code_?;
                                                    pfVar26 = (float *)(iVar24 + 0x14);
                                                    *pfVar26 = fVar19;
                                                    fVar17 = fVar17 * uVar22._4_4_;
                                                    if (*(uint *)(iVar24 + 0xc) < 3)
                                                    goto code_?;
                                                    *(float *)(iVar24 + 0x18) = fVar17;
                                                    uVar27 = *(uint *)(iVar24 + 0xc);
                                                    if (uVar27 != 0) {
                                                      uVar22._4_4_ = *(float *)(iVar24 + 0x10);
                                                      uVar28 = 1;
                                                      if (1 < (int)uVar27) {
                                                        bVar29 = 1 < uVar27;
                                                        do {
                                                          if (!bVar29) goto code_?;
                                                          if (uVar22._4_4_ < *pfVar26) {
                                                            uVar22._4_4_ = *pfVar26;
                                                          }
                                                          uVar28 = uVar28 + 1;
                                                          pfVar26 = pfVar26 + 1;
                                                          bVar29 = uVar28 < uVar27;
                                                        } while ((int)uVar28 < (int)uVar27);
                                                      }
                                                    }
                                                    iVar24 = func_?(
                                                  TypeInfo__System__Single,3);
                                                  if (iVar24 == 0) goto code_?;
                                                  if ((*(int *)(iVar24 + 0xc) == 0) ||
                                                     (*(float *)(iVar24 + 0x10) = fVar20 * fVar25,
                                                     *(uint *)(iVar24 + 0xc) < 2))
                                                  goto code_?;
                                                  pfVar26 = (float *)(iVar24 + 0x14);
                                                  *pfVar26 = fVar21 * fVar19;
                                                  if (*(uint *)(iVar24 + 0xc) < 3)
                                                  goto code_?;
                                                  *(float *)(iVar24 + 0x18) = (float)uVar22 * fVar17;
                                                  uVar27 = *(uint *)(iVar24 + 0xc);
                                                  if (uVar27 == 0) {
                                                    fVar17 = 0.0;
                                                  }
                                                  else {
                                                    fVar17 = *(float *)(iVar24 + 0x10);
                                                    uVar28 = 1;
                                                    if (1 < (int)uVar27) {
                                                      bVar29 = 1 < uVar27;
                                                      do {
                                                        if (!bVar29) goto code_?;
                                                        if (fVar17 < *pfVar26) {
                                                          fVar17 = *pfVar26;
                                                        }
                                                        uVar28 = uVar28 + 1;
                                                        pfVar26 = pfVar26 + 1;
                                                        bVar29 = uVar28 < uVar27;
                                                      } while ((int)uVar28 < (int)uVar27);
                                                    }
                                                  }
                                                  fVar17 = _UNK_? / fVar17;
                                                  if (wo != (MVWorldObjectClient *)0x0) {
                                                    bVar30 = (TypeInfo__MVMovingPlatformGroup->_1).
                                                             naturalAligment;
                                                    if ((bVar30 <= (wo->klass->_1).naturalAligment)
                                                       && ((MVMovingPlatformGroup__Class *)
                                                           (wo->klass->_1).typeHierarchy[bVar30 - 1]
                                                           == TypeInfo__MVMovingPlatformGroup)) {
                                                      pGVar1 = (pOVar11->fields).
                                                                _PreviewGameObject_k__BackingField;
                                                      if (pGVar1 != (GameObject *)0x0) {
                                                        uVar22._4_4_ = fVar17 * _UNK_?;
                                                        this = (LineRenderer *)
                                                               UnityEngine.CoreModule.dll::
                                                               UnityEngine::GameObject::
                                                               GameObject_GetComponentInChildren_1
                                                                         (pGVar1,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                                  if (this != (LineRenderer *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LineRenderer::LineRenderer_set_startWidth
                                                              (this,uVar22._4_4_,(MethodInfo *)0x0);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LineRenderer::LineRenderer_set_endWidth
                                                              (this,uVar22._4_4_,(MethodInfo *)0x0);
                                                    goto code_?;
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
code_?:
                                                  pGVar1 = (pOVar11->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar1 != (GameObject *)0x0) {
                                                    pTVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar1,(MethodInfo *)0x0);
                                                    uVar22._4_4_ = fVar20 * fVar17;
                                                    fVar25 = fVar21 * fVar17;
                                                    if (pTVar4 != (Transform *)0x0) {
                                                      value.y = fVar25;
                                                      value.x = uVar22._4_4_;
                                                      value.z = (float)uVar22 * fVar17;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_localScale
                                                                (pTVar4,value,(MethodInfo *)0x0);
                                                      fVar20 = (float)pTVar4 * fVar20 * fVar17;
                                                      fVar21 = uVar22._4_4_ * fVar21 * fVar17;
                                                      fVar17 = fVar25 * (float)uVar22 * fVar17;
                                                      pGVar1 = (pOVar11->fields).
                                                                _PreviewGameObject_k__BackingField;
                                                      if ((pGVar1 != (GameObject *)0x0) &&
                                                         (pTVar4 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::GameObject::
                                                                    GameObject_get_transform
                                                                              (pGVar1,(MethodInfo *
                                                                                       )0x0),
                                                         pTVar4 != (Transform *)0x0)) {
                                                        pVVar18 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_position
                                                                            ((Vector3 *)
                                                                             &stack0xffffffc0,
                                                                             pTVar4,(MethodInfo *)
                                                                                     0x0);
                                                        uVar31 = pVVar18->x;
                                                        uVar32 = pVVar18->y;
                                                        uVar22._0_4_ = pVVar18->z;
                                                        (pOVar11->fields).pivotPoint.x =
                                                             (float)uVar31 + fVar20;
                                                        (pOVar11->fields).pivotPoint.y =
                                                             (float)uVar32 + fVar21;
                                                        (pOVar11->fields).pivotPoint.z =
                                                             (float)uVar22 + fVar17;
                                                        pGVar1 = (pOVar11->fields).
                                                                  _PreviewGameObject_k__BackingField
                                                        ;
                                                        if (pGVar1 != (GameObject *)0x0) {
                                                          pTVar4 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::GameObject::
                                                                    GameObject_get_transform
                                                                              (pGVar1,(MethodInfo *
                                                                                       )0x0);
                                                          uVar22._0_4_ = (pOVar11->fields).pivotPoint
                                                                        .x;
                                                          uVar22._4_4_ = (pOVar11->fields).pivotPoint
                                                                        .y;
                                                          fVar17 = (pOVar11->fields).pivotPoint.z;
                                                          if (cRam_? == '\0') {
                                                            func_?();
                                                            cRam_? = '\x01';
                                                          }
                                                          if (pTVar4 != (Transform *)0x0) {
                                                            point.z = fVar17;
                                                            point.x = (float)(int)uVar22;
                                                            point.y = (float)(int)((ulonglong)uVar22
                                                                                  >> 0x20);
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_RotateAround
                                                                      (pTVar4,point,
                                                                                                                                              
                                                  TypeInfo__UnityEngine__Vector3->static_fields->
                                                  upVector,180.0,(MethodInfo *)0x0);
                                                  pCVar33 = (Component *)
                                                            ((_union_155 *)
                                                            &(pOVar11->fields).previewCam)->
                                                            genericMethod;
                                                  if (pCVar33 != (Component *)0x0) {
                                                    pTVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        (pCVar33,(MethodInfo *)0x0);
                                                    uVar34 = (pOVar11->fields).pivotPoint.x;
                                                    uVar35 = (pOVar11->fields).pivotPoint.y;
                                                    uVar36 = (pOVar11->fields).previewCamOffset.x;
                                                    uVar37 = (pOVar11->fields).previewCamOffset.y;
                                                    fVar17 = (float)(pOVar11->fields).
                                                                   previewCamOffset.z -
                                                            _UNK_?;
                                                    if (pTVar4 != (Transform *)0x0) {
                                                      value_00.y = (float)uVar35 +
                                                                   (float)uVar37 + _UNK_? +
                                                                   (float)uVar37 + _UNK_?;
                                                      value_00.x = (float)uVar34 +
                                                                   (float)uVar36 + 0.0 +
                                                                   (float)uVar36 + 0.0;
                                                      value_00.z = (pOVar11->fields).pivotPoint.z +
                                                                   fVar17 + fVar17;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_position
                                                                (pTVar4,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar33 = (Component *)
                                                                ((_union_155 *)
                                                                &(pOVar11->fields).previewCam)->
                                                                genericMethod;
                                                      if ((pCVar33 != (Component *)0x0) &&
                                                         (pTVar4 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Component::
                                                                    Component_get_transform
                                                                              (pCVar33,(MethodInfo *
                                                                                       )0x0),
                                                         pTVar4 != (Transform *)0x0)) {
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_LookAt_2
                                                                  (pTVar4,(pOVar11->fields).
                                                                           pivotPoint,
                                                                   (MethodInfo *)0x0);
                                                        return pOVar11;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  pOVar11 = (ObjectPreviewer *)(*pcVar38)();
  return pOVar11;
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

