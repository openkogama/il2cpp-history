
/* Void Remove() */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_Remove(FaceCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pGVar1 != (GameObject *)0x0) {
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Vector2[] SetUVs(Edge, Boolean) */

Vector2__Array *
Assembly-CSharp.dll::FaceCursor::FaceCursor_SetUVs
          (FaceCursor *this,Edge__Enum edge,bool mirror,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(lVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  uVar2 = _UNK_?;
  if (edge == Edge__Enum_None) {
    if (lVar1 == 0) goto code_?;
    FUN_?(lVar1,0,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    uVar2 = _UNK_?;
    FUN_?(lVar1,_UNK_?,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(lVar1,CONCAT44(uVar2,uVar2),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    fVar3 = 0.0;
code_?:
    uVar4 = CONCAT44(uVar2,fVar3);
  }
  else {
    if (edge == Edge__Enum_Front) {
      if (lVar1 == 0) goto code_?;
      FUN_?(lVar1,(float)mirror,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar1,(float)(mirror ^ 1),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      uVar2 = _UNK_?;
      FUN_?(lVar1,CONCAT44(_UNK_?,(float)(mirror ^ 1)),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      fVar3 = (float)mirror;
      goto code_?;
    }
    if (edge == Edge__Enum_Back) {
      if (lVar1 == 0) goto code_?;
      FUN_?(lVar1,CONCAT44(_UNK_?,(float)(mirror ^ 1)),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar1,CONCAT44(uVar2,(float)mirror),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      uVar2 = 0;
      FUN_?(lVar1,(float)mirror,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      fVar3 = (float)(mirror ^ 1);
      goto code_?;
    }
    if (edge == Edge__Enum_Left) {
      if (lVar1 == 0) goto code_?;
      FUN_?(lVar1,(float)(mirror ^ 1),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      uVar2 = _UNK_?;
      FUN_?(lVar1,CONCAT44(_UNK_?,(float)(mirror ^ 1)),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar1,CONCAT44(uVar2,(float)mirror),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      uVar4 = (ulonglong)(uint)(float)mirror;
    }
    else {
      if (edge != Edge__Enum_Right) {
        if (lVar1 == 0) goto code_?;
        goto FUN_?;
      }
      if (lVar1 == 0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        pVVar6 = (Vector2__Array *)(*pcVar5)();
        return pVVar6;
      }
      FUN_?(lVar1,CONCAT44(_UNK_?,(float)mirror),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar1,(float)mirror,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar1,(float)(mirror ^ 1),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      uVar4 = CONCAT44(uVar2,(float)(mirror ^ 1));
    }
  }
  FUN_?(lVar1,uVar4,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
FUN_?:
  pMVar7 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__;
  if (*(int *)(lVar1 + 0x18) == 0) {
    pvVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__->klass
             ->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
      pvVar8 = (void *)FUN_?(pvVar8);
    }
    if (*(int *)((longlong)pvVar8 + 0xe4) == 0) {
      FUN_?(pvVar8);
    }
    pIVar9 = pMVar7->klass->rgctx_data[2].klass;
    if ((pIVar9->field_0x135 & 1) == 0) {
      pIVar9 = (Il2CppClass *)FUN_?(pIVar9);
    }
    return *(Vector2__Array **)pIVar9->static_fields;
  }
  pvVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
    pvVar8 = (void *)FUN_?(pvVar8);
  }
  pVVar6 = (Vector2__Array *)FUN_?(pvVar8);
  mscorlib.dll::System::Array::Array_Copy_3
            (*(Array **)(lVar1 + 0x10),0,(Array *)pVVar6,0,*(int32_t *)(lVar1 + 0x18),
             (MethodInfo *)0x0);
  return pVVar6;
}


/* Void UpdateCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_UpdateCursor
               (FaceCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    uVar1._0_2_ = (info->fields).iLocalPos.x;
    uVar1._2_2_ = (info->fields).iLocalPos.y;
    iVar2 = (info->fields).iLocalPos.z;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    aIStackX_18[0]._0_4_ = uVar1;
    aIStackX_18[0].z = iVar2;
    this_00 = Cube::Cube_GetFaceVerticesWorld
                        (cubeGameObject,cube,face,aIStackX_18,(MethodInfo *)0x0);
    this_01 = (List_1_System_UInt32Enum_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar3 = (this->fields).gameObject;
    if (((pGVar3 == (GameObject *)0x0) ||
        (this_02 = (MeshFilter *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar3,
                              UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                             ), this_02 == (MeshFilter *)0x0)) ||
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (this_02,(MethodInfo *)0x0), this_03 == (Mesh *)0x0))
    goto code_?;
    valuesArrayLength_00 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (this_03->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,1);
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (this_01 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pUVar9 = (this_01->fields)._items;
    if (pUVar9 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar10 = (this_01->fields)._size;
    if (uVar10 < (uint)pUVar9->max_length) {
      (this_01->fields)._size = uVar10 + 1;
      if ((uint)pUVar9->max_length <= uVar10) goto code_?;
      pUVar9->vector[(int)uVar10] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_01,0,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pUVar9 = (this_01->fields)._items;
    if (pUVar9 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar10 = (this_01->fields)._size;
    if (uVar10 < (uint)pUVar9->max_length) {
      (this_01->fields)._size = uVar10 + 1;
      if ((uint)pUVar9->max_length <= uVar10) goto code_?;
      pUVar9->vector[(int)uVar10] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_01,3,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pUVar9 = (this_01->fields)._items;
    if (pUVar9 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar10 = (this_01->fields)._size;
    if (uVar10 < (uint)pUVar9->max_length) {
      (this_01->fields)._size = uVar10 + 1;
      if ((uint)pUVar9->max_length <= uVar10) goto code_?;
      pUVar9->vector[(int)uVar10] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_01,2,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pUVar9 = (this_01->fields)._items;
    if (pUVar9 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar10 = (this_01->fields)._size;
    if (uVar10 < (uint)pUVar9->max_length) {
      (this_01->fields)._size = uVar10 + 1;
      if ((uint)pUVar9->max_length <= uVar10) goto code_?;
      pUVar9->vector[(int)uVar10] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_01,2,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pUVar9 = (this_01->fields)._items;
    if (pUVar9 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar10 = (this_01->fields)._size;
    if (uVar10 < (uint)pUVar9->max_length) {
      (this_01->fields)._size = uVar10 + 1;
      if ((uint)pUVar9->max_length <= uVar10) goto code_?;
      pUVar9->vector[(int)uVar10] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_01,1,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pUVar9 = (this_01->fields)._items;
    if (pUVar9 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar10 = (this_01->fields)._size;
    if (uVar10 < (uint)pUVar9->max_length) {
      (this_01->fields)._size = uVar10 + 1;
      if ((uint)pUVar9->max_length <= uVar10) goto code_?;
      pUVar9->vector[(int)uVar10] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_01,0,pMVar7->klass->rgctx_data[0xe].method);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    valuesArrayLength = valuesArrayLength_00;
    if (this_00 != (Vector3__Array *)0x0) {
      valuesArrayLength =
           mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
              (this_03,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
               (Array *)this_00,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
               (MethodInfo *)0x0);
    this_04 = FaceCursor_SetUVs(this,(info->fields).pickedEdge,(info->fields).pickedEdgeIndex1,
                                (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_04 != (Vector2__Array *)0x0) {
      valuesArrayLength_00 =
           mscorlib.dll::System::Array::Array_get_Length((Array *)this_04,(MethodInfo *)0x0);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
              (this_03,VertexAttribute__Enum_TexCoord0,VertexAttributeFormat__Enum_Float32,2,
               (Array *)this_04,valuesArrayLength_00,0,valuesArrayLength_00,
               MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
    value = (Int32__Array *)
            FUN_?(this_01,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              (this_03,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
              (this_03,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
              (this_03,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
    if ((info->fields).pickedEdge == 0) {
      pGVar3 = (this->fields).gameObject;
      if ((pGVar3 == (GameObject *)0x0) ||
         (this_05 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar3,
                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                              ), this_05 == (Renderer *)0x0)) goto code_?;
      m = (this->fields).materialNone;
    }
    else if (((info->fields).pickedEdgeIndex0 == 0) && ((info->fields).pickedEdgeIndex1 == 0)) {
      pGVar3 = (this->fields).gameObject;
      if ((pGVar3 == (GameObject *)0x0) ||
         (this_05 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar3,
                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                              ), this_05 == (Renderer *)0x0)) goto code_?;
      m = (this->fields).materialEdge;
    }
    else {
      pGVar3 = (this->fields).gameObject;
      if ((pGVar3 == (GameObject *)0x0) ||
         (this_05 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar3,
                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                              ), this_05 == (Renderer *)0x0)) goto code_?;
      m = (this->fields).materialCorner;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (this_05,m,(MethodInfo *)0x0);
    pGVar3 = (this->fields).gameObject;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar3,(MethodInfo *)0x0);
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                          (this_03,(MethodInfo *)0x0);
      if (pVVar12 != (Vector3__Array *)0x0) {
        if ((int)pVVar12->max_length == 0) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pTVar11 != (Transform *)0x0) {
          uStack_13._0_4_ = pVVar12->vector[0].x;
          uStack_13._4_4_ = pVVar12->vector[0].y;
          fStack_14 = pVVar12->vector[0].z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_15 = 0;
          fStack_16 = 0.0;
          pvVar4 = (pTVar11->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4,&uStack_13,&uStack_15);
          pGVar3 = (this->fields).gameObject;
          if ((pGVar3 != (GameObject *)0x0) &&
             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
             pTVar11 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_13 = 0;
            fStack_14 = 0.0;
            pvVar4 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar4);
            if (this_00 != (Vector3__Array *)0x0) {
              if ((int)this_00->max_length != 0) {
                uVar17 = this_00->vector[0].x;
                uVar18 = (info->fields).normal.x;
                uStack_15 = CONCAT44((this_00->vector[0].y - uStack_15._4_4_) +
                                     (info->fields).normal.y * _UNK_? + uStack_13._4_4_,
                                     ((float)uVar17 - (float)uStack_15) +
                                     (float)uVar18 * _UNK_? + (float)uStack_13);
                fStack_16 = (this_00->vector[0].z - fStack_16) +
                            (info->fields).normal.z * _UNK_? + fStack_14;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar4 = (pTVar11->fields)._._.m_CachedPtr;
                if (pvVar4 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcVar5 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pcRam_? = pcVar5;
                (*pcRam_?)(pvVar4,&uStack_15);
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FaceCursor(Material, Material, Material) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor__ctor
               (FaceCursor *this,Material *materialEdgePath,Material *materialCornerPath,
               Material *materialNonePath,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cursor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Cursor;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,name,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).gameObject = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar1 = (this->fields).gameObject;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                      (pGVar1,
                       UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                      );
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                  (pGVar1,
                   UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                  );
        iVar7 = iRam_?;
        (this->fields).materialEdge = materialEdgePath;
        if (iVar7 != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).materialEdge >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
            iVar7 = iRam_?;
          } while (!bVar2);
        }
        (this->fields).materialCorner = materialCornerPath;
        iVar8 = 0;
        if (iVar7 != 0) {
          uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
            iVar8 = iRam_?;
          } while (!bVar2);
        }
        (this->fields).materialNone = materialNonePath;
        if (iVar8 != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).materialNone >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        if (obj != (Object *)0x0) {
          pMVar9 = (this->fields).materialEdge;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                          ,pMVar9,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Object *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pOVar11 = obj[1].klass;
          if (pOVar11 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pMVar9 == (Material *)0x0) {
            pvVar12 = (void *)0x0;
          }
          else {
            pvVar12 = (pMVar9->fields)._.m_CachedPtr;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pOVar11,pvVar12);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

