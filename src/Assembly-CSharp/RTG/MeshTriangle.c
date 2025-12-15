
/* Int32 GetVertIndex(Int32) */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_GetVertIndex
                  (MeshTriangle *this,int32_t arrayIndex,MethodInfo *method)

{
  pIVar1 = (this->fields)._vertIndices;
  if (pIVar1 == (Int32__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if ((uint)arrayIndex < (uint)pIVar1->max_length) {
    return pIVar1->vector[arrayIndex];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* MeshTriangle(Vector3[], Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle__ctor
               (MeshTriangle *this,Vector3__Array *vertices,int32_t triangleIndex,int32_t vertIndex0
               ,int32_t vertIndex1,int32_t vertIndex2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (vertices != (Vector3__Array *)0x0) {
    uVar1 = FUN_?(vertices);
    pVVar2 = (Vector3__Array *)FUN_?(uVar1,TypeInfo__UnityEngine__Vector3);
    (this->fields)._vertices = pVVar2;
    FUN_?(uVar1,TypeInfo__UnityEngine__Vector3);
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields)._triangleIndex = triangleIndex;
    pIVar8 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,3);
    bVar7 = iRam_? != 0;
    (this->fields)._vertIndices = pIVar8;
    if (bVar7) {
      uVar3 = (uint)((ulonglong)&(this->fields)._vertIndices >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pIVar8 = (this->fields)._vertIndices;
    if (pIVar8 != (Int32__Array *)0x0) {
      if ((int)pIVar8->max_length != 0) {
        pIVar8->vector[0] = vertIndex0;
        pIVar8 = (this->fields)._vertIndices;
        if (pIVar8 == (Int32__Array *)0x0) goto DAT_?;
        if (1 < (uint)pIVar8->max_length) {
          pIVar8->vector[1] = vertIndex1;
          pIVar8 = (this->fields)._vertIndices;
          if (pIVar8 == (Int32__Array *)0x0) goto DAT_?;
          if (2 < (uint)pIVar8->max_length) {
            pIVar8->vector[2] = vertIndex2;
            pVVar2 = (this->fields)._vertices;
            if (pVVar2 == (Vector3__Array *)0x0) goto DAT_?;
            if (1 < (uint)pVVar2->max_length) {
              uVar9 = pVVar2->vector[1].x;
              uVar10 = pVVar2->vector[1].y;
              uStack_11._0_4_ = pVVar2->vector[0].x;
              uStack_11._4_4_ = pVVar2->vector[0].y;
              fVar12 = pVVar2->vector[1].z - pVVar2->vector[0].z;
              if (pVVar2 == (Vector3__Array *)0x0) goto DAT_?;
              if (2 < (uint)pVVar2->max_length) {
                uVar13 = pVVar2->vector[2].x;
                uVar14 = pVVar2->vector[2].y;
                fVar15 = pVVar2->vector[2].z - pVVar2->vector[0].z;
                fVar16 = ((float)uVar10 - (float)uStack_11._4_4_) * fVar15 -
                         ((float)uVar14 - (float)uStack_11._4_4_) * fVar12;
                fVar17 = ((float)uVar14 - (float)uStack_11._4_4_) *
                         ((float)uVar9 - (float)(undefined4)uStack_11) -
                         ((float)uVar13 - (float)(undefined4)uStack_11) *
                         ((float)uVar10 - (float)uStack_11._4_4_);
                fVar15 = ((float)uVar13 - (float)(undefined4)uStack_11) * fVar12 -
                         ((float)uVar9 - (float)(undefined4)uStack_11) * fVar15;
                uStack_11 = CONCAT44(fVar15,fVar16);
                fStack_18 = fVar17;
                fVar12 = (float)FUN_?(&uStack_11);
                if (_UNK_? < fVar12) {
                  fVar17 = fVar17 / fVar12;
                  uVar1 = CONCAT44(fVar15 / fVar12,fVar16 / fVar12);
                }
                else {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar1._0_4_ = (pVVar19->zeroVector).x;
                  uVar1._4_4_ = (pVVar19->zeroVector).y;
                  fVar17 = (pVVar19->zeroVector).z;
                }
                (this->fields)._normal.x = (float)(int)uVar1;
                (this->fields)._normal.y = (float)(int)((ulonglong)uVar1 >> 0x20);
                (this->fields)._normal.z = fVar17;
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Int32 get_VertIndex0() */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndex0
                  (MeshTriangle *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._vertIndices;
  if (pIVar1 == (Int32__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if ((int)pIVar1->max_length != 0) {
    return pIVar1->vector[0];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_VertIndex1() */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndex1
                  (MeshTriangle *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._vertIndices;
  if (pIVar1 == (Int32__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (1 < (uint)pIVar1->max_length) {
    return pIVar1->vector[1];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_VertIndex2() */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndex2
                  (MeshTriangle *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._vertIndices;
  if (pIVar1 == (Int32__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (2 < (uint)pIVar1->max_length) {
    return pIVar1->vector[2];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32[] get_VertIndices() */

Int32__Array *
Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndices
          (MeshTriangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._vertIndices == (Int32__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (Int32__Array *)(*pcVar1)();
    return pIVar2;
  }
  pIVar2 = (Int32__Array *)FUN_?();
  pIVar3 = TypeInfo__System__Int32;
  if (pIVar2 != (Int32__Array *)0x0) {
    pIVar4 = pIVar2->klass;
    cVar5 = FUN_?(TypeInfo__System__Int32,pIVar4);
    if (cVar5 != '\0') {
      return pIVar2;
    }
    if (((pIVar4->_1).field_0x6e & 0x10) != 0) {
      if ((((((pIVar3->_1).token & 0x20) != 0) || ((pIVar3->_0).byval_arg.type == 0x13)) ||
          ((pIVar3->_0).byval_arg.type == 0x1e)) &&
         ((((pIVar3->_0).interopData != (Il2CppInteropData *)0x0 &&
           (((pIVar3->_0).interopData)->guid != (Il2CppGuid *)0x0)) &&
          (lVar6 = FUN_?(pIVar2), lVar6 != 0)))) {
        return pIVar2;
      }
      pIVar7 = (Int32__Array *)0x0;
      if (pIVar3 == pIRam0000000182dbdd60) {
        pIVar7 = pIVar2;
      }
      return pIVar7;
    }
  }
  return (Int32__Array *)0x0;
}


/* Vector3 get_Vertex0() */

Vector3 * Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertex0
                    (Vector3 *__return_storage_ptr__,MeshTriangle *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._vertices;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if ((int)pVVar1->max_length != 0) {
    fVar4 = pVVar1->vector[0].y;
    fVar5 = pVVar1->vector[0].z;
    __return_storage_ptr__->x = pVVar1->vector[0].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector3 get_Vertex1() */

Vector3 * Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertex1
                    (Vector3 *__return_storage_ptr__,MeshTriangle *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._vertices;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (1 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[1].y;
    fVar5 = pVVar1->vector[1].z;
    __return_storage_ptr__->x = pVVar1->vector[1].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector3 get_Vertex2() */

Vector3 * Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertex2
                    (Vector3 *__return_storage_ptr__,MeshTriangle *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._vertices;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (2 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[2].y;
    fVar5 = pVVar1->vector[2].z;
    __return_storage_ptr__->x = pVVar1->vector[2].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector3[] get_Vertices() */

Vector3__Array *
Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertices
          (MeshTriangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._vertices == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3__Array *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = (Vector3__Array *)FUN_?();
  pVVar3 = TypeInfo__UnityEngine__Vector3;
  if (pVVar2 != (Vector3__Array *)0x0) {
    pVVar4 = pVVar2->klass;
    cVar5 = FUN_?(TypeInfo__UnityEngine__Vector3,pVVar4);
    if (cVar5 != '\0') {
      return pVVar2;
    }
    if (((pVVar4->_1).field_0x6e & 0x10) != 0) {
      if ((((((pVVar3->_1).token & 0x20) != 0) || ((pVVar3->_0).byval_arg.type == 0x13)) ||
          ((pVVar3->_0).byval_arg.type == 0x1e)) &&
         ((((pVVar3->_0).interopData != (Il2CppInteropData *)0x0 &&
           (((pVVar3->_0).interopData)->guid != (Il2CppGuid *)0x0)) &&
          (lVar6 = FUN_?(pVVar2), lVar6 != 0)))) {
        return pVVar2;
      }
      pVVar7 = (Vector3__Array *)0x0;
      if (pVVar3 == pVRam0000000182dbdd60) {
        pVVar7 = pVVar2;
      }
      return pVVar7;
    }
  }
  return (Vector3__Array *)0x0;
}

