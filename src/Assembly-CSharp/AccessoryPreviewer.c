
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
    func_?(&StringLiteral_Preview);
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
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,iVar4,(MethodInfo *)0x0);
    pRVar5 = (RenderTexture *)func_?();
    if (pRVar5 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                (pRVar5,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                 (MethodInfo *)0x0);
      (this->fields).previewTexture = pRVar5;
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
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar1,
                                   UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                  );
              (this->fields).previewCam = pCVar6;
              func_?();
              pCVar6 = (this->fields).previewCam;
              if (pCVar6 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                          (pCVar6,clearFlags,(MethodInfo *)0x0);
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
                                (pCVar6,(float)textureWidth / (float)textureHeight,
                                 (MethodInfo *)0x0);
                      pCVar6 = (this->fields).previewCam;
                      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                               LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
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
                                  func_?();
                                  pGVar1 = (this->fields).previewGameObject;
                                  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_get_name((Object_1 *)woGameObjectCopy,
                                                              (MethodInfo *)0x0);
                                  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                                      (StringLiteral_Preview_,pSVar3,
                                                       (MethodInfo *)0x0);
                                  if (pGVar1 != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_set_name((Object_1 *)pGVar1,pSVar3,(MethodInfo *)0x0)
                                    ;
                                    pGVar1 = (this->fields).previewGameObject;
                                    if ((pGVar1 != (GameObject *)0x0) &&
                                       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar1,(MethodInfo *)0x0),
                                       pTVar2 != (Transform *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_parent(pTVar2,rootTransform,(MethodInfo *)0x0);
                                      pGVar1 = (this->fields).previewGameObject;
                                      if (pGVar1 != (GameObject *)0x0) {
                                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar1,(MethodInfo *)0x0);
                                        if (cRam_? == '\0') {
                                          func_?();
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
                                                   (pTVar11 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar1,(MethodInfo *)0x0),
                                                   pTVar11 != (Transform *)0x0)) {
                                                  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_position
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
                                                    point.y = (float)(int)((ulonglong)uVar13 >> 0x20)
                                                    ;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_RotateAround
                                                              (pTVar2,point,
                                                               TypeInfo__UnityEngine__Vector3->
                                                               static_fields->upVector,215.0,
                                                               (MethodInfo *)0x0);
                                                    AccessoryPreviewer_ComputeLocalBounds
                                                              ((Bounds *)&puStack_15,
                                                               (this->fields).previewGameObject,
                                                               (MethodInfo *)0x0);
                                                    pGVar1 = (this->fields).previewGameObject;
                                                    if ((pGVar1 != (GameObject *)0x0) &&
                                                       (pTVar2 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar1,(MethodInfo *)
                                                                                     0x0),
                                                       pTVar2 != (Transform *)0x0)) {
                                                      pVVar12 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_localScale
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe4,pTVar2,
                                                                           (MethodInfo *)0x0);
                                                      fVar10 = pVVar12->x;
                                                      uVar16 = pVVar12->y;
                                                      fVar17 = pVVar12->z;
                                                      iVar18 = func_?();
                                                      pVVar12 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Bounds::Bounds_get_size
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe4,
                                                                           (Bounds *)
                                                                           &stack0xffffffc0,
                                                                           (MethodInfo *)0x0);
                                                      if (iVar18 != 0) {
                                                        if (*(int *)(iVar18 + 0xc) == 0)
                                                        goto code_?;
                                                        *(float *)(iVar18 + 0x10) =
                                                             fVar10 * pVVar12->x;
                                                        pVVar12 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Bounds::
                                                                  Bounds_get_size((Vector3 *)
                                                                                  &stack0xffffffe4,
                                                                                  (Bounds *)
                                                                                  &stack0xffffffc0,
                                                                                  (MethodInfo *)0x0)
                                                        ;
                                                        if (*(uint *)(iVar18 + 0xc) < 2)
                                                        goto code_?;
                                                        *(float *)(iVar18 + 0x14) =
                                                             (float)uVar16 * pVVar12->y;
                                                        pVVar12 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Bounds::
                                                                  Bounds_get_size((Vector3 *)
                                                                                  &stack0xffffffe4,
                                                                                  (Bounds *)
                                                                                  &stack0xffffffc0,
                                                                                  (MethodInfo *)0x0)
                                                        ;
                                                        if (*(uint *)(iVar18 + 0xc) < 3)
                                                        goto code_?;
                                                        *(float *)(iVar18 + 0x18) =
                                                             fVar17 * pVVar12->z;
                                                        uVar19 = *(uint *)(iVar18 + 0xc);
                                                        if (uVar19 == 0) {
                                                          rootTransform = (Transform *)0x0;
                                                        }
                                                        else {
                                                          pTVar2 = *(Transform **)(iVar18 + 0x10);
                                                          uVar20 = 1;
                                                          rootTransform = pTVar2;
                                                          if (1 < (int)uVar19) {
                                                            pfVar21 = (float *)(iVar18 + 0x14);
                                                            do {
                                                              if (uVar19 <= uVar20)
                                                              goto code_?;
                                                              pTVar11 = (Transform *)*pfVar21;
                                                              if ((float)pTVar2 < (float)pTVar11) {
                                                                pTVar2 = pTVar11;
                                                                rootTransform = pTVar11;
                                                              }
                                                              uVar20 = uVar20 + 1;
                                                              pfVar21 = pfVar21 + 1;
                                                            } while ((int)uVar20 < (int)uVar19);
                                                          }
                                                        }
                                                        pGVar1 = (this->fields).previewGameObject;
                                                        if (pGVar1 != (GameObject *)0x0) {
                                                          pTVar2 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::GameObject::
                                                                    GameObject_get_transform
                                                                              (pGVar1,(MethodInfo *
                                                                                       )0x0);
                                                          fVar22 = _UNK_? /
                                                                   (float)rootTransform;
                                                          fVar23 = fVar10 * fVar22;
                                                          if (_UNK_? <= fVar10 * fVar22) {
                                                            fVar23 = _UNK_?;
                                                          }
                                                          fVar10 = (float)uVar16 * fVar22;
                                                          if (_UNK_? <= (float)uVar16 * fVar22
                                                             ) {
                                                            fVar10 = _UNK_?;
                                                          }
                                                          fVar24 = fVar17 * fVar22;
                                                          if (_UNK_? <= fVar17 * fVar22) {
                                                            fVar24 = _UNK_?;
                                                          }
                                                          if (pTVar2 != (Transform *)0x0) {
                                                            value.y = fVar10;
                                                            value.x = fVar23;
                                                            value.z = fVar24;
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_set_localScale
                                                                      (pTVar2,value,
                                                                       (MethodInfo *)0x0);
                                                            pGVar1 = (this->fields).
                                                                      previewGameObject;
                                                            if (pGVar1 != (GameObject *)0x0) {
                                                              pTVar2 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::GameObject::
                                                                        GameObject_get_transform
                                                                                  (pGVar1,(
                                                  MethodInfo *)0x0);
                                                  pGVar1 = (this->fields).previewGameObject;
                                                  if ((pGVar1 != (GameObject *)0x0) &&
                                                     (pTVar11 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar1,(MethodInfo *)0x0
                                                                          ),
                                                     pTVar11 != (Transform *)0x0)) {
                                                    pVVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,pTVar11,(MethodInfo *)0x0)
                                                    ;
                                                    fVar17 = pVVar12->x;
                                                    uVar25 = pVVar12->y;
                                                    fVar10 = pVVar12->z;
                                                    pVVar12 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Bounds::Bounds_get_min
                                                                        ((Vector3 *)&stack0xffffffe4
                                                                         ,(Bounds *)&stack0xffffffc0
                                                                         ,(MethodInfo *)0x0);
                                                    value_00.y = (float)uVar25 - pVVar12->y;
                                                    value_00.x = fVar17 - 0.0;
                                                    if (pTVar2 != (Transform *)0x0) {
                                                      value_00.z = fVar10 - 0.0;
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
                                                                               &stack0xfffffff0,
                                                                               pTVar11,(MethodInfo *
                                                                                       )0x0);
                                                          uVar26 = pVVar12->x;
                                                          uVar27 = pVVar12->y;
                                                          if (pTVar2 != (Transform *)0x0) {
                                                            value_01.y = cameraPosOffset.y +
                                                                         (float)uVar27;
                                                            value_01.x = cameraPosOffset.x +
                                                                         (float)uVar26;
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
                                                                        ((Vector3 *)&stack0xfffffff0
                                                                         ,pTVar2,(MethodInfo *)0x0)
                                                    ;
                                                    uVar28 = pVVar12->x;
                                                    fVar10 = pVVar12->z;
                                                    pCVar6 = (this->fields).previewCam;
                                                    uVar29._4_4_ = cameraPosOffset.y;
                                                    uVar29._0_4_ = (float)uVar28;
                                                    if ((pCVar6 != (Camera *)0x0) &&
                                                       (pTVar2 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar6,
                                                                             (MethodInfo *)0x0),
                                                       pTVar2 != (Transform *)0x0)) {
                                                      value_02.z = fVar10;
                                                      value_02.x = (float)uVar29;
                                                      value_02.y = SUB84(uVar29,4);
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
  }
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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

