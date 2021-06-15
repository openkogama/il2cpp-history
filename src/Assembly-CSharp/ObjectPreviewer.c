
/* Bounds ComputeLocalBounds(GameObject) */

Bounds * Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_ComputeLocalBounds
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


/* ObjectPreviewer Create(Int32, CameraClearFlags, LayerFlags, Transform, String, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create
          (int32_t textureSize,CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
          Transform *previewItemsRoot,String *name,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__ObjectPreviewer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObjectPreviewer->_1).cctor_started == 0)) {
    func_?(TypeInfo__ObjectPreviewer);
  }
  iVar3 = TypeInfo__ObjectPreviewer->static_fields->previewerIndex;
  TypeInfo__ObjectPreviewer->static_fields->previewerIndex = iVar3 + 1;
  func_?(&uStack_1,(float)(iVar3 * 10),0x43960000,0,0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  previewPosition.z = fStack_2;
  previewPosition.x = (float)(undefined4)uStack_1;
  previewPosition.y = (float)uStack_1._4_4_;
  pOVar5 = ObjectPreviewer_Create_2
                     (textureSize,textureSize,clearFlags,layersToRender,*pVVar4,previewItemsRoot,
                      previewPosition,name,(MVWorldObjectClient *)0x0,woGameObjectCopy,
                      (MethodInfo *)0x0);
  return pOVar5;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ObjectPreviewer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObjectPreviewer->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0)
  ;
  if ((pGVar1 == (GameObject *)0x0) ||
     (pOVar2 = (ObjectPreviewer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar1,
                           ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                          ), pOVar2 == (ObjectPreviewer *)0x0)) {
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
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
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
    (pOVar2->fields).previewCamOffset.x = cameraOffset.x;
    (pOVar2->fields).previewCamOffset.y = cameraOffset.y;
    (pOVar2->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
    (pOVar2->fields).previewCamOffset.z = cameraOffset.z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar4,previewItemsRoot,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar1,pSVar5,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,iVar6,(MethodInfo *)0x0);
    pRStack_7 = (RenderTexture *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_5
              (pRStack_7,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    (pOVar2->fields)._PreviewTexture_k__BackingField = pRStack_7;
    if (pRStack_7 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pRStack_7,name,(MethodInfo *)0x0);
    pRVar8 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar8 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar8,2,(MethodInfo *)0x0);
    pRVar8 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar8 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              ((Texture *)pRVar8,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
    pRVar8 = (pOVar2->fields)._PreviewTexture_k__BackingField;
    if (pRVar8 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pRVar8,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
    pCVar9 = (Camera *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (pGVar1,
                         UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                        );
    (pOVar2->fields).previewCam = pCVar9;
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
              (pCVar9,clearFlags,(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    puVar10 = &stack0xffffff68;
    fVar11 = 0.0;
    uVar12 = 0;
    uVar3 = 0;
    func_?();
    if (pCVar9 == (Camera *)0x0) goto code_?;
    value.g = (float)uVar3;
    value.r = (float)puVar10;
    value.b = (float)uVar12;
    value.a = fVar11;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
              (pCVar9,value,(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar9,35.0,(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
              (pCVar9,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar9,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
              (pCVar9,0.05,(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
              (pCVar9,100.0,(MethodInfo *)0x0);
    pCVar9 = (pOVar2->fields).previewCam;
    if (pCVar9 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar9,(pOVar2->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
    (pOVar2->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
    if (wo != (MVWorldObjectClient *)0x0) {
      args = (Object__Array *)func_?(TypeInfo__System__Object,6);
      if (args == (Object__Array *)0x0) goto code_?;
      if ((StringLiteral_Preview_ != (String *)0x0) && (iVar13 = func_?(), iVar13 == 0))
      goto code_?;
      if (args->max_length == 0) goto code_?;
      args->vector[0] = (Object *)StringLiteral_Preview_;
      if ((name != (String *)0x0) && (iVar13 = func_?(), iVar13 == 0))
      goto code_?;
      if (args->max_length < 2) goto code_?;
      args->vector[1] = (Object *)name;
      if ((StringLiteral__Item_ != (String *)0x0) && (iVar13 = func_?(), iVar13 == 0))
      goto code_?;
      if (args->max_length < 3) goto code_?;
      args->vector[2] = (Object *)StringLiteral__Item_;
      pRStack_7 = (RenderTexture *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)wo,(MethodInfo *)0x0);
      pUStack_14 = (UseInteratorVisualization__Array *)func_?();
      if ((pUStack_14 != (UseInteratorVisualization__Array *)0x0) &&
         (iVar13 = func_?(), iVar13 == 0)) goto code_?;
      if (args->max_length < 4) goto code_?;
      args->vector[3] = (Object *)pUStack_14;
      if ((StringLiteral__woID_ != (String *)0x0) && (iVar13 = func_?(), iVar13 == 0))
      goto code_?;
      if (args->max_length < 5) goto code_?;
      args->vector[4] = (Object *)StringLiteral__woID_;
      pUStack_15 = (UseInteratorVisualization__Array *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      pOVar16 = (Object *)func_?();
      if ((pOVar16 != (Object *)0x0) && (iVar13 = func_?(pOVar16), iVar13 == 0))
      goto code_?;
      if (5 < args->max_length) {
        args->vector[5] = pOVar16;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if (woGameObjectCopy != (GameObject *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_Preview_,name,(MethodInfo *)0x0);
    if (woGameObjectCopy == (GameObject *)0x0) goto code_?;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)woGameObjectCopy,pSVar5,(MethodInfo *)0x0);
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar1 == (GameObject *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar4,previewItemsRoot,(MethodInfo *)0x0);
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        ((Quaternion *)&stack0xffffff98,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar4,*pQVar17,(MethodInfo *)0x0);
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar1 == (GameObject *)0x0) ||
       (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar18,previewPosition,(MethodInfo *)0x0);
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    stack0xffffffd0 = (float)pGVar1;
    pUStack_14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (pGVar1,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
    uVar19 = 0;
    if (pUStack_14 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    pRStack_7 = (RenderTexture *)pUStack_14->vector;
    for (; (int)uVar19 < (int)pUStack_14->max_length; uVar19 = uVar19 + 1) {
      if (pUStack_14->max_length <= uVar19) goto code_?;
      this = pRStack_7->klass;
      if (this == (RenderTexture__Class *)0x0) goto code_?;
      pUStack_15 = (UseInteratorVisualization__Array *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                            ((Component_1 *)this,
                             TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                            );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pUStack_15,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)this,0,(MethodInfo *)0x0);
      }
      pRStack_7 = (RenderTexture *)&pRStack_7->monitor;
    }
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pUStack_15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_29
                          (pGVar1,
                           SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                          );
    uVar19 = 0;
    if (pUStack_15 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    ppUVar21 = pUStack_15->vector;
    for (; (int)uVar19 < (int)pUStack_15->max_length; uVar19 = uVar19 + 1) {
      if (pUStack_15->max_length <= uVar19) goto code_?;
      if ((*ppUVar21 == (UseInteratorVisualization *)0x0) ||
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                              ((Component_1 *)*ppUVar21,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                              ), this_00 == (MVInteractableBase *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)this_00,0,(MethodInfo *)0x0);
      ppUVar21 = ppUVar21 + 1;
    }
    if (wo == (MVWorldObjectClient *)0x0) {
      pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                    (pGVar1,
                     AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                    );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar20 == 0) {
        pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
        if ((((uint)(TypeInfo__ObjectPreviewer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__ObjectPreviewer->_1).cctor_started == 0)) {
          func_?();
        }
        ObjectPreviewer_ComputeLocalBounds((Bounds *)&stack0xffffff90,pGVar1,(MethodInfo *)0x0);
      }
      else {
        if (x == (UseInteractorHandler *)0x0) goto code_?;
        (*(code *)x->klass[1]._0.typeMetadataHandle)();
      }
    }
    else {
      (*(code *)(wo->klass->vtable).GetLocalBounds.method)(&stack0xffffff90);
    }
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar1 == (GameObject *)0x0) ||
       (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0))
    goto code_?;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&puStack_23,pTVar18,(MethodInfo *)0x0);
    uVar24 = pVVar22->x;
    uVar25 = pVVar22->y;
    pUVar26 = (UseInteratorVisualization__Array *)pVVar22->z;
    fStack_27 = (float)uVar24;
    fStack_28 = (float)uVar25;
    pUStack_14 = pUVar26;
    pSVar29 = (Single__Array *)func_?();
    puVar30 = (undefined8 *)func_?();
    uStack_31 = *puVar30;
    fStack_32 = *(float *)(puVar30 + 1);
    if (pSVar29 == (Single__Array *)0x0) goto code_?;
    if (pSVar29->max_length == 0) goto code_?;
    pSVar29->vector[0] = (float)uStack_31;
    puVar30 = (undefined8 *)func_?();
    uStack_31 = *puVar30;
    fStack_32 = *(float *)(puVar30 + 1);
    if (pSVar29->max_length < 2) goto code_?;
    uStack_31._4_4_ = (float)((ulonglong)uStack_31 >> 0x20);
    pSVar29->vector[1] = uStack_31._4_4_;
    puVar30 = (undefined8 *)func_?();
    uStack_31 = *puVar30;
    fStack_32 = *(float *)(puVar30 + 1);
    if (pSVar29->max_length < 3) goto code_?;
    pSVar29->vector[2] = fStack_32;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1(pSVar29,(MethodInfo *)0x0);
    pSVar29 = (Single__Array *)func_?();
    puVar30 = (undefined8 *)func_?(&puStack_23,&stack0xffffffb4);
    uStack_31 = *puVar30;
    fStack_32 = *(float *)(puVar30 + 1);
    if (pSVar29 == (Single__Array *)0x0) goto code_?;
    if (pSVar29->max_length == 0) goto code_?;
    pSVar29->vector[0] = (float)uVar24 * (float)uStack_31;
    puVar30 = (undefined8 *)func_?();
    uStack_31 = *puVar30;
    fStack_32 = *(float *)(puVar30 + 1);
    if (1 < pSVar29->max_length) {
      uStack_31._4_4_ = (float)((ulonglong)uStack_31 >> 0x20);
      pSVar29->vector[1] = (float)uVar25 * uStack_31._4_4_;
      puVar30 = (undefined8 *)func_?();
      uStack_31 = *puVar30;
      fStack_32 = *(float *)(puVar30 + 1);
      if (pSVar29->max_length < 3) goto code_?;
      pSVar29->vector[2] = (float)pUVar26 * fStack_32;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1
                         (pSVar29,(MethodInfo *)0x0);
      pRStack_7 = (RenderTexture *)(_UNK_? / fVar11);
      if (wo != (MVWorldObjectClient *)0x0) {
        bVar33 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
        if (((wo->klass->_1).naturalAligment < bVar33) ||
           ((MVMovingPlatformGroup__Class *)(wo->klass->_1).typeHierarchy[bVar33 - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        pMVar35 = (MVWorldObjectClient *)0x0;
        if (bVar34) {
          pMVar35 = wo;
        }
        if (pMVar35 != (MVWorldObjectClient *)0x0) {
          pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
          if (pGVar1 != (GameObject *)0x0) {
            pUVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponentsInChildren_29
                                (pGVar1,
                                 UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                );
            pUStack_15 = (UseInteratorVisualization__Array *)((float)pRStack_7 * _UNK_?);
            if (pUVar26 != (UseInteratorVisualization__Array *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                        ((LineRenderer *)pUVar26,(float)pUStack_15,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                        ((LineRenderer *)pUVar26,(float)pUStack_15,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          goto code_?;
        }
      }
code_?:
      pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_03.y = fStack_28;
        a_03.x = fStack_27;
        a_03.z = (float)pUStack_14;
        pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&puStack_23,a_03,(float)pRStack_7,(MethodInfo *)0x0);
        if (pTVar18 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar18,*pVVar22,(MethodInfo *)0x0);
          puVar30 = (undefined8 *)func_?();
          _puStack_34 = *puVar30;
          func_?(&uStack_36,&stack0xffffffb4,0);
          puVar30 = (undefined8 *)func_?(&stack0xffffff9c,&stack0xffffffb4,0);
          fStack_28 = *(float *)(puVar30 + 1);
          uStack_36 = (undefined4)*puVar30;
          fStack_27 = (float)((ulonglong)*puVar30 >> 0x20);
          uVar3 = 0;
          func_?();
          a.y = (float)&UNK_?;
          a.x = (float)uVar3;
          a.z = (float)pTVar4;
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffff9c,a,(float)pRStack_7,(MethodInfo *)0x0);
          uVar37 = pVVar22->x;
          uVar38 = pVVar22->y;
          fVar11 = pVVar22->z;
          pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
          fStack_27 = (float)uVar37;
          fStack_28 = (float)uVar38;
          if ((pGVar1 != (GameObject *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
             pTVar4 != (Transform *)0x0)) {
            pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffff9c,pTVar4,(MethodInfo *)0x0);
            a_01.y = fStack_28;
            a_01.x = fStack_27;
            a_01.z = fVar11;
            pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffff9c,a_01,*pVVar22,(MethodInfo *)0x0);
            fVar39 = pVVar22->y;
            fVar11 = pVVar22->z;
            (pOVar2->fields).pivotPoint.x = pVVar22->x;
            (pOVar2->fields).pivotPoint.y = fVar39;
            (pOVar2->fields).pivotPoint.z = fVar11;
            pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
            if (pGVar1 != (GameObject *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
              uVar40 = (pOVar2->fields).pivotPoint.x;
              uVar41 = (pOVar2->fields).pivotPoint.y;
              fVar11 = (pOVar2->fields).pivotPoint.z;
              fStack_27 = (float)uVar40;
              fStack_28 = (float)uVar41;
              pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                  ((Vector3 *)&stack0xffffff9c,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                point.y = fStack_28;
                point.x = fStack_27;
                point.z = fVar11;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                          (pTVar4,point,*pVVar22,180.0,(MethodInfo *)0x0);
                pCVar9 = (pOVar2->fields).previewCam;
                if (pCVar9 != (Camera *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)pCVar9,(MethodInfo *)0x0);
                  uVar42 = (pOVar2->fields).pivotPoint.x;
                  uVar43 = (pOVar2->fields).pivotPoint.y;
                  fVar11 = (pOVar2->fields).pivotPoint.z;
                  fStack_32 = 0.0;
                  uStack_31 = 0;
                  fStack_27 = (float)uVar42;
                  fStack_28 = (float)uVar43;
                  func_?();
                  a_00.z = fStack_32;
                  a_00.x = (float)uStack_31;
                  a_00.y = uStack_31._4_4_;
                  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      ((Vector3 *)&stack0xffffff9c,a_00,
                                       (pOVar2->fields).previewCamOffset,(MethodInfo *)0x0);
                  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)&stack0xffffff9c,*pVVar22,2.0,(MethodInfo *)0x0);
                  a_02.y = fStack_28;
                  a_02.x = fStack_27;
                  a_02.z = fVar11;
                  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      ((Vector3 *)&stack0xffffff9c,a_02,*pVVar22,(MethodInfo *)0x0);
                  if (pTVar4 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar4,*pVVar22,(MethodInfo *)0x0);
                    pCVar9 = (pOVar2->fields).previewCam;
                    if ((pCVar9 != (Camera *)0x0) &&
                       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_transform
                                            ((Component_1 *)pCVar9,(MethodInfo *)0x0),
                       pTVar4 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                                (pTVar4,(pOVar2->fields).pivotPoint,(MethodInfo *)0x0);
                      return pOVar2;
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
  uVar3 = func_?(0);
  func_?(uVar3);
  pcVar44 = (code *)swi(3);
  pOVar2 = (ObjectPreviewer *)(*pcVar44)();
  return pOVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Destroy
               (ObjectPreviewer *this,MethodInfo *method)

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
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  pRVar3 = (this->fields)._PreviewTexture_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar3 = (this->fields)._PreviewTexture_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_OnPreCull
               (ObjectPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
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


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_UpdateRotation
               (ObjectPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
    fVar5 = pVVar4->z;
    if (rotateSpeed <= _UNK_?) {
      rotateSpeed = _UNK_?;
    }
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    axis.y = (float)uVar7;
    axis.x = (float)uVar6;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      point.y = 0.0;
      point.x = fVar8 * rotateSpeed;
      point.z = fVar3;
      axis.z = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (this_00,point,axis,fVar8 * rotateSpeed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* ObjectPreviewer() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).previewCamOffset.x = pVVar1->x;
  (this->fields).previewCamOffset.y = fVar3;
  (this->fields).previewCamOffset.z = fVar4;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

