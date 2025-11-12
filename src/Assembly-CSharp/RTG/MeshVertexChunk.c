
/* Vector3 GetWorldVertClosestToScreenPt(Vector2, Matrix4x4, Camera) */

Vector3 * Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_GetWorldVertClosestToScreenPt(Vector3 *__return_storage_ptr__,MeshVertexChunk *this,Vector2 screenPoint,Matrix4x4 *worldMtx,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  __return_storage_ptr__->x = (pVVar1->zeroVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = (pVVar1->zeroVector).z;
  pLVar3 = (this->fields)._modelSpaceVerts;
  if (pLVar3 == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    camera = unaff_R15;
code_?:
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    iStack_11 = (pLVar3->fields)._version;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_6._0_4_ = SUB84(pLVar3,0);
    uStack_6._4_4_ = (undefined4)((ulonglong)pLVar3 >> 0x20);
    uStack_14 = (undefined4)uStack_6;
    uStack_15 = uStack_6._4_4_;
    uStack_16 = 0;
    fStack_17 = 0.0;
    fStack_18 = 0.0;
    fStack_19 = 0.0;
    uStack_20 = 0;
    uStack_6 = 0;
    puStack_21 = &uStack_14;
    fStack_22 = screenPoint.y;
    fStack_23 = screenPoint.x;
    fVar2 = 3.4028235e+38;
    while( true ) {
      cVar24 = FUN_?(&uStack_14);
      if (cVar24 == '\0') {
        return __return_storage_ptr__;
      }
      fVar25 = 1.0 / (fStack_19 * worldMtx->m32 + fStack_17 * worldMtx->m30 + fStack_18 * worldMtx->m31 + worldMtx->m33);
      fVar26 = (fStack_19 * worldMtx->m02 + fStack_18 * worldMtx->m01 + fStack_17 * worldMtx->m00 + worldMtx->m03) * fVar25;
      fVar27 = (fStack_19 * worldMtx->m12 + fStack_17 * worldMtx->m10 + fStack_18 * worldMtx->m11 + worldMtx->m13) * fVar25;
      fVar25 = (fStack_19 * worldMtx->m22 + fStack_17 * worldMtx->m20 + fStack_18 * worldMtx->m21 + worldMtx->m23) * fVar25;
      if (camera == (Camera *)0x0) break;
      uStack_28 = CONCAT44(fVar27,fVar26);
      fStack_29 = fVar25;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_30 = 0;
      uStack_31 = 0;
      pvVar32 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar32 == (void *)0x0) goto code_?;
      pcVar33 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar33 = (code *)FUN_?(&UNK_?), pcVar33 == (code *)0x0)) goto code_?;
      pcRam_? = pcVar33;
      (*pcRam_?)(pvVar32,&uStack_28,2,&uStack_30);
      fVar34 = (uStack_30._4_4_ - fStack_22) * (uStack_30._4_4_ - fStack_22) + ((float)uStack_30 - fStack_23) * ((float)uStack_30 - fStack_23);
      if (fVar34 < fVar2) {
        __return_storage_ptr__->x = fVar26;
        __return_storage_ptr__->y = fVar27;
        __return_storage_ptr__->z = fVar25;
        fVar2 = fVar34;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar33 = (code *)swi(3);
  pVVar35 = (Vector3 *)(*pcVar33)();
  return pVVar35;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator * Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_System_Collections_IEnumerable_GetEnumerator(MeshVertexChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._modelSpaceVerts;
  if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (pLVar1->fields)._version;
  uStack_10 = 0;
  uStack_11 = 0;
  lStack_12 = (ulonglong)uStack_9 << 0x20;
  uStack_5._0_4_ = SUB84(pLVar1,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = (undefined4)uStack_5;
  uStack_18 = uStack_5._4_4_;
  uStack_19 = 0;
  uStack_5 = pLVar1;
  pIVar3 = (IEnumerator *)FUN_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>,&uStack_17);
  return pIVar3;
}


/* MeshVertexChunk(List`1[UnityEngine.Vector3], Mesh) */

void Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk__ctor(MeshVertexChunk *this,List_1_UnityEngine_Vector3_ *modelSpaceVerts,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pVVar3 = (Vector3__Array *)FUN_?(pvVar2,100);
  (pLVar1->fields)._items = pVVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._modelSpaceVerts = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3___ctor_1(pLVar1,(IEnumerable_1_UnityEngine_Vector3_ *)modelSpaceVerts,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
  iVar9 = iRam_?;
  (this->fields)._modelSpaceVerts = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar8);
  }
  (this->fields)._mesh = mesh;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._mesh >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  AStack_10._center.y = 0.0;
  AStack_10._center.z = 0.0;
  AStack_10._size.x = 0.0;
  AStack_10._size.y = 0.0;
  AStack_10._size.z = 0.0;
  AStack_10._center.x = 0.0;
  AStack_10._isValid = 0;
  AStack_10._25_3_ = 0;
  AABB::AABB__ctor_2(&AStack_10,(IEnumerable_1_UnityEngine_Vector3_ *)(this->fields)._modelSpaceVerts,(MethodInfo *)0x0);
  (this->fields)._modelSpaceAABB._size.x = AStack_10._size.x;
  (this->fields)._modelSpaceAABB._size.y = AStack_10._size.y;
  *(undefined8 *)&(this->fields)._modelSpaceAABB._size.z = AStack_10._8_8_;
  (this->fields)._modelSpaceAABB._center.y = AStack_10._center.y;
  (this->fields)._modelSpaceAABB._center.z = AStack_10._center.z;
  (this->fields)._modelSpaceAABB._isValid = AStack_10._isValid;
  *(undefined3 *)&(this->fields)._modelSpaceAABB.field_0x19 = AStack_10._25_3_;
  return;
}


/* Vector3 get_Item(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_get_Item(Vector3 *__return_storage_ptr__,MeshVertexChunk *this,int32_t vertexIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._modelSpaceVerts;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)vertexIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pVVar4 = (pLVar1->fields)._items;
    if (pVVar4 != (Vector3__Array *)0x0) {
      if ((uint)vertexIndex < (uint)pVVar4->max_length) {
        fVar5 = pVVar4->vector[vertexIndex].z;
        fVar6 = pVVar4->vector[vertexIndex].y;
        __return_storage_ptr__->x = pVVar4->vector[vertexIndex].x;
        __return_storage_ptr__->y = fVar6;
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* AABB get_ModelSpaceAABB() */

AABB * Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_get_ModelSpaceAABB(AABB *__return_storage_ptr__,MeshVertexChunk *this,MethodInfo *method)

{
  bVar1 = (this->fields)._modelSpaceAABB._isValid;
  uVar2 = *(undefined3 *)&(this->fields)._modelSpaceAABB.field_0x19;
  fVar3 = (this->fields)._modelSpaceAABB._size.y;
  uVar4 = *(undefined8 *)&(this->fields)._modelSpaceAABB._size.z;
  fVar5 = (this->fields)._modelSpaceAABB._center.y;
  fVar6 = (this->fields)._modelSpaceAABB._center.z;
  (__return_storage_ptr__->_size).x = (this->fields)._modelSpaceAABB._size.x;
  (__return_storage_ptr__->_size).y = fVar3;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar4;
  (__return_storage_ptr__->_center).y = fVar5;
  (__return_storage_ptr__->_center).z = fVar6;
  __return_storage_ptr__->_isValid = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar2;
  return __return_storage_ptr__;
}


/* Int32 get_VertexCount() */

int32_t Assembly-CSharp.dll::RTG::MeshVertexChunk::MeshVertexChunk_get_VertexCount(MeshVertexChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._modelSpaceVerts;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

