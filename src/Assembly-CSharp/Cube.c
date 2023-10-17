
/* Void AddDeltaToFace(Vector3[] ByRef, Single, Vector3) */

void Assembly-CSharp.dll::Cube::Cube_AddDeltaToFace
               (Vector3__Array **faceVertices,float delta,Vector3 axis,MethodInfo *method)

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
      uVar4 = *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3);
      fStack_5 = (float)uVar4;
      fStack_6 = (float)((ulonglong)uVar4 >> 0x20);
      uVar1 = uVar1 + 1;
      *(ulonglong *)((int)&pVVar2->vector[0].x + iVar3) =
           CONCAT44(fStack_6 + axis.y * delta,fStack_5 + axis.x * delta);
      *(float *)((int)&pVVar2->vector[0].z + iVar3) =
           *(float *)((int)&pVVar2->vector[0].z + iVar3) + axis.z * delta;
      iVar3 = iVar3 + 0xc;
      pVVar2 = *faceVertices;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      pVVar2 = *faceVertices;
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
                         ((Vector3 *)&stack0xfffffff0,vector,3,(MethodInfo *)0x0);
      fVar5 = pVVar4->z;
      if (pVVar2->max_length <= uVar1) goto code_?;
      *(undefined8 *)((int)&pVVar2->vector[0].x + iVar3) = *(undefined8 *)pVVar4;
      uVar1 = uVar1 + 1;
      *(float *)((int)&pVVar2->vector[0].z + iVar3) = fVar5;
      iVar3 = iVar3 + 0xc;
      pVVar2 = *faceVertices;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Cube Clone() */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone(Cube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte,in_ECX,unaff_EBP);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)this,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (Cube *)0x0;
  }
  if ((this != (Cube *)0x0) && (pBVar2 = (this->fields)._.byteCorners, pBVar2 != (Byte__Array *)0x0)
     ) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
    pBVar2 = (this->fields)._.faceMaterials;
    if (pBVar2 != (Byte__Array *)0x0) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
               PlayableBehaviour_Clone((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
      puVar4 = &UNK_?;
      pCVar5 = (Cube *)func_?(TypeInfo__Cube);
      if (pCVar5 != (Cube *)0x0) {
        if ((pOVar3 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
          if (puVar4 == (undefined *)0x0) {
            pBVar2 = (Byte__Array *)0x0;
code_?:
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      ((CubeBase *)pCVar5,pBVar2,(Byte__Array *)0x0,(MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
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
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar5 = (Cube *)(*pcVar7)();
  return pCVar5;
}


/* Cube Clone(Cube) */

Cube * Assembly-CSharp.dll::Cube::Cube_Clone_1(Cube *original,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  bVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)original,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (Cube *)0x0;
  }
  if ((original != (Cube *)0x0) &&
     (pBVar2 = (original->fields)._.byteCorners, pBVar2 != (Byte__Array *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
    pBVar2 = (original->fields)._.faceMaterials;
    if (pBVar2 != (Byte__Array *)0x0) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
               PlayableBehaviour_Clone((PlayableBehaviour *)pBVar2,(MethodInfo *)0x0);
      puVar4 = &UNK_?;
      pCVar5 = (Cube *)func_?(TypeInfo__Cube);
      if (pCVar5 != (Cube *)0x0) {
        if ((pOVar3 == (Object *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
          if (puVar4 == (undefined *)0x0) {
            pBVar2 = (Byte__Array *)0x0;
code_?:
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      ((CubeBase *)pCVar5,pBVar2,(Byte__Array *)0x0,(MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
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
  }
  func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
  if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    *(char *)&unaff_EBX[-1].fields._items =
         *(char *)&unaff_EBX[-1].fields._items + extraout_DL +
         ((longlong)(int)((longlong)(int)&stack0xfffffffc * 0x53) !=
         (longlong)(int)&stack0xfffffffc * 0x53);
    pcVar1 = (code *)swi(1);
    pLVar2 = (List_1_UnityEngine_Vector3_ *)(*pcVar1)();
    return pLVar2;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
            (this,8,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_)
  ;
  unaff_EBX = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
  if (unaff_EBX == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
            (unaff_EBX,8,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  iVar3 = 0;
  if (cubeCorners == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  while (iVar3 < (cubeCorners->fields)._size) {
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         iVar3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pMVar5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pUVar6 = (this->fields)._items;
    pSVar7 = pUVar4->m_DelagateCallback;
    pOVar8 = pUVar4->m_DelagateState;
    pMVar9 = pUVar4->m_WaitHandle;
    piVar10 = &(this->fields)._version;
    *piVar10 = *piVar10 + 1;
    if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) goto code_?;
    uVar11 = (this->fields)._size;
    if (uVar11 < pUVar6->max_length) {
      (this->fields)._size = uVar11 + 1;
      if (pUVar6->max_length <= uVar11) goto code_?;
      pUVar6->vector[uVar11].m_DelagateCallback = pSVar7;
      pUVar6->vector[uVar11].m_DelagateState = pOVar8;
      pUVar6->vector[uVar11].m_WaitHandle = pMVar9;
      iVar3 = iVar3 + 1;
    }
    else {
      (*(pMVar5->klass->rgctx_data[0xb].method)->virtualMethodPointer)();
      iVar3 = iVar3 + 1;
    }
  }
  iVar3 = 0;
  while (iVar3 < (cubeCorners->fields)._size) {
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         iVar3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pMVar5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pUVar6 = (unaff_EBX->fields)._items;
    pSVar7 = pUVar4->m_DelagateCallback;
    pOVar8 = pUVar4->m_DelagateState;
    pMVar9 = pUVar4->m_WaitHandle;
    piVar10 = &(unaff_EBX->fields)._version;
    *piVar10 = *piVar10 + 1;
    if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) goto code_?;
    uVar11 = (unaff_EBX->fields)._size;
    if (uVar11 < pUVar6->max_length) {
      (unaff_EBX->fields)._size = uVar11 + 1;
      if (pUVar6->max_length <= uVar11) goto code_?;
      pUVar6->vector[uVar11].m_DelagateCallback = pSVar7;
      pUVar6->vector[uVar11].m_DelagateState = pOVar8;
      pUVar6->vector[uVar11].m_WaitHandle = pMVar9;
      iVar3 = iVar3 + 1;
    }
    else {
      (*(pMVar5->klass->rgctx_data[0xb].method)->virtualMethodPointer)();
      iVar3 = iVar3 + 1;
    }
  }
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    puVar13 = (undefined8 *)&stack0x000000b8;
    goto code_?;
  case Face__Enum_Front:
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    puVar13 = (undefined8 *)&stack0x000000b8;
    goto code_?;
  case Face__Enum_Back:
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar14 = pUVar4->m_DelagateCallback;
    uVar15 = pUVar4->m_DelagateState;
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_16 = pUVar4->m_WaitHandle;
    in_stack_17 = (UnitySynchronizationContext_WorkRequest *)uVar14;
    in_stack_18 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)uVar15;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_17 = (UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4;
    in_stack_16 = (ManualResetEvent *)0x2;
    in_stack_18 = unaff_EBX;
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        (in_stack_17,unaff_EBX,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 5;
    break;
  case Face__Enum_Left:
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar19 = pUVar4->m_DelagateCallback;
    uVar20 = pUVar4->m_DelagateState;
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_16 = pUVar4->m_WaitHandle;
    in_stack_17 = (UnitySynchronizationContext_WorkRequest *)uVar19;
    in_stack_18 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)uVar20;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_17 = (UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4;
    in_stack_16 = (ManualResetEvent *)0x1;
    in_stack_18 = unaff_EBX;
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        (in_stack_17,unaff_EBX,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 6;
    break;
  case Face__Enum_Right:
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,7,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar21 = pUVar4->m_DelagateCallback;
    uVar22 = pUVar4->m_DelagateState;
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
    ;
    in_stack_16 = pUVar4->m_WaitHandle;
    in_stack_17 = (UnitySynchronizationContext_WorkRequest *)uVar21;
    in_stack_18 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)uVar22;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)unaff_EBX,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    in_stack_12 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    in_stack_17 = (UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4;
    in_stack_16 = (ManualResetEvent *)0x3;
    in_stack_18 = unaff_EBX;
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        (in_stack_17,unaff_EBX,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,0,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,1,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,2,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,3,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,4,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,5,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,6,
               (AnimatedTextureOffset_TextureOffsetAnimationData)*pUVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
    index = 4;
  }
  pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                      ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,unaff_EBX,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
  puVar13 = (undefined8 *)&stack0x000001f8;
code_?:
  pMVar9 = pUVar4->m_WaitHandle;
  *puVar13 = *(undefined8 *)pUVar4;
  *(ManualResetEvent **)(puVar13 + 1) = pMVar9;
  mscorlib.dll::System::Collections::Generic::
  List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
  List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
            ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this,in_stack_23,
             in_stack_24,in_stack_25);
  cubeCorners = (List_1_UnityEngine_Vector3_ *)this;
code_?:
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    pQVar26 = Cube_GetFromTopRotation((Quaternion *)&puStack_27,direction,(MethodInfo *)0x0);
  }
  else {
    pQVar26 = Cube_GetFromTopRotation((Quaternion *)&puStack_27,direction,(MethodInfo *)0x0);
  }
  puStack_27 = (undefined *)pQVar26->x;
  fVar28 = pQVar26->y;
  puVar29 = (undefined *)pQVar26->z;
  __return_storage_ptr__ = (Vector3 *)pQVar26->w;
  for (iVar3 = 0;
      iVar3 < (((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners)->fields
               )._size; iVar3 = iVar3 + 1) {
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                        ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
                         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners,
                         iVar3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    rotation.y = fVar28;
    rotation.x = (float)puStack_27;
    rotation.z = (float)puVar29;
    rotation.w = (float)__return_storage_ptr__;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd8,rotation,(Vector3)*pUVar4,(MethodInfo *)0x0);
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffcc;
    puVar29 = &UNK_?;
    pAVar31 = (AnimatedTextureOffset_TextureOffsetAnimationData *)
              MathFunctions::MathFunctions_RoundVector
                        (__return_storage_ptr__,*pVVar30,3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)cubeCorners,iVar3,
               *pAVar31,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
  }
  return (List_1_UnityEngine_Vector3_ *)
         (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)cubeCorners;
}


/* Byte[] CreateMaterialArray(Byte) */

Byte__Array *
Assembly-CSharp.dll::Cube::Cube_CreateMaterialArray(uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppBStack_1 = &TypeInfo__System__Byte;
    func_?();
    cRam_? = '\x01';
  }
  ppBStack_1 = (Byte__Array__Class **)0x6;
  pBStack_2 = TypeInfo__System__Byte;
  pBVar3 = (Byte__Array *)func_?();
  if (pBVar3 != (Byte__Array *)0x0) {
    if (pBVar3->max_length != 0) {
      pBVar3->vector[0] = material;
      if ((((1 < pBVar3->max_length) && (pBVar3->vector[1] = material, 2 < pBVar3->max_length)) &&
          (pBVar3->vector[2] = material, 3 < pBVar3->max_length)) &&
         ((pBVar3->vector[3] = material, 4 < pBVar3->max_length &&
          (pBVar3->vector[4] = material, 5 < pBVar3->max_length)))) {
        pBVar3->vector[5] = material;
        return pBVar3;
      }
    }
    ppBStack_1 = (Byte__Array__Class **)0x0;
    pBStack_2 = (Byte__Array__Class *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pBVar3 = (Byte__Array *)(*pcVar4)();
    return pBVar3;
  }
  ppBStack_1 = (Byte__Array__Class **)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar4)();
  return pBVar3;
}


/* Boolean FaceIsOutOfCubeBoundery(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_FaceIsOutOfCubeBoundery
               (Vector3__Array *faceVertices,MethodInfo *method)

{
  fVar1 = 0.0;
  if (faceVertices == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar2 = faceVertices->vector;
    while( true ) {
      if ((int)faceVertices->max_length <= (int)fVar1) {
        return 1;
      }
      pVStack_3 = pVVar2;
      if (faceVertices->max_length <= (uint)fVar1) break;
      index = (int32_t)pVVar2->x;
      method_00 = (MethodInfo *)pVVar2->y;
      pVVar4 = MathFunctions::MathFunctions_RoundVector(&VStack_5,*pVVar2,3,(MethodInfo *)0x0);
      fVar6 = pVVar4->y;
      fVar7 = pVVar4->z;
      if (faceVertices->max_length <= (uint)fVar1) break;
      pVVar2->x = pVVar4->x;
      pVVar2->y = fVar6;
      iVar8 = 0;
      pVVar2->z = fVar7;
      fVar7 = 0.0;
      do {
        VStack_5.z = 0.0;
        VStack_5.x = fVar1;
        VStack_5.y = fVar7;
        pVVar2 = (Vector3 *)func_?();
        fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (pVVar2,index,method_00);
        if (_UNK_? <= fStack_9) {
          method_00 = (MethodInfo *)&UNK_?;
          pVVar2 = (Vector3 *)func_?(fVar1,fVar7,0);
          fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar2,index,method_00);
          if (fStack_9 <= _UNK_?) {
            iVar8 = iVar8 + 1;
          }
        }
        fVar7 = (float)((int)fVar7 + 1);
      } while ((int)fVar7 < 3);
      if (iVar8 == 3) {
        return 0;
      }
      fVar1 = (float)((int)fVar1 + 1);
      pVVar2 = pVStack_3 + 1;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void GetAverageLightValue(Face, Int32, Dictionary`2[MV.WorldObject.IntVector,Cell], IntVector,
   Color ByRef, Boolean) */

void Assembly-CSharp.dll::Cube::Cube_GetAverageLightValue
               (Face__Enum face,int32_t vertex,Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,
               IntVector cubePos,Color *color,bool inside,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                   );
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(0xb1a4);
    cRam_? = '\x01';
  }
  CStack_1.cube = (Cube *)0x0;
  CStack_1.lightValue = 0;
  CStack_1._5_3_ = 0;
  uVar2 = vertex + face * 4;
  if (inside == 0) {
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar3 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsets;
  }
  else {
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pIVar3 = TypeInfo__SharedCubeFunctions->static_fields->LightTestOffsetsInside;
  }
  if (pIVar3 != (IntVector__Array__Array *)0x0) {
    if (pIVar3->max_length <= uVar2) goto code_?;
    pIVar4 = pIVar3->vector[uVar2];
    pIVar5 = pIVar4->vector;
    iVar6 = 0;
    uVar2 = 0;
    if (pIVar4 != (IntVector__Array *)0x0) {
      while (uVar7 = (undefined2)((uint)in_stack_8 >> 0x10), uVar2 < pIVar4->max_length) {
        uVar9 = pIVar5->x;
        in_stack_10 = pIVar5->z;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        in_stack_8 = (MethodInfo *)CONCAT22(uVar7,cubePos.z);
        IVar11.z = uVar9;
        IVar11._0_4_ = auStack_12;
        i2.y = in_stack_13;
        i2.x = in_stack_10;
        i2.z = cubePos.x;
        IVar11 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (IVar11,i2,in_stack_8);
        if (cells == (Dictionary_2_MV_WorldObject_IntVector_Cell_ *)0x0) goto code_?;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,Cell]::Dictionary_2_MV_WorldObject_IntVector_Cell__TryGetValue
                          (cells,*IVar11._0_4_,&CStack_1,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cell>__TryGetValue_MV__WorldObject__IntVector__Cell__
                          );
        fVar15 = _UNK_?;
        uVar16 = 0xff;
        if (bVar14 != 0) {
          uVar16 = (uint)CStack_1.lightValue;
        }
        iVar6 = iVar6 + uVar16;
        uVar2 = uVar2 + 1;
        pIVar5 = pIVar5 + 1;
        if (3 < (int)uVar2) {
          color->r = (float)iVar6 / _UNK_?;
          color->b = (float)iVar6 / fVar15;
          color->g = (float)iVar6 / fVar15;
          return;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Vector3[] GetCorners(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetCorners(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
           Cube_GetCorners_2(pVVar1,face,(MethodInfo *)0x0);
    if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                         (this,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                         );
      return (Vector3__Array *)pUVar2;
    }
  }
  func_?();
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
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    if (clockwiseCorners != (List_1_UnityEngine_Vector2_ *)0x0) {
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      func_?(pLVar1,VVar2.x - _UNK_?,_UNK_?,in_stack_3 - _UNK_?
                      ,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      direction_00 = VVar2.x - _UNK_?;
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000020 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack4 = pLVar1;
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000038 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack5 = pLVar1;
      func_?();
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000050 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack7 = pLVar1;
      func_?();
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack9 = pLVar1;
      func_?();
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (clockwiseCorners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack12 = VVar11.y - _UNK_?;
      pMStack13 =
           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uStack14 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack15 = pLVar1;
      func_?();
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (clockwiseCorners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      pLStack17 = pLVar1;
      func_?();
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar1 = Cube_CreateCubeCornersFromTopFace(pLVar1,(Face__Enum)direction_00,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
  return pLVar1;
}


/* List`1[UnityEngine.Vector3] GetCorners(Vector3[], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_GetCorners_2
          (Vector3__Array *counterClockwiseFace,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pQVar1 = Cube_GetToTopRotation((Quaternion *)&stack0xffffffd4,direction,(MethodInfo *)0x0);
  uVar2 = 0;
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (counterClockwiseFace != (Vector3__Array *)0x0) {
    pVVar7 = counterClockwiseFace->vector;
    for (; (int)uVar2 < (int)counterClockwiseFace->max_length; uVar2 = uVar2 + 1) {
      if (counterClockwiseFace->max_length <= uVar2) goto code_?;
      rotation.y = fVar4;
      rotation.x = fVar3;
      rotation.z = fVar5;
      rotation.w = fVar6;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_9,rotation,*pVVar7,(MethodInfo *)0x0);
      fVar10 = pVVar8->y;
      fVar11 = pVVar8->z;
      if (counterClockwiseFace->max_length <= uVar2) goto code_?;
      pVVar7->x = pVVar8->x;
      pVVar7->y = fVar10;
      pVVar7->z = fVar11;
      if (counterClockwiseFace->max_length <= uVar2) goto code_?;
      fStack_12 = pVVar7->x;
      uStack_13 = 0;
      fStack_14 = pVVar7->z;
      pVVar7->x = (float)(int)(ulonglong)(uint)fStack_12;
      pVVar7->y = (float)(int)((ulonglong)(uint)fStack_12 >> 0x20);
      pVVar7->z = fStack_14;
      pVVar7 = pVVar7 + 1;
    }
    pLVar15 = (List_1_UnityEngine_Vector3_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    if (pLVar15 != (List_1_UnityEngine_Vector3_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar15,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      if (counterClockwiseFace->max_length != 0) {
        fStack_14 = counterClockwiseFace->vector[0].z;
        func_?(pLVar15,counterClockwiseFace->vector[0].x,_UNK_?);
        if (1 < counterClockwiseFace->max_length) {
          fStack_14 = counterClockwiseFace->vector[1].z;
          func_?(pLVar15,counterClockwiseFace->vector[1].x,_UNK_?);
          if (2 < counterClockwiseFace->max_length) {
            fStack_14 = counterClockwiseFace->vector[2].z;
            func_?(pLVar15,counterClockwiseFace->vector[2].x,_UNK_?);
            if (3 < counterClockwiseFace->max_length) {
              fStack_14 = counterClockwiseFace->vector[3].z;
              func_?(pLVar15,counterClockwiseFace->vector[3].x,_UNK_?);
              if (3 < counterClockwiseFace->max_length) {
                fStack_14 = counterClockwiseFace->vector[3].z;
                func_?(pLVar15,counterClockwiseFace->vector[3].x,_UNK_?);
                if (2 < counterClockwiseFace->max_length) {
                  fStack_14 = counterClockwiseFace->vector[2].z;
                  func_?(pLVar15,counterClockwiseFace->vector[2].x,_UNK_?);
                  if (1 < counterClockwiseFace->max_length) {
                    fStack_14 = counterClockwiseFace->vector[1].z;
                    func_?(pLVar15,counterClockwiseFace->vector[1].x,_UNK_?);
                    if (counterClockwiseFace->max_length != 0) {
                      fStack_14 = counterClockwiseFace->vector[0].z;
                      func_?(pLVar15,counterClockwiseFace->vector[0].x,_UNK_?);
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pLVar15 = Cube_CreateCubeCornersFromTopFace(pLVar15,direction,(MethodInfo *)0x0)
                      ;
                      return pLVar15;
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
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pLVar15 = (List_1_UnityEngine_Vector3_ *)(*pcVar16)();
  return pLVar15;
}


/* IntVector GetCubePosAboveFace(IntVector, Face) */

IntVector Assembly-CSharp.dll::Cube::Cube_GetCubePosAboveFace
                    (IntVector localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  *(undefined4 *)localPos._0_4_ = 0;
  *(undefined2 *)(localPos._0_4_ + 4) = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)localPos._0_4_,CONCAT22(in_stack_1,localPos.z),
             CONCAT22((undefined2)face,in_stack_1),face,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar2 = Cube_GetFaceAxis((Vector3 *)&puStack_3,(Face__Enum)method,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  *(short *)localPos._0_4_ = *(short *)localPos._0_4_ + (short)(int)(float)uVar4;
  *(short *)(localPos._0_4_ + 2) = *(short *)(localPos._0_4_ + 2) + (short)(int)(float)uVar5;
  *(short *)(localPos._0_4_ + 4) = *(short *)(localPos._0_4_ + 4) + (short)(int)fVar6;
  IVar7.z = extraout_DX;
  IVar7.x = localPos.x;
  IVar7.y = localPos.y;
  return IVar7;
}


/* Vector3[] GetEdge(Cube, Face, Edge) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdge
          (Cube *cube,Face__Enum face,Edge__Enum edge,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
    pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,2);
    switch(edge) {
    case Edge__Enum_Front:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length == 0) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
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
code_?:
          if (1 < pVVar2->max_length) {
            pVVar2->vector[1].x = (float)(int)uVar5;
            pVVar2->vector[1].y = (float)(int)((ulonglong)uVar5 >> 0x20);
            pVVar2->vector[1].z = fVar4;
code_?:
            return pVVar2;
          }
          goto code_?;
        }
      }
      break;
    case Edge__Enum_Back:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 3) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
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
          goto code_?;
        }
      }
      break;
    case Edge__Enum_Left:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 4) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
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
          goto code_?;
        }
      }
      break;
    case Edge__Enum_Right:
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (pVVar1->max_length < 2) goto code_?;
        if (pVVar2 != (Vector3__Array *)0x0) {
          fVar3 = pVVar1->vector[1].y;
          fVar4 = pVVar1->vector[1].z;
          if (pVVar2->max_length == 0) goto code_?;
          pVVar2->vector[0].x = pVVar1->vector[1].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = fVar4;
          if (pVVar1->max_length < 3) goto code_?;
          uVar5._0_4_ = pVVar1->vector[2].x;
          uVar5._4_4_ = pVVar1->vector[2].y;
          fVar4 = pVVar1->vector[2].z;
          goto code_?;
        }
      }
      break;
    default:
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar5 = func_?();
  uVar5._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
  uVar6 = (uint)uVar5 & 0x80105409;
  puVar7 = (uint *)((uVar6 - 0x3c) + uVar5._4_4_);
  *puVar7 = *puVar7 | uVar5._4_4_;
  puVar7 = (uint *)((uVar6 - 5) + uVar5._4_4_);
  *puVar7 = *puVar7 | uVar5._4_4_;
  puVar7 = (uint *)((uVar6 - 0x34) + uVar5._4_4_);
  *puVar7 = *puVar7 | uVar5._4_4_;
  pcVar8 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar8)();
  return pVVar1;
}


/* Vector3[] GetEdgeVerticesWorld(GameObject, Cube, Face, Edge, IntVector) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetEdgeVerticesWorld
          (GameObject *gameObject,Cube *cube,Face__Enum face,Edge__Enum edge,IntVector iVector,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_GetEdge(cube,face,edge,(MethodInfo *)0x0);
  if (gameObject != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length == 0) goto code_?;
      uVar3 = pVVar1->vector[0].x;
      uVar4 = pVVar1->vector[0].y;
      if (pTVar2 != (Transform *)0x0) {
        position_00.y = (float)uVar4 + (float)(int)iVector.y;
        position_00.x = (float)uVar3 + (float)(int)iVector.x;
        position_00.z = pVVar1->vector[0].z + (float)(int)iVector.z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                            ((Vector3 *)&stack0xffffffe4,pTVar2,position_00,(MethodInfo *)0x0);
        fVar6 = pVVar5->y;
        fVar7 = pVVar5->z;
        if (pVVar1->max_length == 0) goto code_?;
        pVVar1->vector[0].x = pVVar5->x;
        pVVar1->vector[0].y = fVar6;
        pVVar1->vector[0].z = fVar7;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)0x0,(MethodInfo *)0x0);
        if (pVVar1->max_length < 2) goto code_?;
        uVar8 = pVVar1->vector[1].x;
        uVar9 = pVVar1->vector[1].y;
        if (pTVar2 != (Transform *)0x0) {
          position.y = (float)uVar9 + (float)(int)iVector.y;
          position.x = (float)uVar8 + (float)(int)iVector.x;
          position.z = pVVar1->vector[1].z + (float)(int)iVector.z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                              ((Vector3 *)&stack0xffffffe4,pTVar2,position,(MethodInfo *)0x0);
          fVar6 = pVVar5->y;
          fVar7 = pVVar5->z;
          if (1 < pVVar1->max_length) {
            pVVar1->vector[1].x = pVVar5->x;
            pVVar1->vector[1].y = fVar6;
            pVVar1->vector[1].z = fVar7;
            return pVVar1;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar10)();
  return pVVar1;
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
    func_?(&TypeInfo__Cube);
    func_?(&TypeRef__Edge);
    func_?(0xd46c);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  handle = TypeRef__Edge;
  fStack_6 = 0.0;
  fStack_7 = _UNK_?;
  EStack_8 = Edge__Enum_None;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIStack_9 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIStack_9 != (IEnumerator *)0x0) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        uStack_1 = 0xffffffff;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return EStack_8;
        }
        *unaff_FS_OFFSET = uStack_3;
        return EStack_8;
      }
      if (pIStack_9 == (IEnumerator *)0x0) break;
      uVar12 = 0;
      uVar13 = (pIStack_9->klass->_1).interface_offsets_count;
      if (uVar13 != 0) {
        do {
          if (pIStack_9->klass->interfaceOffsets[uVar12].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar14 = &(pIStack_9->klass->vtable).get_Current +
                     pIStack_9->klass->interfaceOffsets[uVar12].offset;
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      pVVar14 = (VirtualInvokeData *)func_?();
code_?:
      piVar15 = (int *)(*pVVar14->methodPtr)();
      if (piVar15 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar15 + 0x20) != (TypeInfo__Edge->_0).element_class)
      goto code_?;
      pEVar16 = (Edge__Enum *)func_?();
      EVar17 = *pEVar16;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      pVVar18 = Cube_GetEdgeVerticesWorld(gameObject,cube,face,EVar17,iVector,(MethodInfo *)0x0);
      fStack_6 = 1000.0;
      if (pVVar18 == (Vector3__Array *)0x0) break;
      if (pVVar18->max_length == 0) {
        func_?();
code_?:
        func_?();
        break;
      }
      if (pVVar18->max_length < 2) goto code_?;
      MathFunctions::MathFunctions_DistancePointLine
                (pos,pVVar18->vector[0],pVVar18->vector[1],&fStack_6,(MethodInfo *)0x0);
      if (fStack_6 < fStack_7) {
        fStack_7 = fStack_6;
        EStack_8 = EVar17;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  EVar17 = (*pcVar19)();
  return EVar17;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__WorldObject__Face;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIVar4 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIVar4 != (IEnumerator *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return Face__Enum_Top;
      }
      if (pIVar4 == (IEnumerator *)0x0) break;
      piVar7 = (int *)func_?();
      if (piVar7 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar7 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      pFVar8 = (Face__Enum *)func_?();
      FVar9 = *pFVar8;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar10 = Cube_GetFace_1(corners,FVar9,(MethodInfo *)0x0);
      iVar6 = 0;
      iStack_11 = 0;
      if (triangleVertices == (Vector3__Array *)0x0) break;
code_?:
      if (iVar6 < (int)triangleVertices->max_length) {
        func_?();
        iVar12 = 0;
        if (pVVar10 == (Vector3__Array *)0x0) break;
        for (; iVar12 < (int)pVVar10->max_length; iVar12 = iVar12 + 1) {
          func_?();
          fVar13 = (float10)func_?();
          if ((double)(float)fVar13 < _UNK_?) {
            iStack_11 = iStack_11 + 1;
            iVar6 = iVar6 + 1;
            goto code_?;
          }
        }
        iVar6 = iVar6 + 1;
        goto code_?;
      }
      if (iStack_11 == 3) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return FVar9;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  FVar9 = (*pcVar14)();
  return FVar9;
}


/* Vector3 GetFaceAxis(Face) */

Vector3 * Assembly-CSharp.dll::Cube::Cube_GetFaceAxis
                    (Vector3 *__return_storage_ptr__,Face__Enum face,MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    break;
  case Face__Enum_Front:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  case Face__Enum_Right:
    puVar1 = (undefined8 *)func_?(auStack_2,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).y;
    fVar4 = (pVVar5->zeroVector).z;
    __return_storage_ptr__->x = (pVVar5->zeroVector).x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (pVVar5->downVector).y;
  fVar4 = (pVVar5->downVector).z;
  __return_storage_ptr__->x = (pVVar5->downVector).x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Face GetFaceIdentityFromLocalDir(Vector3) */

Face__Enum
Assembly-CSharp.dll::Cube::Cube_GetFaceIdentityFromLocalDir(Vector3 localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_no_face_found);
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
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  iVar1 = (int)iVector.x;
  iVar2 = (int)iVector.y;
  iVar3 = (int)iVector.z;
  if (cube != (Cube *)0x0) {
    pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar4 = Cube_GetFace_1(pVVar4,face,(MethodInfo *)0x0);
    if (gameObject != (GameObject *)0x0) {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pVVar4 != (Vector3__Array *)0x0) {
        if (pVVar4->max_length == 0) goto code_?;
        uStack_6._0_4_ = pVVar4->vector[0].x;
        uStack_6._4_4_ = pVVar4->vector[0].y;
        fStack_7 = pVVar4->vector[0].z;
        VStack_8.y = (float)uStack_6._4_4_ + (float)iVar2;
        VStack_8.x = (float)(undefined4)uStack_6 + (float)iVar1;
        VStack_8.z = fStack_7 + (float)iVar3;
        if (pTVar5 != (Transform *)0x0) {
          position.y = (float)uStack_6._4_4_ + (float)iVar2;
          position.x = (float)(undefined4)uStack_6 + (float)iVar1;
          position.z = VStack_8.z;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                             (&VStack_8,pTVar5,position,(MethodInfo *)0x0);
          fVar10 = pVVar9->y;
          fVar11 = pVVar9->z;
          if (pVVar4->max_length == 0) goto code_?;
          pVVar4->vector[0].x = pVVar9->x;
          pVVar4->vector[0].y = fVar10;
          pVVar4->vector[0].z = fVar11;
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (gameObject,(MethodInfo *)0x0);
          if (pVVar4->max_length < 2) goto code_?;
          VStack_8.x = pVVar4->vector[1].x;
          VStack_8.y = pVVar4->vector[1].y;
          VStack_8.z = pVVar4->vector[1].z;
          uStack_6 = CONCAT44(VStack_8.y + (float)iVar2,VStack_8.x + (float)iVar1);
          fStack_7 = VStack_8.z + (float)iVar3;
          if (pTVar5 != (Transform *)0x0) {
            position_00.y = VStack_8.y + (float)iVar2;
            position_00.x = VStack_8.x + (float)iVar1;
            position_00.z = fStack_7;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                               (&VStack_8,pTVar5,position_00,(MethodInfo *)0x0);
            fVar10 = pVVar9->y;
            fVar11 = pVVar9->z;
            if (pVVar4->max_length < 2) goto code_?;
            pVVar4->vector[1].x = pVVar9->x;
            pVVar4->vector[1].y = fVar10;
            pVVar4->vector[1].z = fVar11;
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (gameObject,(MethodInfo *)0x0);
            if (pVVar4->max_length < 3) goto code_?;
            VStack_8.x = pVVar4->vector[2].x;
            VStack_8.y = pVVar4->vector[2].y;
            VStack_8.z = pVVar4->vector[2].z;
            uStack_6 = CONCAT44(VStack_8.y + (float)iVar2,VStack_8.x + (float)iVar1);
            fStack_7 = VStack_8.z + (float)iVar3;
            if (pTVar5 != (Transform *)0x0) {
              position_01.y = VStack_8.y + (float)iVar2;
              position_01.x = VStack_8.x + (float)iVar1;
              position_01.z = fStack_7;
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                 (&VStack_8,pTVar5,position_01,(MethodInfo *)0x0);
              fVar10 = pVVar9->y;
              fVar11 = pVVar9->z;
              if (pVVar4->max_length < 3) goto code_?;
              pVVar4->vector[2].x = pVVar9->x;
              pVVar4->vector[2].y = fVar10;
              pVVar4->vector[2].z = fVar11;
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (gameObject,(MethodInfo *)0x0);
              if (pVVar4->max_length < 4) goto code_?;
              VStack_8.x = pVVar4->vector[3].x;
              VStack_8.y = pVVar4->vector[3].y;
              VStack_8.z = pVVar4->vector[3].z;
              uStack_6 = CONCAT44(VStack_8.y + (float)iVar2,VStack_8.x + (float)iVar1);
              fStack_7 = VStack_8.z + (float)iVar3;
              if (pTVar5 != (Transform *)0x0) {
                position_02.y = VStack_8.y + (float)iVar2;
                position_02.x = VStack_8.x + (float)iVar1;
                position_02.z = fStack_7;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_TransformPoint(&VStack_8,pTVar5,position_02,(MethodInfo *)0x0);
                fVar10 = pVVar9->y;
                fVar11 = pVVar9->z;
                if (3 < pVVar4->max_length) {
                  pVVar4->vector[3].x = pVVar9->x;
                  pVVar4->vector[3].y = fVar10;
                  pVVar4->vector[3].z = fVar11;
                  return pVVar4;
                }
                goto code_?;
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
  pcVar12 = (code *)swi(3);
  pVVar4 = (Vector3__Array *)(*pcVar12)();
  return pVVar4;
}


/* Vector3[] GetFace(Vector3[], Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetFace_1
          (Vector3__Array *corners,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
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
  pQVar1 = __return_storage_ptr__;
  cVar2 = cRam_?;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (cVar2 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar3->identityQuaternion).y;
  fVar5 = (pQVar3->identityQuaternion).z;
  fVar6 = (pQVar3->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar3->identityQuaternion).x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  if (cVar2 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar7->forwardVector).x;
  fVar5 = (pVVar7->forwardVector).y;
  fVar6 = (pVVar7->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fromDirection.y = fVar5;
  fromDirection.x = fVar4;
  fromDirection.z = fVar6;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            ((Quaternion *)&stack0xffffffcc,fromDirection,
             TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (pVVar7->upVector).x;
  fVar8 = (pVVar7->upVector).y;
  pQVar9 = (Quaternion *)(pVVar7->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = &TypeInfo__UnityEngine__Vector3->static_fields->backVector;
  fVar11 = pVVar10->x;
  pMVar12 = (MethodInfo *)pVVar10->y;
  fromDirection_00.y = fVar8;
  fromDirection_00.x = fVar6;
  fromDirection_00.z = (float)pQVar9;
  pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                      ((Quaternion *)&stack0xffffffdc,fromDirection_00,*pVVar10,(MethodInfo *)0x0);
  fVar4 = pQVar13->x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  pMVar14 = (MethodInfo *)pVVar10->x;
  uVar15 = pVVar10->y;
  fromDirection_01.y = (float)uVar15;
  fromDirection_01.x = (float)pMVar14;
  pQVar13 = (Quaternion *)&stack0xffffffec;
  pQVar16 = (Quaternion *)&UNK_?;
  fromDirection_01.z = fVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            (pQVar13,fromDirection_01,*pVVar10,(MethodInfo *)0x0);
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    fVar8 = fVar4;
    __return_storage_ptr__ = pQVar16;
    direction = (Face__Enum)pQVar13;
    method = pMVar14;
    break;
  case Face__Enum_Front:
    __return_storage_ptr__->x = fVar4;
    __return_storage_ptr__->y = (float)pQVar16;
    __return_storage_ptr__->z = (float)pQVar13;
    __return_storage_ptr__->w = (float)pMVar14;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    lhs.y = (float)pQVar9;
    lhs.x = fVar8;
    lhs.z = fVar11;
    lhs.w = (float)pMVar12;
    rhs.y = (float)pQVar9;
    rhs.x = fVar8;
    rhs.z = fVar11;
    rhs.w = (float)pMVar12;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                        ((Quaternion *)&stack0xffffffcc,lhs,rhs,(MethodInfo *)0x0);
    goto code_?;
  case Face__Enum_Left:
    rotation.y = (float)pQVar9;
    rotation.x = fVar8;
    rotation.z = fVar11;
    rotation.w = (float)pMVar12;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                        ((Quaternion *)&stack0xffffffcc,rotation,(MethodInfo *)0x0);
code_?:
    fVar8 = pQVar9->x;
    __return_storage_ptr__ = (Quaternion *)pQVar9->y;
    direction = (Face__Enum)pQVar9->z;
    method = (MethodInfo *)pQVar9->w;
    break;
  case Face__Enum_Right:
    __return_storage_ptr__ = pQVar9;
    direction = (Face__Enum)fVar11;
    method = pMVar12;
  }
  lhs_00.y = (float)__return_storage_ptr__;
  lhs_00.x = fVar8;
  lhs_00.z = (float)direction;
  lhs_00.w = (float)method;
  rhs_00.y = (float)pQVar16;
  rhs_00.x = fVar4;
  rhs_00.z = (float)pQVar13;
  rhs_00.w = (float)pMVar14;
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                      ((Quaternion *)&stack0xffffffcc,lhs_00,rhs_00,(MethodInfo *)0x0);
  fVar4 = pQVar9->y;
  fVar5 = pQVar9->z;
  fVar6 = pQVar9->w;
  pQVar1->x = pQVar9->x;
  pQVar1->y = fVar4;
  pQVar1->z = fVar5;
  pQVar1->w = fVar6;
code_?:
  return pQVar1;
}


/* Boolean GetPlaneVertices(Vector3[], Vector3[] ByRef) */

bool Assembly-CSharp.dll::Cube::Cube_GetPlaneVertices
               (Vector3__Array *corners,Vector3__Array **planeVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>);
  if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__HashSet__);
    uVar1 = 0;
    if (corners != (Vector3__Array *)0x0) {
      pVVar2 = corners->vector;
      for (; (int)uVar1 < (int)corners->max_length; uVar1 = uVar1 + 1) {
        if (corners->max_length <= uVar1) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Add
                  (this,*pVVar2,
                   MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  );
        pVVar2 = pVVar2 + 1;
      }
      if ((this->fields)._count < 3) {
        return 0;
      }
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           this,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                 );
        if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)this_01,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                    (&UStack_3,this_00,0,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                    );
          func_?();
          pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                    UnitySynchronizationContext+WorkRequest]::
                    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                              (&UStack_3,this_00,1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          auStack_5._0_4_ = pUVar4->m_DelagateCallback;
          auStack_5._4_4_ = pUVar4->m_DelagateState;
          pMStack_6 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
          ;
          pMStack_7 = pUVar4->m_WaitHandle;
          func_?();
          pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                    UnitySynchronizationContext+WorkRequest]::
                    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                              (&UStack_3,this_00,1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar8 = pUVar4->m_DelagateCallback;
          uVar9 = pUVar4->m_DelagateState;
          pMVar10 = pUVar4->m_WaitHandle;
          pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                    UnitySynchronizationContext+WorkRequest]::
                    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                              (&UStack_3,this_00,0,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar11 = pUVar4->m_DelagateCallback;
          uVar12 = pUVar4->m_DelagateState;
          UStack_3.m_WaitHandle = (ManualResetEvent *)&UNK_?;
          value_00.y = (float)uVar9 - (float)uVar12;
          value_00.x = (float)uVar8 - (float)uVar11;
          value_00.z = (float)pMVar10 - (float)pUVar4->m_WaitHandle;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&UStack_3,value_00,(MethodInfo *)0x0);
          fVar13 = pVVar2->x;
          fVar14 = pVVar2->y;
          iStack15 = 2;
          while( true ) {
            if ((this_00->fields)._size <= iStack15) {
              return 0;
            }
            pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                                ((UnitySynchronizationContext_WorkRequest *)(auStack_5 + 4),this_00
                                 ,iStack15,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            uVar16._0_4_ = pUVar4->m_DelagateCallback;
            uVar16._4_4_ = pUVar4->m_DelagateState;
            pMVar10 = pUVar4->m_WaitHandle;
            pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                                ((UnitySynchronizationContext_WorkRequest *)(undefined4)uVar16,
                                 (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                 uVar16._4_4_,(int32_t)pMVar10,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            uVar17 = pUVar4->m_DelagateCallback;
            uVar18 = pUVar4->m_DelagateState;
            UStack_3.m_WaitHandle =
                 (ManualResetEvent *)((float)pMVar10 - (float)pUVar4->m_WaitHandle);
            value.y = (float)((ulonglong)uVar16 >> 0x20) - (float)uVar18;
            value.x = (float)uVar16 - (float)uVar17;
            value.z = (float)UStack_3.m_WaitHandle;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffff98,value,(MethodInfo *)0x0);
            uVar19 = pVVar2->x;
            uVar20 = pVVar2->y;
            fVar21 = fVar14 * (float)uVar20 + fVar13 * (float)uVar19 + pVVar2->z * 4.1831328e-29;
            if ((fVar21 < _UNK_?) && (_UNK_? < (double)fVar21)) break;
            iStack15 = iStack15 + 1;
          }
          pMStack22 =
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
          uStack23 = CONCAT44(this_00,&stack0xffffff98);
          pLStack24 =
               (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)&UNK_?;
          puVar25 = (undefined8 *)func_?();
          uStack23 = *puVar25;
          pMStack22 =
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
          ;
          iStack15 = *(int *)(puVar25 + 1);
          pLStack24 = this_01;
          func_?();
          pLVar26 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Class *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                    UnitySynchronizationContext+WorkRequest]::
                    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                              (this_01,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                              );
          this_01->klass = pLVar26;
          func_?();
          return 1;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  bVar28 = (*pcVar27)();
  return bVar28;
}


/* Quaternion GetToTopRotation(Face) */

Quaternion *
Assembly-CSharp.dll::Cube::Cube_GetToTopRotation
          (Quaternion *__return_storage_ptr__,Face__Enum direction,MethodInfo *method)

{
  cVar1 = cRam_?;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar2->identityQuaternion).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7._0_4_ = (pVVar6->forwardVector).x;
  uVar7._4_4_ = (pVVar6->forwardVector).y;
  fVar3 = (pVVar6->forwardVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fromDirection.z = fVar3;
  fromDirection.x = (float)uVar7;
  fromDirection.y = SUB84(uVar7,4);
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            ((Quaternion *)&stack0xffffffcc,fromDirection,
             TypeInfo__UnityEngine__Vector3->static_fields->leftVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8._0_4_ = (pVVar6->upVector).x;
  uVar8._4_4_ = (pVVar6->upVector).y;
  fVar3 = (pVVar6->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = &TypeInfo__UnityEngine__Vector3->static_fields->backVector;
  fVar4 = pVVar9->x;
  fVar5 = pVVar9->y;
  fVar10 = SUB84(uVar8,4);
  fromDirection_00.z = fVar3;
  fromDirection_00.x = (float)uVar8;
  fromDirection_00.y = SUB84(uVar8,4);
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                     ((Quaternion *)&stack0xffffffdc,fromDirection_00,*pVVar9,(MethodInfo *)0x0);
  fVar12 = pQVar11->x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  fVar14 = pVVar9->x;
  uVar15 = pVVar9->y;
  fromDirection_01.y = (float)uVar15;
  fromDirection_01.x = fVar14;
  pQVar11 = (Quaternion *)&stack0xffffffec;
  puVar16 = &UNK_?;
  fromDirection_01.z = fVar13;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
            (pQVar11,fromDirection_01,*pVVar9,(MethodInfo *)0x0);
  switch(direction) {
  default:
    goto code_?;
  case Face__Enum_Bottom:
    rotation.y = (float)puVar16;
    rotation.x = fVar12;
    rotation.z = (float)pQVar11;
    rotation.w = fVar14;
    pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffcc,rotation,(MethodInfo *)0x0);
    fVar4 = pQVar17->x;
    fVar5 = pQVar17->y;
    fVar13 = pQVar17->z;
    in_stack_18 = pQVar17->w;
    rotation_04.y = (float)puVar16;
    rotation_04.x = fVar12;
    rotation_04.z = (float)pQVar11;
    rotation_04.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffdc,rotation_04,(MethodInfo *)0x0);
    in_stack_19 = pQVar11->x;
    in_stack_20 = pQVar11->y;
    in_stack_21 = pQVar11->z;
    in_stack_22 = pQVar11->w;
    goto code_?;
  case Face__Enum_Front:
    rotation_00.y = (float)puVar16;
    rotation_00.x = fVar12;
    rotation_00.z = (float)pQVar11;
    rotation_00.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffcc,rotation_00,(MethodInfo *)0x0);
    fVar3 = pQVar11->y;
    fVar4 = pQVar11->z;
    fVar5 = pQVar11->w;
    __return_storage_ptr__->x = pQVar11->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    rotation_01.y = (float)puVar16;
    rotation_01.x = fVar12;
    rotation_01.z = (float)pQVar11;
    rotation_01.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffdc,rotation_01,(MethodInfo *)0x0);
    fVar12 = pQVar11->x;
    fVar13 = pQVar11->y;
    fVar14 = pQVar11->z;
    fVar23 = pQVar11->w;
    rotation_05.y = fVar3;
    rotation_05.x = fVar10;
    rotation_05.z = fVar4;
    rotation_05.w = fVar5;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffec,rotation_05,(MethodInfo *)0x0);
    lhs.y = fVar13;
    lhs.x = fVar12;
    lhs.z = fVar14;
    lhs.w = fVar23;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&stack0xffffffdc,lhs,*pQVar11,(MethodInfo *)0x0);
    break;
  case Face__Enum_Left:
    rotation_02.y = (float)puVar16;
    rotation_02.x = fVar12;
    rotation_02.z = (float)pQVar11;
    rotation_02.w = fVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
              ((Quaternion *)&stack0xffffffdc,rotation_02,(MethodInfo *)0x0);
    fVar13 = 0.0;
    goto code_?;
  case Face__Enum_Right:
    rotation_03.y = (float)puVar16;
    rotation_03.x = fVar12;
    rotation_03.z = (float)pQVar11;
    rotation_03.w = fVar14;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffdc,rotation_03,(MethodInfo *)0x0);
  }
  fVar13 = pQVar11->z;
  in_stack_18 = pQVar11->w;
  rotation_06.y = fVar3;
  rotation_06.x = fVar10;
  rotation_06.z = fVar4;
  rotation_06.w = fVar5;
  fVar4 = pQVar11->x;
  fVar5 = pQVar11->y;
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffcc,rotation_06,(MethodInfo *)0x0);
  in_stack_19 = pQVar11->x;
  in_stack_20 = pQVar11->y;
  in_stack_21 = pQVar11->z;
  in_stack_22 = pQVar11->w;
code_?:
  in_stack_24 = (MethodInfo *)0x0;
code_?:
  lhs_00.y = fVar5;
  lhs_00.x = fVar4;
  lhs_00.z = fVar13;
  lhs_00.w = in_stack_18;
  rhs.y = in_stack_20;
  rhs.x = in_stack_19;
  rhs.z = in_stack_21;
  rhs.w = in_stack_22;
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     ((Quaternion *)&stack0xffffffcc,lhs_00,rhs,in_stack_24);
  fVar3 = pQVar11->y;
  fVar4 = pQVar11->z;
  fVar5 = pQVar11->w;
  __return_storage_ptr__->x = pQVar11->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
code_?:
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
    if (corners == (Vector3__Array *)0x0) {
code_?:
      bVar1 = 0;
      uVar2 = func_?();
      iVar3 = (int)uVar2;
      *(undefined1 **)((int)&puStack_4 + -(uint)bVar1 + (-0x18 - *extraout_ECX) + 0x18) =
           &stack0xffffffe8 + -(uint)bVar1 + (-0x18 - *extraout_ECX) + 0x18;
      uVar5 = (undefined3)((ulonglong)uVar2 >> 0x28);
      bVar1 = (byte)((ulonglong)uVar2 >> 0x20) &
              *(byte *)(iVar3 + -0x69 + (int)((ulonglong)uVar2 >> 0x20));
      uVar6 = CONCAT31(uVar5,bVar1 & *(byte *)(iVar3 + 0x1b + CONCAT31(uVar5,bVar1)));
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + 0x1b + uVar6);
      *puVar7 = *puVar7 & uVar6;
      puVar7 = (uint *)(iVar3 + -0x34 + uVar6);
      *puVar7 = *puVar7 & uVar6;
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puStack_4 = (undefined *)0x0;
    func_?();
    if (triangleVertices == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = puStack_9;
    func_?(0,uStack_10);
    func_?(&uStack_10,1);
    func_?(1,uStack_10,puStack_9);
    uVar11 = 2;
    break;
  case 1:
    if (corners == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = (undefined *)0x0;
    func_?();
    if (triangleVertices == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = puStack_9;
    func_?(0,uStack_10);
    func_?(&uStack_10,2);
    func_?(1,uStack_10,puStack_9);
    uVar11 = 3;
    break;
  case 2:
    if (corners == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = (undefined *)0x4;
    func_?();
    if (triangleVertices == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = puStack_9;
    func_?(0,uStack_10);
    func_?(&uStack_10,5);
    func_?(1,uStack_10,puStack_9);
    uVar11 = 6;
    break;
  case 3:
    if (corners == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = (undefined *)0x4;
    func_?();
    if (triangleVertices == (Vector3__Array *)0x0) goto code_?;
    puStack_4 = puStack_9;
    func_?(0,uStack_10);
    func_?(&uStack_10,6);
    func_?(1,uStack_10,puStack_9);
    uVar11 = 7;
    break;
  default:
    goto code_?;
  }
  func_?(&uStack_10,uVar11);
  func_?(2,uStack_10,puStack_9);
code_?:
  return;
}


/* Vector3[] GetVertices(Cube) */

Vector3__Array * Assembly-CSharp.dll::Cube::Cube_GetVertices(Cube *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    return pVVar1;
  }
  func_?();
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
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar1 = Cube_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          return pVVar1;
        }
        if (pVVar1->max_length <= uVar2) break;
        uVar4 = pVVar3->x;
        uVar5 = pVVar3->y;
        uVar2 = uVar2 + 1;
        pVVar3->x = (float)uVar4 + (float)(int)iVector.x;
        pVVar3->y = (float)uVar5 + (float)(int)iVector.y;
        pVVar3->z = pVVar3->z + (float)(int)iVector.z;
        pVVar3 = pVVar3 + 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar6)();
  return pVVar1;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_GetVertices_1(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
              (this,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)corners,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,5,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack1 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    pMStack2 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pMStack1 = (MethodInfo *)this;
    func_?();
    pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffff0,this,1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uStack4._0_4_ = pUVar3->m_DelagateCallback;
    uStack4._4_4_ = pUVar3->m_DelagateState;
    pMStack5 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
    ;
    pMStack6 = pUVar3->m_WaitHandle;
    pMStack2 = (MethodInfo *)this;
    func_?();
    pUVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                       );
    return (Vector3__Array *)pUVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3__Array *)(*pcVar8)();
  return pVVar9;
}


/* Void GetVisibleFaceVertices(Cube, CubeModelChunk+FaceData[] ByRef, IntVector,
   Dictionary`2[MV.WorldObject.IntVector,Cell], Int32 ByRef) */

void Assembly-CSharp.dll::Cube::Cube_GetVisibleFaceVertices
               (Cube *cube,CubeModelChunk_FaceData__Array **faceData,IntVector iVector,
               Dictionary_2_MV_WorldObject_IntVector_Cell_ *cells,int32_t *index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xbf58);
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  iVar1 = (int)iVector.z;
  iVar2 = (int)iVector.x;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?((short)TypeInfo__Cube);
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?((short)TypeInfo__MV__WorldObject__CubeBase);
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__Cube->static_fields->cornersBookkeeping,(MethodInfo *)0x0);
  *index = 0;
  if (cube != (Cube *)0x0) {
    if (((cube->fields).hiddenSides & 1) == 0) {
      pCVar3 = *faceData;
      if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
        if (pCVar3->max_length == 0) goto code_?;
        if (pCVar3->vector[0] != (CubeModelChunk_FaceData *)0x0) {
          (pCVar3->vector[0]->fields).face = 0;
          pCVar3 = *faceData;
          if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
            if (pCVar3->max_length <= (uint)*index) goto code_?;
            if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
              pVVar4 = (pCVar3->vector[*index]->fields).faceVertices;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Cube);
              }
              pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
              if (pVVar5 != (Vector3__Array *)0x0) {
                if (pVVar5->max_length == 0) goto code_?;
                uVar6 = pVVar5->vector[0].x;
                uVar7 = pVVar5->vector[0].y;
                fVar8 = pVVar5->vector[0].z;
                if (pVVar4 != (Vector3__Array *)0x0) {
                  if (pVVar4->max_length == 0) goto code_?;
                  pVVar4->vector[0].x = (float)iVar2 + (float)uVar6;
                  pVVar4->vector[0].y = (float)(int)iVector.y + (float)uVar7;
                  pVVar4->vector[0].z = (float)iVar1 + fVar8;
                  pCVar3 = *faceData;
                  if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                    uVar9 = *index;
                    if (pCVar3->max_length <= uVar9) goto code_?;
                    if (pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0) {
                      pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                      if ((pCVar10 != (Color__Array *)0x0) &&
                         (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                         pVVar4 != (Vector3__Array *)0x0)) {
                        if ((pVVar4->max_length == 0) || (pCVar10->max_length == 0))
                        goto code_?;
                        pfVar11 = &pVVar4->vector[0].y;
                        Cube_GetAverageLightValue
                                  ((pCVar3->vector[uVar9]->fields).face,0,cells,iVector,
                                   pCVar10->vector,
                                   *pfVar11 <= _UNK_? && _UNK_? != *pfVar11,
                                   (MethodInfo *)0x0);
                        if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                          if ((*faceData)->max_length <= (uint)*index) goto code_?;
                          if ((*faceData)->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                            pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices;
                            pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                            if (pVVar5 != (Vector3__Array *)0x0) {
                              if (pVVar5->max_length < 2) goto code_?;
                              uVar12 = pVVar5->vector[1].x;
                              uVar13 = pVVar5->vector[1].y;
                              fVar8 = pVVar5->vector[1].z;
                              if (pVVar4 != (Vector3__Array *)0x0) {
                                if (pVVar4->max_length < 2) goto code_?;
                                pVVar4->vector[1].x = (float)iVar2 + (float)uVar12;
                                pVVar4->vector[1].y = (float)(int)iVector.y + (float)uVar13;
                                pVVar4->vector[1].z = (float)iVar1 + fVar8;
                                pCVar3 = *faceData;
                                if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                  uVar9 = *index;
                                  if (pCVar3->max_length <= uVar9) goto code_?;
                                  if (((pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0)
                                      && (pCVar10 = ((*faceData)->vector[uVar9]->fields).colors,
                                         pCVar10 != (Color__Array *)0x0)) &&
                                     (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                                     pVVar4 != (Vector3__Array *)0x0)) {
                                    if ((pVVar4->max_length < 2) || (pCVar10->max_length < 2))
                                    goto code_?;
                                    pfVar11 = &pVVar4->vector[1].y;
                                    bVar14 = *pfVar11 <= _UNK_? && _UNK_? != *pfVar11;
                                    Cube_GetAverageLightValue
                                              ((uint)bVar14,1,cells,iVector,pCVar10->vector + 1,
                                               bVar14,(MethodInfo *)0x0);
                                    if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                      if ((*faceData)->max_length <= (uint)*index)
                                      goto code_?;
                                      if ((*faceData)->vector[*index] !=
                                          (CubeModelChunk_FaceData *)0x0) {
                                        pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices
                                        ;
                                        pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                                        if (pVVar5 != (Vector3__Array *)0x0) {
                                          if (pVVar5->max_length < 3) goto code_?;
                                          uVar15 = pVVar5->vector[2].x;
                                          uVar16 = pVVar5->vector[2].y;
                                          fVar8 = pVVar5->vector[2].z;
                                          if (pVVar4 != (Vector3__Array *)0x0) {
                                            if (pVVar4->max_length < 3) goto code_?;
                                            pVVar4->vector[2].x = (float)iVar2 + (float)uVar15;
                                            pVVar4->vector[2].y =
                                                 (float)(int)iVector.y + (float)uVar16;
                                            pVVar4->vector[2].z = (float)iVar1 + fVar8;
                                            pCVar3 = *faceData;
                                            if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                              uVar9 = *index;
                                              if (pCVar3->max_length <= uVar9)
                                              goto code_?;
                                              if (pCVar3->vector[uVar9] !=
                                                  (CubeModelChunk_FaceData *)0x0) {
                                                pCVar10 = ((*faceData)->vector[uVar9]->fields).
                                                          colors;
                                                if ((pCVar10 != (Color__Array *)0x0) &&
                                                   (pVVar4 = TypeInfo__Cube->static_fields->
                                                              cornersBookkeeping,
                                                   pVVar4 != (Vector3__Array *)0x0)) {
                                                  if ((pVVar4->max_length < 3) ||
                                                     (pCVar10->max_length < 3))
                                                  goto code_?;
                                                  pfVar11 = &pVVar4->vector[2].y;
                                                  bVar14 = *pfVar11 <= _UNK_? &&
                                                           _UNK_? != *pfVar11;
                                                  index = (int32_t *)(uint)bVar14;
                                                  faceData = (CubeModelChunk_FaceData__Array **)
                                                             (pCVar10->vector + 2);
                                                  Cube_GetAverageLightValue
                                                            ((pCVar3->vector[uVar9]->fields).face,
                                                             2,(
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)faceData,bVar14,
                                                  (MethodInfo *)0x0);
                                                  if (((Dictionary_2_MV_WorldObject_IntVector_Cell_
                                                        *)faceData)->klass !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).namespaze <= (char *)*index)
                                                  goto code_?;
                                                  pIVar17 = (&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)[(int)*index]
                                                  .array;
                                                  if (pIVar17 != (Il2CppArrayType *)0x0) {
                                                    piVar18 = pIVar17->sizes;
                                                    pVVar4 = TypeInfo__Cube->static_fields->
                                                              cornersBookkeeping;
                                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                                      if (pVVar4->max_length < 4)
                                                      goto code_?;
                                                      uVar19 = pVVar4->vector[3].x;
                                                      uVar20 = pVVar4->vector[3].y;
                                                      fVar8 = pVVar4->vector[3].z;
                                                      if (piVar18 != (int *)0x0) {
                                                        if ((uint)piVar18[3] < 4)
                                                        goto code_?;
                                                        *(ulonglong *)(piVar18 + 0xd) =
                                                             CONCAT44((float)(int)iVector.y +
                                                                      (float)uVar20,
                                                                      (float)iVar2 + (float)uVar19);
                                                        piVar18[0xf] = (int)((float)iVar1 + fVar8)
                                                        ;
                                                        pDVar21 = ((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass;
                                                  if (pDVar21 !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    pcVar22 = (char *)*index;
                                                    if ((pDVar21->_0).namespaze <= pcVar22)
                                                    goto code_?;
                                                    iVar23 = (&(pDVar21->_0).byval_arg.data)
                                                             [(int)pcVar22].__klassIndex;
                                                    if (iVar23 != 0) {
                                                      pIVar24 = ((&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)
                                                  [(int)pcVar22].generic_class)->cached_class;
                                                  if ((pIVar24 != (Il2CppClass *)0x0) &&
                                                     (pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping,
                                                     pVVar4 != (Vector3__Array *)0x0)) {
                                                    if ((pVVar4->max_length < 4) ||
                                                       (pIVar24->namespaze < (char *)0x4))
                                                    goto code_?;
                                                    pfVar11 = &pVVar4->vector[3].y;
                                                    Cube_GetAverageLightValue
                                                              (*(Face__Enum *)(iVar23 + 0x10),3,
                                                               (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)&pIVar24->fields,
                                                  *pfVar11 <= _UNK_? &&
                                                  _UNK_? != *pfVar11,(MethodInfo *)0x0);
                                                  cube = (Cube *)0x2;
                                                  *index = *index + 1;
                                                  cells = (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData;
                                                  goto code_?;
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
    else {
code_?:
      if (((cube->fields).hiddenSides & 2) == 0) {
        pCVar3 = *faceData;
        if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
          if (pCVar3->max_length <= (uint)*index) goto code_?;
          if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
            (pCVar3->vector[*index]->fields).face = 1;
            pCVar3 = *faceData;
            if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
              if (pCVar3->max_length <= (uint)*index) goto code_?;
              if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                pVVar4 = (pCVar3->vector[*index]->fields).faceVertices;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Cube);
                }
                pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (pVVar5 != (Vector3__Array *)0x0) {
                  if (pVVar5->max_length < 5) goto code_?;
                  uVar25 = pVVar5->vector[4].x;
                  uVar26 = pVVar5->vector[4].y;
                  fVar8 = pVVar5->vector[4].z;
                  if (pVVar4 != (Vector3__Array *)0x0) {
                    if (pVVar4->max_length == 0) goto code_?;
                    pVVar4->vector[0].x = (float)iVar2 + (float)uVar25;
                    pVVar4->vector[0].y = (float)(int)iVector.y + (float)uVar26;
                    pVVar4->vector[0].z = (float)iVar1 + fVar8;
                    pCVar3 = *faceData;
                    if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                      uVar9 = *index;
                      if (pCVar3->max_length <= uVar9) goto code_?;
                      if (pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0) {
                        pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                        if ((pCVar10 != (Color__Array *)0x0) &&
                           (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                           pVVar4 != (Vector3__Array *)0x0)) {
                          if ((pVVar4->max_length < 5) || (pCVar10->max_length == 0))
                          goto code_?;
                          Cube_GetAverageLightValue
                                    ((pCVar3->vector[uVar9]->fields).face,0,cells,iVector,
                                     pCVar10->vector,_UNK_? < pVVar4->vector[4].y,
                                     (MethodInfo *)0x0);
                          if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                            if ((*faceData)->max_length <= (uint)*index) goto code_?;
                            if ((*faceData)->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                              pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices;
                              pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                              if (pVVar5 != (Vector3__Array *)0x0) {
                                if (pVVar5->max_length < 6) goto code_?;
                                uVar27 = pVVar5->vector[5].x;
                                uVar28 = pVVar5->vector[5].y;
                                fVar8 = pVVar5->vector[5].z;
                                if (pVVar4 != (Vector3__Array *)0x0) {
                                  if (pVVar4->max_length < 2) goto code_?;
                                  pVVar4->vector[1].x = (float)iVar2 + (float)uVar27;
                                  pVVar4->vector[1].y = (float)(int)iVector.y + (float)uVar28;
                                  pVVar4->vector[1].z = (float)iVar1 + fVar8;
                                  pCVar3 = *faceData;
                                  if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                    uVar9 = *index;
                                    if (pCVar3->max_length <= uVar9) goto code_?;
                                    if (((pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0)
                                        && (pCVar10 = ((*faceData)->vector[uVar9]->fields).colors,
                                           pCVar10 != (Color__Array *)0x0)) &&
                                       (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                                       pVVar4 != (Vector3__Array *)0x0)) {
                                      if ((pVVar4->max_length < 6) || (pCVar10->max_length < 2))
                                      goto code_?;
                                      bVar14 = _UNK_? < pVVar4->vector[5].y;
                                      Cube_GetAverageLightValue
                                                ((uint)bVar14,1,cells,iVector,pCVar10->vector + 1,
                                                 bVar14,(MethodInfo *)0x0);
                                      if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                        if ((*faceData)->max_length <= (uint)*index)
                                        goto code_?;
                                        if ((*faceData)->vector[*index] !=
                                            (CubeModelChunk_FaceData *)0x0) {
                                          pVVar4 = ((*faceData)->vector[*index]->fields).
                                                    faceVertices;
                                          pVVar5 = TypeInfo__Cube->static_fields->
                                                    cornersBookkeeping;
                                          if (pVVar5 != (Vector3__Array *)0x0) {
                                            if (pVVar5->max_length < 7) goto code_?;
                                            uVar29 = pVVar5->vector[6].x;
                                            uVar30 = pVVar5->vector[6].y;
                                            fVar8 = pVVar5->vector[6].z;
                                            if (pVVar4 != (Vector3__Array *)0x0) {
                                              if (pVVar4->max_length < 3) goto code_?;
                                              pVVar4->vector[2].x = (float)iVar2 + (float)uVar29;
                                              pVVar4->vector[2].y =
                                                   (float)(int)iVector.y + (float)uVar30;
                                              pVVar4->vector[2].z = (float)iVar1 + fVar8;
                                              pCVar3 = *faceData;
                                              if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0)
                                              {
                                                uVar9 = *index;
                                                if (pCVar3->max_length <= uVar9)
                                                goto code_?;
                                                if (pCVar3->vector[uVar9] !=
                                                    (CubeModelChunk_FaceData *)0x0) {
                                                  pCVar10 = ((*faceData)->vector[uVar9]->fields).
                                                            colors;
                                                  if ((pCVar10 != (Color__Array *)0x0) &&
                                                     (pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping,
                                                     pVVar4 != (Vector3__Array *)0x0)) {
                                                    if ((pVVar4->max_length < 7) ||
                                                       (pCVar10->max_length < 3))
                                                    goto code_?;
                                                    bVar14 = _UNK_? < pVVar4->vector[6].y;
                                                    index = (int32_t *)(uint)bVar14;
                                                    faceData = (CubeModelChunk_FaceData__Array **)
                                                               (pCVar10->vector + 2);
                                                    Cube_GetAverageLightValue
                                                              ((pCVar3->vector[uVar9]->fields).
                                                               face,2,(
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)faceData,bVar14,
                                                  (MethodInfo *)0x0);
                                                  if (((Dictionary_2_MV_WorldObject_IntVector_Cell_
                                                        *)faceData)->klass !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).namespaze <= (char *)*index)
                                                  goto code_?;
                                                  pIVar17 = (&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)[(int)*index]
                                                  .array;
                                                  if (pIVar17 != (Il2CppArrayType *)0x0) {
                                                    piVar18 = pIVar17->sizes;
                                                    pVVar4 = TypeInfo__Cube->static_fields->
                                                              cornersBookkeeping;
                                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                                      if (pVVar4->max_length < 8)
                                                      goto code_?;
                                                      uVar31 = pVVar4->vector[7].x;
                                                      uVar32 = pVVar4->vector[7].y;
                                                      fVar8 = pVVar4->vector[7].z;
                                                      if (piVar18 != (int *)0x0) {
                                                        if ((uint)piVar18[3] < 4)
                                                        goto code_?;
                                                        *(ulonglong *)(piVar18 + 0xd) =
                                                             CONCAT44((float)(int)iVector.y +
                                                                      (float)uVar32,
                                                                      (float)iVar2 + (float)uVar31);
                                                        piVar18[0xf] = (int)((float)iVar1 + fVar8)
                                                        ;
                                                        pDVar21 = ((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass;
                                                  if (pDVar21 !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    pcVar22 = (char *)*index;
                                                    if ((pDVar21->_0).namespaze <= pcVar22)
                                                    goto code_?;
                                                    iVar23 = (&(pDVar21->_0).byval_arg.data)
                                                             [(int)pcVar22].__klassIndex;
                                                    if (iVar23 != 0) {
                                                      pIVar24 = ((&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)
                                                  [(int)pcVar22].generic_class)->cached_class;
                                                  if ((pIVar24 != (Il2CppClass *)0x0) &&
                                                     (pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping,
                                                     pVVar4 != (Vector3__Array *)0x0)) {
                                                    if ((pVVar4->max_length < 8) ||
                                                       (pIVar24->namespaze < (char *)0x4))
                                                    goto code_?;
                                                    Cube_GetAverageLightValue
                                                              (*(Face__Enum *)(iVar23 + 0x10),3,
                                                               (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)&pIVar24->fields,
                                                  _UNK_? < pVVar4->vector[7].y,
                                                  (MethodInfo *)0x0);
                                                  cube = (Cube *)0x2;
                                                  *index = *index + 1;
                                                  cells = (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData;
                                                  goto code_?;
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
      else {
code_?:
        if (((cube->fields).hiddenSides & 4) == 0) {
          pCVar3 = *faceData;
          if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
            if (pCVar3->max_length <= (uint)*index) goto code_?;
            if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
              (pCVar3->vector[*index]->fields).face = 2;
              pCVar3 = *faceData;
              if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                if (pCVar3->max_length <= (uint)*index) goto code_?;
                if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                  pVVar4 = (pCVar3->vector[*index]->fields).faceVertices;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Cube);
                  }
                  pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                  if (pVVar5 != (Vector3__Array *)0x0) {
                    if (pVVar5->max_length < 8) goto code_?;
                    uVar33 = pVVar5->vector[7].x;
                    uVar34 = pVVar5->vector[7].y;
                    fVar8 = pVVar5->vector[7].z;
                    if (pVVar4 != (Vector3__Array *)0x0) {
                      if (pVVar4->max_length == 0) goto code_?;
                      pVVar4->vector[0].x = (float)iVar2 + (float)uVar33;
                      pVVar4->vector[0].y = (float)(int)iVector.y + (float)uVar34;
                      pVVar4->vector[0].z = (float)iVar1 + fVar8;
                      pCVar3 = *faceData;
                      if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                        uVar9 = *index;
                        if (pCVar3->max_length <= uVar9) goto code_?;
                        if (pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0) {
                          pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                          if ((pCVar10 != (Color__Array *)0x0) &&
                             (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                             pVVar4 != (Vector3__Array *)0x0)) {
                            if ((pVVar4->max_length < 8) || (pCVar10->max_length == 0))
                            goto code_?;
                            Cube_GetAverageLightValue
                                      ((pCVar3->vector[uVar9]->fields).face,0,cells,iVector,
                                       pCVar10->vector,_UNK_? < pVVar4->vector[7].z,
                                       (MethodInfo *)0x0);
                            if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                              if ((*faceData)->max_length <= (uint)*index) goto code_?;
                              if ((*faceData)->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                                pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices;
                                pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                                if (pVVar5 != (Vector3__Array *)0x0) {
                                  if (pVVar5->max_length < 7) goto code_?;
                                  uVar35 = pVVar5->vector[6].x;
                                  uVar36 = pVVar5->vector[6].y;
                                  fVar8 = pVVar5->vector[6].z;
                                  if (pVVar4 != (Vector3__Array *)0x0) {
                                    if (pVVar4->max_length < 2) goto code_?;
                                    pVVar4->vector[1].x = (float)iVar2 + (float)uVar35;
                                    pVVar4->vector[1].y = (float)(int)iVector.y + (float)uVar36;
                                    pVVar4->vector[1].z = (float)iVar1 + fVar8;
                                    pCVar3 = *faceData;
                                    if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                      uVar9 = *index;
                                      if (pCVar3->max_length <= uVar9) goto code_?;
                                      if (((pCVar3->vector[uVar9] !=
                                            (CubeModelChunk_FaceData *)0x0) &&
                                          (pCVar10 = ((*faceData)->vector[uVar9]->fields).colors,
                                          pCVar10 != (Color__Array *)0x0)) &&
                                         (pVVar4 = TypeInfo__Cube->static_fields->
                                                    cornersBookkeeping,
                                         pVVar4 != (Vector3__Array *)0x0)) {
                                        if ((pVVar4->max_length < 7) || (pCVar10->max_length < 2))
                                        goto code_?;
                                        bVar14 = _UNK_? < pVVar4->vector[6].z;
                                        Cube_GetAverageLightValue
                                                  ((uint)bVar14,1,cells,iVector,pCVar10->vector + 1,
                                                   bVar14,(MethodInfo *)0x0);
                                        if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                          if ((*faceData)->max_length <= (uint)*index)
                                          goto code_?;
                                          if ((*faceData)->vector[*index] !=
                                              (CubeModelChunk_FaceData *)0x0) {
                                            pVVar4 = ((*faceData)->vector[*index]->fields).
                                                      faceVertices;
                                            pVVar5 = TypeInfo__Cube->static_fields->
                                                      cornersBookkeeping;
                                            if (pVVar5 != (Vector3__Array *)0x0) {
                                              if (pVVar5->max_length < 2) goto code_?;
                                              uVar37 = pVVar5->vector[1].x;
                                              uVar38 = pVVar5->vector[1].y;
                                              fVar8 = pVVar5->vector[1].z;
                                              if (pVVar4 != (Vector3__Array *)0x0) {
                                                if (pVVar4->max_length < 3) goto code_?;
                                                pVVar4->vector[2].x = (float)iVar2 + (float)uVar37
                                                ;
                                                pVVar4->vector[2].y =
                                                     (float)(int)iVector.y + (float)uVar38;
                                                pVVar4->vector[2].z = (float)iVar1 + fVar8;
                                                pCVar3 = *faceData;
                                                if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0
                                                   ) {
                                                  uVar9 = *index;
                                                  if (pCVar3->max_length <= uVar9)
                                                  goto code_?;
                                                  if (pCVar3->vector[uVar9] !=
                                                      (CubeModelChunk_FaceData *)0x0) {
                                                    pCVar10 = ((*faceData)->vector[uVar9]->fields).
                                                              colors;
                                                    if ((pCVar10 != (Color__Array *)0x0) &&
                                                       (pVVar4 = TypeInfo__Cube->static_fields->
                                                                  cornersBookkeeping,
                                                       pVVar4 != (Vector3__Array *)0x0)) {
                                                      if ((pVVar4->max_length < 2) ||
                                                         (pCVar10->max_length < 3))
                                                      goto code_?;
                                                      bVar14 = _UNK_? < pVVar4->vector[1].z;
                                                      index = (int32_t *)(uint)bVar14;
                                                      faceData = (CubeModelChunk_FaceData__Array **)
                                                                 (pCVar10->vector + 2);
                                                      Cube_GetAverageLightValue
                                                                ((pCVar3->vector[uVar9]->fields).
                                                                 face,2,(
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)faceData,bVar14,
                                                  (MethodInfo *)0x0);
                                                  if (((Dictionary_2_MV_WorldObject_IntVector_Cell_
                                                        *)faceData)->klass !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).namespaze <= (char *)*index)
                                                  goto code_?;
                                                  pIVar17 = (&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)[(int)*index]
                                                  .array;
                                                  if (pIVar17 != (Il2CppArrayType *)0x0) {
                                                    piVar18 = pIVar17->sizes;
                                                    pVVar4 = TypeInfo__Cube->static_fields->
                                                              cornersBookkeeping;
                                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                                      if (pVVar4->max_length == 0)
                                                      goto code_?;
                                                      uVar39 = pVVar4->vector[0].x;
                                                      uVar40 = pVVar4->vector[0].y;
                                                      fVar8 = pVVar4->vector[0].z;
                                                      if (piVar18 != (int *)0x0) {
                                                        if ((uint)piVar18[3] < 4)
                                                        goto code_?;
                                                        *(ulonglong *)(piVar18 + 0xd) =
                                                             CONCAT44((float)(int)iVector.y +
                                                                      (float)uVar40,
                                                                      (float)iVar2 + (float)uVar39)
                                                        ;
                                                        piVar18[0xf] = (int)((float)iVar1 + fVar8)
                                                        ;
                                                        pDVar21 = ((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass;
                                                  if (pDVar21 !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    pcVar22 = (char *)*index;
                                                    if ((pDVar21->_0).namespaze <= pcVar22)
                                                    goto code_?;
                                                    iVar23 = (&(pDVar21->_0).byval_arg.data)
                                                             [(int)pcVar22].__klassIndex;
                                                    if (iVar23 != 0) {
                                                      pIVar24 = ((&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)
                                                  [(int)pcVar22].generic_class)->cached_class;
                                                  if ((pIVar24 != (Il2CppClass *)0x0) &&
                                                     (pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping,
                                                     pVVar4 != (Vector3__Array *)0x0)) {
                                                    if ((pVVar4->max_length == 0) ||
                                                       (pIVar24->namespaze < (char *)0x4))
                                                    goto code_?;
                                                    Cube_GetAverageLightValue
                                                              (*(Face__Enum *)(iVar23 + 0x10),3,
                                                               (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)&pIVar24->fields,
                                                  _UNK_? < pVVar4->vector[0].z,
                                                  (MethodInfo *)0x0);
                                                  cube = (Cube *)0x2;
                                                  *index = *index + 1;
                                                  cells = (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData;
                                                  goto code_?;
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
        else {
code_?:
          if (((cube->fields).hiddenSides & 8) == 0) {
            pCVar3 = *faceData;
            if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
              if (pCVar3->max_length <= (uint)*index) goto code_?;
              if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                (pCVar3->vector[*index]->fields).face = 3;
                pCVar3 = *faceData;
                if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                  if (pCVar3->max_length <= (uint)*index) goto code_?;
                  if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                    pVVar4 = (pCVar3->vector[*index]->fields).faceVertices;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Cube);
                    }
                    pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (pVVar5 != (Vector3__Array *)0x0) {
                      if (pVVar5->max_length < 6) goto code_?;
                      uVar41 = pVVar5->vector[5].x;
                      uVar42 = pVVar5->vector[5].y;
                      fVar8 = pVVar5->vector[5].z;
                      if (pVVar4 != (Vector3__Array *)0x0) {
                        if (pVVar4->max_length == 0) goto code_?;
                        pVVar4->vector[0].x = (float)iVar2 + (float)uVar41;
                        pVVar4->vector[0].y = (float)(int)iVector.y + (float)uVar42;
                        pVVar4->vector[0].z = (float)iVar1 + fVar8;
                        pCVar3 = *faceData;
                        if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                          uVar9 = *index;
                          if (pCVar3->max_length <= uVar9) goto code_?;
                          if (pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0) {
                            pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                            if ((pCVar10 != (Color__Array *)0x0) &&
                               (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                               pVVar4 != (Vector3__Array *)0x0)) {
                              if ((pVVar4->max_length < 6) || (pCVar10->max_length == 0))
                              goto code_?;
                              pfVar11 = &pVVar4->vector[5].z;
                              Cube_GetAverageLightValue
                                        ((pCVar3->vector[uVar9]->fields).face,0,cells,iVector,
                                         pCVar10->vector,
                                         *pfVar11 <= _UNK_? && _UNK_? != *pfVar11,
                                         (MethodInfo *)0x0);
                              if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                if ((*faceData)->max_length <= (uint)*index) goto code_?;
                                if ((*faceData)->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                                  pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices;
                                  pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                                  if (pVVar5 != (Vector3__Array *)0x0) {
                                    if (pVVar5->max_length < 5) goto code_?;
                                    uVar43 = pVVar5->vector[4].x;
                                    uVar44 = pVVar5->vector[4].y;
                                    fVar8 = pVVar5->vector[4].z;
                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                      if (pVVar4->max_length < 2) goto code_?;
                                      pVVar4->vector[1].x = (float)iVar2 + (float)uVar43;
                                      pVVar4->vector[1].y = (float)(int)iVector.y + (float)uVar44;
                                      pVVar4->vector[1].z = (float)iVar1 + fVar8;
                                      pCVar3 = *faceData;
                                      if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                        uVar9 = *index;
                                        if (pCVar3->max_length <= uVar9) goto code_?;
                                        if (((pCVar3->vector[uVar9] !=
                                              (CubeModelChunk_FaceData *)0x0) &&
                                            (pCVar10 = ((*faceData)->vector[uVar9]->fields).colors,
                                            pCVar10 != (Color__Array *)0x0)) &&
                                           (pVVar4 = TypeInfo__Cube->static_fields->
                                                      cornersBookkeeping,
                                           pVVar4 != (Vector3__Array *)0x0)) {
                                          if ((pVVar4->max_length < 5) || (pCVar10->max_length < 2)
                                             ) goto code_?;
                                          pfVar11 = &pVVar4->vector[4].z;
                                          bVar14 = *pfVar11 <= _UNK_? &&
                                                   _UNK_? != *pfVar11;
                                          Cube_GetAverageLightValue
                                                    ((uint)bVar14,1,cells,iVector,
                                                     pCVar10->vector + 1,bVar14,(MethodInfo *)0x0);
                                          if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                            if ((*faceData)->max_length <= (uint)*index)
                                            goto code_?;
                                            if ((*faceData)->vector[*index] !=
                                                (CubeModelChunk_FaceData *)0x0) {
                                              pVVar4 = ((*faceData)->vector[*index]->fields).
                                                        faceVertices;
                                              pVVar5 = TypeInfo__Cube->static_fields->
                                                        cornersBookkeeping;
                                              if (pVVar5 != (Vector3__Array *)0x0) {
                                                if (pVVar5->max_length < 4) goto code_?;
                                                uVar45 = pVVar5->vector[3].x;
                                                uVar46 = pVVar5->vector[3].y;
                                                fVar8 = pVVar5->vector[3].z;
                                                if (pVVar4 != (Vector3__Array *)0x0) {
                                                  if (pVVar4->max_length < 3)
                                                  goto code_?;
                                                  pVVar4->vector[2].x =
                                                       (float)iVar2 + (float)uVar45;
                                                  pVVar4->vector[2].y =
                                                       (float)(int)iVector.y + (float)uVar46;
                                                  pVVar4->vector[2].z = (float)iVar1 + fVar8;
                                                  pCVar3 = *faceData;
                                                  if (pCVar3 !=
                                                      (CubeModelChunk_FaceData__Array *)0x0) {
                                                    uVar9 = *index;
                                                    if (pCVar3->max_length <= uVar9)
                                                    goto code_?;
                                                    if (pCVar3->vector[uVar9] !=
                                                        (CubeModelChunk_FaceData *)0x0) {
                                                      pCVar10 = ((*faceData)->vector[uVar9]->fields
                                                                ).colors;
                                                      if ((pCVar10 != (Color__Array *)0x0) &&
                                                         (pVVar4 = TypeInfo__Cube->static_fields->
                                                                    cornersBookkeeping,
                                                         pVVar4 != (Vector3__Array *)0x0)) {
                                                        if ((pVVar4->max_length < 4) ||
                                                           (pCVar10->max_length < 3))
                                                        goto code_?;
                                                        pfVar11 = &pVVar4->vector[3].z;
                                                        bVar14 = *pfVar11 <= _UNK_? &&
                                                                 _UNK_? != *pfVar11;
                                                        index = (int32_t *)(uint)bVar14;
                                                        faceData = (CubeModelChunk_FaceData__Array
                                                                    **)(pCVar10->vector + 2);
                                                        Cube_GetAverageLightValue
                                                                  ((pCVar3->vector[uVar9]->fields)
                                                                   .face,2,(
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)faceData,bVar14,
                                                  (MethodInfo *)0x0);
                                                  if (((Dictionary_2_MV_WorldObject_IntVector_Cell_
                                                        *)faceData)->klass !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).namespaze <= (char *)*index)
                                                  goto code_?;
                                                  pIVar17 = (&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)[(int)*index]
                                                  .array;
                                                  if (pIVar17 != (Il2CppArrayType *)0x0) {
                                                    piVar18 = pIVar17->sizes;
                                                    pVVar4 = TypeInfo__Cube->static_fields->
                                                              cornersBookkeeping;
                                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                                      if (pVVar4->max_length < 3)
                                                      goto code_?;
                                                      uVar47 = pVVar4->vector[2].x;
                                                      uVar48 = pVVar4->vector[2].y;
                                                      fVar8 = pVVar4->vector[2].z;
                                                      if (piVar18 != (int *)0x0) {
                                                        if ((uint)piVar18[3] < 4)
                                                        goto code_?;
                                                        *(ulonglong *)(piVar18 + 0xd) =
                                                             CONCAT44((float)(int)iVector.y +
                                                                      (float)uVar48,
                                                                      (float)iVar2 + (float)uVar47)
                                                        ;
                                                        piVar18[0xf] = (int)((float)iVar1 + fVar8)
                                                        ;
                                                        pDVar21 = ((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass;
                                                  if (pDVar21 !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    pcVar22 = (char *)*index;
                                                    if ((pDVar21->_0).namespaze <= pcVar22)
                                                    goto code_?;
                                                    iVar23 = (&(pDVar21->_0).byval_arg.data)
                                                             [(int)pcVar22].__klassIndex;
                                                    if (iVar23 != 0) {
                                                      pIVar24 = ((&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)
                                                  [(int)pcVar22].generic_class)->cached_class;
                                                  if ((pIVar24 != (Il2CppClass *)0x0) &&
                                                     (pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping,
                                                     pVVar4 != (Vector3__Array *)0x0)) {
                                                    if ((pVVar4->max_length < 3) ||
                                                       (pIVar24->namespaze < (char *)0x4))
                                                    goto code_?;
                                                    pfVar11 = &pVVar4->vector[2].z;
                                                    Cube_GetAverageLightValue
                                                              (*(Face__Enum *)(iVar23 + 0x10),3,
                                                               (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)&pIVar24->fields,
                                                  *pfVar11 <= _UNK_? &&
                                                  _UNK_? != *pfVar11,(MethodInfo *)0x0);
                                                  cube = (Cube *)0x2;
                                                  *index = *index + 1;
                                                  cells = (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData;
                                                  goto code_?;
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
          else {
code_?:
            if (((cube->fields).hiddenSides & 0x10) == 0) {
              pCVar3 = *faceData;
              if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                if (pCVar3->max_length <= (uint)*index) goto code_?;
                if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                  (pCVar3->vector[*index]->fields).face = 4;
                  pCVar3 = *faceData;
                  if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                    if (pCVar3->max_length <= (uint)*index) goto code_?;
                    if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                      pVVar4 = (pCVar3->vector[*index]->fields).faceVertices;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Cube);
                      }
                      pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                      if (pVVar5 != (Vector3__Array *)0x0) {
                        if (pVVar5->max_length < 5) goto code_?;
                        uVar49 = pVVar5->vector[4].x;
                        uVar50 = pVVar5->vector[4].y;
                        fVar8 = pVVar5->vector[4].z;
                        if (pVVar4 != (Vector3__Array *)0x0) {
                          if (pVVar4->max_length == 0) goto code_?;
                          pVVar4->vector[0].x = (float)iVar2 + (float)uVar49;
                          pVVar4->vector[0].y = (float)(int)iVector.y + (float)uVar50;
                          pVVar4->vector[0].z = (float)iVar1 + fVar8;
                          pCVar3 = *faceData;
                          if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                            uVar9 = *index;
                            if (pCVar3->max_length <= uVar9) goto code_?;
                            if (pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0) {
                              pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                              if ((pCVar10 != (Color__Array *)0x0) &&
                                 (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                                 pVVar4 != (Vector3__Array *)0x0)) {
                                if ((pVVar4->max_length < 5) || (pCVar10->max_length == 0))
                                goto code_?;
                                Cube_GetAverageLightValue
                                          ((pCVar3->vector[uVar9]->fields).face,0,cells,iVector,
                                           pCVar10->vector,_UNK_? < pVVar4->vector[4].x,
                                           (MethodInfo *)0x0);
                                if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                  if ((*faceData)->max_length <= (uint)*index)
                                  goto code_?;
                                  if ((*faceData)->vector[*index] != (CubeModelChunk_FaceData *)0x0)
                                  {
                                    pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices;
                                    pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                                    if (pVVar5 != (Vector3__Array *)0x0) {
                                      if (pVVar5->max_length < 8) goto code_?;
                                      uVar51 = pVVar5->vector[7].x;
                                      uVar52 = pVVar5->vector[7].y;
                                      fVar8 = pVVar5->vector[7].z;
                                      if (pVVar4 != (Vector3__Array *)0x0) {
                                        if (pVVar4->max_length < 2) goto code_?;
                                        pVVar4->vector[1].x = (float)iVar2 + (float)uVar51;
                                        pVVar4->vector[1].y = (float)(int)iVector.y + (float)uVar52
                                        ;
                                        pVVar4->vector[1].z = (float)iVar1 + fVar8;
                                        pCVar3 = *faceData;
                                        if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                          uVar9 = *index;
                                          if (pCVar3->max_length <= uVar9) goto code_?;
                                          if (((pCVar3->vector[uVar9] !=
                                                (CubeModelChunk_FaceData *)0x0) &&
                                              (pCVar10 = ((*faceData)->vector[uVar9]->fields).
                                                         colors, pCVar10 != (Color__Array *)0x0)) &&
                                             (pVVar4 = TypeInfo__Cube->static_fields->
                                                        cornersBookkeeping,
                                             pVVar4 != (Vector3__Array *)0x0)) {
                                            if ((pVVar4->max_length < 8) ||
                                               (pCVar10->max_length < 2)) goto code_?;
                                            bVar14 = _UNK_? < pVVar4->vector[7].x;
                                            Cube_GetAverageLightValue
                                                      ((uint)bVar14,1,cells,iVector,
                                                       pCVar10->vector + 1,bVar14,(MethodInfo *)0x0)
                                            ;
                                            if (*faceData != (CubeModelChunk_FaceData__Array *)0x0)
                                            {
                                              if ((*faceData)->max_length <= (uint)*index)
                                              goto code_?;
                                              if ((*faceData)->vector[*index] !=
                                                  (CubeModelChunk_FaceData *)0x0) {
                                                pVVar4 = ((*faceData)->vector[*index]->fields).
                                                          faceVertices;
                                                pVVar5 = TypeInfo__Cube->static_fields->
                                                          cornersBookkeeping;
                                                if (pVVar5 != (Vector3__Array *)0x0) {
                                                  if (pVVar5->max_length == 0)
                                                  goto code_?;
                                                  uVar53 = pVVar5->vector[0].x;
                                                  uVar54 = pVVar5->vector[0].y;
                                                  fVar8 = pVVar5->vector[0].z;
                                                  if (pVVar4 != (Vector3__Array *)0x0) {
                                                    if (pVVar4->max_length < 3)
                                                    goto code_?;
                                                    pVVar4->vector[2].x =
                                                         (float)iVar2 + (float)uVar53;
                                                    pVVar4->vector[2].y =
                                                         (float)(int)iVector.y + (float)uVar54;
                                                    pVVar4->vector[2].z = (float)iVar1 + fVar8;
                                                    pCVar3 = *faceData;
                                                    if (pCVar3 !=
                                                        (CubeModelChunk_FaceData__Array *)0x0) {
                                                      uVar9 = *index;
                                                      if (pCVar3->max_length <= uVar9)
                                                      goto code_?;
                                                      if (pCVar3->vector[uVar9] !=
                                                          (CubeModelChunk_FaceData *)0x0) {
                                                        pCVar10 = ((*faceData)->vector[uVar9]->
                                                                  fields).colors;
                                                        if ((pCVar10 != (Color__Array *)0x0) &&
                                                           (pVVar4 = TypeInfo__Cube->static_fields
                                                                      ->cornersBookkeeping,
                                                           pVVar4 != (Vector3__Array *)0x0)) {
                                                          if ((pVVar4->max_length == 0) ||
                                                             (pCVar10->max_length < 3))
                                                          goto code_?;
                                                          bVar14 = _UNK_? <
                                                                   pVVar4->vector[0].x;
                                                          index = (int32_t *)(uint)bVar14;
                                                          faceData = (CubeModelChunk_FaceData__Array
                                                                      **)(pCVar10->vector + 2);
                                                          Cube_GetAverageLightValue
                                                                    ((pCVar3->vector[uVar9]->
                                                                     fields).face,2,
                                                                     (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)faceData,bVar14,
                                                  (MethodInfo *)0x0);
                                                  if (((Dictionary_2_MV_WorldObject_IntVector_Cell_
                                                        *)faceData)->klass !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).namespaze <= (char *)*index)
                                                  goto code_?;
                                                  pIVar17 = (&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)[(int)*index]
                                                  .array;
                                                  if (pIVar17 != (Il2CppArrayType *)0x0) {
                                                    piVar18 = pIVar17->sizes;
                                                    pVVar4 = TypeInfo__Cube->static_fields->
                                                              cornersBookkeeping;
                                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                                      if (pVVar4->max_length < 4)
                                                      goto code_?;
                                                      uVar55 = pVVar4->vector[3].x;
                                                      uVar56 = pVVar4->vector[3].y;
                                                      fVar8 = pVVar4->vector[3].z;
                                                      if (piVar18 != (int *)0x0) {
                                                        if ((uint)piVar18[3] < 4)
                                                        goto code_?;
                                                        *(ulonglong *)(piVar18 + 0xd) =
                                                             CONCAT44((float)(int)iVector.y +
                                                                      (float)uVar56,
                                                                      (float)iVar2 + (float)uVar55)
                                                        ;
                                                        piVar18[0xf] = (int)((float)iVar1 + fVar8)
                                                        ;
                                                        pDVar21 = ((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass;
                                                  if (pDVar21 !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    pcVar22 = (char *)*index;
                                                    if ((pDVar21->_0).namespaze <= pcVar22)
                                                    goto code_?;
                                                    iVar23 = (&(pDVar21->_0).byval_arg.data)
                                                             [(int)pcVar22].__klassIndex;
                                                    if (iVar23 != 0) {
                                                      pIVar24 = ((&(((
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData)->klass->_0).byval_arg.data)
                                                  [(int)pcVar22].generic_class)->cached_class;
                                                  if ((pIVar24 != (Il2CppClass *)0x0) &&
                                                     (pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping,
                                                     pVVar4 != (Vector3__Array *)0x0)) {
                                                    if ((pVVar4->max_length < 4) ||
                                                       (pIVar24->namespaze < (char *)0x4))
                                                    goto code_?;
                                                    Cube_GetAverageLightValue
                                                              (*(Face__Enum *)(iVar23 + 0x10),3,
                                                               (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData,iVector,(Color *)&pIVar24->fields,
                                                  _UNK_? < pVVar4->vector[3].x,
                                                  (MethodInfo *)0x0);
                                                  cube = (Cube *)0x2;
                                                  *index = *index + 1;
                                                  cells = (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  faceData;
                                                  goto code_?;
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
            else {
code_?:
              if (((cube->fields).hiddenSides & 0x20) != 0) {
                return;
              }
              pCVar3 = *faceData;
              if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                if (pCVar3->max_length <= (uint)*index) goto code_?;
                if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                  (pCVar3->vector[*index]->fields).face = 5;
                  pCVar3 = *faceData;
                  if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                    if (pCVar3->max_length <= (uint)*index) goto code_?;
                    if (pCVar3->vector[*index] != (CubeModelChunk_FaceData *)0x0) {
                      pVVar4 = (pCVar3->vector[*index]->fields).faceVertices;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Cube);
                      }
                      pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                      if (pVVar5 != (Vector3__Array *)0x0) {
                        if (pVVar5->max_length < 7) goto code_?;
                        uVar57 = pVVar5->vector[6].x;
                        uVar58 = pVVar5->vector[6].y;
                        fVar8 = pVVar5->vector[6].z;
                        if (pVVar4 != (Vector3__Array *)0x0) {
                          if (pVVar4->max_length == 0) goto code_?;
                          pVVar4->vector[0].x = (float)iVar2 + (float)uVar57;
                          pVVar4->vector[0].y = (float)(int)iVector.y + (float)uVar58;
                          pVVar4->vector[0].z = (float)iVar1 + fVar8;
                          pCVar3 = *faceData;
                          if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                            uVar9 = *index;
                            if (pCVar3->max_length <= uVar9) goto code_?;
                            if (pCVar3->vector[uVar9] != (CubeModelChunk_FaceData *)0x0) {
                              pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                              if ((pCVar10 != (Color__Array *)0x0) &&
                                 (pVVar4 = TypeInfo__Cube->static_fields->cornersBookkeeping,
                                 pVVar4 != (Vector3__Array *)0x0)) {
                                if ((pVVar4->max_length < 7) || (pCVar10->max_length == 0))
                                goto code_?;
                                Cube_GetAverageLightValue
                                          ((pCVar3->vector[uVar9]->fields).face,0,cells,iVector,
                                           pCVar10->vector,
                                           pVVar4->vector[6].x <= _UNK_? &&
                                           _UNK_? != pVVar4->vector[6].x,(MethodInfo *)0x0);
                                if (*faceData != (CubeModelChunk_FaceData__Array *)0x0) {
                                  if ((*faceData)->max_length <= (uint)*index)
                                  goto code_?;
                                  if ((*faceData)->vector[*index] != (CubeModelChunk_FaceData *)0x0)
                                  {
                                    pVVar4 = ((*faceData)->vector[*index]->fields).faceVertices;
                                    pVVar5 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                                    if (pVVar5 != (Vector3__Array *)0x0) {
                                      if (pVVar5->max_length < 6) goto code_?;
                                      uVar59 = pVVar5->vector[5].x;
                                      uVar60 = pVVar5->vector[5].y;
                                      fVar8 = pVVar5->vector[5].z;
                                      if (pVVar4 != (Vector3__Array *)0x0) {
                                        if (pVVar4->max_length < 2) goto code_?;
                                        pVVar4->vector[1].x = (float)iVar2 + (float)uVar59;
                                        pVVar4->vector[1].y = (float)(int)iVector.y + (float)uVar60
                                        ;
                                        pVVar4->vector[1].z = (float)iVar1 + fVar8;
                                        pCVar3 = *faceData;
                                        if (pCVar3 != (CubeModelChunk_FaceData__Array *)0x0) {
                                          uVar9 = *index;
                                          if (pCVar3->max_length <= uVar9) goto code_?;
                                          if (pCVar3->vector[uVar9] !=
                                              (CubeModelChunk_FaceData *)0x0) {
                                            pCVar10 = ((*faceData)->vector[uVar9]->fields).colors;
                                            if ((pCVar10 != (Color__Array *)0x0) &&
                                               (pVVar4 = TypeInfo__Cube->static_fields->
                                                          cornersBookkeeping,
                                               pVVar4 != (Vector3__Array *)0x0)) {
                                              if ((pVVar4->max_length < 6) ||
                                                 (pCVar10->max_length < 2)) goto code_?;
                                              Cube_GetAverageLightValue
                                                        ((pCVar3->vector[uVar9]->fields).face,1,
                                                         cells,iVector,pCVar10->vector + 1,
                                                         pVVar4->vector[5].x <= _UNK_? &&
                                                         _UNK_? != pVVar4->vector[5].x,
                                                         (MethodInfo *)0x0);
                                              if (*faceData != (CubeModelChunk_FaceData__Array *)0x0
                                                 ) {
                                                if ((*faceData)->max_length <= (uint)*index)
                                                goto code_?;
                                                if ((*faceData)->vector[*index] !=
                                                    (CubeModelChunk_FaceData *)0x0) {
                                                  pVVar4 = ((*faceData)->vector[*index]->fields).
                                                            faceVertices;
                                                  pVVar5 = TypeInfo__Cube->static_fields->
                                                            cornersBookkeeping;
                                                  if (pVVar5 != (Vector3__Array *)0x0) {
                                                    if (pVVar5->max_length < 3)
                                                    goto code_?;
                                                    uVar61 = pVVar5->vector[2].x;
                                                    uVar62 = pVVar5->vector[2].y;
                                                    fVar8 = pVVar5->vector[2].z;
                                                    if (pVVar4 != (Vector3__Array *)0x0) {
                                                      if (pVVar4->max_length < 3)
                                                      goto code_?;
                                                      pVVar4->vector[2].x =
                                                           (float)iVar2 + (float)uVar61;
                                                      pVVar4->vector[2].y =
                                                           (float)(int)iVector.y + (float)uVar62;
                                                      pVVar4->vector[2].z = (float)iVar1 + fVar8;
                                                      pCVar3 = *faceData;
                                                      if (pCVar3 !=
                                                          (CubeModelChunk_FaceData__Array *)0x0) {
                                                        if (pCVar3->max_length <= (uint)*index)
                                                        goto code_?;
                                                        if (((pCVar3->vector[*index] !=
                                                              (CubeModelChunk_FaceData *)0x0) &&
                                                            (pCVar10 = ((*faceData)->vector[*index]
                                                                       ->fields).colors,
                                                            pCVar10 != (Color__Array *)0x0)) &&
                                                           (pVVar4 = TypeInfo__Cube->static_fields
                                                                      ->cornersBookkeeping,
                                                           pVVar4 != (Vector3__Array *)0x0)) {
                                                          if ((pVVar4->max_length < 3) ||
                                                             (pCVar10->max_length < 3))
                                                          goto code_?;
                                                          bVar14 = pVVar4->vector[2].x <=
                                                                   _UNK_? &&
                                                                   _UNK_? !=
                                                                   pVVar4->vector[2].x;
                                                          puVar63 = (uint *)(uint)bVar14;
                                                          cells_00 = (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell_ *)
                                                  (pCVar10->vector + 2);
                                                  Cube_GetAverageLightValue
                                                            (Face__Enum_Front,2,cells_00,iVector,
                                                             (Color *)cells_00,bVar14,
                                                             (MethodInfo *)0x0);
                                                  if (cells_00->klass !=
                                                      (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((cells_00->klass->_0).namespaze <=
                                                        (char *)*puVar63) goto code_?;
                                                    pIVar17 = (&(cells_00->klass->_0).byval_arg.data
                                                              )[(int)*puVar63].array;
                                                    if (pIVar17 != (Il2CppArrayType *)0x0) {
                                                      piVar18 = pIVar17->sizes;
                                                      pVVar4 = TypeInfo__Cube->static_fields->
                                                                cornersBookkeeping;
                                                      if (pVVar4 != (Vector3__Array *)0x0) {
                                                        if (pVVar4->max_length < 2)
                                                        goto code_?;
                                                        uVar64 = pVVar4->vector[1].x;
                                                        uVar65 = pVVar4->vector[1].y;
                                                        fVar8 = pVVar4->vector[1].z;
                                                        if (piVar18 != (int *)0x0) {
                                                          if ((uint)piVar18[3] < 4)
                                                          goto code_?;
                                                          *(ulonglong *)(piVar18 + 0xd) =
                                                               CONCAT44((float)(int)iVector.y +
                                                                        (float)uVar65,
                                                                        (float)iVar2 +
                                                                        (float)uVar64);
                                                          piVar18[0xf] = (int)((float)iVar1 +
                                                                              fVar8);
                                                          pDVar21 = cells_00->klass;
                                                          if (pDVar21 !=
                                                              (
                                                  Dictionary_2_MV_WorldObject_IntVector_Cell___Class
                                                  *)0x0) {
                                                    if ((pDVar21->_0).namespaze <= (char *)*puVar63)
                                                    goto code_?;
                                                    iVar1 = (&(pDVar21->_0).byval_arg.data)
                                                             [(int)*puVar63].__klassIndex;
                                                    if (iVar1 != 0) {
                                                      pIVar24 = ((&(cells_00->klass->_0).byval_arg.
                                                                   data)[*puVar63].generic_class)->
                                                                cached_class;
                                                      if ((pIVar24 != (Il2CppClass *)0x0) &&
                                                         (pVVar4 = TypeInfo__Cube->static_fields->
                                                                    cornersBookkeeping,
                                                         pVVar4 != (Vector3__Array *)0x0)) {
                                                        if ((1 < pVVar4->max_length) &&
                                                           ((char *)0x3 < pIVar24->namespaze)) {
                                                          Cube_GetAverageLightValue
                                                                    (*(Face__Enum *)(iVar1 + 0x10),
                                                                     3,cells_00,iVector,
                                                                     (Color *)&pIVar24->fields,
                                                                     pVVar4->vector[1].x <=
                                                                     _UNK_? &&
                                                                     _UNK_? !=
                                                                     pVVar4->vector[1].x,
                                                                     (MethodInfo *)0x0);
                                                          *puVar63 = *puVar63 + 1;
                                                          return;
                                                        }
                                                        goto code_?;
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
  pcVar66 = (code *)swi(3);
  (*pcVar66)();
  return;
}


/* Boolean IsCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCollapsed(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  bVar2 = Cube_GetPlaneVertices(corners,&pVStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  if (pVStack_1 != (Vector3__Array *)0x0) {
    if (((pVStack_1->max_length != 0) && (1 < pVStack_1->max_length)) && (2 < pVStack_1->max_length)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1
                ((Plane *)&stack0xffffffe4,pVStack_1->vector[0],pVStack_1->vector[1],
                 pVStack_1->vector[2],(MethodInfo *)0x0);
      uVar3 = 0;
      if (corners == (Vector3__Array *)0x0) goto code_?;
      pVVar4 = corners->vector;
      while( true ) {
        if ((int)corners->max_length <= (int)uVar3) {
          return 1;
        }
        if (corners->max_length <= uVar3) break;
        uVar5 = pVVar4->x;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_GetDistanceToPoint
                          ((Plane *)&stack0xffffffe4,*pVVar4,(MethodInfo *)0x0);
        if (_UNK_? < (double)(float)((uint)fVar6 & _UNK_?)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        pVVar4 = pVVar4 + 1;
        corners = (Vector3__Array *)uVar5;
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Boolean IsCornersValid(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsCornersValid(Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  face = Face__Enum_Top;
  while( true ) {
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  pfVar2 = &pVVar1->vector[0].y;
  uVar3 = 0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    while (uVar3 < pVVar1->max_length) {
      if (_UNK_? != *pfVar2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 3;
      if (3 < (int)uVar3) {
        return 1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsFaceCollapsed(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceCollapsed(Vector3__Array *faceIndices,MethodInfo *method)

{
  iVar1 = 0;
  if (faceIndices == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    while( true ) {
      if ((int)faceIndices->max_length <= iVar1) {
        return 0;
      }
      uVar2 = (iVar1 + 1) % (int)faceIndices->max_length;
      if ((faceIndices->max_length <= uVar2) ||
         (uVar3 = iVar1 % (int)faceIndices->max_length, faceIndices->max_length <= uVar3)) break;
      uStack_4._0_4_ = faceIndices->vector[uVar3].x;
      uStack_4._4_4_ = faceIndices->vector[uVar3].y;
      fStack_5 = faceIndices->vector[uVar3].z;
      uStack_6._0_4_ = faceIndices->vector[uVar2].x;
      uStack_6._4_4_ = faceIndices->vector[uVar2].y;
      fStack_7 = faceIndices->vector[uVar2].z;
      fStack_8 = fStack_7 - fStack_5;
      uStack_9 = CONCAT44((float)uStack_6._4_4_ - (float)uStack_4._4_4_,
                           (float)(undefined4)uStack_6 - (float)(undefined4)uStack_4);
      fVar10 = (float10)func_?(&uStack_9,0);
      if ((float)fVar10 < _UNK_?) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean IsFaceValid(Vector3[], Face) */

bool Assembly-CSharp.dll::Cube::Cube_IsFaceValid
               (Vector3__Array *faceIndices,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (faceIndices == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (1 < faceIndices->max_length) {
    uVar1 = faceIndices->vector[0].x;
    uVar2 = faceIndices->vector[0].y;
    uVar3 = faceIndices->vector[1].x;
    uVar4 = faceIndices->vector[1].y;
    value.y = (float)uVar4 - (float)uVar2;
    value.x = (float)uVar3 - (float)uVar1;
    value.z = faceIndices->vector[1].z - faceIndices->vector[0].z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffe0,value,(MethodInfo *)0x0);
    fVar6 = pVVar5->x;
    fVar7 = pVVar5->y;
    fVar8 = pVVar5->z;
    if (2 < faceIndices->max_length) {
      uVar9 = faceIndices->vector[1].x;
      uVar10 = faceIndices->vector[1].y;
      uVar11 = faceIndices->vector[2].x;
      uVar12 = faceIndices->vector[2].y;
      value_00.y = (float)uVar12 - (float)uVar10;
      value_00.x = (float)uVar11 - (float)uVar9;
      value_00.z = faceIndices->vector[2].z - faceIndices->vector[1].z;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffec,value_00,(MethodInfo *)0x0);
      uVar13 = pVVar5->x;
      uVar14 = pVVar5->y;
      value_01.y = (float)uVar13 * fVar8 - fVar6 * pVVar5->z;
      value_01.x = pVVar5->z * fVar7 - (float)uVar14 * fVar8;
      value_01.z = fVar6 * (float)uVar14 - (float)uVar13 * fVar7;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffe0,value_01,(MethodInfo *)0x0);
      if (faceIndices->max_length != 0) {
        fVar8 = pVVar5->x;
        this = (Plane *)&stack0xffffffc4;
        puVar15 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor
                  (this,*pVVar5,faceIndices->vector[0],(MethodInfo *)0x0);
        pVVar5 = faceIndices->vector;
        uVar16 = 1;
        while( true ) {
          pVVar5 = pVVar5 + 1;
          if ((int)faceIndices->max_length <= (int)uVar16) {
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            pVVar5 = Cube_GetFaceAxis((Vector3 *)&stack0xffffffec,face,(MethodInfo *)0x0);
            uVar17 = pVVar5->x;
            uVar18 = pVVar5->y;
            return (float)this * (float)uVar18 + (float)puVar15 * (float)uVar17 + fVar8 * pVVar5->z
                   <= _UNK_?;
          }
          if (faceIndices->max_length <= uVar16) break;
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_GetDistanceToPoint
                            ((Plane *)&stack0xffffffc4,*pVVar5,(MethodInfo *)0x0);
          if (_UNK_? < (float)((uint)fVar6 & _UNK_?)) {
            return 0;
          }
          uVar16 = uVar16 + 1;
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* Boolean IsLegal(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsLegal(Vector3__Array *corners,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  handle = TypeRef__MV__WorldObject__Face;
  iStack_6 = 0;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this != (Array *)0x0) {
    pIStack_7 = mscorlib.dll::System::Array::Array_GetEnumerator(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIStack_7 != (IEnumerator *)0x0) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_6 = func_?();
        if (iStack_6 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (pIStack_7 == (IEnumerator *)0x0) break;
      piVar9 = (int *)func_?();
      if (piVar9 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar9 + 0x20) != (TypeInfo__MV__WorldObject__Face->_0).element_class)
      goto code_?;
      pFVar10 = (Face__Enum *)func_?();
      face = *pFVar10;
      FStack_11 = face;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar12 = Cube_GetFace_1(corners,face,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_14.x = (pVVar13->zeroVector).x;
      VStack_14.y = (pVVar13->zeroVector).y;
      VStack_14.z = (pVVar13->zeroVector).z;
      iVar15 = 0;
      if (pVVar12 == (Vector3__Array *)0x0) break;
      for (; iVar15 < (int)pVVar12->max_length; iVar15 = iVar15 + 1) {
        func_?();
        func_?();
        fStack_16 = fStack_17 * fStack_18 - fStack_19 * fStack_20;
        VStack_14.z = VStack_14.z + (fStack_21 * fStack_20 - fStack_22 * fStack_17);
        VStack_14.y = VStack_14.y + (fStack_22 * fStack_19 - fStack_21 * fStack_18);
        VStack_14.x = VStack_14.x + fStack_16;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_14,(MethodInfo *)0x0);
      fStack_23 = (float)((uint)VStack_14.x ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      fStack_24 = (float)((uint)VStack_14.y ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      fStack_16 = (float)((uint)VStack_14.z ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar25 = Cube_GetFaceAxis((Vector3 *)&stack0xffffff7c,FStack_11,(MethodInfo *)0x0);
      uVar26 = pVVar25->x;
      uVar27 = pVVar25->y;
      if ((double)((float)uVar27 * fStack_24 + (float)uVar26 * fStack_23 + pVVar25->z * fStack_16) <
          _UNK_?) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  bVar29 = (*pcVar28)();
  return bVar29;
}


/* Boolean IsOutOfBound(Vector3[]) */

bool Assembly-CSharp.dll::Cube::Cube_IsOutOfBound(Vector3__Array *corners,MethodInfo *method)

{
  uVar1 = 0;
  if (corners == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVStack_2 = corners->vector;
    while( true ) {
      if ((int)corners->max_length <= (int)uVar1) {
        return 0;
      }
      if (corners->max_length <= uVar1) break;
      VStack_3.x = pVStack_2->x;
      VStack_3.y = pVStack_2->y;
      index = 0;
      VStack_3.z = pVStack_2->z;
      do {
        fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_3,index,(MethodInfo *)0x0);
        if (_UNK_? < (float)((uint)fStack_4 & _UNK_?)) {
          return 1;
        }
        index = index + 1;
      } while (index < 3);
      uVar1 = uVar1 + 1;
      pVStack_2 = pVStack_2 + 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void MoveEdge(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveEdge
               (CubePickingInfo *info,float value,Vector3 axis,CubeOutOfBoundState__Enum *coob,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?();
  }
  else {
    pCVar2 = (CubePickingInfo *)(info->fields).pickedEdge;
    pCVar3 = (info->fields).cube;
    FVar4 = (info->fields).pickedFace;
    info = pCVar2;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    corners = Cube_GetEdge(pCVar3,FVar4,(Edge__Enum)info,(MethodInfo *)0x0);
    if (corners == (Vector3__Array *)0x0) goto code_?;
    if (corners->max_length == 0) goto code_?;
    uVar5 = corners->vector[0].x;
    uVar6 = corners->vector[0].y;
    fVar7 = corners->vector[0].z;
    corners->vector[0].x = (float)uVar5 + axis.x * value;
    corners->vector[0].y = (float)uVar6 + axis.y * value;
    corners->vector[0].z = fVar7 + axis.z * value;
    if (corners->max_length < 2) goto code_?;
    uVar8 = corners->vector[1].x;
    uVar9 = corners->vector[1].y;
    fVar7 = corners->vector[1].z;
    corners->vector[1].x = (float)uVar8 + axis.x * value;
    corners->vector[1].y = (float)uVar9 + axis.y * value;
    corners->vector[1].z = fVar7 + axis.z * value;
    bVar10 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      pCVar3 = (pCVar1->fields).cube;
      FVar4 = (pCVar1->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = Cube_IsFaceBoxSideAligened(pCVar3,FVar4,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        return;
      }
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddEdge;
      return;
    }
    if (((corners->max_length == 0) ||
        (MathFunctions::MathFunctions_ClampVector(corners->vector,-0.5,0.5,(MethodInfo *)0x0),
        corners->max_length < 2)) ||
       (MathFunctions::MathFunctions_ClampVector(corners->vector + 1,-0.5,0.5,(MethodInfo *)0x0),
       corners->max_length == 0)) goto code_?;
    value = 0.0;
    info = (CubePickingInfo *)0x3;
    pVVar11 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffe0,corners->vector[0],3,(MethodInfo *)0x0);
    fVar12 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length == 0) goto code_?;
    corners->vector[0].x = pVVar11->x;
    corners->vector[0].y = fVar12;
    corners->vector[0].z = fVar7;
    if (corners->max_length < 2) goto code_?;
    pVVar11 = corners->vector + 1;
    uVar13 = pVVar11->x;
    uVar14 = pVVar11->y;
    piVar15 = (int *)corners->vector[1].z;
    axis.x = (float)&stack0xffffffe0;
    value = (float)&UNK_?;
    axis.y = (float)uVar13;
    axis.z = (float)uVar14;
    pVVar11 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)axis.x,*pVVar11,3,(MethodInfo *)0x0);
    fVar12 = pVVar11->y;
    fVar7 = pVVar11->z;
    if (corners->max_length < 2) goto code_?;
    corners->vector[1].x = pVVar11->x;
    corners->vector[1].y = fVar12;
    corners->vector[1].z = fVar7;
    pCVar3 = (pCVar1->fields).cube;
    if ((pCVar3 == (Cube *)0x0) ||
       (this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                         ((CubeBase *)pCVar3,(MethodInfo *)0x0), this == (Vector3__Array *)0x0))
    goto code_?;
    pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this,(MethodInfo *)0x0);
    info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
    if (pOVar16 == (Object *)0x0) {
      pCVar2 = (CubePickingInfo *)0x0;
code_?:
      FVar4 = (pCVar1->fields).pickedFace;
      EVar17 = (pCVar1->fields).pickedEdge;
      info = pCVar2;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Cube_SetEdge_1((Vector3__Array **)&info,FVar4,EVar17,corners,(MethodInfo *)0x0);
      bVar10 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
        pCVar3 = (pCVar1->fields).cube;
        EVar17 = (pCVar1->fields).pickedEdge;
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Cube_SetEdge(pCVar3,(Face__Enum)info,EVar17,corners,(MethodInfo *)0x0);
        if (*piVar15 == 3) {
          *piVar15 = 0;
        }
      }
      return;
    }
    pCVar2 = (CubePickingInfo *)func_?();
    if (pCVar2 != (CubePickingInfo *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void MoveFace(CubePickingInfo, Single, Vector3, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveFace
               (CubePickingInfo *info,float delta,Vector3 axis,
               CubeOutOfBoundState__Enum *outOfBoundState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if ((info == (CubePickingInfo *)0x0) || (pCVar2 = (info->fields).cube, pCVar2 == (Cube *)0x0))
  goto code_?;
  pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                      ((CubeBase *)pCVar2,(MethodInfo *)0x0);
  FVar4 = (pCVar1->fields).pickedFace;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar3 = Cube_GetFace_1(pVVar3,FVar4,(MethodInfo *)0x0);
  uVar5 = 0;
  if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
  pVVar6 = pVVar3->vector;
  for (; (int)uVar5 < (int)pVVar3->max_length; uVar5 = uVar5 + 1) {
    if (pVVar3->max_length <= uVar5) goto code_?;
    uVar7 = pVVar6->x;
    uVar8 = pVVar6->y;
    pVVar6->x = (float)uVar7 + axis.x * delta;
    pVVar6->y = (float)uVar8 + axis.y * delta;
    pVVar6->z = pVVar6->z + axis.z * delta;
    pVVar6 = pVVar6 + 1;
  }
  pVStack_9 = (Vector3__Array *)pVVar3->vector;
  uVar5 = 0;
  while (uStack_10 = uVar5, (int)uVar5 < (int)pVVar3->max_length) {
    if (pVVar3->max_length <= uVar5) goto code_?;
    index = (int32_t)pVStack_9->klass;
    vector.x = (float)pVStack_9->klass;
    vector.y = (float)pVStack_9->monitor;
    vector.z = (float)pVStack_9->bounds;
    pVVar6 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffd0,vector,3,(MethodInfo *)0x0);
    fVar11 = pVVar6->y;
    pIVar12 = (Il2CppArrayBounds *)pVVar6->z;
    if (pVVar3->max_length <= uVar5) goto code_?;
    iVar13 = 0;
    iStack_14 = 0;
    pVStack_9->klass = (Vector3__Array__Class *)pVVar6->x;
    pVStack_9->monitor = (MonitorData *)fVar11;
    pVStack_9->bounds = pIVar12;
    do {
      pMVar15 = (MethodInfo *)&UNK_?;
      pVVar6 = (Vector3 *)func_?(uStack_10,iVar13,0);
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (pVVar6,index,pMVar15);
      if (_UNK_? <= fVar11) {
        pMVar15 = (MethodInfo *)&UNK_?;
        pVVar6 = (Vector3 *)func_?(uStack_10,iVar13,0);
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (pVVar6,index,pMVar15);
        if (fVar11 <= _UNK_?) {
          iStack_14 = iStack_14 + 1;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    if (iStack_14 == 3) {
      cStack_16 = '\0';
      goto code_?;
    }
    pVStack_9 = (Vector3__Array *)&pVStack_9->max_length;
    uVar5 = uStack_10 + 1;
  }
  cStack_16 = '\x01';
code_?:
  pVVar6 = pVVar3->vector;
  for (pVStack_9 = (Vector3__Array *)0x0; (int)pVStack_9 < (int)pVVar3->max_length;
      pVStack_9 = (Vector3__Array *)((int)&pVStack_9->klass + 1)) {
    if (((Vector3__Array *)pVVar3->max_length <= pVStack_9) ||
       (MathFunctions::MathFunctions_ClampVector(pVVar6,-0.5,0.5,(MethodInfo *)0x0),
       (Vector3__Array *)pVVar3->max_length <= pVStack_9)) goto code_?;
    pVVar17 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffd0,*pVVar6,3,(MethodInfo *)0x0);
    fVar18 = pVVar17->y;
    fVar11 = pVVar17->z;
    if ((Vector3__Array *)pVVar3->max_length <= pVStack_9) goto code_?;
    pVVar6->x = pVVar17->x;
    pVVar6->y = fVar18;
    pVVar6->z = fVar11;
    pVVar6 = pVVar6 + 1;
  }
  pCVar2 = (info->fields).cube;
  if ((pCVar2 == (Cube *)0x0) ||
     (pVVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          ((CubeBase *)pCVar2,(MethodInfo *)0x0), pVVar19 == (Vector3__Array *)0x0))
  goto code_?;
  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
            PlayableBehaviour_Clone((PlayableBehaviour *)pVVar19,(MethodInfo *)0x0);
  pVVar21 = TypeInfo__UnityEngine__Vector3;
  if (pOVar20 == (Object *)0x0) {
    pVVar19 = (Vector3__Array *)0x0;
code_?:
    pCVar1 = info;
    pVStack_9 = pVVar19;
    Cube_SetFace_1(&pVStack_9,(info->fields).pickedFace,pVVar3,(MethodInfo *)0x0);
    bVar22 = Cube_IsLegal(pVStack_9,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      pCVar2 = (pCVar1->fields).cube;
      FVar4 = (info->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      Cube_SetFace(pCVar2,FVar4,pVVar3,(MethodInfo *)0x0);
      pCVar1 = info;
    }
    if (cStack_16 == '\0') {
      *outOfBoundState = CubeOutOfBoundState__Enum_WithinBounds;
      return;
    }
    pCVar2 = (pCVar1->fields).cube;
    if (pCVar2 == (Cube *)0x0) goto code_?;
    pVVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                        ((CubeBase *)pCVar2,(MethodInfo *)0x0);
    pVStack_9 = pVVar3;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Cube);
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    info = (CubePickingInfo *)func_?(TypeInfo__UnityEngine__Vector3,3);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    bVar22 = Cube_GetPlaneVertices(pVVar3,(Vector3__Array **)&info,(MethodInfo *)0x0);
    if (bVar22 == 0) {
code_?:
      *outOfBoundState = CubeOutOfBoundState__Enum_OutOfBoundsRemove;
      return;
    }
    if (info == (CubePickingInfo *)0x0) goto code_?;
    if ((((info->fields).pickedFace != 0) && (1 < (uint)(info->fields).pickedFace)) &&
       (2 < (uint)(info->fields).pickedFace)) {
      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1
                ((Plane *)&stack0xffffffcc,*(Vector3 *)&(info->fields).pickedEdge,
                 *(Vector3 *)&(info->fields).normal.y,*(Vector3 *)&(info->fields).point.y,
                 (MethodInfo *)0x0);
      uVar5 = 0;
      if (pVStack_9 != (Vector3__Array *)0x0) {
        pVVar6 = pVStack_9->vector;
        for (; (int)uVar5 < (int)pVStack_9->max_length; uVar5 = uVar5 + 1) {
          if (pVStack_9->max_length <= uVar5) goto code_?;
          fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_GetDistanceToPoint
                             ((Plane *)&stack0xffffffcc,*pVVar6,(MethodInfo *)0x0);
          if (_UNK_? < (double)(float)((uint)fVar11 & _UNK_?)) {
            *outOfBoundState = CubeOutOfBoundState__Enum_OutOfBoundsAdd;
            return;
          }
          pVVar6 = pVVar6 + 1;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pVVar19 = (Vector3__Array *)func_?();
    if (pVVar19 != (Vector3__Array *)0x0) goto code_?;
    func_?(pOVar20,pVVar21);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void MoveVertex(CubePickingInfo, Single, Vector3, Boolean, Boolean, CubeOutOfBoundState ByRef) */

void Assembly-CSharp.dll::Cube::Cube_MoveVertex
               (CubePickingInfo *info,float value,Vector3 axis,bool edgeIndex0,bool edgeIndex1,
               CubeOutOfBoundState__Enum *coob,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_Add_cube_based_on_corner_pull_);
    cRam_? = '\x01';
  }
  pCVar1 = info;
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?();
  }
  else {
    pCVar2 = (CubePickingInfo *)(info->fields).pickedEdge;
    pCVar3 = (info->fields).cube;
    FVar4 = (info->fields).pickedFace;
    info = pCVar2;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    corners = Cube_GetEdge(pCVar3,FVar4,(Edge__Enum)info,(MethodInfo *)0x0);
    Cube_GetEdge((pCVar1->fields).cube,(pCVar1->fields).pickedFace,(pCVar1->fields).pickedEdge,
                 (MethodInfo *)0x0);
    if (edgeIndex0 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length == 0) goto code_?;
      uVar5 = corners->vector[0].x;
      uVar6 = corners->vector[0].y;
      fVar7 = corners->vector[0].z;
      puStack_8 = (undefined *)((float)uVar5 + axis.x * value);
      register0x00001200 = (float)uVar6 + axis.y * value;
      corners->vector[0].x = (float)puStack_8;
      corners->vector[0].y = register0x00001200;
      corners->vector[0].z = fVar7 + axis.z * value;
    }
    if (edgeIndex1 != 0) {
      if (corners == (Vector3__Array *)0x0) goto code_?;
      if (corners->max_length < 2) goto code_?;
      puStack_8 = (undefined *)corners->vector[1].x;
      unique0x0000a404 = corners->vector[1].y;
      fVar7 = corners->vector[1].z;
      corners->vector[1].x = (float)puStack_8 + axis.x * value;
      corners->vector[1].y = unique0x0000a404 + axis.y * value;
      corners->vector[1].z = fVar7 + axis.z * value;
    }
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar9 = Cube_IsOutOfBound(corners,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      pCVar3 = (pCVar1->fields).cube;
      FVar4 = (pCVar1->fields).pickedFace;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      bVar9 = Cube_IsFaceBoxSideAligened(pCVar3,FVar4,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Add_cube_based_on_corner_pull_,(MethodInfo *)0x0);
      *coob = CubeOutOfBoundState__Enum_OutOfBoundsAddVertex;
      return;
    }
    if (corners == (Vector3__Array *)0x0) goto code_?;
    if (((corners->max_length == 0) ||
        (MathFunctions::MathFunctions_ClampVector(corners->vector,-0.5,0.5,(MethodInfo *)0x0),
        corners->max_length < 2)) ||
       (MathFunctions::MathFunctions_ClampVector(corners->vector + 1,-0.5,0.5,(MethodInfo *)0x0),
       corners->max_length == 0)) goto code_?;
    pVVar10 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&puStack_8,corners->vector[0],3,(MethodInfo *)0x0);
    fVar11 = pVVar10->y;
    fVar7 = pVVar10->z;
    if (corners->max_length == 0) goto code_?;
    corners->vector[0].x = pVVar10->x;
    corners->vector[0].y = fVar11;
    corners->vector[0].z = fVar7;
    if (corners->max_length < 2) goto code_?;
    pVVar10 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&puStack_8,corners->vector[1],3,(MethodInfo *)0x0);
    fVar11 = pVVar10->y;
    fVar7 = pVVar10->z;
    if (corners->max_length < 2) goto code_?;
    corners->vector[1].x = pVVar10->x;
    corners->vector[1].y = fVar11;
    corners->vector[1].z = fVar7;
    pCVar3 = (pCVar1->fields).cube;
    if (pCVar3 == (Cube *)0x0) goto code_?;
    stack0xffffffe0 = (float)pCVar3;
    this = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     ((CubeBase *)pCVar3,(MethodInfo *)0x0);
    if (this == (Vector3__Array *)0x0) goto code_?;
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
              PlayableBehaviour_Clone((PlayableBehaviour *)this,(MethodInfo *)0x0);
    info = (CubePickingInfo *)TypeInfo__UnityEngine__Vector3;
    if (pOVar12 == (Object *)0x0) {
      pCVar2 = (CubePickingInfo *)0x0;
code_?:
      FVar4 = (pCVar1->fields).pickedFace;
      EVar13 = (pCVar1->fields).pickedEdge;
      info = pCVar2;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      stack0xffffffe0 = (float)&UNK_?;
      Cube_SetEdge_1((Vector3__Array **)&info,FVar4,EVar13,corners,(MethodInfo *)0x0);
      iVar14 = 0;
      bVar9 = Cube_IsLegal((Vector3__Array *)info,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        return;
      }
      info = (CubePickingInfo *)(pCVar1->fields).pickedFace;
      pCVar3 = (pCVar1->fields).cube;
      EVar13 = (pCVar1->fields).pickedEdge;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        axis.y = (float)TypeInfo__Cube;
        axis.x = (float)&UNK_?;
        func_?();
      }
      Cube_SetEdge(pCVar3,(Face__Enum)info,EVar13,corners,(MethodInfo *)0x0);
      if (iVar14 != 0) {
        if ((*(int *)(iVar14 + 0xc) != 0) && (corners->max_length != 0)) {
          _puStack_24 = *(undefined8 *)(iVar14 + 0x10);
          uVar15 = corners->vector[0].x;
          uVar16 = corners->vector[0].y;
          fVar7 = *(float *)(iVar14 + 0x18) - corners->vector[0].z;
          if ((stack0xffffffe0 - (float)uVar16) * (stack0xffffffe0 - (float)uVar16) +
              ((float)puStack_8 - (float)uVar15) * ((float)puStack_8 - (float)uVar15) +
              fVar7 * fVar7 < _UNK_?) {
            if ((*(uint *)(iVar14 + 0xc) < 2) || (corners->max_length < 2)) goto code_?;
            uVar17 = corners->vector[1].x;
            uVar18 = corners->vector[1].y;
            puStack_8 = (undefined *)*(undefined8 *)(iVar14 + 0x1c);
            stack0xffffffe0 = (float)((ulonglong)*(undefined8 *)(iVar14 + 0x1c) >> 0x20);
            fVar7 = *(float *)(iVar14 + 0x24) - corners->vector[1].z;
            if ((stack0xffffffe0 - (float)uVar18) * (stack0xffffffe0 - (float)uVar18) +
                ((float)puStack_8 - (float)uVar17) * ((float)puStack_8 - (float)uVar17) +
                fVar7 * fVar7 < _UNK_?) {
              return;
            }
          }
          *coob = CubeOutOfBoundState__Enum_WithinBounds;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pCVar2 = (CubePickingInfo *)func_?();
    if (pCVar2 != (CubePickingInfo *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Vector3[] RotateFaceToTop(Cube, Face) */

Vector3__Array *
Assembly-CSharp.dll::Cube::Cube_RotateFaceToTop(Cube *cube,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    func_?(TypeInfo__Cube->static_fields,pVVar1);
    pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
    pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length == 0) goto code_?;
      if (pVVar2 != (Vector3__Array *)0x0) {
        fVar3 = pVVar1->vector[0].y;
        fVar4 = pVVar1->vector[0].z;
        if (pVVar2->max_length == 0) goto code_?;
        pVVar2->vector[0].x = pVVar1->vector[0].x;
        pVVar2->vector[0].y = fVar3;
        pVVar2->vector[0].z = fVar4;
        pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
        if (pVVar1 != (Vector3__Array *)0x0) {
          if (pVVar1->max_length < 2) goto code_?;
          fVar3 = pVVar1->vector[1].y;
          fVar4 = pVVar1->vector[1].z;
          if (pVVar2->max_length < 2) goto code_?;
          pVVar2->vector[1].x = pVVar1->vector[1].x;
          pVVar2->vector[1].y = fVar3;
          pVVar2->vector[1].z = fVar4;
          pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
          if (pVVar1 != (Vector3__Array *)0x0) {
            if (pVVar1->max_length < 3) goto code_?;
            fVar3 = pVVar1->vector[2].y;
            fVar4 = pVVar1->vector[2].z;
            if (pVVar2->max_length < 3) goto code_?;
            pVVar2->vector[2].x = pVVar1->vector[2].x;
            pVVar2->vector[2].y = fVar3;
            pVVar2->vector[2].z = fVar4;
            pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
            if (pVVar1 != (Vector3__Array *)0x0) {
              if (pVVar1->max_length < 4) goto code_?;
              fVar3 = pVVar1->vector[3].y;
              fVar4 = pVVar1->vector[3].z;
              if (pVVar2->max_length < 4) goto code_?;
              pVVar2->vector[3].x = pVVar1->vector[3].x;
              pVVar2->vector[3].y = fVar3;
              pVVar2->vector[3].z = fVar4;
              pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
              if (pVVar1 != (Vector3__Array *)0x0) {
                if (pVVar1->max_length < 5) goto code_?;
                fVar3 = pVVar1->vector[4].y;
                fVar4 = pVVar1->vector[4].z;
                if (pVVar2->max_length < 5) goto code_?;
                pVVar2->vector[4].x = pVVar1->vector[4].x;
                pVVar2->vector[4].y = fVar3;
                pVVar2->vector[4].z = fVar4;
                pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                if (pVVar1 != (Vector3__Array *)0x0) {
                  if (pVVar1->max_length < 6) goto code_?;
                  fVar3 = pVVar1->vector[5].y;
                  fVar4 = pVVar1->vector[5].z;
                  if (pVVar2->max_length < 6) goto code_?;
                  pVVar2->vector[5].x = pVVar1->vector[5].x;
                  pVVar2->vector[5].y = fVar3;
                  pVVar2->vector[5].z = fVar4;
                  pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                  if (pVVar1 != (Vector3__Array *)0x0) {
                    if (pVVar1->max_length < 7) goto code_?;
                    fVar3 = pVVar1->vector[6].y;
                    fVar4 = pVVar1->vector[6].z;
                    if (pVVar2->max_length < 7) goto code_?;
                    pVVar2->vector[6].x = pVVar1->vector[6].x;
                    pVVar2->vector[6].y = fVar3;
                    pVVar2->vector[6].z = fVar4;
                    pVVar1 = TypeInfo__Cube->static_fields->cornersBookkeeping;
                    if (pVVar1 != (Vector3__Array *)0x0) {
                      if (7 < pVVar1->max_length) {
                        fVar3 = pVVar1->vector[7].y;
                        fVar4 = pVVar1->vector[7].z;
                        if (7 < pVVar2->max_length) {
                          pVVar2->vector[7].x = pVVar1->vector[7].x;
                          pVVar2->vector[7].y = fVar3;
                          pVVar2->vector[7].z = fVar4;
                          pQVar5 = Cube_GetToTopRotation
                                             ((Quaternion *)&stack0xffffffd4,direction,
                                              (MethodInfo *)0x0);
                          pVVar6 = pVVar2->vector;
                          uVar7 = 0;
                          __return_storage_ptr__ = (Vector3 *)pQVar5->x;
                          fVar4 = pQVar5->y;
                          fVar3 = pQVar5->z;
                          fVar8 = pQVar5->w;
                          while( true ) {
                            if ((int)pVVar2->max_length <= (int)uVar7) {
                              return pVVar2;
                            }
                            if (pVVar2->max_length <= uVar7) break;
                            rotation.y = fVar4;
                            rotation.x = (float)__return_storage_ptr__;
                            rotation.z = fVar3;
                            rotation.w = fVar8;
                            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                     Quaternion_op_Multiply_1
                                               (&VStack_10,rotation,*pVVar6,(MethodInfo *)0x0);
                            fVar4 = pVVar9->x;
                            fVar3 = pVVar9->y;
                            fVar8 = pVVar9->z;
                            __return_storage_ptr__ = (Vector3 *)&stack0xffffffe4;
                            pVVar9 = MathFunctions::MathFunctions_RoundVector
                                               (__return_storage_ptr__,*pVVar9,3,(MethodInfo *)0x0);
                            fVar11 = pVVar9->y;
                            fVar12 = pVVar9->z;
                            if (pVVar2->max_length <= uVar7) break;
                            uVar7 = uVar7 + 1;
                            pVVar6->x = pVVar9->x;
                            pVVar6->y = fVar11;
                            pVVar6->z = fVar12;
                            pVVar6 = pVVar6 + 1;
                          }
                        }
                      }
                      goto code_?;
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
  pcVar13 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar13)();
  return pVVar1;
}


/* Void SetEdge(Cube, Face, Edge, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetEdge
               (Cube *cube,Face__Enum face,Edge__Enum edge,Vector3__Array *edgeVertices,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    func_?(TypeInfo__Cube->static_fields,pVVar1);
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
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  pVVar1 = *corners;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  switch(edge) {
  case Edge__Enum_Front:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (pVVar1->max_length != 0) {
          pVVar1->vector[0].x = edgeVertices->vector[0].x;
          pVVar1->vector[0].y = fVar2;
          pVVar1->vector[0].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (1 < pVVar1->max_length) {
              pVVar1->vector[1].x = edgeVertices->vector[1].x;
              pVVar1->vector[1].y = fVar2;
              pVVar1->vector[1].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  case Edge__Enum_Back:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (2 < pVVar1->max_length) {
          pVVar1->vector[2].x = edgeVertices->vector[0].x;
          pVVar1->vector[2].y = fVar2;
          pVVar1->vector[2].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (3 < pVVar1->max_length) {
              pVVar1->vector[3].x = edgeVertices->vector[1].x;
              pVVar1->vector[3].y = fVar2;
              pVVar1->vector[3].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  case Edge__Enum_Left:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (3 < pVVar1->max_length) {
          pVVar1->vector[3].x = edgeVertices->vector[0].x;
          pVVar1->vector[3].y = fVar2;
          pVVar1->vector[3].z = fVar3;
          if (1 < edgeVertices->max_length) {
            fVar2 = edgeVertices->vector[1].y;
            fVar3 = edgeVertices->vector[1].z;
            if (pVVar1->max_length != 0) {
              pVVar1->vector[0].x = edgeVertices->vector[1].x;
              pVVar1->vector[0].y = fVar2;
              pVVar1->vector[0].z = fVar3;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
    break;
  case Edge__Enum_Right:
    if (edgeVertices != (Vector3__Array *)0x0) {
      if (edgeVertices->max_length == 0) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = edgeVertices->vector[0].y;
        fVar3 = edgeVertices->vector[0].z;
        if (1 < pVVar1->max_length) {
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
          }
        }
        goto code_?;
      }
    }
    break;
  default:
code_?:
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    Cube_SetFace_1(corners,face,pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  func_?();
  uVar4 = (uint)&stack0x00000000 | (uint)pVVar1->vector[5].z;
  puVar5 = (undefined1 *)(uVar4 - 2);
  *(short *)(uVar4 - 2) = (short)uVar4;
  cRam_? = cRam_? + unaff_BH + CARRY1(in_stack_6,extraout_CL);
  if (cRam_? == '\0') {
    *(Cube__Class ***)(uVar4 - 6) = &TypeInfo__Cube;
    puVar7 = (undefined1 *)(uVar4 - 10);
    *(undefined **)(uVar4 - 10) = &UNK_?;
    func_?();
    puVar5 = puVar7 + 4;
    cRam_? = '\x01';
  }
  *(Vector3__Array **)(puVar5 + -4) = pVVar1;
  iVar8 = *(int *)(uVar4 + 6);
  *(Vector3__Array ***)(puVar5 + -8) = corners;
  if (iVar8 == 0) {
    *(undefined **)(puVar5 + -0xc) = &UNK_?;
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(undefined4 *)(puVar5 + -0xc) = 0;
  *(int *)(puVar5 + -0x10) = iVar8;
  *(undefined **)(puVar5 + -0x14) = &UNK_?;
  pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                     (*(CubeBase **)(puVar5 + -0x10),*(MethodInfo **)(puVar5 + -0xc));
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    *(Cube__Class **)(puVar5 + -4) = TypeInfo__Cube;
    puVar10 = puVar5 + -8;
    *(undefined **)(puVar5 + -8) = &UNK_?;
    func_?();
    puVar5 = puVar10 + 4;
  }
  pCVar11 = TypeInfo__Cube->static_fields;
  *(Vector3__Array **)(puVar5 + -4) = pVVar1;
  pCVar11->cornersBookkeeping = pVVar1;
  *(Cube__StaticFields **)(puVar5 + -8) = TypeInfo__Cube->static_fields;
  puVar12 = puVar5 + -0xc;
  *(undefined **)(puVar5 + -0xc) = &UNK_?;
  func_?();
  pCVar13 = TypeInfo__Cube;
  *(undefined4 *)(puVar12 + -4) = 0;
  *(undefined4 *)(puVar12 + -8) = *(undefined4 *)(uVar4 + 0x12);
  *(undefined4 *)(puVar12 + -0xc) = *(undefined4 *)(uVar4 + 0xe);
  *(undefined4 *)(puVar12 + -0x10) = *(undefined4 *)(uVar4 + 10);
  *(Cube__StaticFields **)(puVar12 + -0x14) = pCVar13->static_fields;
  *(undefined **)(puVar12 + -0x18) = &UNK_?;
  Cube_SetEdge_1(*(Vector3__Array ***)(puVar12 + -0x14),*(Face__Enum *)(puVar12 + -0x10),
                 *(Edge__Enum *)(puVar12 + -0xc),*(Vector3__Array **)(puVar12 + -8),
                 *(MethodInfo **)(puVar12 + -4));
  pCVar13 = TypeInfo__Cube;
  *(undefined4 *)(puVar12 + -4) = 0;
  *(Vector3__Array **)(puVar12 + -8) = pCVar13->static_fields->cornersBookkeeping;
  *(int *)(puVar12 + -0xc) = iVar8;
  *(undefined **)(puVar12 + -0x10) = &UNK_?;
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
            (*(CubeBase **)(puVar12 + -0xc),*(Vector3__Array **)(puVar12 + -8),
             *(MethodInfo **)(puVar12 + -4));
  return;
}


/* Void SetFace(Cube, Face, Vector3[]) */

void Assembly-CSharp.dll::Cube::Cube_SetFace
               (Cube *cube,Face__Enum face,Vector3__Array *faceVertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (cube != (Cube *)0x0) {
    pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                       ((CubeBase *)cube,(MethodInfo *)0x0);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
    func_?(TypeInfo__Cube->static_fields,pVVar1);
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
    pVVar1 = *corners;
    if ((faceVertices == (Vector3__Array *)0x0) ||
       (func_?(), pVVar1 == (Vector3__Array *)0x0)) break;
    func_?(0,uStack_2,uStack_3);
    pVVar4 = *corners;
    func_?(&uStack_2,1);
    pVVar1 = (Vector3__Array *)0x0;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    func_?(1,uStack_2,uStack_3);
    pVVar1 = *corners;
    func_?(&uStack_2,2);
    if (pVVar1 == (Vector3__Array *)0x0) break;
    uVar5 = 2;
    goto code_?;
  case Face__Enum_Bottom:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(4,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(5,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(6,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(7,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  case Face__Enum_Front:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(7,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(6,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(1,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(0,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  case Face__Enum_Back:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(5,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(4,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(3,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(2,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  case Face__Enum_Left:
    pVVar1 = *corners;
    if ((faceVertices == (Vector3__Array *)0x0) ||
       (func_?(), pVVar1 == (Vector3__Array *)0x0)) break;
    func_?(4,uStack_2,uStack_3);
    pVVar4 = *corners;
    func_?(&uStack_2,1);
    pVVar1 = (Vector3__Array *)0x0;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    func_?(7,uStack_2,uStack_3);
    pVVar1 = *corners;
    func_?(&uStack_2,2);
    if (pVVar1 == (Vector3__Array *)0x0) break;
    uVar5 = 0;
code_?:
    func_?(uVar5,uStack_2,uStack_3);
    pVVar4 = *corners;
    func_?(&uStack_2,3);
    if (pVVar4 != (Vector3__Array *)0x0) {
      func_?(3,uStack_2,uStack_3);
code_?:
      return;
    }
    break;
  case Face__Enum_Right:
    pVVar1 = *corners;
    if ((faceVertices != (Vector3__Array *)0x0) &&
       (func_?(), pVVar1 != (Vector3__Array *)0x0)) {
      func_?(6,uStack_2,uStack_3);
      pVVar4 = *corners;
      func_?(&uStack_2,1);
      pVVar1 = (Vector3__Array *)0x0;
      if (pVVar4 != (Vector3__Array *)0x0) {
        func_?(5,uStack_2,uStack_3);
        pVVar1 = *corners;
        func_?(&uStack_2,2);
        if (pVVar1 != (Vector3__Array *)0x0) {
          func_?(2,uStack_2,uStack_3);
          pVVar4 = *corners;
          func_?(&uStack_2,3);
          if (pVVar4 != (Vector3__Array *)0x0) {
            func_?(1,uStack_2,uStack_3);
            return;
          }
        }
      }
    }
    break;
  default:
    goto code_?;
  }
  bVar6 = 0;
  uVar7 = func_?();
  *(undefined4 *)(unaff_EDI + -4) = 0x69411054;
  *(int *)(unaff_EDI + -8) = unaff_EDI + -4;
  bVar8 = *(byte *)&faceVertices->klass;
  bVar9 = (byte)((ulonglong)uVar7 >> 8);
  bVar10 = *(char *)&faceVertices->klass + bVar9;
  *(byte *)&faceVertices->klass = bVar10 + bVar6;
  *(undefined4 *)(unaff_EDI + -0xc) = 0x54;
  *(char *)&pVVar1->klass =
       *(char *)&pVVar1->klass + (char)extraout_ECX + (CARRY1(bVar8,bVar9) || CARRY1(bVar10,bVar6));
  lVar11 = (longlong)*(int *)((int)uVar7 + -0x10 + (int)((ulonglong)uVar7 >> 0x20)) * 0x6b;
  *(int *)(unaff_EDI + -0x10) = unaff_EDI + -0xc;
  *(char *)(extraout_ECX + -0x33efab94) =
       *(char *)(extraout_ECX + -0x33efab94) + (char)extraout_ECX + ((int)lVar11 != lVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetMaterial(Cube, Face, Byte) */

void Assembly-CSharp.dll::Cube::Cube_SetMaterial
               (Cube *cube,Face__Enum face,uint8_t materialId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((cube != (Cube *)0x0) &&
     (pBVar2 = (cube->fields)._.faceMaterials, pBVar2 != (Byte__Array *)0x0)) {
    if (face < pBVar2->max_length) {
      pBVar2->vector[face] = materialId;
      return;
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[UnityEngine.Vector3] SquareCornersToCubeCorners(List`1[UnityEngine.Vector2], Face) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::Cube::Cube_SquareCornersToCubeCorners
          (List_1_UnityEngine_Vector2_ *corners,Face__Enum direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    if (corners != (List_1_UnityEngine_Vector2_ *)0x0) {
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      func_?(pLVar1,VVar2.x - _UNK_?,_UNK_?,in_stack_3 - _UNK_?
                      ,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                     );
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,3,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      direction_00 = VVar2.x - _UNK_?;
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000020 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack4 = pLVar1;
      func_?();
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000038 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack5 = pLVar1;
      func_?();
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000020 = CONCAT44(&UNK_?,uStack6);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000050 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack7 = pLVar1;
      func_?();
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000038 = CONCAT44(&UNK_?,uStack8);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack9 = pLVar1;
      func_?();
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      _uStack00000050 = CONCAT44(&UNK_?,uStack10);
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (corners,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fStack12 = VVar11.y - _UNK_?;
      pMStack13 =
           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uStack14 = CONCAT44(_UNK_?,VVar2.x - _UNK_?);
      pLStack15 = pLVar1;
      func_?();
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      _uStack00000068 = CONCAT44(&UNK_?,uStack16);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__get_Item
                (corners,0,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                );
      pLStack17 = pLVar1;
      func_?();
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar1 = Cube_CreateCubeCornersFromTopFace(pLVar1,(Face__Enum)direction_00,(MethodInfo *)0x0);
      return pLVar1;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
  return pLVar1;
}


/* Void UnIndentFace(Cube, Face) */

void Assembly-CSharp.dll::Cube::Cube_UnIndentFace(Cube *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pVVar1 = Cube_RotateFaceToTop(cube,face,(MethodInfo *)0x0);
  pVVar1 = Cube_GetFace_1(pVVar1,face,(MethodInfo *)0x0);
  pfVar2 = &pVVar1->vector[0].y;
  uVar3 = 0;
  if (pVVar1 != (Vector3__Array *)0x0) {
    do {
      if (pVVar1->max_length <= uVar3) goto code_?;
      *pfVar2 = 0.5;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 3;
    } while ((int)uVar3 < 4);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pQVar4 = Cube_GetFromTopRotation((Quaternion *)&stack0xffffffd4,face,(MethodInfo *)0x0);
    pVVar5 = pVVar1->vector;
    fVar6 = pQVar4->x;
    fVar7 = pQVar4->y;
    fVar8 = pQVar4->z;
    fVar9 = pQVar4->w;
    for (uVar3 = 0; (int)uVar3 < (int)pVVar1->max_length; uVar3 = uVar3 + 1) {
      if (pVVar1->max_length <= uVar3) goto code_?;
      fVar10 = pVVar5->y;
      fVar11 = pVVar5->z;
      fVar12 = 0.0;
      rotation.y = fVar7;
      rotation.x = fVar6;
      rotation.z = fVar8;
      rotation.w = fVar9;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xfffffff0,rotation,*pVVar5,(MethodInfo *)0x0);
      fVar6 = fVar10;
      fVar7 = fVar11;
      fVar8 = fVar12;
      pVVar13 = MathFunctions::MathFunctions_RoundVector
                         ((Vector3 *)&pVStack_14,*pVVar13,3,(MethodInfo *)0x0);
      fVar11 = pVVar13->y;
      fVar10 = pVVar13->z;
      if (pVVar1->max_length <= uVar3) goto code_?;
      pVVar5->x = pVVar13->x;
      pVVar5->y = fVar11;
      pVVar5->z = fVar10;
      pVVar5 = pVVar5 + 1;
    }
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (cube != (Cube *)0x0) {
      pVVar15 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                         ((CubeBase *)cube,(MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        pVStack_14 = (Vector3__Array *)TypeInfo__Cube;
        func_?();
      }
      TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar15;
      pVStack_14 = pVVar15;
      func_?();
      Cube_SetFace_1(&TypeInfo__Cube->static_fields->cornersBookkeeping,face,pVVar1,
                     (MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                ((CubeBase *)cube,TypeInfo__Cube->static_fields->cornersBookkeeping,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Cube() */

void Assembly-CSharp.dll::Cube::Cube__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__Cube->static_fields->cornersBookkeeping = pVVar1;
  func_?(TypeInfo__Cube->static_fields,pVVar1);
  return;
}


/* Cube(Byte[], Byte[]) */

void Assembly-CSharp.dll::Cube::Cube__ctor
               (Cube *this,Byte__Array *byteCorners,Byte__Array *faceMaterials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?();
  }
  else {
    unaff_EDI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Byte;
    if (unaff_EDI == (Object *)0x0) {
      (this->fields)._.byteCorners = (Byte__Array *)0x0;
      iVar2 = 0;
code_?:
      func_?(&(this->fields)._.byteCorners,iVar2);
      pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
      (this->fields)._.faceMaterials = pBVar1;
      method_00 = (MethodInfo *)&(this->fields)._.faceMaterials;
      func_?(method_00,pBVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields)._.byteCorners = byteCorners;
      func_?(&(this->fields)._.byteCorners,byteCorners);
      (this->fields)._.faceMaterials = faceMaterials;
      func_?(&(this->fields)._.faceMaterials,faceMaterials);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)this,(MethodInfo *)0x0);
      return;
    }
    pBVar1 = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
    if (pBVar1 != (Byte__Array *)0x0) {
      (this->fields)._.byteCorners = pBVar1;
      unaff_EBX = TypeInfo__System__Byte;
      iVar2 = func_?(unaff_EDI,TypeInfo__System__Byte);
      if (iVar2 != 0) goto code_?;
    }
  }
  func_?(unaff_EDI,unaff_EBX);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Cube(BytePacker, Byte) */

void Assembly-CSharp.dll::Cube::Cube__ctor_1
               (Cube *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 == (Byte__Array *)0x0) goto code_?;
  pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
           PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
  if (pOVar2 == (Object *)0x0) {
    (this->fields)._.byteCorners = (Byte__Array *)0x0;
    iVar3 = 0;
code_?:
    func_?(&(this->fields)._.byteCorners,iVar3);
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    (this->fields)._.faceMaterials = pBVar1;
    func_?(&(this->fields)._.faceMaterials,pBVar1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_4);
    ppBVar5 = &(this->fields)._.faceMaterials;
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      cRam_? = '\x01';
    }
    if ((byteFlags & 1) == 0) {
      if (bp == (BytePacker *)0x0) goto code_?;
      pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                         (bp,8,(MethodInfo *)0x0);
      (this->fields)._.byteCorners = pBVar1;
      func_?(&(this->fields)._.byteCorners,pBVar1);
    }
    else {
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
      (this->fields)._.byteCorners = pBVar1;
      func_?(&(this->fields)._.byteCorners,pBVar1);
      if (bp == (BytePacker *)0x0) goto code_?;
    }
    if ((byteFlags & 2) == 0) {
      pBVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                         (bp,6,(MethodInfo *)0x0);
      *ppBVar5 = pBVar1;
      func_?(ppBVar5,pBVar1);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                ((CubeBase *)this,(MethodInfo *)0x0);
      return;
    }
    uVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                      (bp,(MethodInfo *)0x0);
    uVar7 = 0;
    while (pBVar1 = *ppBVar5, pBVar1 != (Byte__Array *)0x0) {
      if (pBVar1->max_length <= uVar7) goto code_?;
      pBVar1->vector[uVar7] = uVar6;
      uVar7 = uVar7 + 1;
      if (5 < (int)uVar7) {
        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
                  ((CubeBase *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pBVar8 = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)func_?(pOVar2,TypeInfo__System__Byte);
    if (pBVar1 != (Byte__Array *)0x0) {
      (this->fields)._.byteCorners = pBVar1;
      pBVar8 = TypeInfo__System__Byte;
      iVar3 = func_?(pOVar2,TypeInfo__System__Byte);
      if (iVar3 != 0) goto code_?;
    }
    func_?(pOVar2,pBVar8);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

