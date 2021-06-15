
/* Bounds ComputeLocalBounds(GameObject) */

Bounds * Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  pfStack_5 = (float *)0x0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  pfStack_9 = (float *)0x0;
  fStack_10 = 0.0;
  if (go != (GameObject *)0x0) {
    pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (go,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&BStack_13.m_Extents,(MethodInfo *)0x0);
    uStack_14._0_4_ = pVVar12->x;
    uStack_14._4_4_ = pVVar12->y;
    fVar15 = pVVar12->z;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&BStack_13.m_Extents,(MethodInfo *)0x0);
    uVar16._0_4_ = pVVar12->x;
    uVar16._4_4_ = pVVar12->y;
    func_?(&fStack_3,(int)uStack_14,(int)((ulonglong)uStack_14 >> 0x20),fVar15,uVar16);
    if (pUVar11 != (UseInteratorVisualization__Array *)0x0) {
      if ((int)pUVar11->max_length < 1) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Renderers_required_for_correct_b,(MethodInfo *)0x0);
code_?:
        (__return_storage_ptr__->m_Center).x = fStack_3;
        (__return_storage_ptr__->m_Center).y = fStack_4;
        (__return_storage_ptr__->m_Center).z = (float)pfStack_5;
        (__return_storage_ptr__->m_Extents).x = fStack_6;
        (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_1;
        (__return_storage_ptr__->m_Extents).z = (float)uStack_1._4_4_;
        return __return_storage_ptr__;
      }
      if (pUVar11->vector[0] != (UseInteratorVisualization *)0x0) {
        pBVar17 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                           ((Bounds *)&stack0xffffff70,(Renderer *)pUVar11->vector[0],
                            (MethodInfo *)0x0);
        fStack_7 = (pBVar17->m_Center).x;
        fStack_8 = (pBVar17->m_Center).y;
        pfStack_9 = (float *)(pBVar17->m_Center).z;
        fStack_10 = (pBVar17->m_Extents).x;
        uStack_2._0_4_ = (pBVar17->m_Extents).y;
        uStack_2._4_4_ = (pBVar17->m_Extents).z;
        puVar18 = (undefined8 *)func_?(&BStack_13.m_Extents,&fStack_7,0);
        uStack_19 = *puVar18;
        fStack_20 = *(float *)(puVar18 + 1);
        pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (go,(MethodInfo *)0x0);
        if (pTVar21 != (Transform *)0x0) {
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&BStack_13.m_Extents,pTVar21,(MethodInfo *)0x0);
          uStack_14._0_4_ = pVVar12->x;
          uStack_14._4_4_ = pVVar12->y;
          fVar15 = pVVar12->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            uVar16 = CONCAT44((float)(uVar16 >> 0x20),TypeInfo__UnityEngine__Vector3);
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          uVar16 = uVar16 & 0xffffffff00000000;
          uVar22 = (undefined4)((ulonglong)uStack_14 >> 0x20);
          a.z = fStack_20;
          a.x = (float)(undefined4)uStack_19;
          a.y = (float)uStack_19._4_4_;
          b.z = fVar15;
          b.x = (float)(undefined4)uStack_14;
          b.y = uStack_14._4_4_;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             (&BStack_13.m_Extents,a,b,(MethodInfo *)0x0);
          uVar23 = pVVar12->x;
          uVar24 = pVVar12->y;
          VStack_25.x = pVVar12->z;
          VStack_25.y = 0.0;
          VStack_26.x = (float)&fStack_7;
          VStack_26.y = (float)uVar23;
          VStack_26.z = (float)uVar24;
          func_?();
          ppUVar27 = pUVar11->vector;
          fStack_3 = fStack_7;
          fStack_4 = fStack_8;
          pfStack_5 = pfStack_9;
          fStack_6 = fStack_10;
          uStack_1 = uStack_2;
          for (uVar28 = 1; ppUVar27 = ppUVar27 + 1, (int)uVar28 < (int)pUVar11->max_length;
              uVar28 = uVar28 + 1) {
            if (pUVar11->max_length <= uVar28) goto code_?;
            if (*ppUVar27 == (UseInteratorVisualization *)0x0) goto code_?;
            pBVar17 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                               (&BStack_13,(Renderer *)*ppUVar27,(MethodInfo *)0x0);
            fStack_7 = (pBVar17->m_Center).x;
            fStack_8 = (pBVar17->m_Center).y;
            pfStack_9 = (float *)(pBVar17->m_Center).z;
            fStack_10 = (pBVar17->m_Extents).x;
            uStack_2._0_4_ = (pBVar17->m_Extents).y;
            uStack_2._4_4_ = (pBVar17->m_Extents).z;
            puVar18 = (undefined8 *)func_?(auStack_29,&fStack_7,0,uVar22,fVar15,uVar16);
            BStack_13.m_Extents._4_8_ = *puVar18;
            uStack_14 = CONCAT44(*(undefined4 *)(puVar18 + 1),(undefined4)uStack_14);
            pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (go,(MethodInfo *)0x0);
            if (pTVar21 == (Transform *)0x0) goto code_?;
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_25,pTVar21,(MethodInfo *)0x0);
            uStack_19._0_4_ = pVVar12->x;
            uStack_19._4_4_ = pVVar12->y;
            fStack_20 = pVVar12->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            uVar22 = (undefined4)((ulonglong)uStack_19 >> 0x20);
            a_00.z = uStack_14._4_4_;
            a_00.x = BStack_13.m_Extents.y;
            a_00.y = BStack_13.m_Extents.z;
            b_00.z = fStack_20;
            b_00.x = (float)(undefined4)uStack_19;
            b_00.y = (float)uStack_19._4_4_;
            fVar15 = fStack_20;
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               (&VStack_26,a_00,b_00,(MethodInfo *)0x0);
            uVar30 = pVVar12->x;
            uVar31 = pVVar12->y;
            VStack_25.x = pVVar12->z;
            VStack_25.y = 0.0;
            VStack_26.x = (float)&fStack_7;
            VStack_26.y = (float)uVar30;
            VStack_26.z = (float)uVar31;
            func_?();
            VStack_25.y = 0.0;
            VStack_26.x = (float)pfStack_9;
            VStack_26.y = fStack_10;
            VStack_26.z = (float)uStack_2;
            VStack_25.x = (float)((ulonglong)uStack_2 >> 0x20);
            uVar16 = CONCAT44(&fStack_3,&UNK_?);
            func_?();
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar22 = func_?(0,0);
  func_?(uVar22);
  pcVar32 = (code *)swi(3);
  pBVar17 = (Bounds *)(*pcVar32)();
  return pBVar17;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_Destroy
               (AccessoryPreviewer *this,MethodInfo *method)

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
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar6,(MethodInfo *)0x0);
    (this->fields).rootTransform = (Transform *)0x0;
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
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pRVar3,(MethodInfo *)0x0);
  }
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  (this->fields).rootTransform = rootTransform;
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,rootTransform,(MethodInfo *)0x0);
    if (woGameObjectCopy == (GameObject *)0x0) goto code_?;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_RenderCam_Preview__0_,(Object *)pSVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar1,pSVar3,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,iVar4,(MethodInfo *)0x0);
    pRVar5 = (RenderTexture *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_5
              (pRVar5,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    (this->fields).previewTexture = pRVar5;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    if (pRVar5 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pRVar5,pSVar3,(MethodInfo *)0x0);
    pRVar5 = (this->fields).previewTexture;
    if (pRVar5 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar5,2,(MethodInfo *)0x0);
    pRVar5 = (this->fields).previewTexture;
    if (pRVar5 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              ((Texture *)pRVar5,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
    pRVar5 = (this->fields).previewTexture;
    if (pRVar5 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pRVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
    pCVar6 = (Camera *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (pGVar1,
                         UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                        );
    (this->fields).previewCam = pCVar6;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (pCVar6,clearFlags,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    puVar7 = &stack0xffffff78;
    fVar8 = 0.0;
    uVar9 = 0;
    puVar10 = &UNK_?;
    func_?();
    if (pCVar6 == (Camera *)0x0) goto code_?;
    value.g = (float)puVar7;
    value.r = (float)puVar10;
    value.b = (float)uVar9;
    value.a = fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (pCVar6,value,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar6,35.0,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
              (pCVar6,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar6,1 << ((byte)iVar4 & 0x1f),(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
              (pCVar6,0.05,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
              (pCVar6,100.0,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar6,(this->fields).previewTexture,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
              (pCVar6,1,(MethodInfo *)0x0);
    pCVar6 = (this->fields).previewCam;
    if (pCVar6 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
              (pCVar6,0.88,(MethodInfo *)0x0);
    (this->fields).previewGameObject = woGameObjectCopy;
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Preview_,pSVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)woGameObjectCopy,pSVar3,(MethodInfo *)0x0);
    pGVar1 = (this->fields).previewGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,rootTransform,(MethodInfo *)0x0);
    pGVar1 = (this->fields).previewGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        ((Quaternion *)(auStack_12 + 8),(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar2,*pQVar11,(MethodInfo *)0x0);
    pGVar1 = (this->fields).previewGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AccessoryPreviewer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryPreviewer->_1).cctor_started == 0)) {
      func_?();
    }
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar2,TypeInfo__AccessoryPreviewer->static_fields->previewPosition,(MethodInfo *)0x0
              );
    pAVar13 = TypeInfo__AccessoryPreviewer->static_fields;
    uStack_14._0_4_ = (pAVar13->previewPosition).x;
    uStack_14._4_4_ = (pAVar13->previewPosition).y;
    fVar8 = (pAVar13->previewPosition).z;
    func_?();
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_00.z = fVar8;
    a_00.x = (float)(undefined4)uStack_14;
    a_00.y = (float)uStack_14._4_4_;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_16,a_00,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    fVar17 = pVVar15->y;
    fVar8 = pVVar15->z;
    pAVar13 = TypeInfo__AccessoryPreviewer->static_fields;
    (pAVar13->previewPosition).x = pVVar15->x;
    (pAVar13->previewPosition).y = fVar17;
    (pAVar13->previewPosition).z = fVar8;
    pGVar1 = (this->fields).previewGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).previewGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (pTVar18 == (Transform *)0x0) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_16,pTVar18,(MethodInfo *)0x0);
    uStack_14._0_4_ = pVVar15->x;
    uStack_14._4_4_ = pVVar15->y;
    fVar8 = pVVar15->z;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        (&VStack_16,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    point.z = fVar8;
    point.x = (float)(undefined4)uStack_14;
    point.y = (float)uStack_14._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
              (pTVar2,point,*pVVar15,215.0,(MethodInfo *)0x0);
    AccessoryPreviewer_ComputeLocalBounds
              ((Bounds *)auStack_12,(this->fields).previewGameObject,(MethodInfo *)0x0);
    pGVar1 = (this->fields).previewGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_16,pTVar2,(MethodInfo *)0x0);
    uVar19._0_4_ = pVVar15->x;
    uVar19._4_4_ = pVVar15->y;
    fVar8 = pVVar15->z;
    uStack_14 = uVar19;
    values = (Single__Array *)func_?();
    puVar20 = (undefined8 *)func_?(&VStack_21);
    VStack_16._0_8_ = *puVar20;
    VStack_16.z = *(float *)(puVar20 + 1);
    if (values == (Single__Array *)0x0) goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = VStack_16.x * (float)(undefined4)uVar19;
    puVar20 = (undefined8 *)func_?();
    VStack_16._0_8_ = *puVar20;
    VStack_16.z = *(float *)(puVar20 + 1);
    if (1 < values->max_length) {
      values->vector[1] = (float)uVar19._4_4_ * VStack_16.y;
      puVar20 = (undefined8 *)func_?();
      VStack_16._0_8_ = *puVar20;
      VStack_16.z = *(float *)(puVar20 + 1);
      if (values->max_length < 3) goto code_?;
      values->vector[2] = fVar8 * VStack_16.z;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1(values,(MethodInfo *)0x0)
      ;
      pGVar1 = (this->fields).previewGameObject;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        a_01.z = fVar8;
        a_01.x = (float)(undefined4)uStack_14;
        a_01.y = (float)uStack_14._4_4_;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            (&VStack_21,a_01,_UNK_? / fVar17,(MethodInfo *)0x0);
        uStack_14._0_4_ = pVVar15->x;
        uStack_14._4_4_ = pVVar15->y;
        fVar8 = pVVar15->z;
        func_?();
        lhs.z = fVar8;
        lhs.x = (float)(undefined4)uStack_14;
        lhs.y = (float)uStack_14._4_4_;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Min
                            (&VStack_21,lhs,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar2,*pVVar15,(MethodInfo *)0x0);
          pGVar1 = (this->fields).previewGameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            pGVar1 = (this->fields).previewGameObject;
            if (pGVar1 != (GameObject *)0x0) {
              pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
              if (pTVar18 != (Transform *)0x0) {
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_21,pTVar18,(MethodInfo *)0x0);
                uStack_14._0_4_ = pVVar15->x;
                uStack_14._4_4_ = pVVar15->y;
                fVar8 = pVVar15->z;
                puVar20 = (undefined8 *)func_?();
                VStack_16._0_8_ = *puVar20;
                func_?();
                a.z = fVar8;
                a.x = (float)(undefined4)uStack_14;
                a.y = (float)uStack_14._4_4_;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    (&VStack_21,a,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar2,*pVVar15,(MethodInfo *)0x0);
                  pCVar6 = (this->fields).previewCam;
                  if (pCVar6 != (Camera *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_transform((Component_1 *)pCVar6,(MethodInfo *)0x0);
                    pGVar1 = (this->fields).previewGameObject;
                    if (pGVar1 != (GameObject *)0x0) {
                      pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                      if (pTVar18 != (Transform *)0x0) {
                        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position(&VStack_21,pTVar18,(MethodInfo *)0x0);
                        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Addition(&VStack_21,*pVVar15,cameraPosOffset,
                                                      (MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                    (pTVar2,*pVVar15,(MethodInfo *)0x0);
                          pCVar6 = (this->fields).previewCam;
                          if (pCVar6 != (Camera *)0x0) {
                            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_transform
                                               ((Component_1 *)pCVar6,(MethodInfo *)0x0);
                            if (pTVar2 != (Transform *)0x0) {
                              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_position(&VStack_21,pTVar2,(MethodInfo *)0x0);
                              uVar22 = pVVar15->x;
                              fVar8 = pVVar15->z;
                              pCVar6 = (this->fields).previewCam;
                              VStack_16.y = cameraPosOffset.y;
                              VStack_16.x = (float)uVar22;
                              if (pCVar6 != (Camera *)0x0) {
                                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_1_get_transform
                                                   ((Component_1 *)pCVar6,(MethodInfo *)0x0);
                                if (pTVar2 != (Transform *)0x0) {
                                  value_00.z = fVar8;
                                  value_00.x = VStack_16.x;
                                  value_00.y = VStack_16.y;
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_position(pTVar2,value_00,(MethodInfo *)0x0);
                                  pCVar6 = (this->fields).previewCam;
                                  if (pCVar6 != (Camera *)0x0) {
                                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                             Component_1_get_transform
                                                       ((Component_1 *)pCVar6,(MethodInfo *)0x0);
                                    pGVar1 = (this->fields).previewGameObject;
                                    if (pGVar1 != (GameObject *)0x0) {
                                      pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform(pGVar1,(MethodInfo *)0x0)
                                      ;
                                      if (pTVar2 != (Transform *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_LookAt(pTVar2,pTVar18,(MethodInfo *)0x0);
                                        pCVar6 = (this->fields).previewCam;
                                        if (pCVar6 != (Camera *)0x0) {
                                          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Component::Component_1_get_transform
                                                             ((Component_1 *)pCVar6,
                                                              (MethodInfo *)0x0);
                                          if (pTVar2 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_Rotate_1(pTVar2,cameraRotOffset,
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
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  uVar9 = func_?();
  func_?(uVar9);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPostRender
               (AccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPreCull
               (AccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewGameObject;
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


/* AccessoryPreviewer() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  pAVar3 = TypeInfo__AccessoryPreviewer->static_fields;
  (pAVar3->previewPosition).x = (float)(undefined4)uStack_2;
  (pAVar3->previewPosition).y = (float)uStack_2._4_4_;
  (pAVar3->previewPosition).z = fStack_1;
  return;
}

