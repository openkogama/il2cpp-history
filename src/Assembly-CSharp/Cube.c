
/* Void AddDeltaToFace(Vector3[] ByRef, Single, Vector3) */

void Assembly-CSharp.dll::Cube::Cube_AddDeltaToFace
               (Vector3__Array **faceVertices,float delta,Vector3 axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pVVar2 = *faceVertices;
  if (pVVar2 != (Vector3__Array *)0x0) {
    iVar3 = 0;
    do {
      if ((int)pVVar2->max_length <= (int)uStack_1) {
        return;
      }
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uStack_1) goto code_?;
      uStack_4 = *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3);
      fVar5 = *(float *)((int)&pVVar2->vector[0].z + iVar3);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                         (&VStack_7,delta,axis,(MethodInfo *)0x0);
      a.z = fVar5;
      a.x = (float)(undefined4)uStack_4;
      a.y = (float)uStack_4._4_4_;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffd8,a,*pVVar6,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar6->x;
      uStack_4._4_4_ = pVVar6->y;
      fVar5 = pVVar6->z;
      puVar8 = (undefined8 *)func_?();
      iVar3 = iVar3 + 0xc;
      uStack_1 = uStack_1 + 1;
      *puVar8 = uStack_4;
      *(float *)(puVar8 + 1) = fVar5;
      pVVar2 = *faceVertices;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ClampFace(Vector3[] ByRef) */

void Assembly-CSharp.dll::Cube::Cube_ClampFace(Vector3__Array **faceVertices,MethodInfo *method)

{
  uVar1 = 0;
  pVVar2 = *faceVertices;
  if (pVVar2 != (Vector3__Array *)0x0) {
    iVar3 = 0;
    do {
      if ((int)pVVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uVar1) goto code_?;
      MathFunctions::MathFunctions_ClampVector
                ((Vector3 *)((int)&pVVar2->vector[0].x + iVar3),-0.5,0.5,(MethodInfo *)0x0);
      pVVar2 = *faceVertices;
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uVar1) goto code_?;
      vector.z = *(float *)((int)&pVVar2->vector[0].z + iVar3);
      vector._0_8_ = *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3);
      pVVar4 = MathFunctions::MathFunctions_RoundVector
                         ((Vector3 *)&stack0xfffffff0,vector,3,in_stack_5);
      fVar6 = pVVar4->z;
      if (pVVar2->max_length <= uVar1) goto code_?;
      *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3) = *(undefined8 *)pVVar4;
      uVar1 = uVar1 + 1;
      *(float *)((int)&pVVar2->vector[0].z + iVar3) = fVar6;
      iVar3 = iVar3 + 0xc;
      pVVar2 = *faceVertices;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Cube Clone() */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone(Cube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,in_ECX,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)this,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (Cube *)0x0;
  }
  if ((this != (Cube *)0x0) && (pBVar2 = (this->fields)._.byteCorners, pBVar2 != (Byte__Array *)0x0)
     ) {
    pOVar3 = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar2,(MethodInfo *)0x0);
    pBVar2 = (this->fields)._.faceMaterials;
    if (pBVar2 != (Byte__Array *)0x0) {
      pOVar4 = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar2,(MethodInfo *)0x0);
      pCVar5 = (Cube *)func_?(TypeInfo__Cube);
      if ((pOVar4 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
        if (pOVar3 == (Object *)0x0) {
          pBVar2 = (Byte__Array *)0x0;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                    ((CubeBase *)pCVar5,pBVar2,(Byte__Array *)0x0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                    ((CubeBase *)pCVar5,(MethodInfo *)0x0);
          return pCVar5;
        }
        pBVar2 = (Byte__Array *)func_?();
        if (pBVar2 != (Byte__Array *)0x0) goto code_?;
        func_?();
      }
      func_?();
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pCVar5 = (Cube *)(*pcVar7)();
  return pCVar5;
}


/* Cube Clone(Cube) */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone_1(Cube *original,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)original,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (Cube *)0x0;
  }
  if ((original != (Cube *)0x0) &&
     (pBVar2 = (original->fields)._.byteCorners, pBVar2 != (Byte__Array *)0x0)) {
    pOVar3 = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar2,(MethodInfo *)0x0);
    pBVar2 = (original->fields)._.faceMaterials;
    if (pBVar2 != (Byte__Array *)0x0) {
      pOVar4 = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar2,(MethodInfo *)0x0);
      pCVar5 = (Cube *)func_?(TypeInfo__Cube);
      if ((pOVar4 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
        if (pOVar3 == (Object *)0x0) {
          pBVar2 = (Byte__Array *)0x0;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                    ((CubeBase *)pCVar5,pBVar2,(Byte__Array *)0x0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                    ((CubeBase *)pCVar5,(MethodInfo *)0x0);
          return pCVar5;
        }
        pBVar2 = (Byte__Array *)func_?();
        if (pBVar2 != (Byte__Array *)0x0) goto code_?;
        func_?();
      }
      func_?();
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pCVar5 = (Cube *)(*pcVar7)();
  return pCVar5;
}


/* List`1[UnityEngine.Vector3] CreateCubeCornersFromTopFace(List`1[UnityEngine.Vector3], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_CreateCubeCornersFromTopFace
          (List_1_UnityEngine_Vector3_ *cubeCorners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_2
            ((List_1_UnityEngine_Vector3_ *)this,8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_2
            ((List_1_UnityEngine_Vector3_ *)this_00,8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  pLVar1 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
  pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
  if (cubeCorners == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  while (pLVar2 = pLVar1,
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)cubeCorners,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                           ), (int)pLVar2 < (int)pOVar3) {
    pUVar4 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,(int32_t)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pLVar2 = pLVar1;
    if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              (this,*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pLVar1 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              ((int)&pLVar1->klass + Face__Enum_Bottom);
  }
  for (pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)cubeCorners,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                         ), (int)pLVar2 < (int)pOVar3;
      pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                ((int)&pLVar2->klass + Face__Enum_Bottom)) {
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,(int32_t)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    item.m_WaitHandle._2_2_ = (short)((uint)pVVar5->z >> 0x10);
    item._0_10_ = *(unkbyte10 *)pVVar5;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              (this_00,item,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
  }
  pLVar1 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners;
  pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)direction;
  switch(direction) {
  case Face__Enum_Bottom:
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    value.z._2_2_ = (short)((uint)pVVar5->z >> 0x10);
    value._0_10_ = *(unkbyte10 *)pVVar5;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,7,value,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,0,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pLVar1 = this;
    break;
  case Face__Enum_Front:
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    value_00.z._2_2_ = (short)((uint)pVVar5->z >> 0x10);
    value_00._0_10_ = *(unkbyte10 *)pVVar5;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,0,value_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,7,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pLVar1 = this;
    break;
  case Face__Enum_Back:
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pLVar2 = this_00;
    if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    value_01.z._2_2_ = (short)((uint)pVVar5->z >> 0x10);
    value_01._0_10_ = *(unkbyte10 *)pVVar5;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,0,value_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,7,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,0,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 5;
    goto code_?;
  case Face__Enum_Left:
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pLVar2 = this_00;
    if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    value_02.z._2_2_ = (short)((uint)pVVar5->z >> 0x10);
    value_02._0_10_ = *(unkbyte10 *)pVVar5;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,0,value_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,7,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,0,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 6;
    goto code_?;
  case Face__Enum_Right:
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    pLVar2 = this_00;
    if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    value_03.z._2_2_ = (short)((uint)pVVar5->z >> 0x10);
    value_03._0_10_ = *(unkbyte10 *)pVVar5;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,0,value_03,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,7,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,cubeCorners,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this_00,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,0,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,1,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,2,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,3,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,4,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,5,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xffffffe4,(List_1_UnityEngine_Vector3_ *)this_00,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,6,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 4;
code_?:
    direction = (Face__Enum)&stack0xffffffe4;
    pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)direction,(List_1_UnityEngine_Vector3_ *)this_00,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__set_Item
              ((List_1_UnityEngine_Vector3_ *)this,7,*pVVar5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pLVar1 = this;
  }
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?();
  }
  Cube_GetFromTopRotation((Quaternion *)&stack0xffffffbc,direction,(MethodInfo *)0x0);
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
  cubeCorners = (List_1_UnityEngine_Vector3_ *)0x0;
  pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
  if (pLVar1 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    for (; pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                              ), (int)this < (int)pOVar3;
        this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
               ((int)&this->klass + 1)) {
      pVVar5 = (Vector3 *)&stack0xffffffe4;
      uVar6 = SUB42(pLVar1,0);
      uVar7 = (undefined2)((uint)pLVar1 >> 0x10);
      puVar8 = &UNK_?;
      pLVar2 = this;
      pVVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                List_1_UnityEngine_Vector3__get_Item
                          (pVVar5,(List_1_UnityEngine_Vector3_ *)pLVar1,(int32_t)this,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar10._0_4_ = pVVar9->x;
      uVar10._4_4_ = pVVar9->y;
      fVar11 = pVVar9->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      rotation.z._2_2_ = uVar7;
      rotation.z._0_2_ = uVar6;
      rotation.y._0_2_ = (short)pVVar5;
      rotation.x = (float)puVar8;
      rotation.y._2_2_ = (short)((uint)pVVar5 >> 0x10);
      rotation.w = (float)pLVar2;
      point.z = fVar11;
      point.x = (float)(int)uVar10;
      point.y = (float)(int)((ulonglong)uVar10 >> 0x20);
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffd8,rotation,point,(MethodInfo *)0x0);
      pVVar5 = MathFunctions::MathFunctions_RoundVector
                         ((Vector3 *)&stack0xffffffcc,*pVVar5,3,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__set_Item
                ((List_1_UnityEngine_Vector3_ *)pLVar1,(int32_t)this,*pVVar5,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
    }
    return (List_1_UnityEngine_Vector3_ *)pLVar1;
  }
code_?:
  func_?();
  uVar12 = *extraout_EDX;
  pbVar13 = (byte *)((int)extraout_EDX + uVar12 + 4);
  bVar14 = (byte)((uint)pLVar2 >> 8);
  bVar15 = CARRY1(*pbVar13,bVar14) ||
           CARRY1(*pbVar13 + bVar14,CARRY4((uint)extraout_EDX,*extraout_EDX));
  *pbVar13 = *pbVar13 + bVar14 + CARRY4((uint)extraout_EDX,*extraout_EDX);
  bVar16 = *(byte *)&this->klass;
  bVar17 = (byte)((int)extraout_EDX + uVar12 >> 8);
  bVar18 = *(char *)&this->klass + bVar17;
  *(byte *)&this->klass = bVar18 + bVar15;
  *(byte *)&cubeCorners->klass =
       *(char *)&cubeCorners->klass + bVar14 +
       (CARRY1(extraout_AH,bVar17) ||
       CARRY1(extraout_AH + bVar17,CARRY1(bVar16,bVar17) || CARRY1(bVar18,bVar15)));
  pcVar19 = (code *)swi(3);
  pLVar20 = (List_1_UnityEngine_Vector3_ *)(*pcVar19)();
  return pLVar20;
}


/* Byte[] CreateMaterialArray(Byte) */

Byte__Array *
Assembly-CSharp.dll::Cube::Cube_CreateMaterialArray(uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pBVar1->max_length == 0) goto code_?;
    pBVar1->vector[0] = material;
    if (pBVar1->max_length < 2) goto code_?;
    pBVar1->vector[1] = material;
    if (pBVar1->max_length < 3) goto code_?;
    pBVar1->vector[2] = material;
    if (pBVar1->max_length < 4) goto code_?;
    pBVar1->vector[3] = material;
    if (4 < pBVar1->max_length) {
      pBVar1->vector[4] = material;
      if (5 < pBVar1->max_length) {
        pBVar1->vector[5] = material;
        return pBVar1;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar3)();
  return pBVar1;
}


/* Boolean FaceIsOutOfCubeBoundery(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_FaceIsOutOfCubeBoundery
               (Vector3__Array *faceVertices,MethodInfo *method)

{
  fVar1 = 0.0;
  if (faceVertices == (Vector3__Array *)0x0) {
    func_?(0);
code_?:
    VStack_2.z = 0.0;
  }
  else {
    pVVar3 = faceVertices->vector;
    while( true ) {
      if ((int)faceVertices->max_length <= (int)fVar1) {
        return 1;
      }
      pVStack_4 = pVVar3;
      if (faceVertices->max_length <= (uint)fVar1) break;
      pVVar5 = MathFunctions::MathFunctions_RoundVector(&VStack_2,*pVVar3,3,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar7 = pVVar5->z;
      if (faceVertices->max_length <= (uint)fVar1) goto code_?;
      pVVar3->x = pVVar5->x;
      pVVar3->y = fVar6;
      iVar8 = 0;
      pVVar3->z = fVar7;
      fVar7 = 0.0;
      do {
        VStack_2.z = 0.0;
        VStack_2.x = fVar1;
        VStack_2.y = fVar7;
        uVar9 = func_?();
        fVar10 = (float10)func_?(uVar9);
        fStack_11 = (float)fVar10;
        if (_UNK_? <= fStack_11) {
          uVar9 = func_?(fVar1,fVar7,0);
          fVar10 = (float10)func_?(uVar9);
          fStack_11 = (float)fVar10;
          if (fStack_11 <= _UNK_?) {
            iVar8 = iVar8 + 1;
          }
        }
        fVar7 = (float)((int)fVar7 + 1);
      } while ((int)fVar7 < 3);
      if (iVar8 == 3) {
        return 0;
      }
      fVar1 = (float)((int)fVar1 + 1);
      pVVar3 = pVStack_4 + 1;
    }
  }
  VStack_2.y = 0.0;
  VStack_2.x = (float)&UNK_?;
  VStack_2.x = (float)func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void GetAverageLightValue(Face, Int32, Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector,
   Color ByRef, Boolean) */

void Assembly-CSharp.dll::Cube::Cube_GetAverageLightValue
               (Face__Enum face,int32_t vertex,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
               IntVector cubePos,Color *color,bool inside,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = vertex + face * 4;
  if (inside == 0) {
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar3 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
  }
  else {
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar3 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsetsInside;
  }
  if (pIVar3 != (IntVector__Array__Array *)0x0) {
    if (pIVar3->max_length <= uVar2) goto code_?;
    pIVar4 = pIVar3->vector[uVar2];
    vertex = 0;
    pIVar5 = pIVar4->vector;
    uVar2 = 0;
    while (uVar6 = (undefined2)((uint)in_stack_7 >> 0x10), pIVar4 != (IntVector__Array *)0x0
          ) {
      if (pIVar4->max_length <= uVar2) goto code_?;
      uVar8 = pIVar5->x;
      in_stack_9 = pIVar5->z;
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      in_stack_7 = (MethodInfo *)CONCAT22(uVar6,cubePos.z);
      IVar10.z = uVar8;
      IVar10._0_4_ = auStack_11;
      i2.y = in_stack_12;
      i2.x = in_stack_9;
      i2.z = cubePos.x;
      IVar10 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                         (IVar10,i2,in_stack_7);
      if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) break;
      cVar13 = func_?(cells,*IVar10._0_4_,*(undefined2 *)(IVar10._0_4_ + 1),&uStack_1,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                             );
      uVar14 = 0xff;
      if (cVar13 != '\0') {
        uVar14 = (uint)uStack_1._4_1_;
      }
      uVar2 = uVar2 + 1;
      vertex = vertex + uVar14;
      pIVar5 = pIVar5 + 1;
      if (3 < (int)uVar2) {
        fVar15 = (float)vertex / _UNK_?;
        color->r = fVar15;
        color->b = fVar15;
        color->g = fVar15;
        return;
      }
    }
  }
  func_?(0);
code_?:
  uVar16 = func_?(0,0);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Vector3[] GetCorners(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetCorners(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    this = (List_1_VoxelHit_ *)Cube_GetCorners_2(pVVar1,face,(MethodInfo *)0x0);
    if (this != (List_1_VoxelHit_ *)0x0) {
      pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__ToArray
                         (this,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                         );
      return (Vector3__Array *)pVVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar3)();
  return pVVar1;
}


/* List`1[UnityEngine.Vector3] GetCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_1
          (List_1_UnityEngine_Vector2_ *clockwiseCorners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  uVar2 = 0;
  uVar3 = 0;
  func_?(&stack0xffffffdc,0xbf000000,0xbf000000,0xbf000000,0);
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (clockwiseCorners != (List_1_UnityEngine_Vector2_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (clockwiseCorners,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (clockwiseCorners,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    uVar4 = 0;
    uVar5 = 0;
    fVar6 = 0.0;
    func_?();
    uVar7 = uVar2;
    uVar8 = uVar3;
    fVar9 = fVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_02.y = (float)uVar5;
    a_02.x = (float)uVar4;
    a_02.z = fVar6;
    b_04.y = (float)uVar3;
    b_04.x = (float)uVar2;
    b_04.z = fVar1;
    pUVar10 = (UnitySynchronizationContext_WorkRequest *)
             UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,a_02,b_04,(MethodInfo *)0x0);
    if (this != (List_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      func_?();
      b_05.y = (float)uVar8;
      b_05.x = (float)uVar7;
      b_05.z = fVar9;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,(Vector3)ZEXT812(0),b_05,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar1 = VVar11.x;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar2 = 0;
      uVar3 = 0;
      fVar6 = 0.0;
      fVar9 = 1.0;
      puVar12 = &stack0xffffffb8;
      func_?();
      a_03.y = (float)uVar3;
      a_03.x = (float)uVar2;
      a_03.z = fVar6;
      b_06.y = fVar1;
      b_06.x = (float)puVar12;
      b_06.z = fVar9;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_03,b_06,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar13 = 0;
      func_?();
      auVar14._4_8_ = 0;
      auVar14._0_4_ = uVar13;
      b.y = (float)puVar12;
      b.x = fVar6;
      b.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar14 << 0x40),b,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar15 = 0;
      func_?();
      a.z = 0.0;
      uStack_16 = (undefined4)(uVar15 >> 0x20);
      a.x = (float)uVar2;
      a.y = (float)uStack_16;
      b_00.y = (float)puVar12;
      b_00.x = fVar6;
      b_00.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,b_00,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar2 = 0;
      uVar3 = 0;
      fVar9 = 0.0;
      func_?();
      a_00.y = (float)uVar3;
      a_00.x = (float)uVar2;
      a_00.z = fVar9;
      b_01.y = (float)puVar12;
      b_01.x = fVar6;
      b_01.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_00,b_01,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar2 = 0;
      uVar3 = 0;
      fVar9 = 0.0;
      func_?();
      a_01.y = (float)uVar3;
      a_01.x = (float)uVar2;
      a_01.z = fVar9;
      b_02.y = (float)puVar12;
      b_02.x = fVar6;
      b_02.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_01,b_02,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar13 = 0;
      func_?();
      auVar17._4_8_ = 0;
      auVar17._0_4_ = uVar13;
      b_03.y = (float)puVar12;
      b_03.x = fVar6;
      b_03.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar17 << 0x40),b_03,
                          (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      pLVar18 = Cube_CreateCubeCornersFromTopFace
                         ((List_1_UnityEngine_Vector3_ *)this,Face__Enum_Bottom,(MethodInfo *)0x0);
      return pLVar18;
    }
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  pLVar18 = (List_1_UnityEngine_Vector3_ *)(*pcVar19)();
  return pLVar18;
}


/* List`1[UnityEngine.Vector3] GetCorners(Vector3[], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_2
          (Vector3__Array *counterClockwiseFace,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  pQVar1 = Cube_GetToTopRotation((Quaternion *)&stack0xffffff90,direction,(MethodInfo *)0x0);
  fVar2 = 0.0;
  puVar3 = (undefined *)pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (counterClockwiseFace == (Vector3__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar7._0_4_ = func_?(0,0);
    func_?((undefined4)uVar7);
code_?:
    uVar7._0_4_ = func_?();
    func_?((undefined4)uVar7);
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
    pVVar8 = counterClockwiseFace->vector;
    for (; (int)fVar2 < (int)counterClockwiseFace->max_length; fVar2 = (float)((int)fVar2 + 1)) {
      if (counterClockwiseFace->max_length <= (uint)fVar2) goto code_?;
      uVar7._0_4_ = pVVar8->x;
      uVar7._4_4_ = pVVar8->y;
      fVar9 = pVVar8->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      rotation.y = fVar4;
      rotation.x = (float)puVar3;
      rotation.z = fVar5;
      rotation.w = fVar6;
      point.z = fVar9;
      point.x = (float)(int)uVar7;
      point.y = (float)(int)((ulonglong)uVar7 >> 0x20);
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffff94,rotation,point,(MethodInfo *)0x0);
      uVar11 = pVVar10->x;
      uVar12 = pVVar10->y;
      fVar4 = pVVar10->z;
      puVar13 = (undefined8 *)func_?();
      *puVar13 = CONCAT44(uVar12,uVar11);
      *(float *)(puVar13 + 1) = fVar4;
      fVar6 = fVar2;
      func_?();
      fVar5 = fVar2;
      func_?();
      uVar7._0_4_ = 0;
      uVar7._4_4_ = 0;
      uVar11 = 0;
      func_?();
      puVar3 = &UNK_?;
      fVar4 = fVar2;
      puVar13 = (undefined8 *)func_?();
      pVVar8 = pVVar8 + 1;
      *puVar13 = CONCAT44(uVar7._4_4_,(undefined4)uVar7);
      *(undefined4 *)(puVar13 + 1) = uVar11;
    }
    this = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    if (counterClockwiseFace->max_length == 0) goto code_?;
    pMVar14 = (ManualResetEvent *)0x0;
    uVar7._0_4_ = 0;
    uVar7._4_4_ = 0;
    func_?(&stack0xffffffe0,counterClockwiseFace->vector[0].x,0x3f000000);
    if (this == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    item_00.m_DelagateState = (Object *)uVar7._4_4_;
    item_00.m_DelagateCallback = (SendOrPostCallback *)(undefined4)uVar7;
    item_00.m_WaitHandle = pMVar14;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (counterClockwiseFace->max_length < 2) goto code_?;
    pMVar14 = (ManualResetEvent *)0x0;
    uVar7._0_4_ = 0;
    uVar7._4_4_ = 0;
    func_?();
    item_01.m_DelagateState = (Object *)uVar7._4_4_;
    item_01.m_DelagateCallback = (SendOrPostCallback *)(undefined4)uVar7;
    item_01.m_WaitHandle = pMVar14;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (counterClockwiseFace->max_length < 3) goto code_?;
    pMVar14 = (ManualResetEvent *)0x0;
    uVar7._0_4_ = 0;
    uVar7._4_4_ = 0;
    func_?();
    item_02.m_DelagateState = (Object *)uVar7._4_4_;
    item_02.m_DelagateCallback = (SendOrPostCallback *)(undefined4)uVar7;
    item_02.m_WaitHandle = pMVar14;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (counterClockwiseFace->max_length < 4) goto code_?;
    pMVar14 = (ManualResetEvent *)0x0;
    uVar7 = 0;
    func_?();
    item_03.m_WaitHandle = pMVar14;
    item_03.m_DelagateCallback = (SendOrPostCallback *)(int)uVar7;
    item_03.m_DelagateState = (Object *)(int)((ulonglong)uVar7 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_03,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (counterClockwiseFace->max_length < 4) goto code_?;
    pMVar14 = (ManualResetEvent *)0x0;
    uVar7._0_4_ = 0;
    uVar7._4_4_ = 0;
    func_?();
    item_04.m_DelagateState = (Object *)uVar7._4_4_;
    item_04.m_DelagateCallback = (SendOrPostCallback *)(undefined4)uVar7;
    item_04.m_WaitHandle = pMVar14;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_04,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (counterClockwiseFace->max_length < 3) goto code_?;
    pMVar14 = (ManualResetEvent *)0x0;
    uVar7._0_4_ = 0;
    uVar7._4_4_ = 0;
    func_?();
    item_05.m_DelagateState = (Object *)uVar7._4_4_;
    item_05.m_DelagateCallback = (SendOrPostCallback *)(undefined4)uVar7;
    item_05.m_WaitHandle = pMVar14;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_05,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (1 < counterClockwiseFace->max_length) {
      pMVar14 = (ManualResetEvent *)0x0;
      uVar7._0_4_ = 0;
      uVar7._4_4_ = 0;
      func_?();
      item_06.m_DelagateState = (Object *)uVar7._4_4_;
      item_06.m_DelagateCallback = (SendOrPostCallback *)(undefined4)uVar7;
      item_06.m_WaitHandle = pMVar14;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_06,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      if (counterClockwiseFace->max_length != 0) {
        fVar5 = 0.0;
        pMStack15 = (ManualResetEvent *)counterClockwiseFace->vector[0].z;
        puStack16 = (undefined *)0xbf000000;
        fVar4 = 0.0;
        pMVar14 = (ManualResetEvent *)0x0;
        func_?();
        pMStack15 = pMVar14;
        puStack16 = (undefined *)fVar4;
        item.m_DelagateState = (Object *)puStack16;
        item.m_DelagateCallback = (SendOrPostCallback *)fVar5;
        item.m_WaitHandle = pMStack15;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  );
        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Cube->_1).cctor_started == 0)) {
          func_?();
        }
        pLVar17 = Cube_CreateCubeCornersFromTopFace
                           ((List_1_UnityEngine_Vector3_ *)this,(Face__Enum)this,(MethodInfo *)0x0);
        return pLVar17;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  pMStack15 = (ManualResetEvent *)0x0;
  puStack16 = (undefined *)func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar17 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
  return pLVar17;
}


/* IntVector GetCubePosAboveFace(IntVector, Face) */

IntVector Assembly-CSharp.dll::Cube::Cube_GetCubePosAboveFace
                    (IntVector localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  sStack_2 = 0;
  func_?(&uStack_1,CONCAT22(in_stack_3,localPos.z),
                  CONCAT22((undefined2)face,in_stack_3),face,0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  pVVar4 = Cube_GetFaceAxis(&VStack_5,(Face__Enum)method,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  uStack_1 = CONCAT22(uStack_1._2_2_ + (short)(int)(float)uVar7,
                      (short)uStack_1 + (short)(int)(float)uVar6);
  IVar8.z = sStack_2 + (short)(int)pVVar4->z;
  *(undefined4 *)localPos._0_4_ = uStack_1;
  *(short *)(localPos._0_4_ + 4) = IVar8.z;
  IVar8.x = localPos.x;
  IVar8.y = localPos.y;
  return IVar8;
}


/* Vector3[] GetEdge(Cube, Face, Edge) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdge
          (Cube *cube,Face__Enum face,Edge__Enum edge,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    unaff_EBP = (Cube *)0x2;
    pVVar2 = (Vector3__Array *)func_?();
    switch(edge) {
    case Edge__Enum_Front:
      if ((pVVar2 == (Vector3__Array *)0x0) || (pVVar1 == (Vector3__Array *)0x0)) break;
      if (pVVar1->max_length == 0) goto code_?;
      fVar3 = pVVar1->vector[0].y;
      fVar4 = pVVar1->vector[0].z;
      if (pVVar2->max_length == 0) goto code_?;
      pVVar2->vector[0].x = pVVar1->vector[0].x;
      pVVar2->vector[0].y = fVar3;
      pVVar2->vector[0].z = fVar4;
      if (pVVar1->max_length < 2) goto code_?;
      uVar5._0_4_ = pVVar1->vector[1].x;
      uVar5._4_4_ = pVVar1->vector[1].y;
      fVar4 = pVVar1->vector[1].z;
      if (1 < pVVar2->max_length) goto code_?;
      goto code_?;
    case Edge__Enum_Back:
      if ((pVVar2 == (Vector3__Array *)0x0) || (pVVar1 == (Vector3__Array *)0x0)) break;
      if (pVVar1->max_length < 3) goto code_?;
      fVar3 = pVVar1->vector[2].y;
      fVar4 = pVVar1->vector[2].z;
      if (pVVar2->max_length == 0) goto code_?;
      pVVar2->vector[0].x = pVVar1->vector[2].x;
      pVVar2->vector[0].y = fVar3;
      pVVar2->vector[0].z = fVar4;
      if (pVVar1->max_length < 4) goto code_?;
      uVar5._0_4_ = pVVar1->vector[3].x;
      uVar5._4_4_ = pVVar1->vector[3].y;
      fVar4 = pVVar1->vector[3].z;
      if (1 < pVVar2->max_length) goto code_?;
      goto code_?;
    case Edge__Enum_Left:
      if ((pVVar2 == (Vector3__Array *)0x0) || (pVVar1 == (Vector3__Array *)0x0)) break;
      if (pVVar1->max_length < 4) goto code_?;
      fVar3 = pVVar1->vector[3].y;
      fVar4 = pVVar1->vector[3].z;
      if (pVVar2->max_length == 0) goto code_?;
      pVVar2->vector[0].x = pVVar1->vector[3].x;
      pVVar2->vector[0].y = fVar3;
      pVVar2->vector[0].z = fVar4;
      if (pVVar1->max_length == 0) goto code_?;
      uVar5._0_4_ = pVVar1->vector[0].x;
      uVar5._4_4_ = pVVar1->vector[0].y;
      fVar4 = pVVar1->vector[0].z;
      if (1 < pVVar2->max_length) goto code_?;
      goto code_?;
    case Edge__Enum_Right:
      goto code_?;
    default:
      goto code_?;
    }
  }
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
  goto code_?;
code_?:
  if ((pVVar2 == (Vector3__Array *)0x0) || (pVVar1 == (Vector3__Array *)0x0)) goto code_?;
  if (pVVar1->max_length < 2) goto code_?;
  fVar3 = pVVar1->vector[1].y;
  fVar4 = pVVar1->vector[1].z;
  if (pVVar2->max_length == 0) goto code_?;
  pVVar2->vector[0].x = pVVar1->vector[1].x;
  pVVar2->vector[0].y = fVar3;
  pVVar2->vector[0].z = fVar4;
  if (2 < pVVar1->max_length) {
    uVar5._0_4_ = pVVar1->vector[2].x;
    uVar5._4_4_ = pVVar1->vector[2].y;
    fVar4 = pVVar1->vector[2].z;
    if (pVVar2->max_length < 2) goto code_?;
code_?:
    pVVar2->vector[1].x = (float)(int)uVar5;
    pVVar2->vector[1].y = (float)(int)((ulonglong)uVar5 >> 0x20);
    pVVar2->vector[1].z = fVar4;
code_?:
    return pVVar2;
  }
code_?:
  func_?();
  func_?();
code_?:
  gameObject = (GameObject *)0x0;
  func_?();
  uVar5 = func_?();
  iVar6 = (int)((ulonglong)uVar5 >> 0x20);
  uVar7 = (uint)uVar5;
  pbVar8 = (byte *)(uVar7 + 0x4e + iVar6);
  *pbVar8 = *pbVar8 & (byte)uVar5;
  puVar9 = (uint *)((uVar7 - 0x5d) + iVar6);
  *puVar9 = *puVar9 & uVar7;
  puVar9 = (uint *)((uVar7 - 0xb) + iVar6);
  *puVar9 = *puVar9 & uVar7;
  puVar9 = (uint *)(uVar7 + 0x55 + iVar6);
  *puVar9 = *puVar9 & uVar7;
  puStack_10 = (undefined *)0xffffffff;
  puStack_11 = &DAT_?;
  uStack_12 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_12;
  puStack_13 = &stack0xffffffb0;
  puVar14 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar14 = puStack_13;
  }
  puStack_13 = puVar14;
  fStack_15 = 0.0;
  func_?();
  handle = TypeRef__Edge;
  pVStack_16 = (Vector3__Array *)0x0;
  fStack_17 = _UNK_?;
  puStack_13 = &stack0xffffffb0;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_13 = &stack0xffffffb0, (TypeInfo__System__Type->_1).cctor_started == 0)) {
    puStack_13 = &stack0xffffffb0;
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIVar18 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    puStack_10 = (undefined *)0x0;
    while (pIVar18 != (IEnumerator *)0x0) {
      cVar19 = func_?();
      if (cVar19 == '\0') {
        puStack_10 = (undefined *)0xffffffff;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_12;
        return pVStack_16;
      }
      piVar20 = (int *)func_?();
      if (piVar20 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar20 + 0x20) != (TypeInfo__Edge->_0).element_class) {
        func_?();
        break;
      }
      pEVar21 = (Edge__Enum *)func_?();
      pVVar1 = (Vector3__Array *)*pEVar21;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      iVector.z = in_stack_22;
      iVector._0_4_ = method;
      pVVar2 = Cube_GetEdgeVerticesWorld
                         (gameObject,unaff_EBP,unaff_retaddr,(Edge__Enum)pVVar1,iVector,
                          (MethodInfo *)0x0);
      fStack_15 = 1000.0;
      if (pVVar2 == (Vector3__Array *)0x0) break;
      puVar23 = (undefined8 *)func_?();
      fVar4 = *(float *)(puVar23 + 1);
      uStack_24 = (undefined4)((ulonglong)*puVar23 >> 0x20);
      pVVar25 = (Vector3 *)func_?();
      point.y = (float)face;
      point.x = (float)cube;
      point.z = (float)edge;
      lineStart.z = fVar4;
      lineStart.x = (float)&UNK_?;
      lineStart.y = (float)uStack_24;
      MathFunctions::MathFunctions_DistancePointLine
                (point,lineStart,*pVVar25,&fStack_15,(MethodInfo *)0x0);
      if (fStack_15 < fStack_17) {
        pVStack_16 = pVVar1;
        fStack_17 = fStack_15;
      }
    }
  }
  func_?();
  func_?();
  pcVar26 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar26)();
  return pVVar1;
}


/* Vector3[] GetEdgeVerticesWorld(GameObject, Cube, Face, Edge, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdgeVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,Edge__Enum edge,IntVector iVector,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  func_?(&stack0xffffffe4,(float)(int)iVector.x,(float)(int)iVector.y,(float)(int)iVector.z
                  ,0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  pVVar3 = Cube_GetEdge(cube,face,edge,(MethodInfo *)0x0);
  if ((pVVar3 == (Vector3__Array *)0x0) || (gameObject == (GameObject *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    in_stack_4 = 0x1044;
    func_?();
  }
  else {
    fVar5 = 0.0;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pVVar3->max_length == 0) goto code_?;
    fVar7 = pVVar3->vector[0].z;
    uVar8._0_4_ = pVVar3->vector[0].x;
    uVar8._4_4_ = pVVar3->vector[0].y;
    unique0x10000327 = fVar1;
    puStack_9 = (undefined *)fVar5;
    in_stack_4 = (undefined2)((uint)uVar8._4_4_ >> 0x10);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      uVar8 = CONCAT26(in_stack_4,(int6)uVar8);
    }
    fVar5 = 0.0;
    fVar1 = SUB84(_puStack_c,4);
    a.z = fVar7;
    a.x = (float)(int)uVar8;
    a.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    b_00.z = fVar2;
    b_00.x = (float)puStack_9;
    b_00.y = stack0xfffffff8;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xfffffff0,a,b_00,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    stack0xfffffff8 = (float)&stack0xfffffff0;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xfffffff0,pTVar6,*pVVar10,(MethodInfo *)0x0);
    fVar11 = pVVar10->y;
    fVar7 = pVVar10->z;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = pVVar10->x;
    pVVar3->vector[0].y = fVar11;
    pVVar3->vector[0].z = fVar7;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (1 < pVVar3->max_length) {
      uVar12 = pVVar3->vector[1].y;
      in_stack_4 = (undefined2)((uint)uVar12 >> 0x10);
      b.y = fVar2;
      b.x = fVar1;
      b.z = fVar5;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xfffffff0,pVVar3->vector[1],b,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                           ((Vector3 *)&stack0xfffffff0,pTVar6,*pVVar10,(MethodInfo *)0x0);
        fVar2 = pVVar10->y;
        fVar1 = pVVar10->z;
        if (1 < pVVar3->max_length) {
          pVVar3->vector[1].x = pVVar10->x;
          pVVar3->vector[1].y = fVar2;
          pVVar3->vector[1].z = fVar1;
          return pVVar3;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  uStack13 = 0;
  uStack14 = 0;
  puStack15 = (undefined *)func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar16)();
  return pVVar3;
}


/* Edge GetEdge(GameObject, Cube, Face, Vector3, IntVector) */

Edge__Enum
Assembly-CSharp.dll::Cube::Cube_GetEdge_1
          (GameObject *gameObject,Cube *cube,Face__Enum face,Vector3 pos,IntVector iVector,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  func_?();
  handle = TypeRef__Edge;
  EStack_7 = Edge__Enum_None;
  fStack_8 = _UNK_?;
  puStack_4 = &stack0xffffffbc;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_4 = &stack0xffffffbc, (TypeInfo__System__Type->_1).cctor_started == 0)) {
    puStack_4 = &stack0xffffffbc;
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIVar9 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 0;
    while (pIVar9 != (IEnumerator *)0x0) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        uStack_1 = 0xffffffff;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return EStack_7;
      }
      piVar12 = (int *)func_?();
      if (piVar12 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar12 + 0x20) != (TypeInfo__Edge->_0).element_class) {
        func_?();
        break;
      }
      pEVar13 = (Edge__Enum *)func_?();
      EVar14 = *pEVar13;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar15 = Cube_GetEdgeVerticesWorld(gameObject,cube,face,EVar14,iVector,(MethodInfo *)0x0);
      fStack_6 = 1000.0;
      if (pVVar15 == (Vector3__Array *)0x0) break;
      puVar16 = (undefined8 *)func_?();
      fVar17 = *(float *)(puVar16 + 1);
      uStack_18 = (undefined4)((ulonglong)*puVar16 >> 0x20);
      pVVar19 = (Vector3 *)func_?();
      lineStart.z = fVar17;
      lineStart.x = (float)&UNK_?;
      lineStart.y = (float)uStack_18;
      MathFunctions::MathFunctions_DistancePointLine
                (pos,lineStart,*pVVar19,&fStack_6,(MethodInfo *)0x0);
      if (fStack_6 < fStack_8) {
        EStack_7 = EVar14;
        fStack_8 = fStack_6;
      }
    }
  }
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  EVar14 = (*pcVar20)();
  return EVar14;
}


/* Face GetFace(Vector3[], Vector3[]) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFace
          (Vector3__Array *corners,Vector3__Array *triangleVertices,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  uStack_7 = 0;
  iStack_8 = 0;
  uStack_9 = 0;
  func_?();
  handle = TypeRef__MV__WorldObject__Face;
  uStack_10 = 0xffffffff;
  piStack_11 = (int *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_11 = (int *)&stack0xffffff90, puStack_4 = &stack0xffffff90,
     (TypeInfo__System__Type->_1).cctor_started == 0)) {
    piStack_11 = (int *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pIStack_12 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 0;
    do {
      if (pIStack_12 == (IEnumerator *)0x0) goto code_?;
      cVar13 = func_?();
      piVar14 = piStack_11;
      if (cVar13 == '\0') {
        FVar15 = Face__Enum_Top;
        *piStack_11 = 0xe7;
        goto code_?;
      }
      piVar14 = (int *)func_?();
      if (piVar14 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar14 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      pFVar16 = (Face__Enum *)func_?();
      iStack_17 = 0;
      FVar15 = *pFVar16;
      FStack_18 = FVar15;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar19 = Cube_GetFace_1(corners,FVar15,(MethodInfo *)0x0);
      iStack_20 = 0;
      iVar21 = 0;
code_?:
      piVar14 = piStack_11;
      FVar15 = FStack_18;
      if (triangleVertices == (Vector3__Array *)0x0) goto code_?;
      if (iStack_20 < (int)triangleVertices->max_length) {
        puVar22 = (undefined8 *)func_?();
        iVar21 = 0;
        uStack_23 = *puVar22;
        fStack_24 = *(float *)(puVar22 + 1);
        while( true ) {
          if (pVVar19 == (Vector3__Array *)0x0) goto code_?;
          if ((int)pVVar19->max_length <= iVar21) {
            iStack_20 = iStack_20 + 1;
            iVar21 = iStack_17;
            goto code_?;
          }
          puVar22 = (undefined8 *)func_?();
          uStack_25 = *puVar22;
          fVar26 = *(float *)(puVar22 + 1);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.z = fStack_24;
          a.x = (float)(undefined4)uStack_23;
          a.y = (float)uStack_23._4_4_;
          b.z = fVar26;
          b.x = (float)(undefined4)uStack_25;
          b.y = (float)uStack_25._4_4_;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffff9c,a,b,(MethodInfo *)0x0);
          uStack_9._0_4_ = pVVar27->x;
          uStack_9._4_4_ = pVVar27->y;
          fStack_6 = pVVar27->z;
          puStack_28 = &uStack_9;
          uStack_10 = 0;
          uStack_23 = CONCAT44(&UNK_?,(undefined4)uStack_23);
          fVar29 = (float10)func_?();
          uStack_25 = CONCAT44((float)fVar29,(undefined4)uStack_25);
          if ((double)(float)fVar29 < _UNK_?) break;
          iVar21 = iVar21 + 1;
        }
        iStack_17 = iStack_17 + 1;
        iStack_20 = iStack_20 + 1;
        iVar21 = iStack_17;
        goto code_?;
      }
    } while (iVar21 != 3);
    *piStack_11 = 0xe9;
code_?:
    uStack_1 = 0xffffffff;
    iVar21 = func_?();
    if (iVar21 != 0) {
      func_?();
    }
    if (iStack_8 == 0) {
      if (*piVar14 == 0xe9) {
        *unaff_FS_OFFSET = uStack_3;
        return FVar15;
      }
      *unaff_FS_OFFSET = uStack_3;
      return Face__Enum_Top;
    }
  }
  func_?();
  pcVar30 = (code *)swi(3);
  FVar15 = (*pcVar30)();
  return FVar15;
}


/* Vector3 GetFaceAxis(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetFaceAxis
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       (&VStack_2,(MethodInfo *)0x0);
    break;
  case Face__Enum_Bottom:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                       (&VStack_2,(MethodInfo *)0x0);
    break;
  case Face__Enum_Front:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                       (&VStack_2,(MethodInfo *)0x0);
    break;
  case Face__Enum_Back:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       (&VStack_2,(MethodInfo *)0x0);
    break;
  case Face__Enum_Left:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                       (&VStack_2,(MethodInfo *)0x0);
    break;
  case Face__Enum_Right:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       (&VStack_2,(MethodInfo *)0x0);
    break;
  default:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_2,(MethodInfo *)0x0);
  }
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Face GetFaceIdentityFromLocalDir(Vector3) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFaceIdentityFromLocalDir(Vector3 localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = MathFunctions::MathFunctions_AbsVector(&VStack_2,localDir,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (((float)uVar4 <= (float)uVar3) && (fVar5 <= (float)uVar3)) {
    return (0.0 <= localDir.x) + Face__Enum_Left;
  }
  if (((float)uVar3 <= (float)uVar4) && (fVar5 <= (float)uVar4)) {
    return (uint)(localDir.y < 0.0);
  }
  if (((float)uVar3 <= fVar5) && ((float)uVar4 <= fVar5)) {
    return (0.0 <= localDir.z) + Face__Enum_Front;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  VStack_2.z = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_no_face_found,(MethodInfo *)0x0);
  return Face__Enum_Front;
}


/* Vector3[] GetFaceVerticesWorld(GameObject, Cube, Face, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFaceVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,IntVector iVector,MethodInfo *method)

{
  this = gameObject;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  func_?(&stack0xffffffdc,(float)(int)iVector.x,(float)(int)iVector.y,(float)(int)iVector.z
                  ,0);
  if (cube == (Cube *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    in_stack_2 = 0x1044;
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
    pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar3 = Cube_GetFace_1(pVVar3,face,(MethodInfo *)0x0);
    if ((pVVar3 == (Vector3__Array *)0x0) || (gameObject == (GameObject *)0x0))
    goto code_?;
    uVar4 = 0;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pVVar3->max_length == 0) goto code_?;
    fVar6 = pVVar3->vector[0].z;
    uVar7._0_4_ = pVVar3->vector[0].x;
    uVar7._4_4_ = pVVar3->vector[0].y;
    iVector.z = SUB42(fVar6,0);
    in_stack_2 = (undefined2)((uint)fVar6 >> 0x10);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    VVar8.z._2_2_ = in_stack_2;
    VVar8.z._0_2_ = iVector.z;
    VVar8.x = (float)(int)uVar7;
    VVar8.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    b_02.y = (float)uVar4;
    b_02.x = (float)gameObject;
    b_02.z = fVar1;
    pGVar9 = gameObject;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,VVar8,b_02,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    uVar11 = pVVar10->x;
    uVar12 = pVVar10->y;
    gameObject = (GameObject *)pVVar10->z;
    fVar13 = (float)uVar12;
    VVar8.x = (float)uVar11;
    VVar8 = (Vector3)CONCAT84(uVar14,VVar8.x);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffe8,pTVar5,VVar8,(MethodInfo *)0x0);
    fVar15 = pVVar10->y;
    fVar6 = pVVar10->z;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = pVVar10->x;
    pVVar3->vector[0].y = fVar15;
    pVVar3->vector[0].z = fVar6;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this,(MethodInfo *)0x0);
    if (pVVar3->max_length < 2) goto code_?;
    uVar16 = pVVar3->vector[1].y;
    in_stack_2 = (undefined2)((uint)uVar16 >> 0x10);
    b.y = (float)uVar4;
    b.x = (float)pGVar9;
    b.z = fVar1;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,pVVar3->vector[1],b,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffe8,pTVar5,*pVVar10,(MethodInfo *)0x0);
    fVar15 = pVVar10->y;
    fVar6 = pVVar10->z;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].x = pVVar10->x;
    pVVar3->vector[1].y = fVar15;
    pVVar3->vector[1].z = fVar6;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this,(MethodInfo *)0x0);
    if (pVVar3->max_length < 3) goto code_?;
    b_00.y = (float)uVar4;
    b_00.x = (float)pGVar9;
    b_00.z = fVar1;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,pVVar3->vector[2],b_00,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffe8,pTVar5,*pVVar10,(MethodInfo *)0x0);
    fVar15 = pVVar10->y;
    fVar6 = pVVar10->z;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].x = pVVar10->x;
    pVVar3->vector[2].y = fVar15;
    pVVar3->vector[2].z = fVar6;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this,(MethodInfo *)0x0);
    if (3 < pVVar3->max_length) {
      b_01.y = (float)uVar4;
      b_01.x = (float)pGVar9;
      b_01.z = fVar1;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,pVVar3->vector[3],b_01,(MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                           ((Vector3 *)&stack0xffffffe8,pTVar5,*pVVar10,(MethodInfo *)0x0);
        fVar6 = pVVar10->y;
        fVar1 = pVVar10->z;
        if (3 < pVVar3->max_length) {
          pVVar3->vector[3].x = pVVar10->x;
          pVVar3->vector[3].y = fVar6;
          pVVar3->vector[3].z = fVar1;
          return pVVar3;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  uStack17 = 0;
  uStack18 = 0;
  puStack19 = (undefined *)func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar20)();
  return pVVar3;
}


/* Vector3[] GetFace(Vector3[], Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFace_1
          (Vector3__Array *corners,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
            (&corners,&pVStack_1,face,(MethodInfo *)0x0);
  return pVStack_1;
}


/* Quaternion GetFromTopRotation(Face) */

Quaternion *
Assembly-CSharp.dll::Cube::Cube_GetFromTopRotation
          (Quaternion *__return_storage_ptr__,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  register0x00000000 =
       UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                 ((Quaternion *)&pQStack_1,(MethodInfo *)0x0);
  pQStack_1 = (Quaternion__Class *)register0x00000000->x;
  unique0x10000818 = (Quaternion *)register0x00000000->y;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
            ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
  puStack_3 = (undefined *)pQVar2->x;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
            ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    stack0xffffffb8 = (Quaternion *)&UNK_?;
    func_?();
  }
  stack0xffffffb8 = (Quaternion *)&stack0xffffffe8;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar4->x;
  uVar5._4_4_ = pVVar4->y;
  stack0xffffffb8 = (Quaternion *)&stack0xffffffe8;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
            ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  _pQStack_4c = uVar5;
  func_?();
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  pQVar6 = (Quaternion__Class *)pVVar4->x;
  fVar7 = pVVar4->y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
            ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  func_?();
  stack0xffffffb8 = (Quaternion *)&stack0xffffffe8;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  fVar8 = 0.0;
  puVar9 = (undefined *)pVVar4->x;
  __return_storage_ptr___00 = (Quaternion *)pVVar4->y;
  pQVar10 = (Quaternion__Class *)pVVar4->z;
  unique0x00006600 = (Quaternion *)&stack0xffffffe8;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)unique0x00006600,(MethodInfo *)0x0);
  fVar11 = pVVar4->x;
  pQVar2 = (Quaternion *)&puStack_3;
  puVar12 = &UNK_?;
  func_?();
  switch(direction) {
  default:
    __return_storage_ptr__->x = (float)pQStack_1;
    __return_storage_ptr__->y = (float)stack0xffffffb8;
    __return_storage_ptr__->z = fVar8;
    __return_storage_ptr__->w = (float)&stack0xffffffd4;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    pQStack_1 = (Quaternion__Class *)puVar9;
    unique0x10000a48 = __return_storage_ptr___00;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    lhs.y = (float)stack0xffffffb8;
    lhs.x = (float)pQStack_1;
    lhs.z = (float)pQVar10;
    lhs.w = fVar11;
    rhs.y = (float)stack0xffffffb8;
    rhs.x = (float)pQStack_1;
    rhs.z = (float)pQVar10;
    rhs.w = fVar11;
    register0x00000000 =
         UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                   ((Quaternion *)&pQStack_1,lhs,rhs,(MethodInfo *)0x0);
    fVar11 = register0x00000000->y;
    fVar7 = register0x00000000->z;
    fVar8 = register0x00000000->w;
    __return_storage_ptr__->x = register0x00000000->x;
    __return_storage_ptr__->y = fVar11;
    __return_storage_ptr__->z = fVar7;
    __return_storage_ptr__->w = fVar8;
    return __return_storage_ptr__;
  case Face__Enum_Front:
    __return_storage_ptr__->x = (float)puVar9;
    __return_storage_ptr__->y = (float)__return_storage_ptr___00;
    __return_storage_ptr__->z = (float)pQVar10;
    __return_storage_ptr__->w = fVar11;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    pQStack_1 = pQVar6;
    pQStack_1 = pQVar6;
    unique0x10000a54 = (Quaternion *)fVar7;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    lhs_00.y = (float)stack0xffffffb8;
    lhs_00.x = (float)pQStack_1;
    lhs_00.z = (float)puVar12;
    lhs_00.w = (float)pQVar2;
    rhs_00.y = (float)stack0xffffffb8;
    rhs_00.x = (float)pQStack_1;
    rhs_00.z = (float)puVar12;
    rhs_00.w = (float)pQVar2;
    pQVar10 = pQStack_1;
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&pQStack_1,lhs_00,rhs_00,(MethodInfo *)0x0);
    puVar9 = puVar12;
    __return_storage_ptr___00 = pQVar2;
    break;
  case Face__Enum_Left:
    pQStack_1 = pQVar6;
    unique0x10000a5c = (Quaternion *)fVar7;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    __return_storage_ptr___00 = (Quaternion *)&pQStack_1;
    puVar9 = &UNK_?;
    rotation.y = (float)stack0xffffffb8;
    rotation.x = (float)pQStack_1;
    rotation.z = (float)puVar12;
    rotation.w = (float)pQVar2;
    pQVar10 = pQStack_1;
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       (__return_storage_ptr___00,rotation,(MethodInfo *)0x0);
    break;
  case Face__Enum_Right:
    pQStack_1 = pQVar6;
    unique0x10000a28 = (Quaternion *)fVar11;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      __return_storage_ptr___00 = (Quaternion *)&UNK_?;
      pQVar10 = TypeInfo__UnityEngine__Quaternion;
      unique0x10000a68 = (Quaternion *)fVar7;
      func_?();
      pQVar6 = pQStack_1;
      fVar7 = (float)stack0xffffffb8;
      unique0x10000a30 = (Quaternion *)fVar11;
    }
    goto code_?;
  }
  pQVar6 = (Quaternion__Class *)pQVar13->x;
  fVar7 = pQVar13->y;
  puVar12 = (undefined *)pQVar13->z;
  pQVar2 = (Quaternion *)pQVar13->w;
code_?:
  lhs_01.y = fVar7;
  lhs_01.x = (float)pQVar6;
  lhs_01.z = (float)puVar12;
  lhs_01.w = (float)pQVar2;
  rhs_01.y = (float)__return_storage_ptr___00;
  rhs_01.x = (float)puVar9;
  rhs_01.z = (float)pQVar10;
  rhs_01.w = (float)stack0xffffffe8;
  register0x00000000 =
       UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                 ((Quaternion *)&pQStack_1,lhs_01,rhs_01,(MethodInfo *)0x0);
  fVar11 = register0x00000000->y;
  fVar7 = register0x00000000->z;
  fVar8 = register0x00000000->w;
  __return_storage_ptr__->x = register0x00000000->x;
  __return_storage_ptr__->y = fVar11;
  __return_storage_ptr__->z = fVar7;
  __return_storage_ptr__->w = fVar8;
  return __return_storage_ptr__;
}


/* Boolean GetPlaneVertices(Vector3[], Vector3[] ByRef) */

bool Assembly-CSharp.dll::Cube::Cube_GetPlaneVertices
               (Vector3__Array *corners,Vector3__Array **planeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  _puStack_48 = 0;
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__
            );
  uVar1 = 0;
  if (corners != (Vector3__Array *)0x0) {
    pAVar2 = (AvatarModifierPackage_AvatarModifier *)corners->vector;
    for (; (int)uVar1 < (int)corners->max_length; uVar1 = uVar1 + 1) {
      if (corners->max_length <= uVar1) goto code_?;
      if (this == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier__Add
                (this,*pAVar2,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      pAVar2 = pAVar2 + 1;
    }
    if (this != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      JVar3 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this,
                         MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__get_Count__
                        );
      if ((int)JVar3 < 3) {
        return 0;
      }
      this_00 = (List_1_VoxelHit_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                (this_00,(IEnumerable_1_VoxelHit_ *)this,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                );
      this_01 = (List_1_UnityEngine_Vector4_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      if ((this_00 != (List_1_VoxelHit_ *)0x0) &&
         (pUVar4 = (UnitySynchronizationContext_WorkRequest *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                   List_1_UnityEngine_Vector3__get_Item
                             ((Vector3 *)&stack0xffffffd0,(List_1_UnityEngine_Vector3_ *)this_00,0,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             ), this_01 != (List_1_UnityEngine_Vector4_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01,*pUVar4,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  );
        pUVar4 = (UnitySynchronizationContext_WorkRequest *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                 List_1_UnityEngine_Vector3__get_Item
                           ((Vector3 *)&stack0xffffffd0,(List_1_UnityEngine_Vector3_ *)this_00,1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01,*pUVar4,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  );
        pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                  List_1_UnityEngine_Vector3__get_Item
                            ((Vector3 *)&stack0xffffffd0,(List_1_UnityEngine_Vector3_ *)this_00,1,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        fVar8 = pVVar5->z;
        pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                  List_1_UnityEngine_Vector3__get_Item
                            ((Vector3 *)&stack0xffffffd0,(List_1_UnityEngine_Vector3_ *)this_00,0,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar9._0_4_ = pVVar5->x;
        uVar9._4_4_ = pVVar5->y;
        fVar10 = pVVar5->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        _puStack_48 = CONCAT44((Vector3 *)&stack0xffffffd0,&UNK_?);
        VVar11.y = (float)uVar7;
        VVar11.x = (float)uVar6;
        VVar11.z = fVar8;
        b_00.z = fVar10;
        b_00.x = (float)(int)uVar9;
        b_00.y = (float)(int)((ulonglong)uVar9 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffd0,VVar11,b_00,(MethodInfo *)0x0);
        puVar12 = (undefined8 *)func_?();
        index = 2;
        fVar8 = (float)((ulonglong)*puVar12 >> 0x20);
        while( true ) {
          pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                              );
          if ((int)pOVar13 <= index) {
            return 0;
          }
          pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                    List_1_UnityEngine_Vector3__get_Item
                              (&VStack_14,(List_1_UnityEngine_Vector3_ *)this_00,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar15 = pVVar5->x;
          VVar11 = *pVVar5;
          pLVar16 = this_00;
          pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                    List_1_UnityEngine_Vector3__get_Item
                              ((Vector3 *)&stack0xffffffa0,(List_1_UnityEngine_Vector3_ *)this_00,0,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar17._0_4_ = pVVar5->x;
          uVar17._4_4_ = pVVar5->y;
          fVar10 = pVVar5->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          b.z = fVar10;
          b.x = (float)(int)uVar17;
          b.y = (float)(int)((ulonglong)uVar17 >> 0x20);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffff94,VVar11,b,(MethodInfo *)0x0);
          puStack_18 = pVVar5->x;
          unique0x0000a404 = pVVar5->y;
          pVVar5 = (Vector3 *)func_?();
          uVar19 = pVVar5->y;
          fVar10 = pVVar5->z;
          lhs.y = fVar8;
          lhs.x = (float)uVar19;
          lhs.z = (float)pLVar16;
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                             (lhs,*pVVar5,(MethodInfo *)0x0);
          if ((fVar8 < _UNK_?) && (_UNK_? < (double)fVar8)) break;
          index = index + 1;
          fVar8 = fVar10;
        }
        pUVar4 = (UnitySynchronizationContext_WorkRequest *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_00,*pUVar4,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  );
        pVVar20 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                  List_1_VoxelHit__ToArray
                            (this_00,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                            );
        *(VoxelHit__Array **)uVar15 = pVVar20;
        return 1;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar21 = (code *)swi(3);
  bVar22 = (*pcVar21)();
  return bVar22;
}


/* Quaternion GetToTopRotation(Face) */

Quaternion *
Assembly-CSharp.dll::Cube::Cube_GetToTopRotation
          (Quaternion *__return_storage_ptr__,Face__Enum direction,MethodInfo *method)

{
  auVar1._8_4_ = unaff_EBP;
  auVar1._0_8_ = in_stack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&puStack_4,(MethodInfo *)0x0);
  puStack_4 = (undefined *)pQVar3->x;
  unique0x10000c48 = (Vector3 *)pQVar3->y;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
            ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
  puStack_5 = (undefined *)pQVar3->x;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
  puStack_6 = (undefined *)pQVar3->x;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    stack0xffffffb8 = (Vector3 *)&UNK_?;
    func_?();
  }
  stack0xffffffb8 = (Vector3 *)&stack0xffffffe8;
  register0x00000000 =
       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                 ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar7._0_4_ = register0x00000000->x;
  uVar7._4_4_ = register0x00000000->y;
  uVar8 = auVar1._8_4_;
  stack0xffffffb8 = (Vector3 *)&stack0xffffffe8;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
            ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  _puStack_4c = uVar7;
  func_?();
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar10._0_4_ = pVVar9->x;
  uVar10._4_4_ = pVVar9->y;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar11 = pVVar9->y;
  puStack_6 = (undefined *)uVar11;
  func_?();
  stack0xffffffb8 = (Vector3 *)&stack0xffffffe8;
  register0x00000000 =
       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                 ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  fVar12 = 0.0;
  uVar13 = register0x00000000->x;
  uVar14 = register0x00000000->y;
  auVar15._4_4_ = uVar14;
  auVar15._0_4_ = uVar13;
  fVar16 = register0x00000000->z;
  unique0x00006600 = (Vector3 *)&stack0xffffffe8;
  auVar15._8_4_ = uVar8;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     (unique0x00006600,(MethodInfo *)0x0);
  fVar17 = pVVar9->x;
  puStack_6 = auVar15._0_4_;
  fVar18 = auVar15._4_4_;
  func_?();
  switch(direction) {
  default:
    __return_storage_ptr__->x = (float)puStack_4;
    __return_storage_ptr__->y = (float)stack0xffffffb8;
    __return_storage_ptr__->z = fVar12;
    __return_storage_ptr__->w = (float)&puStack_6;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    puStack_4 = puStack_6;
    puStack_4 = puStack_6;
    unique0x10000fe0 = (Vector3 *)fVar18;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar3 = (Quaternion *)&puStack_4;
    rotation.y = (float)stack0xffffffb8;
    rotation.x = (float)puStack_4;
    rotation.z = fVar16;
    rotation.w = fVar17;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       (pQVar3,rotation,(MethodInfo *)0x0);
    __return_storage_ptr__ = (Quaternion *)pQVar19->z;
    direction = (Face__Enum)pQVar19->w;
    fVar17 = (float)puStack_4;
    fVar16 = (float)stack0xffffffe0;
    puStack_4 = (undefined *)pQVar19->x;
    unique0x10000fec = (Vector3 *)pQVar19->y;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffe4,
                        (Quaternion)
                        CONCAT412(fVar16,CONCAT48(fVar17,CONCAT44((float)pQVar3,(float)puStack_6))),
                        (MethodInfo *)0x0);
    fVar16 = (float)stack0xffffffb8;
    fVar20 = (float)puStack_4;
    QVar21 = (Quaternion)CONCAT124(auVar22,fVar20);
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&puStack_4,QVar21,*pQVar3,(MethodInfo *)0x0);
    fVar17 = pQVar3->y;
    fVar16 = pQVar3->z;
    fVar12 = pQVar3->w;
    __return_storage_ptr__->x = pQVar3->x;
    __return_storage_ptr__->y = fVar17;
    __return_storage_ptr__->z = fVar16;
    __return_storage_ptr__->w = fVar12;
    return __return_storage_ptr__;
  case Face__Enum_Front:
    puStack_4 = puStack_6;
    puStack_4 = puStack_6;
    unique0x10000ff4 = (Vector3 *)fVar18;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    rotation_00.y = (float)stack0xffffffb8;
    rotation_00.x = (float)puStack_4;
    rotation_00.z = fVar16;
    rotation_00.w = fVar17;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&puStack_4,rotation_00,(MethodInfo *)0x0);
    fVar17 = pQVar3->y;
    fVar16 = pQVar3->z;
    fVar12 = pQVar3->w;
    __return_storage_ptr__->x = pQVar3->x;
    __return_storage_ptr__->y = fVar17;
    __return_storage_ptr__->z = fVar16;
    __return_storage_ptr__->w = fVar12;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    puStack_4 = puStack_6;
    puStack_4 = puStack_6;
    unique0x10001000 = (Vector3 *)fVar18;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    rotation_01.y = (float)stack0xffffffb8;
    rotation_01.x = (float)puStack_4;
    rotation_01.z = fVar16;
    rotation_01.w = fVar17;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&puStack_4,rotation_01,(MethodInfo *)0x0);
    puStack_4 = (undefined *)pQVar3->x;
    unique0x1000074c = (Vector3 *)pQVar3->y;
    __return_storage_ptr__ = (Quaternion *)pQVar3->z;
    direction = (Face__Enum)pQVar3->w;
    fVar16 = (float)&puStack_5;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffe4,
                        (Quaternion)
                        CONCAT412(fVar16,CONCAT48((float)&UNK_?,
                                                  CONCAT44((float)(int)((ulonglong)uVar10 >> 0x20),
                                                           (float)(int)uVar10))),(MethodInfo *)0x0);
    fVar16 = (float)stack0xffffffb8;
    fVar23 = (float)puStack_4;
    QVar21 = (Quaternion)CONCAT124(auVar22,fVar23);
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&puStack_4,QVar21,*pQVar3,(MethodInfo *)0x0);
    break;
  case Face__Enum_Left:
    puStack_4 = puStack_6;
    puStack_4 = puStack_6;
    unique0x1000100c = (Vector3 *)fVar18;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    rotation_02.y = (float)stack0xffffffb8;
    rotation_02.x = (float)puStack_4;
    rotation_02.z = fVar16;
    rotation_02.w = fVar17;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&puStack_4,rotation_02,(MethodInfo *)0x0);
    fVar16 = (float)&puStack_5;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&puStack_4,*pQVar3,
                        (Quaternion)
                        CONCAT412(fVar16,CONCAT48((float)&UNK_?,
                                                  CONCAT44((float)(int)((ulonglong)uVar10 >> 0x20),
                                                           (float)(int)uVar10))),(MethodInfo *)0x0);
    fRam00000000 = pQVar3->x;
    fRam00000004 = pQVar3->y;
    fRam00000008 = pQVar3->z;
    fRam0000000c = pQVar3->w;
    return (Quaternion *)0x0;
  case Face__Enum_Right:
    puStack_4 = puStack_6;
    puStack_4 = puStack_6;
    unique0x10001018 = (Vector3 *)fVar18;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    QVar21.y = (float)stack0xffffffb8;
    QVar21.x = (float)puStack_4;
    QVar21.z = fVar16;
    QVar21.w = fVar17;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&puStack_4,QVar21,(MethodInfo *)0x0);
  }
  puStack_4 = (undefined *)pQVar3->x;
  unique0x100007ec = (Vector3 *)pQVar3->y;
  __return_storage_ptr__ = (Quaternion *)pQVar3->z;
  direction = (Face__Enum)pQVar3->w;
  fVar16 = (float)&puStack_5;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffe4,
                      (Quaternion)
                      CONCAT412(fVar16,CONCAT48((float)&UNK_?,
                                                CONCAT44((float)(int)((ulonglong)uVar10 >> 0x20),
                                                         (float)(int)uVar10))),(MethodInfo *)0x0);
  fVar16 = (float)stack0xffffffb8;
  fVar24 = (float)puStack_4;
  QVar21 = (Quaternion)CONCAT124(auVar22,fVar24);
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     ((Quaternion *)&puStack_4,QVar21,*pQVar3,(MethodInfo *)0x0);
  fVar17 = pQVar3->y;
  fVar16 = pQVar3->z;
  fVar12 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar17;
  __return_storage_ptr__->z = fVar16;
  __return_storage_ptr__->w = fVar12;
  return __return_storage_ptr__;
}


/* Void GetTriangle(Int32, Vector3[], Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_GetTriangle
               (int32_t triangleNr,Vector3__Array *triangleVertices,Vector3__Array *corners,
               MethodInfo *method)

{
  switch(triangleNr) {
  case 0:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if ((triangleVertices == (Vector3__Array *)0x0) || (corners == (Vector3__Array *)0x0)) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar2 = (undefined8 *)func_?(0);
    uVar3 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(0);
    *puVar2 = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    puVar2 = (undefined8 *)func_?(1);
    uStack_5 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(1);
    uVar6 = 2;
    break;
  case 1:
    if ((triangleVertices == (Vector3__Array *)0x0) || (corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar2 = (undefined8 *)func_?(0);
    uVar3 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(0);
    *puVar2 = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    puVar2 = (undefined8 *)func_?(2);
    uStack_5 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(1);
    uVar6 = 3;
    break;
  case 2:
    if ((triangleVertices == (Vector3__Array *)0x0) || (corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar2 = (undefined8 *)func_?(4);
    uVar3 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(0);
    *puVar2 = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    puVar2 = (undefined8 *)func_?(5);
    uStack_5 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(1);
    uVar6 = 6;
    break;
  case 3:
    if ((triangleVertices == (Vector3__Array *)0x0) || (corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar2 = (undefined8 *)func_?(4);
    uVar3 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(0);
    *puVar2 = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    puVar2 = (undefined8 *)func_?(6);
    uStack_5 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)func_?(1);
    uVar6 = 7;
    break;
  default:
    goto code_?;
  }
  *puVar2 = uStack_5;
  *(undefined4 *)(puVar2 + 1) = uVar4;
  puVar2 = (undefined8 *)func_?(uVar6);
  uVar3 = *puVar2;
  uVar4 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)func_?(2);
  *puVar2 = uVar3;
  *(undefined4 *)(puVar2 + 1) = uVar4;
code_?:
  return;
}


/* Vector3[] GetVertices(Cube) */

Vector3__Array * Assembly-CSharp.dll::Cube::Cube_GetVertices(Cube *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    return pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar2)();
  return pVVar1;
}


/* Vector3[] GetVerticesWorldAxisAligned(Cube, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVerticesWorldAxisAligned
          (Cube *cube,IntVector iVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if (cube != (Cube *)0x0) {
    pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar3 = Cube_GetVertices_1(pVVar3,(MethodInfo *)0x0);
    VStack_4.x = 0.0;
    func_?(&uStack_1,(float)(int)iVector.x,(float)(int)iVector.y,(float)(int)iVector.z);
    cube = (Cube *)0x0;
    if (pVVar3 != (Vector3__Array *)0x0) {
      pVVar5 = pVVar3->vector;
      while( true ) {
        fVar6 = fStack_2;
        if ((int)pVVar3->max_length <= (int)cube) {
          return pVVar3;
        }
        uStack_7 = uStack_1;
        if ((Cube *)pVVar3->max_length <= cube) break;
        fStack_8 = pVVar5->z;
        uStack_9._0_4_ = pVVar5->x;
        uStack_9._4_4_ = pVVar5->y;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar6;
        a.x = (float)(undefined4)uStack_7;
        a.y = (float)uStack_7._4_4_;
        b.z = fStack_8;
        b.x = (float)(undefined4)uStack_9;
        b.y = (float)uStack_9._4_4_;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_4,a,b,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar10->x;
        uStack_9._4_4_ = pVVar10->y;
        fVar6 = pVVar10->z;
        uStack_1 = CONCAT44(cube,&UNK_?);
        puVar11 = (undefined8 *)func_?();
        cube = (Cube *)((int)&cube->klass + 1);
        pVVar5 = pVVar5 + 1;
        *puVar11 = uStack_9;
        *(float *)(puVar11 + 1) = fVar6;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar12 = func_?(0,0);
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar13)();
  return pVVar3;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVertices_1(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_VoxelHit_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this,(IEnumerable_1_VoxelHit_ *)corners,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  if (this != (List_1_VoxelHit_ *)0x0) {
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,3,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,5,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pUVar1 = (UnitySynchronizationContext_WorkRequest *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
             List_1_UnityEngine_Vector3__get_Item
                       ((Vector3 *)&stack0xfffffff0,(List_1_UnityEngine_Vector3_ *)this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                       );
    return (Vector3__Array *)pVVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar3)();
  return pVVar4;
}


/* Void GetVisibleFaceVertices(Cube, CubeModelChunk+FaceData[] ByRef, IntVector,
   Dictionary`2[MV.WorldObject.IntVector,Cell], Int32 ByRef) */

void Assembly-CSharp.dll::Cube::Cube_GetVisibleFaceVertices
               (Cube *cube,CubeModelChunk_FaceData__Array **faceData,IntVector iVector,
               Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,int32_t *index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_4_ = 0.0;
  fStack_2 = 0.0;
  func_?(&uStack_1,(float)(int)iVector.x,(float)(int)iVector.y,(float)(int)iVector.z,0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?((short)TypeInfo__Cube);
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?((short)TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0);
  *index = 0;
  if (cube == (Cube *)0x0) goto code_?;
  bVar3 = (cube->fields).hiddenSides;
  uVar4 = 0;
  if ((bVar3 & 1) == 0) {
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    if (pCVar5->max_length == 0) {
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = func_?(0,0);
      func_?(uVar6);
code_?:
      uVar6 = 0;
      uVar7 = func_?(0,0);
      func_?(uVar7);
code_?:
      uVar6 = func_?(0,uVar6);
      func_?(uVar6);
    }
    else {
      if (pCVar5->vector[0] == (CubeModelChunk_FaceData *)0x0) {
code_?:
        func_?(0);
        goto code_?;
      }
      (pCVar5->vector[0]->fields).face = 0;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if ((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
         (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
      goto code_?;
      fStack_9 = fStack_2;
      VStack_10.y = (float)uStack_1;
      VStack_10.z = uStack_1._4_4_;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar11->max_length == 0) goto code_?;
      fStack_12 = pVVar11->vector[0].x;
      fStack_13 = pVVar11->vector[0].y;
      fStack_14 = pVVar11->vector[0].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_03.z = fStack_9;
      a_03.x = VStack_10.y;
      a_03.y = VStack_10.z;
      b_03.z = fStack_14;
      b_03.x = fStack_12;
      b_03.y = fStack_13;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_03,b_03,(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length == 0) goto code_?;
      pVVar8->vector[0].x = pVVar15->x;
      pVVar8->vector[0].y = fVar16;
      pVVar8->vector[0].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length == 0) goto code_?;
      if (pCVar19->max_length == 0) goto code_?;
      pfVar20 = &pVVar8->vector[0].y;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,0,cells,iVector,pCVar19->vector,
                 *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 2) goto code_?;
      a_09.z = fStack_2;
      a_09.x = (float)uStack_1;
      a_09.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_09,pVVar11->vector[1],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 2) goto code_?;
      pVVar8->vector[1].x = pVVar15->x;
      pVVar8->vector[1].y = fVar16;
      pVVar8->vector[1].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 2) goto code_?;
      if (pCVar19->max_length < 2) goto code_?;
      pfVar20 = &pVVar8->vector[1].y;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,1,cells,iVector,pCVar19->vector + 1,
                 *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 3) goto code_?;
      a_15.z = fStack_2;
      a_15.x = (float)uStack_1;
      a_15.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_15,pVVar11->vector[2],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 3) goto code_?;
      pVVar8->vector[2].x = pVVar15->x;
      pVVar8->vector[2].y = fVar16;
      pVVar8->vector[2].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 3) goto code_?;
      if (pCVar19->max_length < 3) goto code_?;
      pfVar20 = &pVVar8->vector[2].y;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,2,cells,iVector,pCVar19->vector + 2,
                 *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 4) goto code_?;
      a_21.z = fStack_2;
      a_21.x = (float)uStack_1;
      a_21.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_21,pVVar11->vector[3],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 4) goto code_?;
      pVVar8->vector[3].x = pVVar15->x;
      pVVar8->vector[3].y = fVar16;
      pVVar8->vector[3].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      uVar6 = 0;
      if (pVVar8->max_length < 4) goto code_?;
      if (3 < pCVar19->max_length) {
        pfVar20 = &pVVar8->vector[3].y;
        Cube_GetAverageLightValue
                  ((Face__Enum)fStack_9,3,cells,iVector,pCVar19->vector + 3,
                   *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
        *index = *index + 1;
        uVar4 = *index;
        bVar3 = (cube->fields).hiddenSides;
        goto code_?;
      }
    }
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = 0;
    uVar7 = func_?(0,0);
    func_?(uVar7);
  }
  else {
code_?:
    if ((bVar3 & 2) == 0) {
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (pCVar5->vector[uVar4] == (CubeModelChunk_FaceData *)0x0) goto code_?;
      (pCVar5->vector[uVar4]->fields).face = 1;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if ((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
         (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
      goto code_?;
      fStack_14 = fStack_2;
      fStack_12 = (float)uStack_1;
      fStack_13 = uStack_1._4_4_;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar11->max_length < 5) goto code_?;
      VStack_10.y = pVVar11->vector[4].x;
      VStack_10.z = pVVar11->vector[4].y;
      fStack_9 = pVVar11->vector[4].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fStack_14;
      a.x = fStack_12;
      a.y = fStack_13;
      b.z = fStack_9;
      b.x = VStack_10.y;
      b.y = VStack_10.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a,b,(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length == 0) goto code_?;
      pVVar8->vector[0].x = pVVar15->x;
      pVVar8->vector[0].y = fVar16;
      pVVar8->vector[0].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 5) goto code_?;
      if (pCVar19->max_length == 0) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,0,cells,iVector,pCVar19->vector,
                 _UNK_? < pVVar8->vector[4].y,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 6) goto code_?;
      a_05.z = fStack_2;
      a_05.x = (float)uStack_1;
      a_05.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_05,pVVar11->vector[5],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 2) goto code_?;
      pVVar8->vector[1].x = pVVar15->x;
      pVVar8->vector[1].y = fVar16;
      pVVar8->vector[1].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 6) goto code_?;
      if (pCVar19->max_length < 2) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,1,cells,iVector,pCVar19->vector + 1,
                 _UNK_? < pVVar8->vector[5].y,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 7) goto code_?;
      a_11.z = fStack_2;
      a_11.x = (float)uStack_1;
      a_11.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_11,pVVar11->vector[6],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 3) goto code_?;
      pVVar8->vector[2].x = pVVar15->x;
      pVVar8->vector[2].y = fVar16;
      pVVar8->vector[2].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 7) goto code_?;
      if (pCVar19->max_length < 3) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,2,cells,iVector,pCVar19->vector + 2,
                 _UNK_? < pVVar8->vector[6].y,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 8) goto code_?;
      a_17.z = fStack_2;
      a_17.x = (float)uStack_1;
      a_17.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_17,pVVar11->vector[7],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 4) goto code_?;
      pVVar8->vector[3].x = pVVar15->x;
      pVVar8->vector[3].y = fVar16;
      pVVar8->vector[3].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 8) goto code_?;
      if (3 < pCVar19->max_length) {
        Cube_GetAverageLightValue
                  ((Face__Enum)fStack_9,3,cells,iVector,pCVar19->vector + 3,
                   _UNK_? < pVVar8->vector[7].y,(MethodInfo *)0x0);
        *index = *index + 1;
        uVar4 = *index;
        bVar3 = (cube->fields).hiddenSides;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((bVar3 & 4) == 0) {
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (pCVar5->vector[uVar4] == (CubeModelChunk_FaceData *)0x0) goto code_?;
      (pCVar5->vector[uVar4]->fields).face = 2;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if ((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
         (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
      goto code_?;
      fStack_14 = fStack_2;
      fStack_12 = (float)uStack_1;
      fStack_13 = uStack_1._4_4_;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar11->max_length < 8) goto code_?;
      VStack_10.y = pVVar11->vector[7].x;
      VStack_10.z = pVVar11->vector[7].y;
      fStack_9 = pVVar11->vector[7].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_00.z = fStack_14;
      a_00.x = fStack_12;
      a_00.y = fStack_13;
      b_00.z = fStack_9;
      b_00.x = VStack_10.y;
      b_00.y = VStack_10.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_00,b_00,(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length == 0) goto code_?;
      pVVar8->vector[0].x = pVVar15->x;
      pVVar8->vector[0].y = fVar16;
      pVVar8->vector[0].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 8) goto code_?;
      if (pCVar19->max_length == 0) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,0,cells,iVector,pCVar19->vector,
                 _UNK_? < pVVar8->vector[7].z,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 7) goto code_?;
      a_06.z = fStack_2;
      a_06.x = (float)uStack_1;
      a_06.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_06,pVVar11->vector[6],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 2) goto code_?;
      pVVar8->vector[1].x = pVVar15->x;
      pVVar8->vector[1].y = fVar16;
      pVVar8->vector[1].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 7) goto code_?;
      if (pCVar19->max_length < 2) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,1,cells,iVector,pCVar19->vector + 1,
                 _UNK_? < pVVar8->vector[6].z,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 2) goto code_?;
      a_12.z = fStack_2;
      a_12.x = (float)uStack_1;
      a_12.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_12,pVVar11->vector[1],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 3) goto code_?;
      pVVar8->vector[2].x = pVVar15->x;
      pVVar8->vector[2].y = fVar16;
      pVVar8->vector[2].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 2) goto code_?;
      if (pCVar19->max_length < 3) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,2,cells,iVector,pCVar19->vector + 2,
                 _UNK_? < pVVar8->vector[1].z,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length == 0) goto code_?;
      a_18.z = fStack_2;
      a_18.x = (float)uStack_1;
      a_18.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_18,pVVar11->vector[0],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 4) goto code_?;
      pVVar8->vector[3].x = pVVar15->x;
      pVVar8->vector[3].y = fVar16;
      pVVar8->vector[3].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length == 0) goto code_?;
      if (3 < pCVar19->max_length) {
        Cube_GetAverageLightValue
                  ((Face__Enum)fStack_9,3,cells,iVector,pCVar19->vector + 3,
                   _UNK_? < pVVar8->vector[0].z,(MethodInfo *)0x0);
        *index = *index + 1;
        uVar4 = *index;
        bVar3 = (cube->fields).hiddenSides;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((bVar3 & 8) == 0) {
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (pCVar5->vector[uVar4] == (CubeModelChunk_FaceData *)0x0) goto code_?;
      (pCVar5->vector[uVar4]->fields).face = 3;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if ((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
         (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
      goto code_?;
      fStack_14 = fStack_2;
      fStack_12 = (float)uStack_1;
      fStack_13 = uStack_1._4_4_;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar11->max_length < 6) goto code_?;
      VStack_10.y = pVVar11->vector[5].x;
      VStack_10.z = pVVar11->vector[5].y;
      fStack_9 = pVVar11->vector[5].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_01.z = fStack_14;
      a_01.x = fStack_12;
      a_01.y = fStack_13;
      b_01.z = fStack_9;
      b_01.x = VStack_10.y;
      b_01.y = VStack_10.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_01,b_01,(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length == 0) goto code_?;
      pVVar8->vector[0].x = pVVar15->x;
      pVVar8->vector[0].y = fVar16;
      pVVar8->vector[0].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 6) goto code_?;
      if (pCVar19->max_length == 0) goto code_?;
      pfVar20 = &pVVar8->vector[5].z;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,0,cells,iVector,pCVar19->vector,
                 *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 5) goto code_?;
      a_07.z = fStack_2;
      a_07.x = (float)uStack_1;
      a_07.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_07,pVVar11->vector[4],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 2) goto code_?;
      pVVar8->vector[1].x = pVVar15->x;
      pVVar8->vector[1].y = fVar16;
      pVVar8->vector[1].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 5) goto code_?;
      if (pCVar19->max_length < 2) goto code_?;
      pfVar20 = &pVVar8->vector[4].z;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,1,cells,iVector,pCVar19->vector + 1,
                 *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 4) goto code_?;
      a_13.z = fStack_2;
      a_13.x = (float)uStack_1;
      a_13.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_13,pVVar11->vector[3],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 3) goto code_?;
      pVVar8->vector[2].x = pVVar15->x;
      pVVar8->vector[2].y = fVar16;
      pVVar8->vector[2].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 4) goto code_?;
      if (pCVar19->max_length < 3) goto code_?;
      pfVar20 = &pVVar8->vector[3].z;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,2,cells,iVector,pCVar19->vector + 2,
                 *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 3) goto code_?;
      a_19.z = fStack_2;
      a_19.x = (float)uStack_1;
      a_19.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_19,pVVar11->vector[2],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 4) goto code_?;
      pVVar8->vector[3].x = pVVar15->x;
      pVVar8->vector[3].y = fVar16;
      pVVar8->vector[3].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 3) goto code_?;
      if (3 < pCVar19->max_length) {
        pfVar20 = &pVVar8->vector[2].z;
        Cube_GetAverageLightValue
                  ((Face__Enum)fStack_9,3,cells,iVector,pCVar19->vector + 3,
                   *pfVar20 <= _UNK_? && _UNK_? != *pfVar20,(MethodInfo *)0x0);
        *index = *index + 1;
        uVar4 = *index;
        bVar3 = (cube->fields).hiddenSides;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((bVar3 & 0x10) == 0) {
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (pCVar5->vector[uVar4] == (CubeModelChunk_FaceData *)0x0) goto code_?;
      (pCVar5->vector[uVar4]->fields).face = 4;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if ((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
         (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
      goto code_?;
      fStack_14 = fStack_2;
      fStack_12 = (float)uStack_1;
      fStack_13 = uStack_1._4_4_;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar11->max_length < 5) goto code_?;
      VStack_10.y = pVVar11->vector[4].x;
      VStack_10.z = pVVar11->vector[4].y;
      fStack_9 = pVVar11->vector[4].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_02.z = fStack_14;
      a_02.x = fStack_12;
      a_02.y = fStack_13;
      b_02.z = fStack_9;
      b_02.x = VStack_10.y;
      b_02.y = VStack_10.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_02,b_02,(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length == 0) goto code_?;
      pVVar8->vector[0].x = pVVar15->x;
      pVVar8->vector[0].y = fVar16;
      pVVar8->vector[0].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 5) goto code_?;
      if (pCVar19->max_length == 0) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,0,cells,iVector,pCVar19->vector,
                 _UNK_? < pVVar8->vector[4].x,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 8) goto code_?;
      a_08.z = fStack_2;
      a_08.x = (float)uStack_1;
      a_08.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_08,pVVar11->vector[7],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 2) goto code_?;
      pVVar8->vector[1].x = pVVar15->x;
      pVVar8->vector[1].y = fVar16;
      pVVar8->vector[1].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 8) goto code_?;
      if (pCVar19->max_length < 2) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,1,cells,iVector,pCVar19->vector + 1,
                 _UNK_? < pVVar8->vector[7].x,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length == 0) goto code_?;
      a_14.z = fStack_2;
      a_14.x = (float)uStack_1;
      a_14.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_14,pVVar11->vector[0],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 3) goto code_?;
      pVVar8->vector[2].x = pVVar15->x;
      pVVar8->vector[2].y = fVar16;
      pVVar8->vector[2].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length == 0) goto code_?;
      if (pCVar19->max_length < 3) goto code_?;
      Cube_GetAverageLightValue
                ((Face__Enum)fStack_9,2,cells,iVector,pCVar19->vector + 2,
                 _UNK_? < pVVar8->vector[0].x,(MethodInfo *)0x0);
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      if (pCVar5->max_length <= (uint)*index) goto code_?;
      if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
          (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
         || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
            pVVar11 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar11->max_length < 4) goto code_?;
      a_20.z = fStack_2;
      a_20.x = (float)uStack_1;
      a_20.y = uStack_1._4_4_;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_10,a_20,pVVar11->vector[3],(MethodInfo *)0x0);
      fVar16 = pVVar15->y;
      fVar17 = pVVar15->z;
      if (pVVar8->max_length < 4) goto code_?;
      pVVar8->vector[3].x = pVVar15->x;
      pVVar8->vector[3].y = fVar16;
      pVVar8->vector[3].z = fVar17;
      pCVar5 = *faceData;
      if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
      uVar4 = *index;
      if (pCVar5->max_length <= uVar4) goto code_?;
      pCVar18 = pCVar5->vector[uVar4];
      if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
         (fStack_9 = (float)(pCVar18->fields).face, pCVar5 == (CubeModelChunk_FaceData__Array *)0x0))
      goto code_?;
      if (pCVar5->max_length <= uVar4) goto code_?;
      if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
          (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
         (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping,
         pVVar8 == (Vector3__Array *)0x0)) goto code_?;
      if (pVVar8->max_length < 4) goto code_?;
      if (3 < pCVar19->max_length) {
        Cube_GetAverageLightValue
                  ((Face__Enum)fStack_9,3,cells,iVector,pCVar19->vector + 3,
                   _UNK_? < pVVar8->vector[3].x,(MethodInfo *)0x0);
        *index = *index + 1;
        uVar4 = *index;
        bVar3 = (cube->fields).hiddenSides;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((bVar3 & 0x20) != 0) {
      return;
    }
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    if (pCVar5->max_length <= uVar4) goto code_?;
    if (pCVar5->vector[uVar4] == (CubeModelChunk_FaceData *)0x0) goto code_?;
    (pCVar5->vector[uVar4]->fields).face = 5;
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    if (pCVar5->max_length <= (uint)*index) goto code_?;
    if ((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
       (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
    goto code_?;
    fStack_9 = fStack_2;
    fStack_12 = (float)uStack_1;
    fStack_13 = uStack_1._4_4_;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar11->max_length < 7) goto code_?;
    VStack_10.y = pVVar11->vector[6].x;
    VStack_10.z = pVVar11->vector[6].y;
    fVar17 = pVVar11->vector[6].z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_04.z = fStack_9;
    a_04.x = fStack_12;
    a_04.y = fStack_13;
    b_04.z = fVar17;
    b_04.x = VStack_10.y;
    b_04.y = VStack_10.z;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_10,a_04,b_04,(MethodInfo *)0x0);
    fVar16 = pVVar15->y;
    fVar17 = pVVar15->z;
    if (pVVar8->max_length == 0) goto code_?;
    pVVar8->vector[0].x = pVVar15->x;
    pVVar8->vector[0].y = fVar16;
    pVVar8->vector[0].z = fVar17;
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    uVar4 = *index;
    if (pCVar5->max_length <= uVar4) goto code_?;
    pCVar18 = pCVar5->vector[uVar4];
    if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
       (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0)) goto code_?;
    if (pCVar5->max_length <= uVar4) goto code_?;
    if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
        (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
       (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping, pVVar8 == (Vector3__Array *)0x0)
       ) goto code_?;
    if (pVVar8->max_length < 7) goto code_?;
    if (pCVar19->max_length == 0) goto code_?;
    Cube_GetAverageLightValue
              ((pCVar18->fields).face,0,cells,iVector,pCVar19->vector,
               pVVar8->vector[6].x <= _UNK_? && _UNK_? != pVVar8->vector[6].x,
               (MethodInfo *)0x0);
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    if (pCVar5->max_length <= (uint)*index) goto code_?;
    if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
        (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
       || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
          pVVar11 == (Vector3__Array *)0x0)) goto code_?;
    if (pVVar11->max_length < 6) goto code_?;
    a_10.z = fStack_2;
    a_10.x = (float)uStack_1;
    a_10.y = uStack_1._4_4_;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_10,a_10,pVVar11->vector[5],(MethodInfo *)0x0);
    fVar16 = pVVar15->y;
    fVar17 = pVVar15->z;
    if (pVVar8->max_length < 2) goto code_?;
    pVVar8->vector[1].x = pVVar15->x;
    pVVar8->vector[1].y = fVar16;
    pVVar8->vector[1].z = fVar17;
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    uVar4 = *index;
    if (pCVar5->max_length <= uVar4) goto code_?;
    pCVar18 = pCVar5->vector[uVar4];
    if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
       (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0)) goto code_?;
    if (pCVar5->max_length <= uVar4) goto code_?;
    if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
        (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
       (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping, pVVar8 == (Vector3__Array *)0x0)
       ) goto code_?;
    if (pVVar8->max_length < 6) goto code_?;
    if (pCVar19->max_length < 2) goto code_?;
    Cube_GetAverageLightValue
              ((pCVar18->fields).face,1,cells,iVector,pCVar19->vector + 1,
               pVVar8->vector[5].x <= _UNK_? && _UNK_? != pVVar8->vector[5].x,
               (MethodInfo *)0x0);
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    if (pCVar5->max_length <= (uint)*index) goto code_?;
    if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
        (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
       || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
          pVVar11 == (Vector3__Array *)0x0)) goto code_?;
    if (pVVar11->max_length < 3) goto code_?;
    a_16.z = fStack_2;
    a_16.x = (float)uStack_1;
    a_16.y = uStack_1._4_4_;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_10,a_16,pVVar11->vector[2],(MethodInfo *)0x0);
    fVar16 = pVVar15->y;
    fVar17 = pVVar15->z;
    if (pVVar8->max_length < 3) goto code_?;
    pVVar8->vector[2].x = pVVar15->x;
    pVVar8->vector[2].y = fVar16;
    pVVar8->vector[2].z = fVar17;
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    uVar4 = *index;
    if (pCVar5->max_length <= uVar4) goto code_?;
    pCVar18 = pCVar5->vector[uVar4];
    if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
       (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0)) goto code_?;
    if (pCVar5->max_length <= uVar4) goto code_?;
    if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
        (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
       (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping, pVVar8 == (Vector3__Array *)0x0)
       ) goto code_?;
    if (pVVar8->max_length < 3) goto code_?;
    if (pCVar19->max_length < 3) goto code_?;
    Cube_GetAverageLightValue
              ((pCVar18->fields).face,2,cells,iVector,pCVar19->vector + 2,
               pVVar8->vector[2].x <= _UNK_? && _UNK_? != pVVar8->vector[2].x,
               (MethodInfo *)0x0);
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    if (pCVar5->max_length <= (uint)*index) goto code_?;
    if (((pCVar5->vector[*index] == (CubeModelChunk_FaceData *)0x0) ||
        (pVVar8 = (pCVar5->vector[*index]->fields).faceVertices, pVVar8 == (Vector3__Array *)0x0))
       || (pVVar11 = TypeInfo__Cube->static_fields->cornersBookkeeping,
          pVVar11 == (Vector3__Array *)0x0)) goto code_?;
    if (pVVar11->max_length < 2) goto code_?;
    a_22.z = fStack_2;
    a_22.x = (float)uStack_1;
    a_22.y = uStack_1._4_4_;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_10,a_22,pVVar11->vector[1],(MethodInfo *)0x0);
    fVar16 = pVVar15->y;
    fVar17 = pVVar15->z;
    if (pVVar8->max_length < 4) goto code_?;
    pVVar8->vector[3].x = pVVar15->x;
    pVVar8->vector[3].y = fVar16;
    pVVar8->vector[3].z = fVar17;
    pCVar5 = *faceData;
    if (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0) goto code_?;
    uVar4 = *index;
    if (pCVar5->max_length <= uVar4) goto code_?;
    pCVar18 = pCVar5->vector[uVar4];
    if ((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
       (pCVar5 == (CubeModelChunk_FaceData__Array *)0x0)) goto code_?;
    if (pCVar5->max_length <= uVar4) goto code_?;
    if (((pCVar18 == (CubeModelChunk_FaceData *)0x0) ||
        (pCVar19 = (pCVar18->fields).colors, pCVar19 == (Color__Array *)0x0)) ||
       (pVVar8 = TypeInfo__Cube->static_fields->cornersBookkeeping, pVVar8 == (Vector3__Array *)0x0)
       ) goto code_?;
    uVar6 = 0;
    if (1 < pVVar8->max_length) {
      if (3 < pCVar19->max_length) {
        Cube_GetAverageLightValue
                  ((pCVar18->fields).face,3,cells,iVector,pCVar19->vector + 3,
                   pVVar8->vector[1].x <= _UNK_? && _UNK_? != pVVar8->vector[1].x,
                   (MethodInfo *)0x0);
        *index = *index + 1;
        return;
      }
      goto code_?;
    }
  }
  uVar6 = func_?(0,uVar6);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean IsCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCollapsed(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (Mathf__Class *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pVStack_5 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  bVar6 = Cube_GetPlaneVertices(corners,&pVStack_5,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    return 1;
  }
  if (pVStack_5 == (Vector3__Array *)0x0) goto code_?;
  uVar7 = pVStack_5->max_length;
  pMStack_1 = (Mathf__Class *)0x0;
  if (uVar7 == 0) {
code_?:
    pMStack_1 = (Mathf__Class *)0x0;
    func_?(0);
    func_?();
code_?:
    func_?(0);
    func_?();
  }
  else {
    if (uVar7 < 2) goto code_?;
    if (2 < uVar7) {
      uVar8._0_4_ = pVStack_5->vector[2].x;
      uVar8._4_4_ = pVStack_5->vector[2].y;
      uVar9._0_4_ = pVStack_5->vector[1].x;
      uVar9._4_4_ = pVStack_5->vector[1].y;
      uVar10._0_4_ = pVStack_5->vector[0].x;
      uVar10._4_4_ = pVStack_5->vector[0].y;
      func_?(&pMStack_1,uVar10,pVStack_5->vector[0].z,uVar9,pVStack_5->vector[1].z,uVar8,
                      pVStack_5->vector[2].z);
      uVar7 = 0;
      if (corners == (Vector3__Array *)0x0) goto code_?;
      pVVar11 = corners->vector;
      while( true ) {
        if ((int)corners->max_length <= (int)uVar7) {
          return 1;
        }
        pMStack_1 = (Mathf__Class *)0x0;
        if (corners->max_length <= uVar7) break;
        uVar12._0_4_ = pVVar11->x;
        uVar12._4_4_ = pVVar11->y;
        fVar13 = (float10)func_?(&pMStack_1,uVar12,pVVar11->z);
        pVStack_5 = (Vector3__Array *)(float)fVar13;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          pMStack_1 = TypeInfo__UnityEngine__Mathf;
          func_?();
        }
        if (_UNK_? <
            (double)(float)(double)CONCAT44((uint)((ulonglong)(double)(float)pVStack_5 >> 0x20) &
                                            _UNK_?,
                                            SUB84((double)(float)pVStack_5,0) & _UNK_?)) {
          return 0;
        }
        uVar7 = uVar7 + 1;
        pVVar11 = pVVar11 + 1;
      }
      goto code_?;
    }
  }
  func_?(0);
  func_?();
code_?:
  pMStack_1 = (Mathf__Class *)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  bVar6 = (*pcVar14)();
  return bVar6;
}


/* Boolean IsCornersValid(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCornersValid(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  face = Face__Enum_Top;
  while( true ) {
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    faceIndices = Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
    bVar1 = Cube_IsFaceValid(faceIndices,face,(MethodInfo *)0x0);
    if (bVar1 == 0) break;
    face = face + Face__Enum_Bottom;
    if (5 < (int)face) {
      return 1;
    }
  }
  return 0;
}


/* Boolean IsFaceBoxSideAligened(Cube, Face) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceBoxSideAligened
               (Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  uVar2 = 0;
  pfVar3 = &pVVar1->vector[0].y;
  while (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length <= uVar2) goto code_?;
    if (_UNK_? != *pfVar3) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 3;
    if (3 < (int)uVar2) {
      return 1;
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsFaceCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceCollapsed(Vector3__Array *faceIndices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  iVar3 = 0;
  if (faceIndices == (Vector3__Array *)0x0) {
    func_?(0);
  }
  else {
    while( true ) {
      uVar4 = faceIndices->max_length;
      if ((int)uVar4 <= iVar3) {
        return 0;
      }
      iStack_5 = iVar3 + 1;
      uVar6 = iStack_5 % (int)uVar4;
      if (uVar4 <= uVar6) break;
      fVar7 = faceIndices->vector[uVar6].z;
      uVar8 = iVar3 % (int)uVar4;
      uStack_9._0_4_ = faceIndices->vector[uVar6].x;
      uStack_9._4_4_ = faceIndices->vector[uVar6].y;
      if (uVar4 <= uVar8) break;
      uStack_10._0_4_ = faceIndices->vector[uVar8].x;
      uStack_10._4_4_ = faceIndices->vector[uVar8].y;
      fVar11 = faceIndices->vector[uVar8].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar7;
      a.x = (float)(undefined4)uStack_9;
      a.y = (float)uStack_9._4_4_;
      b.z = fVar11;
      b.x = (float)(undefined4)uStack_10;
      b.y = (float)uStack_10._4_4_;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_13,a,b,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar12->x;
      uStack_1._4_4_ = pVVar12->y;
      fStack_2 = pVVar12->z;
      fVar14 = (float10)func_?(&uStack_1,0);
      iVar3 = iStack_5;
      if ((float)fVar14 < _UNK_?) {
        return 1;
      }
    }
  }
  uVar15 = func_?(0,0);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Boolean IsFaceValid(Vector3[], Face) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceValid
               (Vector3__Array *faceIndices,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])((ulonglong)(uint)auStack_1._4_4_ << 0x20);
  if (faceIndices == (Vector3__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (faceIndices->max_length < 2) goto code_?;
    fStack_3 = faceIndices->vector[1].z;
    pVVar4 = faceIndices->vector + 1;
    VStack_5.y = pVVar4->x;
    VStack_5.z = pVVar4->y;
    uVar6._0_4_ = faceIndices->vector[0].x;
    uVar6._4_4_ = faceIndices->vector[0].y;
    fStack_7 = faceIndices->vector[0].z;
    uStack_8 = (undefined4)uVar6;
    puStack_9 = (undefined *)uVar6._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
      uVar6 = CONCAT44(puStack_9,uStack_8);
    }
    a.z = fStack_3;
    a.x = VStack_5.y;
    a.y = VStack_5.z;
    b.z = fStack_7;
    b.x = (float)(int)uVar6;
    b.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)(auStack_1 + 4),a,b,(MethodInfo *)0x0);
    auStack_1._0_4_ = pVVar10->z;
    puVar11 = (undefined8 *)func_?(&VStack_5,&stack0xffffffd0,0);
    fStack_3 = *(float *)(puVar11 + 1);
    uStack_8 = (undefined4)*puVar11;
    puStack_9 = (undefined *)((ulonglong)*puVar11 >> 0x20);
    if (2 < faceIndices->max_length) {
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                (&VStack_5,faceIndices->vector[2],*pVVar4,(MethodInfo *)0x0);
      pVVar10 = (Vector3 *)func_?();
      lhs_00.y = (float)puStack_9;
      lhs_00.x = (float)uStack_8;
      lhs_00.z = fStack_3;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                ((Vector3 *)(auStack_1 + 4),lhs_00,*pVVar10,(MethodInfo *)0x0);
      plVar12 = (longlong *)func_?();
      fStack_7 = *(float *)(plVar12 + 1);
      VStack_5.y = 0.0;
      VStack_5.z = 0.0;
      if (faceIndices->max_length == 0) goto code_?;
      uVar13 = faceIndices->vector[0].x;
      uVar14 = faceIndices->vector[0].y;
      auStack_1 = (undefined1  [8])*plVar12;
      VStack_5.z = 0.0;
      VStack_5.y = faceIndices->vector[0].z;
      uStack_8 = (undefined4)plVar12[1];
      puStack_9 = (undefined *)uVar13;
      VStack_5.x = (float)uVar14;
      func_?();
      uVar15 = 1;
      while( true ) {
        if ((int)faceIndices->max_length <= (int)uVar15) {
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?(TypeInfo__Cube);
          }
          pVVar4 = Cube_GetFaceAxis((Vector3 *)&stack0xffffffac,face,(MethodInfo *)0x0);
          uVar16._0_4_ = pVVar4->x;
          uVar16._4_4_ = pVVar4->y;
          fVar17 = pVVar4->z;
          uStack_8 = (undefined4)uVar16;
          puStack_9 = (undefined *)uVar16._4_4_;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar16 = CONCAT44(puStack_9,uStack_8);
          }
          lhs.z = fVar17;
          lhs.x = (float)(int)uVar16;
          lhs.y = (float)(int)((ulonglong)uVar16 >> 0x20);
          rhs.z = fStack_7;
          rhs.x = VStack_5.y;
          rhs.y = VStack_5.z;
          fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                             (lhs,rhs,(MethodInfo *)0x0);
          if (_UNK_? < fVar17) {
            return 0;
          }
          return 1;
        }
        if (faceIndices->max_length <= uVar15) break;
        uVar18 = pVVar4->x;
        uVar19 = pVVar4->y;
        fVar20 = (float10)func_?(&stack0xffffff9c,uVar18,uVar19,pVVar4->z);
        fStack_3 = (float)fVar20;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        if (_UNK_? <
            (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_3 >> 0x20) & _UNK_?,
                                    SUB84((double)fStack_3,0) & _UNK_?)) {
          return 0;
        }
        uVar15 = uVar15 + 1;
        pVVar4 = pVVar4 + 1;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  VStack_5._4_8_ = VStack_5._4_8_ & 0xffffffff00000000;
  VStack_5.x = (float)&UNK_?;
  VStack_5.x = (float)func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  bVar22 = (*pcVar21)();
  return bVar22;
}


/* Boolean IsLegal(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsLegal(Vector3__Array *corners,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  uStack_7 = 0;
  func_?();
  handle = TypeRef__MV__WorldObject__Face;
  uStack_8 = 0xffffffff;
  piStack_9 = (int *)&stack0xffffff64;
  puStack_4 = &stack0xffffff64;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_9 = (int *)&stack0xffffff64, puStack_4 = &stack0xffffff64,
     (TypeInfo__System__Type->_1).cctor_started == 0)) {
    piStack_9 = (int *)&stack0xffffff64;
    puStack_4 = &stack0xffffff64;
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIStack_10 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 0;
    while (pIStack_10 != (IEnumerator *)0x0) {
      cVar11 = func_?();
      piVar12 = piStack_9;
      if (cVar11 == '\0') {
        *piStack_9 = 0xdb;
        goto code_?;
      }
      piVar12 = (int *)func_?();
      if (piVar12 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar12 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      pfVar13 = (float *)func_?();
      fVar14 = *pfVar13;
      fStack_15 = fVar14;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar16 = Cube_GetFace_1(corners,(Face__Enum)fVar14,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&VStack_18,(MethodInfo *)0x0);
      iVar19 = 0;
      while( true ) {
        uStack_7._0_4_ = pVVar17->x;
        uStack_7._4_4_ = pVVar17->y;
        fVar14 = pVVar17->z;
        fStack_6 = fVar14;
        uStack_20 = uStack_7;
        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar16->max_length <= iVar19) break;
        puVar21 = (undefined8 *)func_?();
        iVar19 = iVar19 + 1;
        uStack_22 = *puVar21;
        fStack_23 = *(float *)(puVar21 + 1);
        puVar21 = (undefined8 *)func_?();
        uStack_24 = *puVar21;
        fStack_25 = *(float *)(puVar21 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        lhs.z = fStack_23;
        lhs.x = (float)(undefined4)uStack_22;
        lhs.y = (float)uStack_22._4_4_;
        rhs.z = fStack_25;
        rhs.x = (float)(undefined4)uStack_24;
        rhs.y = (float)uStack_24._4_4_;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                           (&VStack_26,lhs,rhs,(MethodInfo *)0x0);
        a_00.z = fVar14;
        a_00.x = (float)(undefined4)uStack_20;
        a_00.y = (float)uStack_20._4_4_;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_27,a_00,*pVVar17,(MethodInfo *)0x0);
      }
      func_?();
      fVar14 = fStack_6;
      uStack_22 = uStack_7;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar14;
      a.x = (float)(undefined4)uStack_22;
      a.y = (float)uStack_22._4_4_;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                         (&VStack_28,a,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar17->x;
      uStack_7._4_4_ = pVVar17->y;
      fStack_6 = pVVar17->z;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pVVar17 = Cube_GetFaceAxis((Vector3 *)&stack0xffffff70,(Face__Enum)fStack_15,(MethodInfo *)0x0)
      ;
      lhs_00.z = fStack_6;
      lhs_00.x = (float)(undefined4)uStack_7;
      lhs_00.y = (float)uStack_7._4_4_;
      fStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                            (lhs_00,*pVVar17,(MethodInfo *)0x0);
      piVar12 = piStack_9;
      if ((double)fStack_15 < _UNK_?) {
        *piStack_9 = 0xdd;
code_?:
        uStack_1 = 0xffffffff;
        iVar19 = func_?();
        if (iVar19 != 0) {
          func_?();
        }
        iVar19 = *piVar12;
        *unaff_FS_OFFSET = uStack_3;
        return iVar19 != 0xdd;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar29 = (code *)swi(3);
  bVar30 = (*pcVar29)();
  return bVar30;
}


/* Boolean IsOutOfBound(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsOutOfBound(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  if (corners == (Vector3__Array *)0x0) {
    func_?(0);
  }
  else {
    pVStack_4 = corners->vector;
    while( true ) {
      if ((int)corners->max_length <= (int)uVar1) {
        return 0;
      }
      if (corners->max_length <= uVar1) break;
      uStack_2._0_4_ = pVStack_4->x;
      uStack_2._4_4_ = pVStack_4->y;
      iVar5 = 0;
      fStack_3 = pVStack_4->z;
      do {
        fVar6 = (float10)func_?(&uStack_2,iVar5,0);
        fStack_7 = (float)fVar6;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        if (_UNK_? <
            (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_7 >> 0x20) & _UNK_?,
                                    SUB84((double)fStack_7,0) & _UNK_?)) {
          return 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      uVar1 = uVar1 + 1;
      pVStack_4 = pVStack_4 + 1;
    }
  }
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void MoveEdge(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveEdge
               (CubePickingInfo *info,float value,Vector3 axis,CubeOutOfBoundState__Enum *coob,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    pCVar3 = (CubePickingInfo *)(info->fields).pickedEdge;
    unaff_ESI = (info->fields).cube;
    FVar4 = (info->fields).pickedFace;
    info = pCVar3;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    corners = Cube_GetEdge(unaff_ESI,FVar4,(Edge__Enum)info,(MethodInfo *)0x0);
    if (corners == (Vector3__Array *)0x0) goto code_?;
    if (corners->max_length == 0) goto code_?;
    info = (CubePickingInfo *)corners->vector[0].z;
    uVar5._0_4_ = corners->vector[0].x;
    uVar5._4_4_ = corners->vector[0].y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      pVStack_6 = TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    a.z = axis.z;
    a.x = axis.x;
    a.y = axis.y;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                       ((Vector3 *)&pVStack_6,value,a,(MethodInfo *)0x0);
    a_00.z = (float)info;
    a_00.x = (float)(int)uVar5;
    a_00.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&pVStack_6,a_00,*pVVar7,(MethodInfo *)0x0);
    fVar8 = pVVar7->y;
    fVar9 = pVVar7->z;
    if (corners->max_length == 0) goto code_?;
    corners->vector[0].x = pVVar7->x;
    corners->vector[0].y = fVar8;
    corners->vector[0].z = fVar9;
    if (corners->max_length < 2) goto code_?;
    uVar10._0_4_ = corners->vector[1].x;
    uVar10._4_4_ = corners->vector[1].y;
    unaff_ESI = (Cube *)corners->vector[1].z;
    a_01.z = axis.z;
    a_01.x = axis.x;
    a_01.y = axis.y;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                       ((Vector3 *)&pVStack_6,value,a_01,(MethodInfo *)0x0);
    a_02.z = (float)unaff_ESI;
    a_02.x = (float)(int)uVar10;
    a_02.y = (float)(int)((ulonglong)uVar10 >> 0x20);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&pVStack_6,a_02,*pVVar7,(MethodInfo *)0x0);
    fVar8 = pVVar7->y;
    fVar9 = pVVar7->z;
    if (corners->max_length < 2) goto code_?;
    corners->vector[1].x = pVVar7->x;
    corners->vector[1].y = fVar8;
    corners->vector[1].z = fVar9;
    bVar11 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      pCVar12 = (pCVar1->fields).cube;
      FVar4 = (pCVar1->fields).pickedFace;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      bVar11 = Cube_IsFaceBoxSideAligened(pCVar12,FVar4,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        return;
      }
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddEdge;
      return;
    }
    if (corners->max_length == 0) goto code_?;
    unaff_ESI = (Cube *)corners->vector;
    MathFunctions::MathFunctions_ClampVector((Vector3 *)unaff_ESI,-0.5,0.5,(MethodInfo *)0x0);
    if (corners->max_length < 2) goto code_?;
    MathFunctions::MathFunctions_ClampVector(corners->vector + 1,-0.5,0.5,(MethodInfo *)0x0);
    if (corners->max_length == 0) goto code_?;
    pVVar7 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&pVStack_6,*(Vector3 *)unaff_ESI,3,(MethodInfo *)0x0);
    fVar8 = pVVar7->y;
    fVar9 = pVVar7->z;
    if (corners->max_length == 0) goto code_?;
    ((Vector3 *)unaff_ESI)->x = pVVar7->x;
    ((Vector3 *)unaff_ESI)->y = fVar8;
    corners->vector[0].z = fVar9;
    if (corners->max_length < 2) goto code_?;
    pVVar7 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&pVStack_6,corners->vector[1],3,(MethodInfo *)0x0);
    fVar8 = pVVar7->y;
    fVar9 = pVVar7->z;
    if (1 < corners->max_length) {
      corners->vector[1].x = pVVar7->x;
      corners->vector[1].y = fVar8;
      corners->vector[1].z = fVar9;
      pCVar12 = (pCVar1->fields).cube;
      if ((pCVar12 != (Cube *)0x0) &&
         (this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                           ((CubeBase *)pCVar12,(MethodInfo *)0x0), this != (Vector3__Array *)0x0)) {
        unaff_ESI = (Cube *)mscorlib.dll::System::Array::Array_Clone
                                      ((Array *)this,(MethodInfo *)0x0);
        info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
        if (unaff_ESI == (Cube *)0x0) {
          pCVar3 = (CubePickingInfo *)0x0;
code_?:
          FVar4 = (pCVar1->fields).pickedFace;
          EVar13 = (pCVar1->fields).pickedEdge;
          info = pCVar3;
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?(TypeInfo__Cube);
          }
          Cube_SetEdge_1((Vector3__Array **)&info,FVar4,EVar13,corners,(MethodInfo *)0x0);
          bVar11 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            return;
          }
          info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
          pCVar12 = (pCVar1->fields).cube;
          EVar13 = (pCVar1->fields).pickedEdge;
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?();
          }
          Cube_SetEdge(pCVar12,(Face__Enum)info,EVar13,corners,(MethodInfo *)0x0);
          if (*coob != CubeOutOfBoundState__Enum_NoChange) {
            return;
          }
          *coob = CubeOutOfBoundState__Enum_WithinBounds;
          return;
        }
        pCVar3 = (CubePickingInfo *)func_?(unaff_ESI,TypeInfo__UnityEngine__Vector3);
        if (pCVar3 != (CubePickingInfo *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  func_?(unaff_ESI,info);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void MoveFace(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveFace
               (CubePickingInfo *info,float delta,Vector3 axis,
               CubeOutOfBoundState__Enum *outOfBoundState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  v = (Vector3__Array__Class *)info;
  if ((info != (CubePickingInfo *)0x0) && (pCVar1 = (info->fields).cube, pCVar1 != (Cube *)0x0)) {
    unaff_ESI = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          ((CubeBase *)pCVar1,(MethodInfo *)0x0);
    FVar2 = (info->fields).pickedFace;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar3 = Cube_GetFace_1(unaff_ESI,FVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fStack_4 = 0.0;
    if (pVVar3 != (Vector3__Array *)0x0) {
      v = (Vector3__Array__Class *)pVVar3->vector;
      while ((int)fStack_4 < (int)pVVar3->max_length) {
        if (pVVar3->max_length <= (uint)fStack_4) goto code_?;
        uVar5 = (v->_0).gc_desc;
        pcVar6 = (v->_0).name;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffffdc,delta,axis,(MethodInfo *)0x0);
        auVar8._4_4_ = pcVar6;
        auVar8._0_4_ = uVar5;
        auVar8._8_4_ = 0;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffd0,(Vector3)(auVar8 << 0x20),*pVVar7,
                             (MethodInfo *)0x0);
        uVar9 = *(undefined8 *)pVVar7;
        delta = fStack_4;
        unaff_ESI = (Vector3__Array *)pVVar7->z;
        info = (CubePickingInfo *)&UNK_?;
        puVar10 = (undefined8 *)func_?();
        fStack_4 = (float)((int)fStack_4 + 1);
        v = (Vector3__Array__Class *)&(v->_0).namespaze;
        *puVar10 = uVar9;
        *(Vector3__Array **)(puVar10 + 1) = unaff_ESI;
      }
      unaff_ESI = (Vector3__Array *)pVVar3->vector;
      for (v = (Vector3__Array__Class *)0x0; pVStack_11 = unaff_ESI,
          (int)v < (int)pVVar3->max_length; v = (Vector3__Array__Class *)((int)&(v->_0).image + 1))
      {
        if ((Vector3__Array__Class *)pVVar3->max_length <= v) goto code_?;
        vector.x = (float)unaff_ESI->klass;
        vector.y = (float)unaff_ESI->monitor;
        vector.z = (float)unaff_ESI->bounds;
        pVVar7 = MathFunctions::MathFunctions_RoundVector
                            ((Vector3 *)&stack0xffffffd0,vector,3,(MethodInfo *)0x0);
        fVar12 = pVVar7->y;
        fVar13 = pVVar7->z;
        if ((Vector3__Array__Class *)pVVar3->max_length <= v) goto code_?;
        unaff_ESI->klass = (Vector3__Array__Class *)pVVar7->x;
        unaff_ESI->monitor = (MonitorData *)fVar12;
        *(float *)&((Cube__Fields *)&unaff_ESI->bounds)->_ = fVar13;
        iVar14 = 0;
        fStack_4 = 0.0;
        do {
          func_?();
          fVar15 = (float10)func_?();
          if (_UNK_? <= (float)fVar15) {
            uVar16 = func_?(v,iVar14);
            fVar15 = (float10)func_?(uVar16);
            if ((float)fVar15 <= _UNK_?) {
              fStack_4 = (float)((int)fStack_4 + 1);
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < 3);
        if (fStack_4 == 4.2039e-45) {
          cStack_17 = '\0';
          goto code_?;
        }
        unaff_ESI = (Vector3__Array *)&pVStack_11->max_length;
      }
      cStack_17 = '\x01';
code_?:
      v = (Vector3__Array__Class *)pVVar3->vector;
      for (unaff_ESI = (Vector3__Array *)0x0; (int)unaff_ESI < (int)pVVar3->max_length;
          unaff_ESI = (Vector3__Array *)((int)&unaff_ESI->klass + 1)) {
        if (((Vector3__Array *)pVVar3->max_length <= unaff_ESI) ||
           (MathFunctions::MathFunctions_ClampVector((Vector3 *)v,-0.5,0.5,(MethodInfo *)0x0),
           (Vector3__Array *)pVVar3->max_length <= unaff_ESI)) goto code_?;
        vector_00.x = (float)(v->_0).image;
        vector_00.y = (float)(v->_0).gc_desc;
        vector_00.z = (float)(v->_0).name;
        pVVar7 = MathFunctions::MathFunctions_RoundVector
                            ((Vector3 *)&stack0xffffffd0,vector_00,3,(MethodInfo *)0x0);
        fVar13 = pVVar7->y;
        pcVar6 = (char *)pVVar7->z;
        if ((Vector3__Array *)pVVar3->max_length <= unaff_ESI) goto code_?;
        (v->_0).image = (Il2CppImage *)pVVar7->x;
        (v->_0).gc_desc = (void *)fVar13;
        (v->_0).name = pcVar6;
        v = (Vector3__Array__Class *)&(v->_0).namespaze;
      }
      pCVar1 = (info->fields).cube;
      if ((pCVar1 != (Cube *)0x0) &&
         (pVVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                              ((CubeBase *)pCVar1,(MethodInfo *)0x0),
         pVVar18 != (Vector3__Array *)0x0)) {
        unaff_ESI = (Vector3__Array *)
                    mscorlib.dll::System::Array::Array_Clone((Array *)pVVar18,(MethodInfo *)0x0);
        v = TypeInfo__UnityEngine__Vector3;
        pVVar18 = (Vector3__Array *)0x0;
        if ((unaff_ESI != (Vector3__Array *)0x0) &&
           (pVVar18 = (Vector3__Array *)func_?(unaff_ESI), pVVar18 == (Vector3__Array *)0x0
           )) goto code_?;
        pVStack_11 = pVVar18;
        Cube_SetFace_1(&pVStack_11,(info->fields).pickedFace,pVVar3,(MethodInfo *)0x0);
        bVar19 = Cube_IsLegal(pVStack_11,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          FVar2 = (info->fields).pickedFace;
          unaff_ESI = (Vector3__Array *)(info->fields).cube;
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?(TypeInfo__Cube);
          }
          Cube_SetFace((Cube *)unaff_ESI,FVar2,pVVar3,(MethodInfo *)0x0);
        }
        if (cStack_17 == '\0') {
          *outOfBoundState = CubeOutOfBoundState__Enum_WithinBounds;
          return;
        }
        pCVar1 = (info->fields).cube;
        v = (Vector3__Array__Class *)info;
        if (pCVar1 != (Cube *)0x0) {
          pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                              ((CubeBase *)pCVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?(TypeInfo__Cube);
          }
          bVar19 = Cube_IsCollapsed(pVVar3,(MethodInfo *)0x0);
          *outOfBoundState = (bVar19 != 0) + CubeOutOfBoundState__Enum_OutOfBoundsAdd;
          return;
        }
      }
    }
  }
  func_?(0);
code_?:
  uVar16 = func_?(0);
  func_?(uVar16);
code_?:
  func_?(unaff_ESI,v);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void MoveVertex(CubePickingInfo, Single, Vector3, Boolean, Boolean, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveVertex
               (CubePickingInfo *info,float value,Vector3 axis,bool edgeIndex0,bool edgeIndex1,
               CubeOutOfBoundState__Enum *coob,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    func_?();
    func_?();
  }
  else {
    pCVar3 = (CubePickingInfo *)(info->fields).pickedEdge;
    pCVar4 = (info->fields).cube;
    FVar5 = (info->fields).pickedFace;
    info = pCVar3;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    corners = Cube_GetEdge(pCVar4,FVar5,(Edge__Enum)info,(MethodInfo *)0x0);
    pVStack_6 = Cube_GetEdge((pCVar1->fields).cube,(pCVar1->fields).pickedFace,
                              (pCVar1->fields).pickedEdge,(MethodInfo *)0x0);
    if (edgeIndex0 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length == 0) goto code_?;
      uStack_7 = *(Il2CppType *)corners->vector;
      VVar8 = corners->vector[0];
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        pVStack_6 = (Vector3__Array *)TypeInfo__UnityEngine__Vector3;
        func_?();
      }
      a_00.z = axis.z;
      a_00.x = axis.x;
      a_00.y = axis.y;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          ((Vector3 *)&stack0xffffffdc,value,a_00,(MethodInfo *)0x0);
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffdc,VVar8,*pVVar9,(MethodInfo *)0x0);
      fVar10 = pVVar9->y;
      fVar11 = pVVar9->z;
      if (corners->max_length != 0) {
        corners->vector[0].x = pVVar9->x;
        corners->vector[0].y = fVar10;
        corners->vector[0].z = fVar11;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if (edgeIndex1 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length < 2) goto code_?;
      uStack_7 = *(Il2CppType *)(corners->vector + 1);
      VVar8 = corners->vector[1];
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = axis.z;
      a.x = axis.x;
      a.y = axis.y;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          ((Vector3 *)&stack0xffffffdc,value,a,(MethodInfo *)0x0);
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffdc,VVar8,*pVVar9,(MethodInfo *)0x0);
      fVar10 = pVVar9->y;
      fVar11 = pVVar9->z;
      if (1 < corners->max_length) {
        corners->vector[1].x = pVVar9->x;
        corners->vector[1].y = fVar10;
        corners->vector[1].z = fVar11;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    bVar12 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      pCVar4 = (pCVar1->fields).cube;
      FVar5 = (pCVar1->fields).pickedFace;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      bVar12 = Cube_IsFaceBoxSideAligened(pCVar4,FVar5,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Add_cube_based_on_corner_pull_,(MethodInfo *)0x0);
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddVertex;
      return;
    }
    if (corners == (Vector3__Array *)0x0) goto code_?;
    if (corners->max_length == 0) goto code_?;
    pVVar9 = corners->vector;
    MathFunctions::MathFunctions_ClampVector(pVVar9,-0.5,0.5,(MethodInfo *)0x0);
    if (corners->max_length < 2) goto code_?;
    MathFunctions::MathFunctions_ClampVector(corners->vector + 1,-0.5,0.5,(MethodInfo *)0x0);
    if (corners->max_length == 0) goto code_?;
    pVVar13 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffdc,*pVVar9,3,(MethodInfo *)0x0);
    fVar10 = pVVar13->y;
    fVar11 = pVVar13->z;
    if (corners->max_length == 0) goto code_?;
    pVVar9->x = pVVar13->x;
    pVVar9->y = fVar10;
    corners->vector[0].z = fVar11;
    if (corners->max_length < 2) goto code_?;
    pVVar13 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffdc,corners->vector[1],3,(MethodInfo *)0x0);
    fVar10 = pVVar13->y;
    fVar11 = pVVar13->z;
    if (corners->max_length < 2) goto code_?;
    corners->vector[1].x = pVVar13->x;
    corners->vector[1].y = fVar10;
    corners->vector[1].z = fVar11;
    pCVar4 = (pCVar1->fields).cube;
    if ((pCVar4 == (Cube *)0x0) ||
       (this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                         ((CubeBase *)pCVar4,(MethodInfo *)0x0), this == (Vector3__Array *)0x0))
    goto code_?;
    uStack_7._4_4_ = mscorlib.dll::System::Array::Array_Clone((Array *)this,(MethodInfo *)0x0);
    info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
    pCVar3 = (CubePickingInfo *)0x0;
    if ((uStack_7._4_4_ != (Object *)0x0) &&
       (pCVar3 = (CubePickingInfo *)func_?(uStack_7._4_4_,TypeInfo__UnityEngine__Vector3)
       , pCVar3 == (CubePickingInfo *)0x0)) goto code_?;
    FVar5 = (pCVar1->fields).pickedFace;
    EVar14 = (pCVar1->fields).pickedEdge;
    info = pCVar3;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    Cube_SetEdge_1((Vector3__Array **)&info,FVar5,EVar14,corners,(MethodInfo *)0x0);
    bVar12 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      return;
    }
    pCVar4 = (pCVar1->fields).cube;
    uStack_7 = (Il2CppType)(ZEXT48(pCVar4) << 0x20);
    info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
    EVar14 = (pCVar1->fields).pickedEdge;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    Cube_SetEdge(pCVar4,(Face__Enum)info,EVar14,corners,(MethodInfo *)0x0);
    if (pVStack_6 == (Vector3__Array *)0x0) goto code_?;
    if ((char *)pVStack_6->max_length == (char *)0x0) goto code_?;
    uStack_7 = *(Il2CppType *)pVStack_6->vector;
    info = (CubePickingInfo *)(((Il2CppType *)&pVStack_6->vector[0].z)->data).typeHandle;
    if (corners->max_length == 0) goto code_?;
    VVar8 = *pVVar9;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    lhs.z = (float)info;
    lhs._0_8_ = uStack_7;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                       (lhs,VVar8,(MethodInfo *)0x0);
    if (bVar12 != 0) {
code_?:
      *coob = CubeOutOfBoundState__Enum_WithinBounds;
      return;
    }
    if ((char *)pVStack_6->max_length < (char *)0x2) goto code_?;
    uVar15 = pVStack_6->vector[1].y;
    VVar8 = pVStack_6->vector[1];
    uStack_7._4_4_ = (Object *)uVar15;
    if (1 < corners->max_length) {
      uStack_16._0_4_ = corners->vector[1].x;
      pVStack_6 = (Vector3__Array *)corners->vector[1].y;
      fVar11 = corners->vector[1].z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        uStack_16 = CONCAT44(pVStack_6,TypeInfo__UnityEngine__Vector3);
        func_?();
      }
      rhs.z = fVar11;
      rhs.x = (float)(int)uStack_16;
      rhs.y = (float)(int)((ulonglong)uStack_16 >> 0x20);
      bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                         (VVar8,rhs,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?(uStack_7._4_4_,info);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Vector3[] RotateFaceToTop(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_RotateFaceToTop(Cube *cube,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube == (Cube *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = 0;
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar3;
    pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
    if ((pVVar3 == (Vector3__Array *)0x0) ||
       (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping, pVVar4 == (Vector3__Array *)0x0)
       ) goto code_?;
    if (pVVar4->max_length == 0) goto code_?;
    fVar5 = pVVar4->vector[0].y;
    fVar6 = pVVar4->vector[0].z;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar7 = pVVar3->vector;
    pVVar7->x = pVVar4->vector[0].x;
    pVVar7->y = fVar5;
    pVVar3->vector[0].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length < 2) goto code_?;
    fVar5 = pVVar4->vector[1].y;
    fVar6 = pVVar4->vector[1].z;
    if (pVVar3->max_length < 2) goto code_?;
    pVVar3->vector[1].x = pVVar4->vector[1].x;
    pVVar3->vector[1].y = fVar5;
    pVVar3->vector[1].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length < 3) goto code_?;
    fVar5 = pVVar4->vector[2].y;
    fVar6 = pVVar4->vector[2].z;
    if (pVVar3->max_length < 3) goto code_?;
    pVVar3->vector[2].x = pVVar4->vector[2].x;
    pVVar3->vector[2].y = fVar5;
    pVVar3->vector[2].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length < 4) goto code_?;
    fVar5 = pVVar4->vector[3].y;
    fVar6 = pVVar4->vector[3].z;
    if (pVVar3->max_length < 4) goto code_?;
    pVVar3->vector[3].x = pVVar4->vector[3].x;
    pVVar3->vector[3].y = fVar5;
    pVVar3->vector[3].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length < 5) goto code_?;
    fVar5 = pVVar4->vector[4].y;
    fVar6 = pVVar4->vector[4].z;
    if (pVVar3->max_length < 5) goto code_?;
    pVVar3->vector[4].x = pVVar4->vector[4].x;
    pVVar3->vector[4].y = fVar5;
    pVVar3->vector[4].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length < 6) goto code_?;
    fVar5 = pVVar4->vector[5].y;
    fVar6 = pVVar4->vector[5].z;
    if (pVVar3->max_length < 6) goto code_?;
    pVVar3->vector[5].x = pVVar4->vector[5].x;
    pVVar3->vector[5].y = fVar5;
    pVVar3->vector[5].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar4->max_length < 7) goto code_?;
    fVar5 = pVVar4->vector[6].y;
    fVar6 = pVVar4->vector[6].z;
    if (pVVar3->max_length < 7) goto code_?;
    pVVar3->vector[6].x = pVVar4->vector[6].x;
    pVVar3->vector[6].y = fVar5;
    pVVar3->vector[6].z = fVar6;
    pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    uVar1 = 0;
    if (7 < pVVar4->max_length) {
      fVar5 = pVVar4->vector[7].y;
      fVar6 = pVVar4->vector[7].z;
      if (pVVar3->max_length < 8) goto code_?;
      pVVar3->vector[7].x = pVVar4->vector[7].x;
      pVVar3->vector[7].y = fVar5;
      pVVar3->vector[7].z = fVar6;
      pQVar8 = Cube_GetToTopRotation((Quaternion *)&stack0xffffffcc,direction,(MethodInfo *)0x0);
      uVar9 = 0;
      __return_storage_ptr__ = (Vector3 *)pQVar8->x;
      fVar6 = pQVar8->y;
      fVar5 = pQVar8->z;
      fVar10 = pQVar8->w;
      while( true ) {
        if ((int)pVVar3->max_length <= (int)uVar9) {
          return pVVar3;
        }
        if (pVVar3->max_length <= uVar9) break;
        uStack_11._0_4_ = pVVar7->x;
        uStack_11._4_4_ = pVVar7->y;
        fVar12 = pVVar7->z;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        rotation.y = fVar6;
        rotation.x = (float)__return_storage_ptr__;
        rotation.z = fVar5;
        rotation.w = fVar10;
        point.z = fVar12;
        point.x = (float)(undefined4)uStack_11;
        point.y = (float)uStack_11._4_4_;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           (&VStack_14,rotation,point,(MethodInfo *)0x0);
        fVar6 = pVVar13->x;
        fVar5 = pVVar13->y;
        fVar10 = pVVar13->z;
        __return_storage_ptr__ = (Vector3 *)&stack0xffffffdc;
        pVVar13 = MathFunctions::MathFunctions_RoundVector
                           (__return_storage_ptr__,*pVVar13,3,(MethodInfo *)0x0);
        uVar15 = pVVar13->y;
        fVar12 = pVVar13->z;
        uStack_11 = CONCAT44(uVar15,&UNK_?);
        puVar16 = (undefined8 *)func_?();
        uVar9 = uVar9 + 1;
        pVVar7 = pVVar7 + 1;
        *puVar16 = uStack_11;
        *(float *)(puVar16 + 1) = fVar12;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,uVar1);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar17 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar17)();
  return pVVar3;
}


/* Void SetEdge(Cube, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge
               (Cube *cube,Face__Enum face,Edge__Enum edge,Vector3__Array *edgeVertices,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    Cube_SetEdge_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,edge,edgeVertices,
                   (MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
              ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEdge(Vector3[] ByRef, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge_1
               (Vector3__Array **corners,Face__Enum face,Edge__Enum edge,
               Vector3__Array *edgeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = *corners;
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  switch(edge) {
  case Edge__Enum_Front:
    if ((pVVar1 == (Vector3__Array *)0x0) || (edgeVertices == (Vector3__Array *)0x0)) {
code_?:
      func_?(0);
code_?:
      func_?(0,0);
      func_?();
code_?:
      func_?(0,0);
      func_?();
code_?:
      func_?(0,0);
      func_?();
    }
    else {
      if (edgeVertices->max_length == 0) goto code_?;
      fVar2 = edgeVertices->vector[0].y;
      fVar3 = edgeVertices->vector[0].z;
      if (pVVar1->max_length == 0) goto code_?;
      pVVar1->vector[0].x = edgeVertices->vector[0].x;
      pVVar1->vector[0].y = fVar2;
      pVVar1->vector[0].z = fVar3;
      if (edgeVertices->max_length < 2) goto code_?;
      fVar2 = edgeVertices->vector[1].y;
      fVar3 = edgeVertices->vector[1].z;
      if (1 < pVVar1->max_length) {
        pVVar1->vector[1].x = edgeVertices->vector[1].x;
        pVVar1->vector[1].y = fVar2;
        pVVar1->vector[1].z = fVar3;
        goto code_?;
      }
    }
    func_?(0,0);
    func_?();
code_?:
    func_?(0,0);
    func_?();
code_?:
    func_?(0,0);
    func_?();
code_?:
    func_?(0,0);
    func_?();
    break;
  case Edge__Enum_Back:
    if ((pVVar1 == (Vector3__Array *)0x0) || (edgeVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (edgeVertices->max_length == 0) goto code_?;
    fVar2 = edgeVertices->vector[0].y;
    fVar3 = edgeVertices->vector[0].z;
    if (pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = edgeVertices->vector[0].x;
    pVVar1->vector[2].y = fVar2;
    pVVar1->vector[2].z = fVar3;
    if (edgeVertices->max_length < 2) goto code_?;
    fVar2 = edgeVertices->vector[1].y;
    fVar3 = edgeVertices->vector[1].z;
    if (3 < pVVar1->max_length) {
      pVVar1->vector[3].x = edgeVertices->vector[1].x;
      pVVar1->vector[3].y = fVar2;
      pVVar1->vector[3].z = fVar3;
      goto code_?;
    }
    break;
  case Edge__Enum_Left:
    if ((pVVar1 == (Vector3__Array *)0x0) || (edgeVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (edgeVertices->max_length == 0) goto code_?;
    fVar2 = edgeVertices->vector[0].y;
    fVar3 = edgeVertices->vector[0].z;
    if (pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = edgeVertices->vector[0].x;
    pVVar1->vector[3].y = fVar2;
    pVVar1->vector[3].z = fVar3;
    if (edgeVertices->max_length < 2) goto code_?;
    fVar2 = edgeVertices->vector[1].y;
    fVar3 = edgeVertices->vector[1].z;
    if (pVVar1->max_length != 0) {
      pVVar1->vector[0].x = edgeVertices->vector[1].x;
      pVVar1->vector[0].y = fVar2;
      pVVar1->vector[0].z = fVar3;
      goto code_?;
    }
    goto code_?;
  case Edge__Enum_Right:
    if ((pVVar1 == (Vector3__Array *)0x0) || (edgeVertices == (Vector3__Array *)0x0))
    goto code_?;
    if (edgeVertices->max_length == 0) goto code_?;
    fVar2 = edgeVertices->vector[0].y;
    fVar3 = edgeVertices->vector[0].z;
    if (pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = edgeVertices->vector[0].x;
    pVVar1->vector[1].y = fVar2;
    pVVar1->vector[1].z = fVar3;
    if (1 < edgeVertices->max_length) {
      fVar2 = edgeVertices->vector[1].y;
      fVar3 = edgeVertices->vector[1].z;
      if (2 < pVVar1->max_length) {
        pVVar1->vector[2].x = edgeVertices->vector[1].x;
        pVVar1->vector[2].y = fVar2;
        pVVar1->vector[2].z = fVar3;
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  default:
code_?:
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    Cube_SetFace_1(corners,face,pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  func_?();
code_?:
  func_?(0,0);
  uVar4 = extraout_var;
  uVar5 = func_?();
  bVar6 = (byte)((uint6)uVar5 >> 0x28);
  pcVar7 = (char *)((uint)uVar5 + 0x90104423);
  *pcVar7 = *pcVar7 + (char)((uint6)uVar5 >> 0x20) +
            (CARRY1(extraout_CL,bVar6) || CARRY1(extraout_CL + bVar6,0x6fefbb6e < (uint)uVar5));
  in((short)((uint6)uVar5 >> 0x20));
  if (cRam_? == '\0') {
    func_?(_UNK_?,uVar4);
    cRam_? = '\x01';
  }
  if (corners == (Vector3__Array **)0x0) {
    func_?(0,0,pVVar1);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)corners,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
  Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,(Vector3__Array *)edge,
                 (MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
            ((CubeBase *)corners,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0
            );
  return;
}


/* Void SetFace(Cube, Face, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetFace
               (Cube *cube,Face__Enum face,Vector3__Array *faceVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,faceVertices,
                   (MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
              ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFace(Vector3[] ByRef, Face, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetFace_1
               (Vector3__Array **corners,Face__Enum face,Vector3__Array *faceVertices,
               MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    if ((*corners == (Vector3__Array *)0x0) ||
       (unaff_EDI = faceVertices, faceVertices == (Vector3__Array *)0x0)) {
code_?:
      bVar1 = 0;
      uStack_2 = 0;
      func_?();
      uVar3 = in((short)extraout_EDX);
      *(undefined1 *)&unaff_EDI->klass = uVar3;
      pbVar4 = (byte *)(extraout_EDX * 4 + -0x69f3efbc);
      bVar5 = *pbVar4;
      bVar6 = (byte)((uint)corners >> 8);
      bVar7 = *pbVar4 + bVar6;
      *pbVar4 = bVar7 + bVar1;
      bVar8 = (byte)((uint)&uStack_2 >> 8);
      pcVar9 = (char *)((int)unaff_EDI + extraout_EDX * 4 + -0x6783efbb);
      *pcVar9 = *pcVar9 + extraout_CH +
                (CARRY1(bVar8,(byte)corners) ||
                CARRY1(bVar8 + (byte)corners,CARRY1(bVar5,bVar6) || CARRY1(bVar7,bVar1)));
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uStack_2 = 0;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(0);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 1;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(1);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 2;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(2);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    pVVar14 = *corners;
    corners = (Vector3__Array **)0x0;
    if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 3;
    puVar11 = (undefined8 *)func_?();
    uVar13 = 3;
    break;
  case Face__Enum_Bottom:
    if ((*corners == (Vector3__Array *)0x0) ||
       (unaff_EDI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    uStack_2 = 0;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(4);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 1;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(5);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 2;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(6);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    pVVar14 = *corners;
    corners = (Vector3__Array **)0x0;
    if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 3;
    puVar11 = (undefined8 *)func_?();
    uVar13 = 7;
    break;
  case Face__Enum_Front:
    if ((*corners == (Vector3__Array *)0x0) ||
       (unaff_EDI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    uStack_2 = 0;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(7);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 1;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(6);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 2;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(1);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    pVVar14 = *corners;
    corners = (Vector3__Array **)0x0;
    if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 3;
    puVar11 = (undefined8 *)func_?();
    uVar13 = 0;
    break;
  case Face__Enum_Back:
    if ((*corners == (Vector3__Array *)0x0) ||
       (unaff_EDI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    uStack_2 = 0;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(5);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 1;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(4);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 2;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(3);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    pVVar14 = *corners;
    corners = (Vector3__Array **)0x0;
    if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 3;
    puVar11 = (undefined8 *)func_?();
    uVar13 = 2;
    break;
  case Face__Enum_Left:
    if ((*corners == (Vector3__Array *)0x0) ||
       (unaff_EDI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    uStack_2 = 0;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(4);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 1;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(7);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 2;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(0);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    pVVar14 = *corners;
    corners = (Vector3__Array **)0x0;
    if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 3;
    puVar11 = (undefined8 *)func_?();
    uVar13 = 3;
    break;
  case Face__Enum_Right:
    if ((*corners == (Vector3__Array *)0x0) ||
       (unaff_EDI = faceVertices, faceVertices == (Vector3__Array *)0x0)) goto code_?;
    uStack_2 = 0;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(6);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 1;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(5);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 2;
    puVar11 = (undefined8 *)func_?();
    uVar12 = *puVar11;
    uVar13 = *(undefined4 *)(puVar11 + 1);
    puVar11 = (undefined8 *)func_?(2);
    *puVar11 = uVar12;
    *(undefined4 *)(puVar11 + 1) = uVar13;
    pVVar14 = *corners;
    corners = (Vector3__Array **)0x0;
    if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
    uStack_2 = 3;
    puVar11 = (undefined8 *)func_?();
    uVar13 = 1;
    break;
  default:
    goto code_?;
  }
  uVar12 = *puVar11;
  uVar15 = *(undefined4 *)(puVar11 + 1);
  puVar11 = (undefined8 *)func_?(uVar13);
  *puVar11 = uVar12;
  *(undefined4 *)(puVar11 + 1) = uVar15;
code_?:
  return;
}


/* Void SetMaterial(Cube, Face, Byte) */

void Assembly-CSharp.dll::Cube::Cube_SetMaterial
               (Cube *cube,Face__Enum face,uint8_t materialId,MethodInfo *method)

{
  if ((cube == (Cube *)0x0) ||
     (pBVar1 = (cube->fields)._.faceMaterials, pBVar1 == (Byte__Array *)0x0)) {
    func_?(0);
  }
  else if (face < pBVar1->max_length) {
    pBVar1->vector[face] = materialId;
    return;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[UnityEngine.Vector3] SquareCornersToCubeCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_SquareCornersToCubeCorners
          (List_1_UnityEngine_Vector2_ *corners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  uVar2 = 0;
  uVar3 = 0;
  func_?(&stack0xffffffdc,0xbf000000,0xbf000000,0xbf000000,0);
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (corners != (List_1_UnityEngine_Vector2_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (corners,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__get_Item
              (corners,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    uVar4 = 0;
    uVar5 = 0;
    fVar6 = 0.0;
    func_?();
    uVar7 = uVar2;
    uVar8 = uVar3;
    fVar9 = fVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_02.y = (float)uVar5;
    a_02.x = (float)uVar4;
    a_02.z = fVar6;
    b_04.y = (float)uVar3;
    b_04.x = (float)uVar2;
    b_04.z = fVar1;
    pUVar10 = (UnitySynchronizationContext_WorkRequest *)
             UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,a_02,b_04,(MethodInfo *)0x0);
    if (this != (List_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      func_?();
      b_05.y = (float)uVar8;
      b_05.x = (float)uVar7;
      b_05.z = fVar9;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,(Vector3)ZEXT812(0),b_05,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar1 = VVar11.x;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar2 = 0;
      uVar3 = 0;
      fVar6 = 0.0;
      fVar9 = 1.0;
      puVar12 = &stack0xffffffb8;
      func_?();
      a_03.y = (float)uVar3;
      a_03.x = (float)uVar2;
      a_03.z = fVar6;
      b_06.y = fVar1;
      b_06.x = (float)puVar12;
      b_06.z = fVar9;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_03,b_06,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar13 = 0;
      func_?();
      auVar14._4_8_ = 0;
      auVar14._0_4_ = uVar13;
      b.y = (float)puVar12;
      b.x = fVar6;
      b.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar14 << 0x40),b,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar15 = 0;
      func_?();
      a.z = 0.0;
      uStack_16 = (undefined4)(uVar15 >> 0x20);
      a.x = (float)uVar2;
      a.y = (float)uStack_16;
      b_00.y = (float)puVar12;
      b_00.x = fVar6;
      b_00.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,b_00,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar2 = 0;
      uVar3 = 0;
      fVar9 = 0.0;
      func_?();
      a_00.y = (float)uVar3;
      a_00.x = (float)uVar2;
      a_00.z = fVar9;
      b_01.y = (float)puVar12;
      b_01.x = fVar6;
      b_01.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_00,b_01,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar2 = 0;
      uVar3 = 0;
      fVar9 = 0.0;
      func_?();
      a_01.y = (float)uVar3;
      a_01.x = (float)uVar2;
      a_01.z = fVar9;
      b_02.y = (float)puVar12;
      b_02.x = fVar6;
      b_02.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_01,b_02,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      uVar13 = 0;
      func_?();
      auVar17._4_8_ = 0;
      auVar17._0_4_ = uVar13;
      b_03.y = (float)puVar12;
      b_03.x = fVar6;
      b_03.z = fVar1;
      pUVar10 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar17 << 0x40),b_03,
                          (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,*pUVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      pLVar18 = Cube_CreateCubeCornersFromTopFace
                         ((List_1_UnityEngine_Vector3_ *)this,Face__Enum_Bottom,(MethodInfo *)0x0);
      return pLVar18;
    }
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  pLVar18 = (List_1_UnityEngine_Vector3_ *)(*pcVar19)();
  return pLVar18;
}


/* Void UnIndentFace(Cube, Face) */

void Assembly-CSharp.dll::Cube::Cube_UnIndentFace(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  uVar2 = 0;
  pfVar3 = &pVVar1->vector[0].y;
  do {
    if (pVVar1 == (Vector3__Array *)0x0) {
      func_?();
      goto code_?;
    }
    if (pVVar1->max_length <= uVar2) goto code_?;
    *pfVar3 = 0.5;
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 3;
  } while ((int)uVar2 < 4);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar4 = Cube_GetFromTopRotation((Quaternion *)&stack0xffffffc8,face,(MethodInfo *)0x0);
  pVVar5 = pVVar1->vector;
  uVar2 = 0;
  fVar6 = pQVar4->w;
  puVar7 = (undefined *)pQVar4->y;
  while( true ) {
    if ((int)pVVar1->max_length <= (int)uVar2) {
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      Cube_SetFace(cube,face,pVVar1,(MethodInfo *)0x0);
      return;
    }
    if (pVVar1->max_length <= uVar2) break;
    uVar8._0_4_ = pVVar5->x;
    uVar8._4_4_ = pVVar5->y;
    puVar9 = (undefined *)pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar7 = &UNK_?;
      func_?();
    }
    rotation.y = (float)puVar7;
    rotation.x = (float)((ulonglong)uVar8 >> 0x20);
    rotation.z = 0.0;
    rotation.w = fVar6;
    point.z = (float)puVar9;
    point.x = (float)(int)uVar8;
    point.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffe4,rotation,point,(MethodInfo *)0x0);
    pVVar10 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&stack0xffffffd8,*pVVar10,3,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar10->x;
    uVar11._4_4_ = pVVar10->y;
    fVar12 = pVVar10->z;
    face = (Face__Enum)&UNK_?;
    puVar13 = (undefined8 *)func_?();
    uVar2 = uVar2 + 1;
    pVVar5 = pVVar5 + 1;
    *puVar13 = uVar11;
    *(float *)(puVar13 + 1) = fVar12;
    puVar7 = puVar9;
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Cube() */

void Assembly-CSharp.dll::Cube::Cube__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
  return;
}


/* Cube(Byte[], Byte[]) */

void Assembly-CSharp.dll::Cube::Cube__ctor
               (Cube *this,Byte__Array *byteCorners,Byte__Array *faceMaterials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 != (Byte__Array *)0x0) {
    unaff_ESI = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar1,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)0x0;
    if (unaff_ESI != (Object *)0x0) {
      pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    }
    (this->fields)._.byteCorners = pBVar1;
    method_00 = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    (this->fields)._.faceMaterials = pBVar1;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
    (this->fields)._.byteCorners = byteCorners;
    (this->fields)._.faceMaterials = faceMaterials;
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
              ((CubeBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Cube(BytePacker, Byte) */

void Assembly-CSharp.dll::Cube::Cube__ctor_1
               (Cube *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 != (Byte__Array *)0x0) {
    pCVar2 = (Cube *)mscorlib.dll::System::Array::Array_Clone((Array *)pBVar1,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)0x0;
    if (pCVar2 != (Cube *)0x0) {
      pBVar1 = (Byte__Array *)func_?(pCVar2,TypeInfo__System__Byte);
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    }
    (this->fields)._.byteCorners = pBVar1;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    (this->fields)._.faceMaterials = pBVar1;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_3);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_EBX = (Byte__Array__Class *)(uint)byteFlags;
    unaff_ESI = this;
    if ((byteFlags & 1) == 0) {
      if (bp == (BytePacker *)0x0) goto code_?;
      pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                         (bp,8,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
    }
    unaff_EBX = (Byte__Array__Class *)(byteFlags & 0xffffff02);
    (this->fields)._.byteCorners = pBVar1;
    if (bp != (BytePacker *)0x0) {
      if ((char)unaff_EBX == '\0') {
        pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                           (bp,6,(MethodInfo *)0x0);
        (this->fields)._.faceMaterials = pBVar1;
        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                  ((CubeBase *)this,(MethodInfo *)0x0);
        return;
      }
      uVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                        (bp,(MethodInfo *)0x0);
      uVar5 = 0;
      while (pBVar1 = (this->fields)._.faceMaterials, pBVar1 != (Byte__Array *)0x0) {
        if (pBVar1->max_length <= uVar5) goto code_?;
        pBVar1->vector[uVar5] = uVar4;
        uVar5 = uVar5 + 1;
        if (5 < (int)uVar5) {
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                    ((CubeBase *)this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  this = unaff_ESI;
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pCVar2 = this;
code_?:
  func_?(pCVar2,unaff_EBX);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

