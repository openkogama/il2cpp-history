
/* MeshTriangle(Vector3[], Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle__ctor
               (MeshTriangle *this,Vector3__Array *vertices,int32_t triangleIndex,int32_t vertIndex0
               ,int32_t vertIndex1,int32_t vertIndex2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (vertices != (Vector3__Array *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
             PlayableBehaviour_Clone((PlayableBehaviour *)vertices,(MethodInfo *)0x0);
    pVVar2 = (Vector3__Array *)func_?(pOVar1,TypeInfo__UnityEngine__Vector3);
    (this->fields)._vertices = pVVar2;
    uVar3 = func_?(pOVar1,TypeInfo__UnityEngine__Vector3);
    func_?(&this->fields,uVar3);
    (this->fields)._triangleIndex = triangleIndex;
    pIVar4 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    (this->fields)._vertIndices = pIVar4;
    func_?(&(this->fields)._vertIndices,pIVar4);
    pIVar4 = (this->fields)._vertIndices;
    if (pIVar4 != (Int32__Array *)0x0) {
      if (pIVar4->max_length == 0) goto code_?;
      pIVar4->vector[0] = vertIndex0;
      pIVar4 = (this->fields)._vertIndices;
      if (pIVar4 != (Int32__Array *)0x0) {
        if (pIVar4->max_length < 2) goto code_?;
        pIVar4->vector[1] = vertIndex1;
        pIVar4 = (this->fields)._vertIndices;
        if (pIVar4 != (Int32__Array *)0x0) {
          if (pIVar4->max_length < 3) goto code_?;
          pIVar4->vector[2] = vertIndex2;
          pVVar2 = (this->fields)._vertices;
          if (pVVar2 != (Vector3__Array *)0x0) {
            if (pVVar2->max_length < 2) goto code_?;
            VStack_5.x = pVVar2->vector[0].x;
            VStack_5.y = pVVar2->vector[0].y;
            VStack_5.z = pVVar2->vector[0].z;
            uStack_6._0_4_ = pVVar2->vector[1].x;
            uStack_6._4_4_ = pVVar2->vector[1].y;
            fStack_7 = pVVar2->vector[1].z;
            fVar8 = (float)(undefined4)uStack_6 - VStack_5.x;
            fVar9 = (float)uStack_6._4_4_ - VStack_5.y;
            fVar10 = fStack_7 - VStack_5.z;
            if (pVVar2 != (Vector3__Array *)0x0) {
              if (2 < pVVar2->max_length) {
                uStack_6._0_4_ = pVVar2->vector[0].x;
                uStack_6._4_4_ = pVVar2->vector[0].y;
                fStack_7 = pVVar2->vector[0].z;
                VStack_5.x = pVVar2->vector[2].x;
                VStack_5.y = pVVar2->vector[2].y;
                fVar11 = pVVar2->vector[2].z - fStack_7;
                VStack_5.z = fVar8 * (VStack_5.y - (float)uStack_6._4_4_) -
                              fVar9 * (VStack_5.x - (float)(undefined4)uStack_6);
                value.y = fVar10 * (VStack_5.x - (float)(undefined4)uStack_6) - fVar8 * fVar11;
                value.x = fVar9 * fVar11 - fVar10 * (VStack_5.y - (float)uStack_6._4_4_);
                value.z = VStack_5.z;
                pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                   (&VStack_5,value,(MethodInfo *)0x0);
                fVar10 = pVVar12->y;
                fVar8 = pVVar12->z;
                (this->fields)._normal.x = pVVar12->x;
                (this->fields)._normal.y = fVar10;
                (this->fields)._normal.z = fVar8;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Int32 get_VertIndex0() */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndex0
                  (MeshTriangle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields)._vertIndices;
  if (pIVar2 == (Int32__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  if (pIVar2->max_length != 0) {
    return pIVar2->vector[0];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 get_VertIndex1() */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndex1
                  (MeshTriangle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields)._vertIndices;
  if (pIVar2 == (Int32__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  if (1 < pIVar2->max_length) {
    return pIVar2->vector[1];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 get_VertIndex2() */

int32_t Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndex2
                  (MeshTriangle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields)._vertIndices;
  if (pIVar2 == (Int32__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  if (2 < pIVar2->max_length) {
    return pIVar2->vector[2];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32[] get_VertIndices() */

Int32__Array *
Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_VertIndices
          (MeshTriangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._vertIndices;
  if (pIVar1 != (Int32__Array *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (Int32__Array *)func_?();
    return pIVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pIVar1 = (Int32__Array *)(*pcVar4)();
  return pIVar1;
}


/* Vector3 get_Vertex0() */

Vector3 * Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertex0
                    (Vector3 *__return_storage_ptr__,MeshTriangle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._vertices;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (pVVar2->max_length != 0) {
    fVar7 = pVVar2->vector[0].y;
    fVar8 = pVVar2->vector[0].z;
    __return_storage_ptr__->x = pVVar2->vector[0].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3 get_Vertex1() */

Vector3 * Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertex1
                    (Vector3 *__return_storage_ptr__,MeshTriangle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._vertices;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (1 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[1].y;
    fVar8 = pVVar2->vector[1].z;
    __return_storage_ptr__->x = pVVar2->vector[1].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3 get_Vertex2() */

Vector3 * Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertex2
                    (Vector3 *__return_storage_ptr__,MeshTriangle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._vertices;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (2 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[2].y;
    fVar8 = pVVar2->vector[2].z;
    __return_storage_ptr__->x = pVVar2->vector[2].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3[] get_Vertices() */

Vector3__Array *
Assembly-CSharp.dll::RTG::MeshTriangle::MeshTriangle_get_Vertices
          (MeshTriangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields)._vertices;
  if (pVVar1 != (Vector3__Array *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pVVar1,(MethodInfo *)0x0);
    pVVar1 = (Vector3__Array *)func_?();
    return pVVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar4)();
  return pVVar1;
}

