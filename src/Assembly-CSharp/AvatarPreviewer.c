
/* Void FaceGameObject(GameObject) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_FaceGameObject
               (AvatarPreviewer *this,GameObject *go,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (go != (GameObject *)0x0) {
      target = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (go,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt
                  (this_01,target,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject, Vector3) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_Initialize
               (AvatarPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 cameraOffset,Transform *previewItemsRoot,Vector3 previewPosition,String *name
               ,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,
               Vector3 additionalCameraRotation,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&DAT_?;
  IStack_2.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_2;
  ppIStack_3 = (Il2CppType **)&stack0xffffff50;
  ppIVar4 = (Il2CppType **)&stack0xffffff50;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    ppIVar4 = ppIStack_3;
  }
  ppIStack_3 = ppIVar4;
  func_?();
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  ppIStack_3 = (Il2CppType **)&stack0xffffff50;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)0x0;
  if (((pTVar5 == (Transform *)0x0) ||
      (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                 (pTVar5,previewItemsRoot,(MethodInfo *)0x0), previewItemsRoot == (Transform *)0x0)
      ) || (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)previewItemsRoot,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
            ((Object_1 *)pGVar7,StringLiteral_Avatar_Previewer,(MethodInfo *)0x0);
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar8 = mscorlib.dll::System::String::String_Format
                      (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
  if (pGVar7 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
            ((Object_1 *)pGVar7,pSVar8,(MethodInfo *)0x0);
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  if (pGVar7 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar7,value,(MethodInfo *)0x0);
  uStack_1 = 0;
  pRVar9 = (RenderTexture *)func_?();
  pMVar10 = (MethodInfo *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_4
            (pRVar9,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
             RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
  if (pRVar9 == (RenderTexture *)0x0) goto code_?;
  pMVar11 = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
            (pRVar9,2,(MethodInfo *)0x0);
  (this->fields).previewTexture = pRVar9;
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Create
                    (pRVar9,(MethodInfo *)0x0);
  if (bVar12 == 0) {
    pRVar9 = (this->fields).previewTexture;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pRVar9,(MethodInfo *)0x0);
    pRVar9 = (RenderTexture *)func_?();
    pMVar10 = (MethodInfo *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_4
              (pRVar9,textureWidth / textureHeight << 8,0x100,0x10,RenderTextureFormat__Enum_ARGB32
               ,RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
    if (pRVar9 == (RenderTexture *)0x0) goto code_?;
    pMVar11 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar9,2,(MethodInfo *)0x0);
    (this->fields).previewTexture = pRVar9;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Create
              (pRVar9,(MethodInfo *)0x0);
  }
  uStack_1 = 0xffffffff;
  this_00 = (MethodInfo *)func_?();
  method_00 = (MethodInfo *)0x0;
  pMVar13 = this_00;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_4
            ((RenderTexture *)this_00,textureWidth,textureHeight,0x10,
             RenderTextureFormat__Enum_ARGB32,RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0
            );
  if (this_00 == (MethodInfo *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
            ((RenderTexture *)this_00,2,pMVar11);
  pCVar14 = (this->fields).previewCam;
  (this->fields).previewTexture = (RenderTexture *)this_00;
  if (pCVar14 == (Camera *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
            (pCVar14,(RenderTexture *)this_00,(MethodInfo *)0x0);
  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
  args = (Object__Array *)func_?();
  if (args == (Object__Array *)0x0) goto code_?;
  if ((StringLiteral_Preview_ == (String *)0x0) || (iVar15 = func_?(), iVar15 != 0)) {
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Preview_;
    if ((name != (String *)0x0) && (iVar15 = func_?(), iVar15 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)name;
    if ((StringLiteral__Item_ != (String *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__Item_;
    if (wo == (MVWorldObjectClient *)0x0) goto code_?;
    System.dll::System::Collections::Generic::
    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
    Single,System::Object]::
    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
              ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                *)wo,(MethodInfo *)0x0);
    pMVar11 = (MethodInfo *)&UNK_?;
    pOVar16 = (Object *)func_?();
    if ((pOVar16 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar16;
    if ((StringLiteral__woID_ != (String *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)StringLiteral__woID_;
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    pOVar16 = (Object *)func_?();
    if ((pOVar16 != (Object *)0x0) &&
       (iVar15 = func_?(pOVar16,(args->klass->_0).element_class), iVar15 == 0))
    goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar16;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar8 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
    if (woGameObjectCopy == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)woGameObjectCopy,pSVar8,pMVar6);
    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar7 == (GameObject *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,pMVar13), pTVar5 == (Transform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar5,previewItemsRoot,(MethodInfo *)textureHeight);
    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    pMVar6 = (MethodInfo *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar7,method_00);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        ((Quaternion *)&stack0xffffff74,(MethodInfo *)0x0);
    if (pMVar6 == (MethodInfo *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)pMVar6,*pQVar17,pMVar10);
    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar7 == (GameObject *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,pMVar11), pTVar5 == (Transform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar5,previewPosition,(MethodInfo *)0x0);
    (*(code *)(wo->klass->vtable).GetLocalBounds.method)();
    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar7 == (GameObject *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,(MethodInfo *)wo), pTVar5 == (Transform *)0x0))
    goto code_?;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_19,pTVar5,(MethodInfo *)0x0);
    uVar20 = pVVar18->x;
    uVar21 = pVVar18->y;
    fVar22 = pVVar18->z;
    VVar23 = *pVVar18;
    pSVar24 = (Single__Array *)func_?();
    puVar25 = (undefined8 *)func_?();
    _pcStack_20 = *puVar25;
    pIStack_26 = *(Il2CppType **)(puVar25 + 1);
    if (pSVar24 == (Single__Array *)0x0) goto code_?;
    if (pSVar24->max_length == 0) goto code_?;
    pSVar24->vector[0] = (float)pcStack_27;
    puVar25 = (undefined8 *)func_?();
    _pcStack_20 = *puVar25;
    pIStack_26 = *(Il2CppType **)(puVar25 + 1);
    if (pSVar24->max_length < 2) goto code_?;
    pSVar24->vector[1] = (float)pIStack_28;
    puVar25 = (undefined8 *)func_?();
    _pcStack_20 = *puVar25;
    pIStack_26 = *(Il2CppType **)(puVar25 + 1);
    if (pSVar24->max_length < 3) goto code_?;
    pSVar24->vector[2] = (float)pIStack_26;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1(pSVar24,(MethodInfo *)0x0);
    pSVar24 = (Single__Array *)func_?();
    puVar25 = (undefined8 *)func_?();
    _pcStack_20 = *puVar25;
    pIStack_26 = *(Il2CppType **)(puVar25 + 1);
    if (pSVar24 == (Single__Array *)0x0) goto code_?;
    if (pSVar24->max_length == 0) goto code_?;
    pSVar24->vector[0] = (float)uVar20 * (float)pcStack_27;
    puVar25 = (undefined8 *)func_?();
    _pcStack_20 = *puVar25;
    pIStack_26 = *(Il2CppType **)(puVar25 + 1);
    if (pSVar24->max_length < 2) goto code_?;
    pSVar24->vector[1] = (float)uVar21 * (float)pIStack_28;
    puVar25 = (undefined8 *)func_?();
    _pcStack_20 = *puVar25;
    pIStack_26 = *(Il2CppType **)(puVar25 + 1);
    if (2 < pSVar24->max_length) {
      pSVar24->vector[2] = fVar22 * (float)pIStack_26;
      fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1
                         (pSVar24,(MethodInfo *)0x0);
      fVar22 = (this->fields).previewObjMaxSize / fVar22;
      pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
      if (pGVar7 != (GameObject *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,pMVar10);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar10 = (MethodInfo *)&VStack_19;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)pMVar10,VVar23,fVar22,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar5,*pVVar18,(MethodInfo *)0x0);
          puVar25 = (undefined8 *)func_?();
          pIVar29 = (Il2CppType *)0x0;
          VStack_19._0_8_ = *puVar25;
          pIVar30 = (Il2CppClass *)&stack0xffffffa4;
          ppcVar31 = &pcStack_27;
          func_?();
          puVar25 = (undefined8 *)func_?();
          _pcStack_20 = *puVar25;
          pIStack_26 = *(Il2CppType **)(puVar25 + 1);
          func_?();
          VVar23.y = (float)pIVar30;
          VVar23.x = (float)ppcVar31;
          VVar23.z = (float)pIVar29;
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffff78,VVar23,fVar22,(MethodInfo *)0x0);
          pMVar11 = (MethodInfo *)pVVar18->x;
          VVar23 = *pVVar18;
          pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
          if ((pGVar7 != (GameObject *)0x0) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,pMVar6), pTVar5 != (Transform *)0x0)) {
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffff78,pTVar5,pMVar10);
            pMVar6 = (MethodInfo *)pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffff78,VVar23,*pVVar18,(MethodInfo *)0x0);
            fVar32 = pVVar18->y;
            fVar22 = pVVar18->z;
            (this->fields).pivotPoint.x = pVVar18->x;
            (this->fields).pivotPoint.y = fVar32;
            (this->fields).pivotPoint.z = fVar22;
            pCVar14 = (this->fields).previewCam;
            if (pCVar14 != (Camera *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pCVar14,(MethodInfo *)0x0);
              VVar23 = (this->fields).pivotPoint;
              pIVar33 = (Il2CppMethodPointer)0x0;
              pMVar13 = (MethodInfo *)0x0;
              pMVar10 = (MethodInfo *)&stack0xffffff84;
              pIVar34 = (InvokerMethod)0x0;
              func_?();
              a.y = (float)pMVar13;
              a.x = (float)pIVar33;
              a.z = (float)pIVar34;
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffff78,a,cameraOffset,(MethodInfo *)0x0);
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  ((Vector3 *)&stack0xffffff78,*pVVar18,
                                   (this->fields).previewObjMaxSize,(MethodInfo *)0x0);
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffff5c,VVar23,*pVVar18,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar5,*pVVar18,pMVar11);
                pCVar14 = (this->fields).previewCam;
                if ((pCVar14 != (Camera *)0x0) &&
                   (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pCVar14,pMVar6),
                   pTVar5 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                            (pTVar5,(this->fields).pivotPoint,pMVar13);
                  pCVar14 = (this->fields).previewCam;
                  if ((pCVar14 != (Camera *)0x0) &&
                     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pCVar14,pMVar10),
                     pTVar5 != (Transform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                              (pTVar5,additionalCameraRotation,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = IStack_2;
                    return;
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
  else {
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
    uVar35 = func_?(0,0);
    func_?(uVar35);
code_?:
    uVar35 = func_?(0,0);
    func_?(uVar35);
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
  func_?();
  func_?();
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnDestroy
               (AvatarPreviewer *this,MethodInfo *method)

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
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    (this->fields).previewTexture = (RenderTexture *)0x0;
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
    if (pRVar3 == (RenderTexture *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar3,(MethodInfo *)0x0);
    pRVar3 = (this->fields).previewTexture;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pRVar3,(MethodInfo *)0x0);
    (this->fields).previewTexture = (RenderTexture *)0x0;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnPostRender
               (AvatarPreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnPreCull
               (AvatarPreviewer *this,MethodInfo *method)

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


/* Void OverrideCameraForPreviewer(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OverrideCameraForPreviewer
               (AvatarPreviewer *this,Vector3 cameraAngle,Vector3 cameraOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                       ((Quaternion *)&stack0xffffffec,cameraAngle,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_01,*pQVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,cameraOffset,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_UpdateRotation
               (AvatarPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (rotateSpeed != _UNK_?) {
    pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
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
                           ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
        axis = *pVVar4;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          point.y = 0.0;
          point.x = fVar5 * rotateSpeed;
          point.z = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                    (this_00,point,axis,fVar5 * rotateSpeed,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}


/* AvatarPreviewer() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer__ctor
               (AvatarPreviewer *this,MethodInfo *method)

{
  (this->fields).previewObjMaxSize = 2.0;
  (this->fields).previewCamAdditionalHeight = 0.5;
  (this->fields).previewCamDist = 1.5;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_PreviewGameObject(GameObject) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_set_PreviewGameObject
               (AvatarPreviewer *this,GameObject *value,MethodInfo *method)

{
  (this->fields)._PreviewGameObject_k__BackingField = value;
  return;
}

