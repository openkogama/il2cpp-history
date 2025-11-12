
/* Boolean IsColliding() */

bool Assembly-CSharp.dll::IndentArea::IndentArea_IsColliding(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  if ((pGVar1 != (GameObject *)0x0) &&
     (this_00 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                          ), this_00 != (MeshFilter *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                        (this_00,(MethodInfo *)0x0);
    obj = (this->fields).mainCamera;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      bVar6 = (*pcVar4)();
      return bVar6;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(&VStack_3);
    if (obj != (Camera *)0x0) {
      uStackX_8._0_4_ = VStack_3.x;
      uStackX_8._4_4_ = VStack_3.y;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7._0_4_ = 0.0;
      auStack_7._4_4_ = 0.0;
      stack0xffffffffffffff80 = 0;
      uStack_8 = 0;
      pvVar9 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar6 = (*pcVar4)();
        return bVar6;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        bVar6 = (*pcVar4)();
        return bVar6;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar9,&uStackX_8,2,auStack_7);
      lVar10 = FUN_?(TypeInfo__UnityEngine__Vector3);
      uVar11 = 0;
      if (this_01 != (Mesh *)0x0) {
        lVar12 = 0;
        while( true ) {
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = 
          UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
          ;
          if ((
              UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                         );
          }
          p_Var9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_GetAllocArrayFromChannel_10
                             (this_01,VertexAttribute__Enum_Position,
                              VertexAttributeFormat__Enum_Float32,3,
                              ((pMVar13->field7_0x38).rgctx_data)->method);
          uVar5 = auStack_7._0_8_;
          if (p_Var9 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
          if ((int)p_Var9->max_length <= (int)uVar11) break;
          pGVar1 = (this->fields).gameObject;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (pGVar1->fields)._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            bVar6 = (*pcVar4)();
            return bVar6;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            bVar6 = (*pcVar4)();
            return bVar6;
          }
          pcRam_? = pcVar4;
          pvVar9 = (void *)(*pcRam_?)(pvVar9);
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar9,
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = 
          UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
          ;
          if ((
              UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                         );
          }
          p_Var9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_GetAllocArrayFromChannel_10
                             (this_01,VertexAttribute__Enum_Position,
                              VertexAttributeFormat__Enum_Float32,3,
                              ((pMVar13->field7_0x38).rgctx_data)->method);
          if (p_Var9 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
          if ((uint)p_Var9->max_length <= uVar11) goto code_?;
          if (obj_00 == (Object *)0x0) goto code_?;
          VStack_14._0_8_ = *(undefined8 *)((longlong)p_Var9->vector + lVar12);
          VStack_14.z = *(float *)((longlong)p_Var9->vector + lVar12 + 8);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_3.x = 0.0;
          VStack_3.y = 0.0;
          VStack_3.z = 0.0;
          pOVar15 = obj_00[1].klass;
          if (pOVar15 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            bVar6 = (*pcVar4)();
            return bVar6;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            bVar6 = (*pcVar4)();
            return bVar6;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pOVar15);
          if (lVar10 == 0) goto code_?;
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_?;
          uVar11 = uVar11 + 1;
          *(undefined8 *)(lVar12 + 0x20 + lVar10) = VStack_3._0_8_;
          *(float *)(lVar12 + 0x28 + lVar10) = VStack_3.z;
          lVar12 = lVar12 + 0xc;
        }
        uVar16 = auStack_7._8_4_;
        fVar17 = fStack_18 * _UNK_? + (float)auStack_7._0_4_;
        fVar19 = (float)uStack_8 * _UNK_? + (float)auStack_7._4_4_;
        fVar20 = uStack_8._4_4_ * _UNK_? + (float)auStack_7._8_4_;
        if (lVar10 == 0) goto code_?;
        if ((*(int *)(lVar10 + 0x18) != 0) && (3 < *(uint *)(lVar10 + 0x18))) {
          VStack_14.z = *(float *)(lVar10 + 0x40);
          VStack_14._0_8_ = *(undefined8 *)(lVar10 + 0x38);
          VStack_3.z = *(float *)(lVar10 + 0x4c);
          VStack_3._0_8_ = *(undefined8 *)(lVar10 + 0x44);
          VStack_21._0_8_ = *(undefined8 *)(lVar10 + 0x20);
          VStack_21.z = *(float *)(lVar10 + 0x28);
          VStack_22.y = fVar19;
          VStack_22.x = fVar17;
          VStack_22.z = fVar20;
          bVar6 = MathFunctions::MathFunctions_LineFacet
                            ((Vector3 *)auStack_7,&VStack_22,&VStack_21,&VStack_3,&VStack_14,
                             &VStack_2,(MethodInfo *)0x0);
          if ((2 < *(uint *)(lVar10 + 0x18)) && (*(int *)(lVar10 + 0x18) != 0)) {
            VStack_22._0_8_ = *(undefined8 *)(lVar10 + 0x2c);
            stack0xffffffffffffff80 = CONCAT44(fStack_18,*(undefined4 *)(lVar10 + 0x28));
            VStack_22.z = *(float *)(lVar10 + 0x34);
            VStack_21._0_8_ = *(undefined8 *)(lVar10 + 0x38);
            VStack_21.z = *(float *)(lVar10 + 0x40);
            VStack_14.y = fVar19;
            VStack_14.x = fVar17;
            auStack_7._0_4_ = (undefined4)uVar5;
            auStack_7._4_4_ = SUB84(uVar5,4);
            VStack_3.x = (float)auStack_7._0_4_;
            VStack_3.y = (float)auStack_7._4_4_;
            VStack_3.z = (float)uVar16;
            VStack_14.z = fVar20;
            auStack_7._0_8_ = *(undefined8 *)(lVar10 + 0x20);
            bVar23 = MathFunctions::MathFunctions_LineFacet
                              (&VStack_3,&VStack_14,&VStack_21,&VStack_22,(Vector3 *)auStack_7,
                               &VStack_2,(MethodInfo *)0x0);
            return bVar23 != 0 || bVar6 != 0;
          }
        }
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar6 = (*pcVar4)();
        return bVar6;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar6 = (*pcVar4)();
  return bVar6;
}


/* Void Remove() */

void Assembly-CSharp.dll::IndentArea::IndentArea_Remove(IndentArea *this,MethodInfo *method)

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


/* Vector2[] SetUVs() */

Vector2__Array *
Assembly-CSharp.dll::IndentArea::IndentArea_SetUVs(IndentArea *this,MethodInfo *method)

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
  if (lVar1 != 0) {
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
    FUN_?(lVar1,(ulonglong)uVar2 << 0x20,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    pMVar3 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__;
    if (*(int *)(lVar1 + 0x18) != 0) {
      pvVar4 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__->
               klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
        pvVar4 = (void *)FUN_?(pvVar4);
      }
      pVVar5 = (Vector2__Array *)FUN_?(pvVar4);
      mscorlib.dll::System::Array::Array_Copy_3
                (*(Array **)(lVar1 + 0x10),0,(Array *)pVVar5,0,*(int32_t *)(lVar1 + 0x18),
                 (MethodInfo *)0x0);
      return pVVar5;
    }
    pvVar4 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__->klass
             ->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    if (*(int *)((longlong)pvVar4 + 0xe4) == 0) {
      FUN_?(pvVar4);
    }
    pIVar6 = pMVar3->klass->rgctx_data[2].klass;
    if ((pIVar6->field_0x135 & 1) == 0) {
      pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
    }
    return *(Vector2__Array **)pIVar6->static_fields;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pVVar5 = (Vector2__Array *)(*pcVar7)();
  return pVVar5;
}


/* Void UpdateIndentArea(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::IndentArea::IndentArea_UpdateIndentArea
               (IndentArea *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
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
    IStackX_18._0_4_ = uVar1;
    IStackX_18.z = iVar2;
    pVVar3 = Cube::Cube_GetFaceVerticesWorld
                        (cubeGameObject,cube,face,&IStackX_18,(MethodInfo *)0x0);
    this_00 = (List_1_System_UInt32Enum_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(this_00,MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar4 = (this->fields).gameObject;
    if (((pGVar4 == (GameObject *)0x0) ||
        (this_01 = (MeshFilter *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar4,
                              UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                             ), this_01 == (MeshFilter *)0x0)) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (this_01,(MethodInfo *)0x0), this_02 == (Mesh *)0x0))
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
    pvVar5 = (this_02->fields)._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,1);
    pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (this_00 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar11 = (this_00->fields)._size;
    if (uVar11 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar11 + 1;
      if ((uint)pUVar10->max_length <= uVar11) goto code_?;
      pUVar10->vector[(int)uVar11] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,0,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar11 = (this_00->fields)._size;
    if (uVar11 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar11 + 1;
      if ((uint)pUVar10->max_length <= uVar11) goto code_?;
      pUVar10->vector[(int)uVar11] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,3,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar11 = (this_00->fields)._size;
    if (uVar11 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar11 + 1;
      if ((uint)pUVar10->max_length <= uVar11) goto code_?;
      pUVar10->vector[(int)uVar11] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,2,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar11 = (this_00->fields)._size;
    if (uVar11 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar11 + 1;
      if ((uint)pUVar10->max_length <= uVar11) goto code_?;
      pUVar10->vector[(int)uVar11] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,2,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar11 = (this_00->fields)._size;
    if (uVar11 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar11 + 1;
      if ((uint)pUVar10->max_length <= uVar11) goto code_?;
      pUVar10->vector[(int)uVar11] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,1,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar11 = (this_00->fields)._size;
    if (uVar11 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar11 + 1;
      if ((uint)pUVar10->max_length <= uVar11) goto code_?;
      pUVar10->vector[(int)uVar11] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,0,pMVar8->klass->rgctx_data[0xe].method);
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
    if (pVVar3 != (Vector3__Array *)0x0) {
      valuesArrayLength =
           mscorlib.dll::System::Array::Array_get_Length((Array *)pVVar3,(MethodInfo *)0x0);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
              (this_02,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
               (Array *)pVVar3,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
               (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                   );
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
    lVar12 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(lVar12,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    if (lVar12 != 0) {
      FUN_?(lVar12,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      uVar1 = _UNK_?;
      FUN_?(lVar12,_UNK_?,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar12,CONCAT44(uVar1,uVar1),
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
      FUN_?(lVar12);
      this_03 = (Array *)FUN_?(lVar12);
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_03 != (Array *)0x0) {
        valuesArrayLength_00 =
             mscorlib.dll::System::Array::Array_get_Length(this_03,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (this_02,VertexAttribute__Enum_TexCoord0,VertexAttributeFormat__Enum_Float32,2,
                 this_03,valuesArrayLength_00,0,valuesArrayLength_00,MeshUpdateFlags__Enum_Default,
                 (MethodInfo *)0x0);
      value = (Int32__Array *)
              FUN_?(this_00,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                (this_02,value,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
                (this_02,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                (this_02,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      fVar13 = _UNK_?;
      if (pVVar3 != (Vector3__Array *)0x0) {
        if (2 < (uint)pVVar3->max_length) {
          uStack_14._0_4_ = pVVar3->vector[0].x;
          uStack_14._4_4_ = pVVar3->vector[0].y;
          uVar15 = pVVar3->vector[2].x;
          uVar16 = pVVar3->vector[2].y;
          fVar17 = (pVVar3->vector[2].z - pVVar3->vector[0].z) * _UNK_?;
          if ((int)pVVar3->max_length != 0) {
            fVar18 = pVVar3->vector[0].z;
            fVar19 = ((float)uVar15 - (float)(undefined4)uStack_14) * _UNK_? +
                     (float)(undefined4)uStack_14;
            fVar20 = ((float)uVar16 - (float)uStack_14._4_4_) * _UNK_? +
                     (float)uStack_14._4_4_;
            pGVar4 = (this->fields).gameObject;
            if (pGVar4 != (GameObject *)0x0) {
              pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              fVar22 = (this->fields).size;
              pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_14._0_4_ = (pVVar23->oneVector).x;
              uStack_14._4_4_ = (pVVar23->oneVector).y;
              fVar24 = fVar22 * (pVVar23->oneVector).z;
              if (pTVar21 != (Transform *)0x0) {
                uStack_25 = CONCAT44(fVar22 * (float)uStack_14._4_4_,
                                     fVar22 * (float)(undefined4)uStack_14);
                fStack_26 = fVar24;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar5 = (pTVar21->fields)._._.m_CachedPtr;
                if (pvVar5 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pvVar5);
                pGVar4 = (this->fields).gameObject;
                if (pGVar4 != (GameObject *)0x0) {
                  pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                      (this_02,(MethodInfo *)0x0);
                  if (pVVar3 != (Vector3__Array *)0x0) {
                    if ((int)pVVar3->max_length == 0) {
                      FUN_?();
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if (pTVar21 != (Transform *)0x0) {
                      uStack_14._0_4_ = pVVar3->vector[0].x;
                      uStack_14._4_4_ = pVVar3->vector[0].y;
                      fStack_27 = pVVar3->vector[0].z;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_28 = 0;
                      fStack_29 = 0.0;
                      pvVar5 = (pTVar21->fields)._._.m_CachedPtr;
                      if (pvVar5 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar21,(MethodInfo *)0x0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar7 = func_?(&UNK_?);
                        FUN_?(uVar7,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      (*pcRam_?)(pvVar5,&uStack_14,&uStack_28);
                      pGVar4 = (this->fields).gameObject;
                      if (pGVar4 != (GameObject *)0x0) {
                        pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                            (this_02,(MethodInfo *)0x0);
                        if (pVVar3 != (Vector3__Array *)0x0) {
                          if ((uint)pVVar3->max_length < 3) goto code_?;
                          if (pTVar21 != (Transform *)0x0) {
                            uStack_14._0_4_ = pVVar3->vector[2].x;
                            uStack_14._4_4_ = pVVar3->vector[2].y;
                            fStack_27 = pVVar3->vector[2].z;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            uStack_25 = 0;
                            fStack_26 = 0.0;
                            pvVar5 = (pTVar21->fields)._._.m_CachedPtr;
                            if (pvVar5 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pTVar21,(MethodInfo *)0x0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pcVar6 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar6 = (code *)FUN_?(&UNK_?),
                               pcVar6 == (code *)0x0)) {
                              uVar7 = func_?(&UNK_?);
                              FUN_?(uVar7,0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pcRam_? = pcVar6;
                            (*pcRam_?)(pvVar5,&uStack_14,&uStack_25);
                            fVar22 = ((float)uStack_25 - (float)uStack_28) * fVar13 +
                                     (float)uStack_28;
                            fVar24 = (uStack_25._4_4_ - uStack_28._4_4_) * fVar13 + uStack_28._4_4_;
                            fVar13 = (fStack_26 - fStack_29) * fVar13 + fStack_29;
                            pGVar4 = (this->fields).gameObject;
                            if ((pGVar4 != (GameObject *)0x0) &&
                               (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                               pTVar21 != (Transform *)0x0)) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              uStack_28 = 0;
                              fStack_29 = 0.0;
                              pvVar5 = (pTVar21->fields)._._.m_CachedPtr;
                              if (pvVar5 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pTVar21,(MethodInfo *)0x0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar7 = func_?(&UNK_?);
                                FUN_?(uVar7,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcRam_? = pcVar6;
                              (*pcRam_?)(pvVar5);
                              uVar30 = (info->fields).normal.x;
                              uVar31 = (info->fields).normal.y;
                              fStack_27 = ((fVar17 + fVar18) - fVar13) +
                                          (info->fields).normal.z * _UNK_? + fStack_29;
                              uStack_14 = CONCAT44((fVar20 - fVar24) + (float)uVar31 * _UNK_?
                                                   + uStack_28._4_4_,
                                                   (fVar19 - fVar22) + (float)uVar30 * _UNK_?
                                                   + (float)uStack_28);
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar5 = (pTVar21->fields)._._.m_CachedPtr;
                              if (pvVar5 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pTVar21,(MethodInfo *)0x0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar7 = func_?(&UNK_?);
                                FUN_?(uVar7,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcRam_? = pcVar6;
                              (*pcRam_?)(pvVar5,&uStack_14);
                              return;
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                  }
                }
              }
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto code_?;
          }
        }
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IndentArea() */

void Assembly-CSharp.dll::IndentArea::IndentArea__ctor(IndentArea *this,MethodInfo *method)

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
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IndentArea);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_IndentArea;
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
    pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).mainCamera = pCVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar8 != (PrefabPool *)0x0) {
          bVar2 = iRam_? != 0;
          (this->fields).materialNone = (pPVar8->fields).indentMaterial;
          if (bVar2) {
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
            pMVar9 = (this->fields).materialNone;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                            ,pMVar9,0,in_R9,unaff_RDI);
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
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

