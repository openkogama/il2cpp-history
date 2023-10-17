
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
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)go,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3 = (pVVar2->zeroVector).x;
    uVar4 = (pVVar2->zeroVector).y;
    fStack_5 = (pVVar2->zeroVector).z;
    fStack_6 = (float)uVar3;
    pSStack_7 = (String *)uVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    center.y = (float)pSStack_7;
    center.x = fStack_6;
    center.z = fStack_5;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
              (__return_storage_ptr__,center,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      if (pIVar1[1].monitor == (MonitorData *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Renderers_required_for_correct_b,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
      if (pIVar1[2].klass != (IEnumerable_1_System_Object___Class *)0x0) {
        pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                            ((Bounds *)&stack0xffffffb0,(Renderer *)pIVar1[2].klass,
                             (MethodInfo *)0x0);
        fVar9 = (pBVar8->m_Center).x;
        pSVar10 = (String *)(pBVar8->m_Center).y;
        pSVar11 = (String *)(pBVar8->m_Center).z;
        pOVar12 = (Object *)(pBVar8->m_Extents).x;
        uVar13._0_4_ = (pBVar8->m_Extents).y;
        uVar13._4_4_ = (pBVar8->m_Extents).z;
        pRVar14 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_15,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&stack0xffffff98,(MethodInfo *)0x0);
        uVar16 = pRVar14->_options;
        uVar17 = pRVar14->_cultureKey;
        pSStack_7 = pRVar14->_pattern;
        fStack_18 = (float)uVar16;
        fStack_6 = (float)uVar17;
        pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (go,(MethodInfo *)0x0);
        if (pTVar19 != (Transform *)0x0) {
          pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&RStack_15,pTVar19,(MethodInfo *)0x0);
          VStack_21.x = pVVar20->x;
          VStack_21.y = pVVar20->y;
          VStack_21.z = (float)pSStack_7 - pVVar20->z;
          value.y = fStack_6 - VStack_21.y;
          value.x = fStack_18 - VStack_21.x;
          value.z = VStack_21.z;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
          ParticleSystem_Particle_set_position
                    ((ParticleSystem_Particle *)&stack0xffffff98,value,(MethodInfo *)0x0);
          pMVar22 = (MonitorData *)0x1;
          (__return_storage_ptr__->m_Center).x = fVar9;
          (__return_storage_ptr__->m_Center).y = (float)pSVar10;
          (__return_storage_ptr__->m_Center).z = (float)pSVar11;
          (__return_storage_ptr__->m_Extents).x = (float)pOVar12;
          (__return_storage_ptr__->m_Extents).y = (float)uVar13;
          (__return_storage_ptr__->m_Extents).z = SUB84(uVar13,4);
          ppMVar23 = &pIVar1[2].monitor;
          while( true ) {
            if ((int)pIVar1[1].monitor <= (int)pMVar22) {
              return __return_storage_ptr__;
            }
            if (pIVar1[1].monitor <= pMVar22) break;
            if ((Renderer *)*ppMVar23 == (Renderer *)0x0) goto code_?;
            pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                                ((Bounds *)&stack0xffffff80,(Renderer *)*ppMVar23,(MethodInfo *)0x0)
            ;
            pSVar10 = (String *)(pBVar8->m_Center).z;
            pOVar12 = (Object *)(pBVar8->m_Extents).x;
            uVar24._0_4_ = (pBVar8->m_Extents).y;
            uVar24._4_4_ = (pBVar8->m_Extents).z;
            pRVar14 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                (&RStack_25,
                                 (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)&stack0xffffff98,(MethodInfo *)0x0);
            VStack_21.x = (float)pRVar14->_options;
            VStack_21.y = (float)pRVar14->_cultureKey;
            VStack_21.z = (float)pRVar14->_pattern;
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (go,(MethodInfo *)0x0);
            if (pTVar19 == (Transform *)0x0) goto code_?;
            pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_26,pTVar19,(MethodInfo *)0x0);
            uVar27 = pVVar20->x;
            uVar28 = pVVar20->y;
            pSStack_7 = (String *)pVVar20->z;
            pSVar11 = (String *)(VStack_21.z - (float)pSStack_7);
            pSVar29 = (String *)0x0;
            value_00.y = VStack_21.y - (float)uVar28;
            value_00.x = VStack_21.x - (float)uVar27;
            value_00.z = (float)pSVar11;
            RStack_15._pattern = pSVar11;
            fStack_18 = (float)uVar27;
            fStack_6 = (float)uVar28;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
            ParticleSystem_Particle_set_position
                      ((ParticleSystem_Particle *)&stack0xffffff98,value_00,(MethodInfo *)0x0);
            bounds.m_Center.y = (float)pSVar29;
            bounds.m_Center.x = (float)pSVar11;
            bounds.m_Center.z = (float)pSVar10;
            bounds.m_Extents.x = (float)pOVar12;
            bounds.m_Extents.y = (float)uVar24;
            bounds.m_Extents.z = SUB84(uVar24,4);
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate_1
                      (__return_storage_ptr__,bounds,(MethodInfo *)0x0);
            pMVar22 = pMVar22 + 1;
            ppMVar23 = ppMVar23 + 1;
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
  pcVar30 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar30)();
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
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar1,(MethodInfo *)0x0);
    pOVar2 = (ObjectPreviewer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                        );
    if (pOVar2 == (ObjectPreviewer *)0x0) goto code_?;
    (pOVar2->fields).previewCamOffset.x = cameraOffset.x;
    (pOVar2->fields).previewCamOffset.y = cameraOffset.y;
    (pOVar2->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
    (pOVar2->fields).previewCamOffset.z = cameraOffset.z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
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
    pRVar6 = (RenderTexture *)func_?();
    if (pRVar6 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
              (pRVar6,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    (pOVar2->fields)._PreviewTexture_k__BackingField = pRVar6;
    func_?();
    pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar6 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pRVar6,name,(MethodInfo *)0x0);
    pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar6 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar6,2,(MethodInfo *)0x0);
    pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar6 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              ((Texture *)pRVar6,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
    pRVar6 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar6 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pRVar6,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
    pCVar7 = (Camera *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                        );
    (pOVar2->fields).previewCam = pCVar7;
    func_?();
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (pCVar7,clearFlags,(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (pCVar7,(Color)ZEXT816(0),(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar7,35.0,(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
              (pCVar7,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar7,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
              (pCVar7,0.05,(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
              (pCVar7,100.0,(MethodInfo *)0x0);
    pCVar7 = (pOVar2->fields).previewCam;
    if (pCVar7 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar7,(pOVar2->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
    (pOVar2->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
    func_?();
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if (wo == (MVWorldObjectClient *)0x0) {
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Preview_,name,(MethodInfo *)0x0);
code_?:
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar1,pSVar4,(MethodInfo *)0x0);
        pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
        if ((pGVar1 != (GameObject *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar1,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar3,previewItemsRoot,(MethodInfo *)0x0);
          pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
          if (pGVar1 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->
                                 identityQuaternion,(MethodInfo *)0x0);
              pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
              if ((pGVar1 != (GameObject *)0x0) &&
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                 pTVar3 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar3,previewPosition,(MethodInfo *)0x0);
                pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                if (pGVar1 != (GameObject *)0x0) {
                  pIVar8 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                      ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,
                                       UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                      );
                  IVar9.m_value = 0;
                  if (pIVar8 != (IEnumerable_1_System_Object_ *)0x0) {
                    for (; IVar9.m_value < (int)pIVar8[1].monitor;
                        IVar9.m_value = IVar9.m_value + 1) {
                      if (pIVar8[1].monitor <= (uint)IVar9.m_value) goto code_?;
                      this = (&pIVar8[2].klass)[IVar9.m_value];
                      if (this == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
                      pOVar10 = (Object_1 *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)this,
                                           TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                          );
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_op_Inequality(pOVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar11 != 0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                                  ((Renderer *)this,0,(MethodInfo *)0x0);
                      }
                    }
                    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                    if (pGVar1 != (GameObject *)0x0) {
                      pIVar8 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                          ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,
                                           SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                          );
                      IVar9.m_value = 0;
                      if (pIVar8 != (IEnumerable_1_System_Object_ *)0x0) {
                        for (; IVar9.m_value < (int)pIVar8[1].monitor;
                            IVar9.m_value = IVar9.m_value + 1) {
                          if (pIVar8[1].monitor <= (uint)IVar9.m_value) goto code_?;
                          if (((&pIVar8[2].klass)[IVar9.m_value] ==
                               (IEnumerable_1_System_Object___Class *)0x0) ||
                             (this_00 = (Renderer *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)(&pIVar8[2].klass)[IVar9.m_value],
                                                                                                      
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), this_00 == (Renderer *)0x0))
                          goto code_?;
                          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                                    (this_00,0,(MethodInfo *)0x0);
                        }
                        if (wo == (MVWorldObjectClient *)0x0) {
                          pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                          if (pGVar1 == (GameObject *)0x0) goto code_?;
                          pOVar10 = (Object_1 *)
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponent_1
                                              (pGVar1,
                                               AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                                              );
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality(pOVar10,(Object_1 *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar11 == 0) {
                            pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                            if ((TypeInfo__ObjectPreviewer->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            ObjectPreviewer_ComputeLocalBounds
                                      ((Bounds *)&stack0xffffffc4,pGVar1,(MethodInfo *)0x0);
                          }
                          else {
                            if (pOVar10 == (Object_1 *)0x0) goto code_?;
                            (*(code *)pOVar10->klass[1]._0.interopData)();
                          }
                        }
                        else {
                          (*(wo->klass->vtable).GetLocalBounds.methodPtr)(&stack0xffffffc4);
                        }
                        pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                        if ((pGVar1 != (GameObject *)0x0) &&
                           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                           pTVar3 != (Transform *)0x0)) {
                          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localScale
                                              ((Vector3 *)&stack0xffffffd0,pTVar3,(MethodInfo *)0x0
                                              );
                          fVar13 = pVVar12->x;
                          fVar14 = pVVar12->y;
                          fVar15 = pVVar12->z;
                          iVar16 = func_?();
                          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                                              ((Vector3 *)&stack0xffffffd0,
                                               (Bounds *)&stack0xffffffac,(MethodInfo *)0x0);
                          if (iVar16 != 0) {
                            if (*(int *)(iVar16 + 0xc) == 0) goto code_?;
                            *(float *)(iVar16 + 0x10) = pVVar12->x;
                            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&stack0xffffffd0,
                                                      (Bounds *)&stack0xffffffac,(MethodInfo *)0x0);
                            if (*(uint *)(iVar16 + 0xc) < 2) goto code_?;
                            *(float *)(iVar16 + 0x14) = pVVar12->y;
                            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&stack0xffffffd0,
                                                      (Bounds *)&stack0xffffffac,(MethodInfo *)0x0);
                            if (*(uint *)(iVar16 + 0xc) < 3) goto code_?;
                            *(float *)(iVar16 + 0x18) = pVVar12->z;
                            uVar17 = *(uint *)(iVar16 + 0xc);
                            if (uVar17 != 0) {
                              fVar18 = *(float *)(iVar16 + 0x10);
                              uVar19 = 1;
                              if (1 < (int)uVar17) {
                                pfVar20 = (float *)(iVar16 + 0x14);
                                do {
                                  if (uVar17 <= uVar19) goto code_?;
                                  if (fVar18 < *pfVar20) {
                                    fVar18 = *pfVar20;
                                  }
                                  uVar19 = uVar19 + 1;
                                  pfVar20 = pfVar20 + 1;
                                } while ((int)uVar19 < (int)uVar17);
                              }
                            }
                            iVar16 = func_?();
                            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&stack0xffffffd0,
                                                      (Bounds *)&stack0xffffffac,(MethodInfo *)0x0);
                            if (iVar16 == 0) goto code_?;
                            if (*(int *)(iVar16 + 0xc) == 0) goto code_?;
                            *(float *)(iVar16 + 0x10) = fVar13 * pVVar12->x;
                            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&stack0xffffffd0,
                                                      (Bounds *)&stack0xffffffac,(MethodInfo *)0x0);
                            if (*(uint *)(iVar16 + 0xc) < 2) goto code_?;
                            *(float *)(iVar16 + 0x14) = fVar14 * pVVar12->y;
                            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&stack0xffffffd0,
                                                      (Bounds *)&stack0xffffffac,(MethodInfo *)0x0);
                            if (*(uint *)(iVar16 + 0xc) < 3) goto code_?;
                            *(float *)(iVar16 + 0x18) = fVar15 * pVVar12->z;
                            uVar17 = *(uint *)(iVar16 + 0xc);
                            if (uVar17 == 0) {
                              fVar18 = 0.0;
                            }
                            else {
                              fVar18 = *(float *)(iVar16 + 0x10);
                              uVar19 = 1;
                              if (1 < (int)uVar17) {
                                pfVar20 = (float *)(iVar16 + 0x14);
                                do {
                                  if (uVar17 <= uVar19) goto code_?;
                                  if (fVar18 < *pfVar20) {
                                    fVar18 = *pfVar20;
                                  }
                                  uVar19 = uVar19 + 1;
                                  pfVar20 = pfVar20 + 1;
                                } while ((int)uVar19 < (int)uVar17);
                              }
                            }
                            fVar18 = _UNK_? / fVar18;
                            if (((wo == (MVWorldObjectClient *)0x0) ||
                                ((wo->klass->_1).typeHierarchyDepth <
                                 (TypeInfo__MVMovingPlatformGroup->_1).typeHierarchyDepth)) ||
                               ((MVMovingPlatformGroup__Class *)
                                (wo->klass->_1).typeHierarchy
                                [(TypeInfo__MVMovingPlatformGroup->_1).typeHierarchyDepth - 1] !=
                                TypeInfo__MVMovingPlatformGroup)) {
code_?:
                              pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                              if (pGVar1 != (GameObject *)0x0) {
                                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                                if (pTVar3 != (Transform *)0x0) {
                                  value.y = fVar14 * fVar18;
                                  value.x = fVar13 * fVar18;
                                  value.z = fVar15 * fVar18;
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_localScale(pTVar3,value,(MethodInfo *)0x0);
                                  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System
                                  ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::
                                  Object]::
                                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                              *)&stack0xffffffac,(MethodInfo *)0x0);
                                  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System
                                  ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::
                                  Object]::
                                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                              *)&stack0xffffffac,(MethodInfo *)0x0);
                                  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System
                                  ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::
                                  Object]::
                                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                              *)&stack0xffffffac,(MethodInfo *)0x0);
                                  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar1 != (GameObject *)0x0) {
                                    puVar21 = &UNK_?;
                                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                                    if (pTVar3 != (Transform *)0x0) {
                                      pVVar12 = (Vector3 *)&stack0xffffffdc;
                                      puVar22 = &UNK_?;
                                      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_position
                                                          (pVVar12,pTVar3,(MethodInfo *)0x0);
                                      uVar24 = pVVar23->x;
                                      uVar25 = pVVar23->y;
                                      fVar13 = pVVar23->z;
                                      (pOVar2->fields).pivotPoint.x = (float)uVar24 + (float)pVVar12
                                      ;
                                      (pOVar2->fields).pivotPoint.y = (float)uVar25 + (float)puVar22
                                      ;
                                      (pOVar2->fields).pivotPoint.z = fVar13 + (float)puVar21;
                                      pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField
                                      ;
                                      if (pGVar1 != (GameObject *)0x0) {
                                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar1,(MethodInfo *)0x0);
                                        uVar26._0_4_ = (pOVar2->fields).pivotPoint.x;
                                        uVar26._4_4_ = (pOVar2->fields).pivotPoint.y;
                                        fVar13 = (pOVar2->fields).pivotPoint.z;
                                        if (cRam_? == '\0') {
                                          func_?();
                                          cRam_? = '\x01';
                                        }
                                        if (pTVar3 != (Transform *)0x0) {
                                          point.z = fVar13;
                                          point.x = (float)(int)uVar26;
                                          point.y = (float)(int)((ulonglong)uVar26 >> 0x20);
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_RotateAround
                                                    (pTVar3,point,
                                                     TypeInfo__UnityEngine__Vector3->static_fields->
                                                     upVector,180.0,(MethodInfo *)0x0);
                                          pCVar7 = (pOVar2->fields).previewCam;
                                          if (pCVar7 != (Camera *)0x0) {
                                            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_transform
                                                                ((Component *)pCVar7,
                                                                 (MethodInfo *)0x0);
                                            uVar27 = (pOVar2->fields).pivotPoint.x;
                                            uVar28 = (pOVar2->fields).pivotPoint.y;
                                            uVar29 = (pOVar2->fields).previewCamOffset.x;
                                            uVar30 = (pOVar2->fields).previewCamOffset.y;
                                            fVar13 = (pOVar2->fields).previewCamOffset.z -
                                                    _UNK_?;
                                            if (pTVar3 != (Transform *)0x0) {
                                              value_00.y = (float)uVar30 + _UNK_? +
                                                           (float)uVar30 + _UNK_? +
                                                           (float)uVar28;
                                              value_00.x = (float)uVar29 + 0.0 + (float)uVar29 + 0.0 +
                                                           (float)uVar27;
                                              value_00.z = fVar13 + fVar13 +
                                                           (pOVar2->fields).pivotPoint.z;
                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_set_position
                                                        (pTVar3,value_00,(MethodInfo *)0x0);
                                              pCVar7 = (pOVar2->fields).previewCam;
                                              if ((pCVar7 != (Camera *)0x0) &&
                                                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_get_transform
                                                                      ((Component *)pCVar7,
                                                                       (MethodInfo *)0x0),
                                                 pTVar3 != (Transform *)0x0)) {
                                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_LookAt_2(pTVar3,(pOVar2->fields).
                                                                           pivotPoint,
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
                            }
                            else {
                              pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                              if (pGVar1 != (GameObject *)0x0) {
                                value_01 = fVar18 * _UNK_?;
                                this_01 = (LineRenderer *)
                                          Newtonsoft::Json::Linq::LinqExtensions::
                                          LinqExtensions_Values_2
                                                    ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                     pGVar1,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                if (this_01 != (LineRenderer *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                                  LineRenderer_set_startWidth(this_01,value_01,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                                  LineRenderer_set_endWidth(this_01,value_01,(MethodInfo *)0x0);
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
      goto code_?;
    }
    values = (String__Array *)func_?(TypeInfo__System__String,6);
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Preview_ != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
    goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Preview_;
    func_?();
    if ((name != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0)) goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = name;
    func_?();
    if ((StringLiteral__Item_ != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__Item_;
    func_?();
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar4;
    func_?();
    if ((StringLiteral__woID_ != (String *)0x0) && (iVar16 = func_?(), iVar16 == 0))
    goto code_?;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = StringLiteral__woID_;
    func_?();
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((pSVar4 == (String *)0x0) || (iVar16 = func_?(), iVar16 != 0)) {
      if (values->max_length < 6) goto code_?;
      values->vector[5] = pSVar4;
      func_?();
      pSVar4 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  pOVar2 = (ObjectPreviewer *)(*pcVar31)();
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
         (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                            ((Void *)(this->fields).layersToRender,(MethodInfo *)0x0);
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

