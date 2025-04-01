
/* List`1[UnityEngine.Vector2] Calc2DQuadCornerPoints(Vector2, Vector2, Single) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc2DQuadCornerPoints
          (Vector2 quadCenter,Vector2 quadSize,float degreeRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  puStack_3 = (undefined *)(TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  QuadMath_Calc2DQuadRightUp
            (degreeRotation,(Vector2 *)&stack0xfffffff4,(Vector2 *)&puStack_3,(MethodInfo *)0x0);
  fVar5 = quadSize.x * _UNK_?;
  fVar6 = quadSize.y * _UNK_?;
  pLVar7 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar8 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar1 = fVar1 * fVar5;
  fVar2 = fVar2 * fVar5;
  pMVar9 = (MethodInfo *)((float)puStack_3 * fVar6);
  fVar4 = fVar4 * fVar6;
  fVar5 = (quadCenter.x - fVar1) + (float)pMVar9;
  fVar6 = (quadCenter.y - fVar2) + fVar4;
  puStack_3 = (undefined *)fVar5;
  if (pLVar7 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar10 = &(pLVar7->fields)._version;
    *piVar10 = *piVar10 + 1;
    pVVar11 = (pLVar7->fields)._items;
    if (pVVar11 != (Vector2__Array *)0x0) {
      uVar12 = (pLVar7->fields)._size;
      if (uVar12 < pVVar11->max_length) {
        (pLVar7->fields)._size = uVar12 + 1;
        if (pVVar11->max_length <= uVar12) goto code_?;
        pVVar11->vector[uVar12].x = fVar5;
        pVVar11->vector[uVar12].y = fVar6;
      }
      else {
        pMVar9 = pMVar8->klass->rgctx_data[0xe].method;
        item_02.y = fVar6;
        item_02.x = fVar5;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(pLVar7,item_02,pMVar9);
        fVar4 = fVar5;
      }
      pMVar8 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      puStack_3 = (undefined *)(quadCenter.x + fVar1 + (float)pMVar9);
      fVar5 = quadCenter.y + fVar2 + fVar4;
      piVar10 = &(pLVar7->fields)._version;
      *piVar10 = *piVar10 + 1;
      pVVar11 = (pLVar7->fields)._items;
      if (pVVar11 != (Vector2__Array *)0x0) {
        uVar12 = (pLVar7->fields)._size;
        if (uVar12 < pVVar11->max_length) {
          (pLVar7->fields)._size = uVar12 + 1;
          if (pVVar11->max_length <= uVar12) goto code_?;
          pVVar11->vector[uVar12].x = (float)puStack_3;
          pVVar11->vector[uVar12].y = fVar5;
        }
        else {
          quadCenter.y = (float)pMVar8->klass->rgctx_data[0xe].method;
          pMVar9 = (MethodInfo *)&UNK_?;
          item.y = fVar5;
          item.x = (float)puStack_3;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize(pLVar7,item,(MethodInfo *)quadCenter.y);
          quadCenter.x = fVar5;
        }
        pMVar8 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        puStack_3 = (undefined *)((quadCenter.x + fVar1) - (float)pMVar9);
        fVar5 = (quadCenter.y + fVar2) - fVar4;
        piVar10 = &(pLVar7->fields)._version;
        *piVar10 = *piVar10 + 1;
        pVVar11 = (pLVar7->fields)._items;
        if (pVVar11 != (Vector2__Array *)0x0) {
          uVar12 = (pLVar7->fields)._size;
          if (uVar12 < pVVar11->max_length) {
            (pLVar7->fields)._size = uVar12 + 1;
            if (pVVar11->max_length <= uVar12) goto code_?;
            pVVar11->vector[uVar12].x = (float)puStack_3;
            pVVar11->vector[uVar12].y = fVar5;
          }
          else {
            quadCenter.y = (float)pMVar8->klass->rgctx_data[0xe].method;
            pMVar9 = (MethodInfo *)&UNK_?;
            item_00.y = fVar5;
            item_00.x = (float)puStack_3;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize(pLVar7,item_00,(MethodInfo *)quadCenter.y);
            quadCenter.x = fVar5;
          }
          pMVar8 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar10 = &(pLVar7->fields)._version;
          *piVar10 = *piVar10 + 1;
          pVVar11 = (pLVar7->fields)._items;
          if (pVVar11 != (Vector2__Array *)0x0) {
            uVar12 = (pLVar7->fields)._size;
            if (pVVar11->max_length <= uVar12) {
              pMVar9 = pMVar8->klass->rgctx_data[0xe].method;
              item_01.y = (float)pMVar9;
              item_01.x = (float)pMVar9;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize(pLVar7,item_01,pMVar9);
              return pLVar7;
            }
            (pLVar7->fields)._size = uVar12 + 1;
            if (uVar12 < pVVar11->max_length) {
              pVVar11->vector[uVar12].x = (quadCenter.x - fVar1) - (float)pMVar9;
              pVVar11->vector[uVar12].y = (quadCenter.y - fVar2) - fVar4;
              return pLVar7;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector2_ *)(*pcVar13)();
  return pLVar7;
}


/* List`1[UnityEngine.Vector2] Calc2DQuadCornerPoints(Vector2, Vector2, Vector2, Vector2) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc2DQuadCornerPoints_1
          (Vector2 quadCenter,Vector2 quadSize,Vector2 right,Vector2 up,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  fVar1 = quadSize.x * _UNK_?;
  fVar2 = quadSize.y * _UNK_?;
  pLVar3 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar5 = right.x * fVar1;
  fVar1 = right.y * fVar1;
  fVar6 = up.x * fVar2;
  fVar2 = up.y * fVar2;
  fVar7 = (quadCenter.y - fVar1) + fVar2;
  if (pLVar3 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar8 = &(pLVar3->fields)._version;
    *piVar8 = *piVar8 + 1;
    pVVar9 = (pLVar3->fields)._items;
    if (pVVar9 != (Vector2__Array *)0x0) {
      uVar10 = (pLVar3->fields)._size;
      if (uVar10 < pVVar9->max_length) {
        (pLVar3->fields)._size = uVar10 + 1;
        if (pVVar9->max_length <= uVar10) goto code_?;
        pVVar9->vector[uVar10].x = (quadCenter.x - fVar5) + fVar6;
        pVVar9->vector[uVar10].y = fVar7;
      }
      else {
        pMVar4 = pMVar4->klass->rgctx_data[0xe].method;
        item.y = fVar7;
        item.x = (float)pMVar4;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(pLVar3,item,pMVar4);
      }
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar7 = quadCenter.x + fVar5 + fVar6;
      fVar11 = quadCenter.y + fVar1 + fVar2;
      piVar8 = &(pLVar3->fields)._version;
      *piVar8 = *piVar8 + 1;
      pVVar9 = (pLVar3->fields)._items;
      if (pVVar9 != (Vector2__Array *)0x0) {
        uVar10 = (pLVar3->fields)._size;
        if (uVar10 < pVVar9->max_length) {
          (pLVar3->fields)._size = uVar10 + 1;
          if (pVVar9->max_length <= uVar10) goto code_?;
          pVVar9->vector[uVar10].x = fVar7;
          pVVar9->vector[uVar10].y = fVar11;
        }
        else {
          item_00.y = fVar11;
          item_00.x = fVar7;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (pLVar3,item_00,pMVar4->klass->rgctx_data[0xe].method);
          fVar5 = fVar7;
        }
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar7 = (quadCenter.x + fVar5) - fVar6;
        fVar11 = (quadCenter.y + fVar1) - fVar2;
        piVar8 = &(pLVar3->fields)._version;
        *piVar8 = *piVar8 + 1;
        pVVar9 = (pLVar3->fields)._items;
        if (pVVar9 != (Vector2__Array *)0x0) {
          uVar10 = (pLVar3->fields)._size;
          if (uVar10 < pVVar9->max_length) {
            (pLVar3->fields)._size = uVar10 + 1;
            if (pVVar9->max_length <= uVar10) goto code_?;
            pVVar9->vector[uVar10].x = fVar7;
            pVVar9->vector[uVar10].y = fVar11;
          }
          else {
            item_01.y = fVar11;
            item_01.x = fVar7;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar3,item_01,pMVar4->klass->rgctx_data[0xe].method);
            fVar5 = fVar7;
          }
          pMVar4 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          fVar6 = (quadCenter.x - fVar5) - fVar6;
          fVar2 = (quadCenter.y - fVar1) - fVar2;
          piVar8 = &(pLVar3->fields)._version;
          *piVar8 = *piVar8 + 1;
          pVVar9 = (pLVar3->fields)._items;
          if (pVVar9 != (Vector2__Array *)0x0) {
            uVar10 = (pLVar3->fields)._size;
            if (pVVar9->max_length <= uVar10) {
              item_02.y = fVar2;
              item_02.x = fVar6;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (pLVar3,item_02,pMVar4->klass->rgctx_data[0xe].method);
              return pLVar3;
            }
            (pLVar3->fields)._size = uVar10 + 1;
            if (uVar10 < pVVar9->max_length) {
              pVVar9->vector[uVar10].x = fVar6;
              pVVar9->vector[uVar10].y = fVar2;
              return pLVar3;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar12)();
  return pLVar3;
}


/* Void Calc2DQuadRightUp(Single, Vector2 ByRef, Vector2 ByRef) */

void Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc2DQuadRightUp
               (float degreeRotation,Vector2 *right,Vector2 *up,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  right->x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  right->y = fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  up->x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  up->y = fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffe0,degreeRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  VVar3 = *right;
  fVar4 = 0.0;
  fVar1 = VVar3.x;
  fVar5 = VVar3.y;
  uVar6 = 0;
  point.z = 0.0;
  point.x = VVar3.x;
  point.y = VVar3.y;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe4,*pQVar2,point,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  right->x = (float)uVar8;
  right->y = (float)uVar9;
  rotation.y = fVar5;
  rotation.x = fVar1;
  rotation.z = (float)uVar6;
  rotation.w = fVar4;
  point_00.z = 0.0;
  point_00.x = up->x;
  point_00.y = up->y;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe4,rotation,point_00,(MethodInfo *)0x0);
  uVar10 = pVVar7->x;
  uVar11 = pVVar7->y;
  up->x = (float)uVar10;
  up->y = (float)uVar11;
  return;
}


/* Vector3 Calc3DQuadCorner(Vector3, Vector2, Quaternion, QuadCorner) */

Vector3 * Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadCorner
                    (Vector3 *__return_storage_ptr__,Vector3 quadCenter,Vector2 quadSize,
                    Quaternion quadRotation,QuadCorner__Enum quadCorner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffe4,quadRotation,
             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  fVar2 = pVVar1->x;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe4,quadRotation,*pVVar1,(MethodInfo *)0x0);
  fVar3 = quadSize.x * _UNK_?;
  fVar4 = quadSize.y * _UNK_?;
  fVar5 = quadRotation.z * fVar3;
  fVar6 = quadRotation.w * fVar3;
  fVar2 = fVar2 * fVar3;
  if (quadCorner == QuadCorner__Enum_TopLeft) {
    fVar6 = quadCenter.y - fVar6;
    fVar5 = quadCenter.x - fVar5;
    fVar2 = quadCenter.z - fVar2;
  }
  else {
    if (quadCorner != QuadCorner__Enum_TopRight) {
      if (quadCorner == QuadCorner__Enum_BottomRight) {
        fVar5 = quadCenter.x + fVar5;
        fVar6 = quadCenter.y + fVar6;
        fVar2 = quadCenter.z + fVar2;
      }
      else {
        fVar5 = quadCenter.x - fVar5;
        fVar6 = quadCenter.y - fVar6;
        fVar2 = quadCenter.z - fVar2;
      }
      uVar7 = pVVar1->x;
      uVar8 = pVVar1->y;
      uRam_? = CONCAT44(fVar6 - (float)uVar8 * fVar4,fVar5 - (float)uVar7 * fVar4);
      fRam00000008 = fVar2 - pVVar1->z * fVar4;
      return (Vector3 *)0x0;
    }
    fVar6 = quadCenter.y + fVar6;
    fVar5 = quadCenter.x + fVar5;
    fVar2 = quadCenter.z + fVar2;
  }
  uVar9 = pVVar1->x;
  uVar10 = pVVar1->y;
  uRam_? = CONCAT44((float)uVar10 * fVar4 + fVar6,(float)uVar9 * fVar4 + fVar5);
  fRam00000008 = pVVar1->z * fVar4 + fVar2;
  return (Vector3 *)0x0;
}


/* List`1[UnityEngine.Vector3] Calc3DQuadCornerPoints(Vector3, Vector2, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadCornerPoints
          (Vector3 quadCenter,Vector2 quadSize,Quaternion quadRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,quadRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fStack_5 = pVVar1->z;
  pLStack_6 = (List_1_UnityEngine_Vector3_ *)uVar3;
  fStack_7 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffa0,quadRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fStack_8 = quadSize.x * _UNK_?;
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = pVVar1->z;
  pMStack_9 = (MethodInfo *)(quadSize.y * _UNK_?);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  fStack_11 = (float)pLStack_6 * fStack_8;
  fStack_12 = fStack_7 * fStack_8;
  fStack_13 = fStack_5 * fStack_8;
  fStack_14 = VStack_2.x * (float)pMStack_9;
  fStack_8 = VStack_2.z * (float)pMStack_9;
  VStack_2.x = fStack_14 + (quadCenter.x - fStack_11);
  VStack_2.y = VStack_2.y * (float)pMStack_9 + (quadCenter.y - fStack_12);
  VStack_2.z = fStack_8 + (quadCenter.z - fStack_13);
  if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_9 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar10;
    fStack_7 = VStack_2.x;
    fStack_5 = VStack_2.y;
    fStack_8 = VStack_2.z;
    func_?();
    fStack_7 = fStack_14 + quadCenter.x + fStack_11;
    fStack_5 = (float)pMStack_9 + quadCenter.y + fStack_12;
    VStack_2.z = fStack_8 + quadCenter.z + fStack_13;
    pMStack_9 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar10;
    fStack_8 = VStack_2.z;
    func_?();
    VStack_2.z = (quadCenter.z + fStack_13) - fStack_8;
    fStack_7 = (quadCenter.x + fStack_11) - fStack_14;
    fStack_5 = (quadCenter.y + fStack_12) - (float)pMStack_9;
    pMStack_9 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar10;
    fStack_8 = VStack_2.z;
    func_?();
    VStack_2.z = (quadCenter.z - fStack_13) - fStack_8;
    fStack_7 = (quadCenter.x - fStack_11) - fStack_14;
    fStack_5 = (quadCenter.y - fStack_12) - (float)pMStack_9;
    pMStack_9 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar10;
    fStack_8 = VStack_2.z;
    func_?();
    return pLVar10;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar15)();
  return pLVar10;
}


/* OBB Calc3DQuadOBB(Vector3, Vector2, Quaternion, QuadEpsilon) */

OBB * Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadOBB
                (OBB *__return_storage_ptr__,Vector3 quadCenter,Vector2 quadSize,
                Quaternion quadRotation,QuadEpsilon epsilon,MethodInfo *method)

{
  fVar1 = epsilon._extrudeEps * _UNK_?;
  *(undefined2 *)&__return_storage_ptr__->field_0x29 = 0;
  __return_storage_ptr__->field_0x2b = 0;
  (__return_storage_ptr__->_center).x = quadCenter.x;
  (__return_storage_ptr__->_center).y = quadCenter.y;
  (__return_storage_ptr__->_center).z = quadCenter.z;
  (__return_storage_ptr__->_size).x = quadSize.x + epsilon._sizeEps.x;
  (__return_storage_ptr__->_size).y = quadSize.y + epsilon._sizeEps.y;
  (__return_storage_ptr__->_size).z = fVar1;
  (__return_storage_ptr__->_rotation).x = quadRotation.x;
  (__return_storage_ptr__->_rotation).y = quadRotation.y;
  (__return_storage_ptr__->_rotation).z = quadRotation.z;
  (__return_storage_ptr__->_rotation).w = quadRotation.w;
  __return_storage_ptr__->_isValid = 1;
  return __return_storage_ptr__;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, Single, Single, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains2DPoint
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,
               float degreeRotation,QuadEpsilon epsilon,MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  QuadMath_Calc2DQuadRightUp(degreeRotation,&VStack_1,&VStack_2,(MethodInfo *)0x0);
  if ((float)((uint)(VStack_1.x * (point.x - quadCenter.x) + VStack_1.y * (point.y - quadCenter.y))
             & _UNK_?) <= (epsilon._sizeEps.x + quadWidth) * _UNK_?) {
    return (float)((uint)(VStack_2.x * (point.x - quadCenter.x) +
                         VStack_2.y * (point.y - quadCenter.y)) & _UNK_?) <=
           (epsilon._sizeEps.y + quadHeight) * _UNK_?;
  }
  return 0;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, Single, Vector2, Vector2, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains2DPoint_1
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,Vector2 quadRight,
               Vector2 quadUp,QuadEpsilon epsilon,MethodInfo *method)

{
  if (((float)((uint)(quadRight.x * (point.x - quadCenter.x) +
                     quadRight.y * (point.y - quadCenter.y)) & _UNK_?) <=
       (epsilon._sizeEps.x + quadWidth) * _UNK_?) &&
     ((float)((uint)(quadUp.x * (point.x - quadCenter.x) + quadUp.y * (point.y - quadCenter.y)) &
             _UNK_?) <= (epsilon._sizeEps.y + quadHeight) * _UNK_?)) {
    return 1;
  }
  return 0;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Single, Single, Vector3, Vector3, QuadEpsilon)
    */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains3DPoint
               (Vector3 point,bool checkOnPlane,Vector3 quadCenter,float quadWidth,float quadHeight,
               Vector3 quadRight,Vector3 quadUp,QuadEpsilon epsilon,MethodInfo *method)

{
  value.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  value.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  value.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  plane.m_Normal.y = (float)uVar3;
  plane.m_Normal.x = (float)uVar2;
  if ((checkOnPlane != 0) &&
     (plane.m_Normal.z = point.x, plane.m_Distance = point.y,
     fVar4 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0),
     epsilon._extrudeEps < fVar4)) {
    return 0;
  }
  if (((float)((uint)(quadRight.y * (point.y - quadCenter.y) +
                      quadRight.x * (point.x - quadCenter.x) +
                     quadRight.z * (point.z - quadCenter.z)) & _UNK_?) <=
       (epsilon._sizeEps.x + quadWidth) * _UNK_?) &&
     ((float)((uint)(quadUp.y * (point.y - quadCenter.y) + quadUp.x * (point.x - quadCenter.x) +
                    quadUp.z * (point.z - quadCenter.z)) & _UNK_?) <=
      (epsilon._sizeEps.y + quadHeight) * _UNK_?)) {
    return 1;
  }
  return 0;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, Single, Single, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Is2DPointOnBorder
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,
               float degreeRotation,QuadEpsilon epsilon,MethodInfo *method)

{
  VVar1.x = 0.0;
  VVar1.y = 0.0;
  VVar2.x = 0.0;
  VVar2.y = 0.0;
  QuadMath_Calc2DQuadRightUp
            (degreeRotation,(Vector2 *)&stack0xffffffec,(Vector2 *)&stack0xfffffff4,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  fVar3 = 0.0;
  fVar4 = (float)((uint)epsilon._wireEps & _UNK_?);
  quadSize.y = quadHeight;
  quadSize.x = quadWidth;
  this = QuadMath_Calc2DQuadCornerPoints_1
                   (quadCenter,quadSize,VVar1,(Vector2)((ulonglong)VVar2 & 0xffffffff),
                    (MethodInfo *)0x0);
  degreeRotation = 0.0;
  if (this == (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  piVar7 = &(this->fields)._size;
  do {
    if (*piVar7 <= (int)degreeRotation) {
      return 0;
    }
    VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this,(int32_t)degreeRotation,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    degreeRotation = (float)((int)degreeRotation + 1);
    VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this,(int)degreeRotation % *piVar7,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    epsilon_00._ptOnSegmentEps = fVar4;
    epsilon_00._raycastEps = fVar3;
    bVar6 = SegmentMath::SegmentMath_Is2DPointOnSegment
                      ((Vector2)((ulonglong)point & 0xffffffff00000000),VVar1,VVar2,epsilon_00,
                       (MethodInfo *)0x0);
  } while (bVar6 == 0);
  return 1;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, Single, Vector2, Vector2, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Is2DPointOnBorder_1
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,Vector2 quadRight,
               Vector2 quadUp,QuadEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  startPoint.x = 0.0;
  startPoint.y = 0.0;
  fVar1 = (float)((uint)epsilon._wireEps & _UNK_?);
  VVar2.y = quadHeight;
  VVar2.x = quadWidth;
  this = QuadMath_Calc2DQuadCornerPoints_1(quadCenter,VVar2,quadRight,quadUp,(MethodInfo *)0x0);
  quadWidth = 0.0;
  if (this == (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  piVar5 = &(this->fields)._size;
  do {
    fVar6 = startPoint.x;
    if (*piVar5 <= (int)quadWidth) {
      return 0;
    }
    startPoint = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (this,(int32_t)quadWidth,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
    quadWidth = (float)((int)quadWidth + 1);
    VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this,(int)quadWidth % *piVar5,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    epsilon_00._ptOnSegmentEps = fVar1;
    epsilon_00._raycastEps = fVar6;
    bVar4 = SegmentMath::SegmentMath_Is2DPointOnSegment
                      ((Vector2)((ulonglong)point & 0xffffffff00000000),startPoint,VVar2,epsilon_00,
                       (MethodInfo *)0x0);
  } while (bVar4 == 0);
  return 1;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Vector3, Vector3, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Raycast
               (Ray ray,float *t,Vector3 quadCenter,float quadWidth,float quadHeight,
               Vector3 quadRight,Vector3 quadUp,QuadEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  *t = 0.0;
  value.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  value.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  value.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd0,value,(MethodInfo *)0x0);
  fVar3 = pVVar2->z;
  fVar4 = pVVar2->x;
  fVar5 = pVVar2->y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffc0,*pVVar2,(MethodInfo *)0x0);
  fVar6 = pVVar2->z;
  enter = &fStack_1;
  fVar7 = 0.0;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffb0,ray_01,enter,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffc0,&ray,fStack_1,(MethodInfo *)0x0);
    fVar3 = 0.0;
    fVar7 = quadCenter.z;
    fVar4 = epsilon._extrudeEps;
    bVar8 = QuadMath_Contains3DPoint
                      (*pVVar2,0,quadCenter,quadWidth,quadHeight,quadRight,quadUp,epsilon,
                       (MethodInfo *)0x0);
    enter = (float *)quadCenter.y;
    fVar6 = quadWidth;
    fVar5 = epsilon._wireEps;
    if (bVar8 != 0) {
      *t = fStack_1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * (float)enter + ray.m_Direction.y * fVar7 +
                    ray.m_Direction.z * fVar6) & _UNK_?) < _UNK_?)) {
    ray.m_Direction.z = (float)&UNK_?;
    forward.y = fVar5;
    forward.x = fVar4;
    forward.z = fVar3;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                       ((Quaternion *)&stack0xffffffa0,forward,quadUp,(MethodInfo *)0x0);
    fVar10 = epsilon._sizeEps.x + quadUp.x;
    fVar11 = epsilon._sizeEps.y + quadUp.y;
    fVar12 = epsilon._extrudeEps * _UNK_?;
    fVar3 = pQVar9->x;
    fVar6 = pQVar9->y;
    fVar7 = pQVar9->z;
    fVar13 = pQVar9->w;
    fVar14 = ray.m_Origin.x;
    fVar15 = ray.m_Origin.y;
    fVar16 = ray.m_Origin.z;
    fVar17 = ray.m_Direction.x;
    fVar18 = ray.m_Direction.y;
    fVar19 = ray.m_Direction.z;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Direction.z = fVar18;
    ray.m_Direction.y = fVar17;
    ray.m_Direction.x = fVar16;
    ray.m_Origin.z = fVar15;
    ray.m_Origin.y = fVar14;
    ray.m_Origin.x = (float)&UNK_?;
    ray_00.m_Origin.y = ray.m_Origin.z;
    ray_00.m_Origin.x = ray.m_Origin.y;
    ray_00.m_Origin.z = ray.m_Direction.x;
    ray_00.m_Direction.x = ray.m_Direction.y;
    ray_00.m_Direction.y = ray.m_Direction.z;
    ray_00.m_Direction.z = fVar19;
    boxCenter.y = fVar5;
    boxCenter.x = fVar4;
    boxCenter.z = quadCenter.z;
    boxSize.y = fVar11;
    boxSize.x = fVar10;
    boxSize.z = fVar12;
    boxRotation.y = fVar6;
    boxRotation.x = fVar3;
    boxRotation.z = fVar7;
    boxRotation.w = fVar13;
    bVar8 = BoxMath::BoxMath_Raycast_1
                      (ray_00,(float *)&stack0xffffffe8,boxCenter,boxSize,boxRotation,
                       (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
    return bVar8;
  }
  return 0;
}


/* Boolean RaycastWire(Ray, Single ByRef, Vector3, Single, Single, Vector3, Vector3, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_RaycastWire
               (Ray ray,float *t,Vector3 quadCenter,float quadWidth,float quadHeight,
               Vector3 quadRight,Vector3 quadUp,QuadEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  *t = 0.0;
  VVar2.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  VVar2.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  VVar2.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_4,VVar2,(MethodInfo *)0x0);
  puVar5 = (undefined *)pVVar3->x;
  fVar6 = pVVar3->y;
  pVVar7 = (VisualTreeAsset_UsingEntry *)pVVar3->z;
  pVVar8 = pVVar7;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffa8,*pVVar3,(MethodInfo *)0x0);
  uVar9._0_4_ = pVVar3->x;
  uVar9._4_4_ = pVVar3->y;
  fVar10 = pVVar3->z;
  forward.y = fVar6;
  forward.x = (float)puVar5;
  forward.z = (float)pVVar7;
  upwards.y = quadUp.y;
  upwards.x = quadUp.x;
  upwards.z = quadUp.z;
  VStack_4._0_8_ = uVar9;
  VStack_4.z = fVar10;
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                      ((Quaternion *)&stack0xffffffb8,forward,upwards,(MethodInfo *)0x0);
  pSVar12 = (String *)pQVar11->x;
  pSVar13 = (String *)pQVar11->y;
  pVVar14 = (VisualTreeAsset *)pQVar11->z;
  fVar15 = pQVar11->w;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffff84,ray_00,(float *)&puStack_1,(MethodInfo *)0x0);
  if (bVar16 == 0) {
code_?:
    if ((epsilon._extrudeEps != 0.0) &&
       ((float)((uint)(ray.m_Direction.x * (float)uVar9 + ray.m_Direction.y * uVar9._4_4_ +
                      ray.m_Direction.z * fVar10) & _UNK_?) < _UNK_?)) {
      forward_00.y = fVar6;
      forward_00.x = (float)puVar5;
      forward_00.z = (float)pVVar8;
      upwards_00.y = quadUp.y;
      upwards_00.x = quadUp.x;
      upwards_00.z = quadUp.z;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                          ((Quaternion *)&stack0xffffff70,forward_00,upwards_00,(MethodInfo *)0x0);
      quadCenter_00.y = quadCenter.y;
      quadCenter_00.x = quadCenter.x;
      quadCenter_00.z = quadCenter.z;
      quadSize_00.y = quadHeight;
      quadSize_00.x = quadWidth;
      epsilon_00._sizeEps.y = epsilon._sizeEps.y;
      epsilon_00._sizeEps.x = epsilon._sizeEps.x;
      epsilon_00._extrudeEps = epsilon._extrudeEps;
      epsilon_00._wireEps = epsilon._wireEps;
      pOVar17 = QuadMath_Calc3DQuadOBB
                          ((OBB *)&stack0xffffff10,quadCenter_00,quadSize_00,*pQVar11,epsilon_00,
                           (MethodInfo *)0x0);
      uVar9._0_4_ = (pOVar17->_size).x;
      fVar6 = (pOVar17->_size).y;
      uVar9._4_4_ = (pOVar17->_size).z;
      fVar15 = (pOVar17->_center).x;
      fVar18 = (pOVar17->_center).y;
      fVar19 = (pOVar17->_center).z;
      fVar20 = (pOVar17->_rotation).x;
      fVar21 = (pOVar17->_rotation).y;
      uVar22 = (pOVar17->_rotation).z;
      fVar10 = (pOVar17->_rotation).w;
      fVar23 = ray.m_Origin.x;
      fVar24 = ray.m_Origin.y;
      fVar25 = ray.m_Origin.z;
      fVar26 = ray.m_Direction.x;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      ray_01.m_Origin.y = fVar24;
      ray_01.m_Origin.x = fVar23;
      ray_01.m_Origin.z = fVar25;
      ray_01.m_Direction.x = fVar26;
      ray_01.m_Direction.y = fVar19;
      ray_01.m_Direction.z = (float)uVar9;
      boxCenter.y = fVar18;
      boxCenter.x = fVar15;
      boxCenter.z = fVar19;
      boxSize.y = fVar6;
      boxSize.x = (float)uVar9;
      boxSize.z = uVar9._4_4_;
      boxRotation.y = fVar21;
      boxRotation.x = fVar20;
      boxRotation.z = (float)uVar22;
      boxRotation.w = fVar10;
      bVar16 = BoxMath::BoxMath_Raycast
                         (ray_01,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                          (MethodInfo *)0x0);
      return bVar16;
    }
    return 0;
  }
  quadUp.x = (float)pVVar14;
  quadUp.y = fVar15;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffe0,&ray,(float)puStack_1,(MethodInfo *)0x0);
  VStack_4.x = pVVar3->x;
  VStack_4.y = pVVar3->y;
  fVar15 = pVVar3->z;
  quadSize.y = quadHeight;
  quadSize.x = quadWidth;
  quadRotation.y = (float)pSVar13;
  quadRotation.x = (float)pSVar12;
  quadRotation.z = quadUp.x;
  quadRotation.w = quadUp.y;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            QuadMath_Calc3DQuadCornerPoints(quadCenter,quadSize,quadRotation,(MethodInfo *)0x0);
  if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    func_?();
    pcVar27 = (code *)swi(3);
    bVar16 = (*pcVar27)();
    return bVar16;
  }
  pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,this_00,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
  fVar18 = (float)pVVar8->alias;
  uVar28 = pVVar8->path;
  quadHeight = (float)pVVar8->asset;
  pVVar8 = (VisualTreeAsset_UsingEntry *)&stack0xffffffb8;
  quadWidth = (float)uVar28;
  pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      (pVVar8,this_00,1,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
  fVar6 = VStack_4.x;
  puVar5 = &UNK_?;
  point_01.z = fVar15;
  point_01.x = VStack_4.x;
  point_01.y = VStack_4.y;
  point0_01.y = quadWidth;
  point0_01.x = fVar18;
  point0_01.z = quadHeight;
  fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                    (point_01,point0_01,(Vector3)*pVVar7,(MethodInfo *)0x0);
  if (epsilon._wireEps < fVar15) {
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pVVar7->alias;
    fVar15 = (float)pVVar7->path;
    pVVar14 = pVVar7->asset;
    pVVar7 = (VisualTreeAsset_UsingEntry *)&stack0xffffffb8;
    pVVar29 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (pVVar7,this,(int32_t)fVar15,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar30 = pVVar29->alias;
    uVar31 = pVVar29->path;
    ray.m_Origin.x = (float)pVVar29->asset;
    ray.m_Origin.y = 0.0;
    point_02.z = (float)pVVar7;
    point_02.x = VStack_4.x;
    point_02.y = VStack_4.y;
    point0_02.y = fVar15;
    point0_02.x = (float)this;
    point0_02.z = (float)pVVar14;
    fVar32 = (float)uVar31;
    VVar2.x = (float)uVar30;
    VVar2 = (Vector3)CONCAT84(VVar2._0_8_,VVar2.x);
    fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point_02,point0_02,VVar2,(MethodInfo *)0x0);
    if (epsilon._wireEps < fVar15) {
      pVVar29 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,this_00,2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      fVar19 = (float)pVVar29->alias;
      fVar20 = (float)pVVar29->path;
      pVVar14 = pVVar29->asset;
      quadCenter.y = (float)&stack0xffffffb8;
      quadCenter.x = (float)&UNK_?;
      pVVar29 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)quadCenter.y,this_00,3,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar33 = pVVar29->path;
      epsilon._sizeEps.x = (float)pVVar29->asset;
      epsilon._sizeEps.y = 0.0;
      quadCenter.z = (float)&UNK_?;
      point.z = (float)pVVar7;
      point.x = VStack_4.x;
      point.y = VStack_4.y;
      point0.y = fVar20;
      point0.x = fVar19;
      point0.z = (float)pVVar14;
      fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                        (point,point0,(Vector3)*pVVar29,(MethodInfo *)0x0);
      if (epsilon._wireEps < fVar15) {
        puVar34 = (undefined8 *)func_?();
        fVar15 = *(float *)(puVar34 + 1);
        fVar18 = (float)*puVar34;
        fVar19 = (float)((ulonglong)*puVar34 >> 0x20);
        epsilon._wireEps = (float)&UNK_?;
        pVVar3 = (Vector3 *)func_?();
        point_00.z = (float)pVVar7;
        point_00.x = VStack_4.x;
        point_00.y = VStack_4.y;
        point0_00.y = fVar19;
        point0_00.x = fVar18;
        point0_00.z = fVar15;
        fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                          (point_00,point0_00,*pVVar3,(MethodInfo *)0x0);
        quadUp.z = (float)uVar33;
        if (4.378354e-29 < fVar15) goto code_?;
      }
    }
  }
  *t = (float)puStack_1;
  return 1;
}

