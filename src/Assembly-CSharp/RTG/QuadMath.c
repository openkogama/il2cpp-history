
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
  pLVar1 = (List_1_UnityEngine_Vector2_ *)
           (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  method_00 = (MethodInfo *)(TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  QuadMath_Calc2DQuadRightUp
            (degreeRotation,(Vector2 *)&stack0xfffffff4,(Vector2 *)&stack0xffffffec,
             (MethodInfo *)0x0);
  fVar4 = quadSize.x * _UNK_?;
  fVar5 = quadSize.y * _UNK_?;
  this = (List_1_UnityEngine_Vector2_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar6 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar7 = fVar3 * fVar5 + (quadCenter.x - (float)pLVar1 * fVar4);
  fVar8 = (float)method_00 * fVar5 + (quadCenter.y - fVar2 * fVar4);
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar9 = &(this->fields)._version;
    *piVar9 = *piVar9 + 1;
    pVVar10 = (this->fields)._items;
    if (pVVar10 != (Vector2__Array *)0x0) {
      uVar11 = (this->fields)._size;
      if (uVar11 < pVVar10->max_length) {
        (this->fields)._size = uVar11 + 1;
        if (pVVar10->max_length <= uVar11) goto code_?;
        pVVar10->vector[uVar11].x = fVar7;
        pVVar10->vector[uVar11].y = fVar8;
      }
      else {
        method_00 = pMVar6->klass->rgctx_data[0xe].method;
        item.y = fVar8;
        item.x = fVar7;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(this,item,method_00);
        fVar3 = fVar8;
      }
      pMVar6 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar7 = fVar3 * fVar5 + (float)pLVar1 * fVar4 + quadCenter.x;
      fVar8 = (float)method_00 * fVar5 + fVar2 * fVar4 + quadCenter.y;
      piVar9 = &(this->fields)._version;
      *piVar9 = *piVar9 + 1;
      pVVar10 = (this->fields)._items;
      if (pVVar10 != (Vector2__Array *)0x0) {
        uVar11 = (this->fields)._size;
        if (uVar11 < pVVar10->max_length) {
          (this->fields)._size = uVar11 + 1;
          if (pVVar10->max_length <= uVar11) goto code_?;
          pVVar10->vector[uVar11].x = fVar7;
          pVVar10->vector[uVar11].y = fVar8;
        }
        else {
          method_00 = (MethodInfo *)&UNK_?;
          item_00.y = fVar8;
          item_00.x = fVar7;
          pLVar1 = this;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this,item_00,pMVar6->klass->rgctx_data[0xe].method);
          fVar2 = fVar7;
        }
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar7 = ((float)pLVar1 * fVar4 + quadCenter.x) - fVar3 * fVar5;
        fVar8 = (fVar2 * fVar4 + quadCenter.y) - (float)method_00 * fVar5;
        piVar9 = &(this->fields)._version;
        *piVar9 = *piVar9 + 1;
        pVVar10 = (this->fields)._items;
        if (pVVar10 != (Vector2__Array *)0x0) {
          uVar11 = (this->fields)._size;
          if (uVar11 < pVVar10->max_length) {
            (this->fields)._size = uVar11 + 1;
            if (pVVar10->max_length <= uVar11) goto code_?;
            pVVar10->vector[uVar11].x = fVar7;
            pVVar10->vector[uVar11].y = fVar8;
          }
          else {
            method_00 = (MethodInfo *)&UNK_?;
            item_01.y = fVar8;
            item_01.x = fVar7;
            pLVar1 = this;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this,item_01,pMVar6->klass->rgctx_data[0xe].method);
            fVar2 = fVar7;
          }
          pMVar6 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          fVar3 = (quadCenter.x - (float)pLVar1 * fVar4) - fVar3 * fVar5;
          fVar2 = (quadCenter.y - fVar2 * fVar4) - (float)method_00 * fVar5;
          piVar9 = &(this->fields)._version;
          *piVar9 = *piVar9 + 1;
          pVVar10 = (this->fields)._items;
          if (pVVar10 != (Vector2__Array *)0x0) {
            uVar11 = (this->fields)._size;
            if (pVVar10->max_length <= uVar11) {
              item_02.y = fVar2;
              item_02.x = fVar3;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (this,item_02,pMVar6->klass->rgctx_data[0xe].method);
              return this;
            }
            (this->fields)._size = uVar11 + 1;
            if (uVar11 < pVVar10->max_length) {
              pVVar10->vector[uVar11].x = fVar3;
              pVVar10->vector[uVar11].y = fVar2;
              return this;
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
  pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar12)();
  return pLVar1;
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
  fVar5 = up.x * fVar2 + (quadCenter.x - right.x * fVar1);
  fVar6 = up.y * fVar2 + (quadCenter.y - right.y * fVar1);
  if (pLVar3 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar7 = &(pLVar3->fields)._version;
    *piVar7 = *piVar7 + 1;
    pVVar8 = (pLVar3->fields)._items;
    if (pVVar8 != (Vector2__Array *)0x0) {
      uVar9 = (pLVar3->fields)._size;
      if (uVar9 < pVVar8->max_length) {
        (pLVar3->fields)._size = uVar9 + 1;
        if (pVVar8->max_length <= uVar9) goto code_?;
        pVVar8->vector[uVar9].x = fVar5;
        pVVar8->vector[uVar9].y = fVar6;
      }
      else {
        item.y = fVar6;
        item.x = fVar5;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(pLVar3,item,pMVar4->klass->rgctx_data[0xe].method)
        ;
      }
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar5 = up.x * fVar2 + quadCenter.x + right.x * fVar1;
      fVar6 = up.y * fVar2 + quadCenter.y + right.y * fVar1;
      piVar7 = &(pLVar3->fields)._version;
      *piVar7 = *piVar7 + 1;
      pVVar8 = (pLVar3->fields)._items;
      if (pVVar8 != (Vector2__Array *)0x0) {
        uVar9 = (pLVar3->fields)._size;
        if (uVar9 < pVVar8->max_length) {
          (pLVar3->fields)._size = uVar9 + 1;
          if (pVVar8->max_length <= uVar9) goto code_?;
          pVVar8->vector[uVar9].x = fVar5;
          pVVar8->vector[uVar9].y = fVar6;
        }
        else {
          item_00.y = fVar6;
          item_00.x = fVar5;
          fVar1 = fVar6;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (pLVar3,item_00,pMVar4->klass->rgctx_data[0xe].method);
        }
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar5 = (quadCenter.x + right.x * fVar1) - up.x * fVar2;
        fVar6 = (quadCenter.y + right.y * fVar1) - up.y * fVar2;
        piVar7 = &(pLVar3->fields)._version;
        *piVar7 = *piVar7 + 1;
        pVVar8 = (pLVar3->fields)._items;
        if (pVVar8 != (Vector2__Array *)0x0) {
          uVar9 = (pLVar3->fields)._size;
          if (uVar9 < pVVar8->max_length) {
            (pLVar3->fields)._size = uVar9 + 1;
            if (pVVar8->max_length <= uVar9) goto code_?;
            pVVar8->vector[uVar9].x = fVar5;
            pVVar8->vector[uVar9].y = fVar6;
          }
          else {
            item_01.y = fVar6;
            item_01.x = fVar5;
            fVar1 = fVar6;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar3,item_01,pMVar4->klass->rgctx_data[0xe].method);
          }
          pMVar4 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          fVar5 = (quadCenter.x - right.x * fVar1) - up.x * fVar2;
          fVar1 = (quadCenter.y - right.y * fVar1) - up.y * fVar2;
          piVar7 = &(pLVar3->fields)._version;
          *piVar7 = *piVar7 + 1;
          pVVar8 = (pLVar3->fields)._items;
          if (pVVar8 != (Vector2__Array *)0x0) {
            uVar9 = (pLVar3->fields)._size;
            if (pVVar8->max_length <= uVar9) {
              item_02.y = fVar1;
              item_02.x = fVar5;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (pLVar3,item_02,pMVar4->klass->rgctx_data[0xe].method);
              return pLVar3;
            }
            (pLVar3->fields)._size = uVar9 + 1;
            if (uVar9 < pVVar8->max_length) {
              pVVar8->vector[uVar9].x = fVar5;
              pVVar8->vector[uVar9].y = fVar1;
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
  pcVar10 = (code *)swi(3);
  pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar10)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffc0,quadRotation,
             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffc0,quadRotation,
             TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    func_?();
    func_?();
    func_?();
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
  return pLVar1;
}


/* OBB Calc3DQuadOBB(Vector3, Vector2, Quaternion, QuadEpsilon) */

OBB * Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadOBB
                (OBB *__return_storage_ptr__,Vector3 quadCenter,Vector2 quadSize,
                Quaternion quadRotation,QuadEpsilon epsilon,MethodInfo *method)

{
  fVar1 = epsilon._extrudeEps * _UNK_?;
  func_?(__return_storage_ptr__,0,0x2c);
  size.y = quadSize.y + epsilon._sizeEps.y;
  size.x = quadSize.x + epsilon._sizeEps.x;
  size.z = fVar1;
  OBB::OBB__ctor_1(__return_storage_ptr__,quadCenter,size,quadRotation,(MethodInfo *)0x0);
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
  fStack_3 = epsilon._sizeEps.x;
  fStack_4 = epsilon._sizeEps.y;
  fStack_5 = epsilon._extrudeEps;
  fStack_6 = epsilon._wireEps;
  fVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::Single]
          ::KeyValuePair_2_System_Single_System_Single__get_Key
                    ((KeyValuePair_2_System_Single_System_Single_ *)&fStack_3,(MethodInfo *)0x0);
  fVar8 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                    ((Nullable_1_Single_ *)&fStack_3,(MethodInfo *)0x0);
  v1.y = point.y - quadCenter.y;
  v1.x = point.x - quadCenter.x;
  fVar9 = Vector2Ex::Vector2Ex_AbsDot(v1,VStack_1,(MethodInfo *)0x0);
  v1_00.y = point.y - quadCenter.y;
  v1_00.x = point.x - quadCenter.x;
  fVar10 = Vector2Ex::Vector2Ex_AbsDot(v1_00,VStack_2,(MethodInfo *)0x0);
  if (fVar9 <= (fVar7 + quadWidth) * _UNK_?) {
    return fVar10 <= (fVar8 + quadHeight) * _UNK_?;
  }
  return 0;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, Single, Vector2, Vector2, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains2DPoint_1
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,Vector2 quadRight,
               Vector2 quadUp,QuadEpsilon epsilon,MethodInfo *method)

{
  fVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::Single]
          ::KeyValuePair_2_System_Single_System_Single__get_Key
                    ((KeyValuePair_2_System_Single_System_Single_ *)&epsilon,(MethodInfo *)0x0);
  fVar2 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                    ((Nullable_1_Single_ *)&epsilon,(MethodInfo *)0x0);
  v1.y = point.y - quadCenter.y;
  v1.x = point.x - quadCenter.x;
  fVar3 = Vector2Ex::Vector2Ex_AbsDot(v1,quadRight,(MethodInfo *)0x0);
  v1_00.y = point.y - quadCenter.y;
  v1_00.x = point.x - quadCenter.x;
  fVar4 = Vector2Ex::Vector2Ex_AbsDot(v1_00,quadUp,(MethodInfo *)0x0);
  if ((fVar3 <= (fVar1 + quadWidth) * _UNK_?) &&
     (fVar4 <= (fVar2 + quadHeight) * _UNK_?)) {
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
  VVar1.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  VVar1.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  VVar1.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&puStack_3,VVar1,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,*pVVar2,(MethodInfo *)0x0);
  uVar5 = pVVar2->x;
  uVar6 = pVVar2->y;
  plane.m_Normal.y = (float)uVar6;
  plane.m_Normal.x = (float)uVar5;
  puStack_3 = (undefined *)uVar5;
  if ((checkOnPlane != 0) &&
     (plane.m_Normal.z = point.x, plane.m_Distance = point.y,
     fVar7 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0),
     epsilon._extrudeEps < fVar7)) {
    return 0;
  }
  fVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::Single]
          ::KeyValuePair_2_System_Single_System_Single__get_Key
                    ((KeyValuePair_2_System_Single_System_Single_ *)&epsilon,(MethodInfo *)0x0);
  fVar9 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                    ((Nullable_1_Single_ *)&epsilon,(MethodInfo *)0x0);
  fVar10 = point.x - quadCenter.x;
  fVar7 = point.y - quadCenter.y;
  v1.y = fVar7;
  v1.x = fVar10;
  v1.z = point.z - quadCenter.z;
  fVar11 = Vector3Ex::Vector3Ex_AbsDot(v1,quadRight,(MethodInfo *)0x0);
  stack0xfffffffc = fVar7;
  fStack_12 = fVar10;
  VVar1.z = point.z - quadCenter.z;
  VVar1 = (Vector3)CONCAT48(VVar1.z,uVar13);
  fVar7 = Vector3Ex::Vector3Ex_AbsDot(VVar1,quadUp,(MethodInfo *)0x0);
  if ((fVar11 <= (fVar8 + quadWidth) * _UNK_?) &&
     (fVar7 <= (fVar9 + quadHeight) * _UNK_?)) {
    return 1;
  }
  return 0;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, Single, Single, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Is2DPointOnBorder
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,
               float degreeRotation,QuadEpsilon epsilon,MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  QuadMath_Calc2DQuadRightUp(degreeRotation,(Vector2 *)&stack0xffffffec,&VStack_1,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uVar2 = 0;
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&stack0xffffffe4,epsilon._wireEps,(MethodInfo *)0x0);
  uVar2 = uVar2 & 0xffffffff00000000;
  VVar3.y = quadHeight;
  VVar3.x = quadWidth;
  VVar4.y = unaff_EBX;
  VVar4.x = unaff_ESI;
  this = QuadMath_Calc2DQuadCornerPoints_1(quadCenter,VVar3,VVar4,VStack_1,(MethodInfo *)0x0);
  index = 0;
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    while( true ) {
      if ((this->fields)._size <= index) {
        return 0;
      }
      VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,(index + 1) % (this->fields)._size,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      method_00 = (MethodInfo *)(uVar2 >> 0x20);
      VStack_1.y = (float)&UNK_?;
      fVar5 = Vector2Ex::Vector2Ex_GetDistanceToSegment(VVar3,VVar3,VVar4,method_00);
      if (fVar5 <= (float)method_00) break;
      index = index + 1;
    }
    return 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
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
  uStack_1._0_4_ = 0.0;
  uStack_1._4_4_ = 0.0;
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&uStack_1,epsilon._wireEps,(MethodInfo *)0x0);
  VVar2.y = quadHeight;
  VVar2.x = quadWidth;
  this = QuadMath_Calc2DQuadCornerPoints_1(quadCenter,VVar2,quadRight,quadUp,(MethodInfo *)0x0);
  index = 0;
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    while( true ) {
      if ((this->fields)._size <= index) {
        return 0;
      }
      VVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      point_00 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (this,(index + 1) % (this->fields)._size,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
      fVar3 = uStack_1._4_4_;
      uStack_1._4_4_ = (float)&UNK_?;
      fVar4 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point_00,VVar2,point_00,(MethodInfo *)0x0);
      if (fVar4 <= fVar3) break;
      index = index + 1;
    }
    return 1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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
  fVar1 = 0.0;
  *t = 0.0;
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  VVar3.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  VVar3.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  VVar3.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffec,VVar3,(MethodInfo *)0x0);
  puStack_5 = (undefined *)pVVar4->z;
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  forward.y = (float)uVar7;
  forward.x = (float)uVar6;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffff90,*pVVar4,(MethodInfo *)0x0);
  QStack_2.x = pVVar4->x;
  QStack_2.y = pVVar4->y;
  QStack_2.z = pVVar4->z;
  VVar3 = *pVVar4;
  QStack_2.w = (float)((uint)(quadCenter.y * QStack_2.y + quadCenter.x * QStack_2.x +
                              quadCenter.z * QStack_2.z) ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&QStack_2,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffff90,&ray,fVar1,(MethodInfo *)0x0);
    bVar8 = QuadMath_Contains3DPoint
                      (*pVVar4,0,quadCenter,quadWidth,quadHeight,quadRight,quadUp,epsilon,
                       (MethodInfo *)0x0);
    if (bVar8 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if (epsilon._extrudeEps != 0.0) {
    ray.m_Origin.x = 0.0;
    v1.y = ray.m_Direction.y;
    v1.x = ray.m_Direction.x;
    v1.z = ray.m_Direction.z;
    fVar1 = Vector3Ex::Vector3Ex_AbsDot(v1,VVar3,(MethodInfo *)0x0);
    ray.m_Origin.x = 0.0;
    fVar9 = ExtrudeEpsThreshold::ExtrudeEpsThreshold_get_Get((MethodInfo *)0x0);
    if (fVar1 < fVar9) {
      ray.m_Direction.y = (float)puStack_5;
      ray.m_Origin.y = (float)&QStack_2;
      ray.m_Origin.x = (float)&UNK_?;
      forward.z = (float)puStack_5;
      ray.m_Origin.z = (float)uVar6;
      ray.m_Direction.x = (float)uVar7;
      ray.m_Direction.z = quadUp.x;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                          ((Quaternion *)ray.m_Origin.y,forward,quadUp,(MethodInfo *)0x0);
      ray.m_Direction.y = pQVar10->x;
      ray.m_Direction.z = pQVar10->y;
      ray.m_Direction.x = epsilon._extrudeEps;
      ray.m_Origin.z = (float)&stack0xffffff64;
      ray.m_Origin.y = (float)&UNK_?;
      quadCenter_00.y = ray.m_Direction.y;
      quadCenter_00.x = epsilon._extrudeEps;
      quadCenter_00.z = ray.m_Direction.z;
      pOVar11 = QuadMath_Calc3DQuadOBB
                          ((OBB *)ray.m_Origin.z,quadCenter_00,epsilon._4_8_,*pQVar10,epsilon,
                           (MethodInfo *)0x0);
      fVar12 = ray.m_Direction.z;
      fVar13 = ray.m_Direction.y;
      fVar1 = (pOVar11->_size).x;
      fVar9 = (pOVar11->_size).y;
      fStack14 = (pOVar11->_size).z;
      fVar15 = (pOVar11->_center).x;
      fVar16 = (pOVar11->_center).y;
      fVar17 = (pOVar11->_center).z;
      fVar18 = (pOVar11->_rotation).x;
      fVar19 = (pOVar11->_rotation).y;
      uVar20 = (pOVar11->_rotation).z;
      uVar21 = (pOVar11->_rotation).w;
      QStack_2.x = ray.m_Origin.x;
      QStack_2.y = ray.m_Origin.y;
      QStack_2.z = ray.m_Origin.z;
      QStack_2.w = ray.m_Direction.x;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      ray_00.m_Origin.y = QStack_2.y;
      ray_00.m_Origin.x = QStack_2.x;
      ray_00.m_Origin.z = QStack_2.z;
      ray_00.m_Direction.x = QStack_2.w;
      ray_00.m_Direction.y = fVar13;
      ray_00.m_Direction.z = fVar12;
      boxCenter.y = fVar16;
      boxCenter.x = fVar15;
      boxCenter.z = fVar17;
      boxSize.y = fVar9;
      boxSize.x = fVar1;
      boxSize.z = fStack14;
      boxRotation.y = fVar19;
      boxRotation.x = fVar18;
      boxRotation.z = (float)uVar20;
      boxRotation.w = (float)uVar21;
      bVar8 = BoxMath::BoxMath_Raycast
                        (ray_00,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                         (MethodInfo *)0x0);
      return bVar8;
    }
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
  fVar1 = 0.0;
  *t = 0.0;
  value.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  value.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  value.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffff90,value,(MethodInfo *)0x0);
  puVar3 = (undefined *)pVVar2->x;
  pVVar4 = (VisualTreeAsset_UsingEntry *)pVVar2->y;
  pfVar5 = (float *)pVVar2->z;
  pfVar6 = pfVar5;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffa0,*pVVar2,(MethodInfo *)0x0);
  fVar7 = pVVar2->x;
  fVar8 = pVVar2->y;
  pfVar9 = (float *)pVVar2->z;
  forward.y = (float)pVVar4;
  forward.x = (float)puVar3;
  forward.z = (float)pfVar5;
  upwards.y = quadUp.y;
  upwards.x = quadUp.x;
  upwards.z = quadUp.z;
  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                      ((Quaternion *)&stack0xffffff70,forward,upwards,(MethodInfo *)0x0);
  fVar11 = pQVar10->x;
  fVar12 = pQVar10->y;
  fVar13 = pQVar10->z;
  fVar14 = pQVar10->w;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffb0,ray_00,(float *)&stack0xffffffd8,(MethodInfo *)0x0);
  if (bVar15 == 0) {
code_?:
    if (epsilon._extrudeEps != 0.0) {
      v1.y = ray.m_Direction.y;
      v1.x = ray.m_Direction.x;
      v1.z = ray.m_Direction.z;
      v2.y = fVar8;
      v2.x = fVar7;
      v2.z = (float)pfVar9;
      fVar7 = Vector3Ex::Vector3Ex_AbsDot(v1,v2,(MethodInfo *)0x0);
      fVar8 = ExtrudeEpsThreshold::ExtrudeEpsThreshold_get_Get((MethodInfo *)0x0);
      if (fVar7 < fVar8) {
        forward_00.y = (float)pVVar4;
        forward_00.x = (float)puVar3;
        forward_00.z = (float)pfVar6;
        upwards_00.y = quadUp.y;
        upwards_00.x = quadUp.x;
        upwards_00.z = quadUp.z;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                            ((Quaternion *)&stack0xffffff70,forward_00,upwards_00,(MethodInfo *)0x0)
        ;
        quadCenter_00.y = quadCenter.y;
        quadCenter_00.x = quadCenter.x;
        quadCenter_00.z = quadCenter.z;
        quadSize_00.y = quadHeight;
        quadSize_00.x = quadWidth;
        epsilon_00._sizeEps.y = epsilon._sizeEps.y;
        epsilon_00._sizeEps.x = epsilon._sizeEps.x;
        epsilon_00._extrudeEps = epsilon._extrudeEps;
        epsilon_00._wireEps = epsilon._wireEps;
        pOVar16 = QuadMath_Calc3DQuadOBB
                            ((OBB *)&stack0xffffff00,quadCenter_00,quadSize_00,*pQVar10,epsilon_00,
                             (MethodInfo *)0x0);
        fVar7 = (pOVar16->_size).x;
        fVar8 = (pOVar16->_size).y;
        fVar11 = (pOVar16->_size).z;
        fVar12 = (pOVar16->_center).x;
        fVar13 = (pOVar16->_center).y;
        fVar1 = (pOVar16->_center).z;
        fVar17 = (pOVar16->_rotation).x;
        fVar18 = (pOVar16->_rotation).y;
        uVar19 = (pOVar16->_rotation).z;
        fVar14 = (pOVar16->_rotation).w;
        fVar20 = ray.m_Origin.x;
        fVar21 = ray.m_Origin.y;
        fVar22 = ray.m_Origin.z;
        fVar23 = ray.m_Direction.x;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ray_01.m_Origin.y = fVar21;
        ray_01.m_Origin.x = fVar20;
        ray_01.m_Origin.z = fVar22;
        ray_01.m_Direction.x = fVar23;
        ray_01.m_Direction.y = fVar22;
        ray_01.m_Direction.z = fVar23;
        boxCenter.y = fVar13;
        boxCenter.x = fVar12;
        boxCenter.z = fVar1;
        boxSize.y = fVar8;
        boxSize.x = fVar7;
        boxSize.z = fVar11;
        boxRotation.y = fVar18;
        boxRotation.x = fVar17;
        boxRotation.z = (float)uVar19;
        boxRotation.w = fVar14;
        bVar15 = BoxMath::BoxMath_Raycast
                           (ray_01,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                            (MethodInfo *)0x0);
        return bVar15;
      }
    }
    return 0;
  }
  quadUp.x = fVar13;
  quadUp.y = fVar14;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffe0,&ray,fVar1,(MethodInfo *)0x0);
  pfVar6 = (float *)pVVar2->x;
  fVar13 = pVVar2->y;
  fVar8 = pVVar2->z;
  quadSize.y = quadHeight;
  quadSize.x = quadWidth;
  quadRotation.y = fVar12;
  quadRotation.x = fVar11;
  quadRotation.z = quadUp.x;
  quadRotation.w = quadUp.y;
  epsilon._sizeEps.y =
       (float)QuadMath_Calc3DQuadCornerPoints(quadCenter,quadSize,quadRotation,(MethodInfo *)0x0);
  if ((List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)epsilon._sizeEps.y ==
      (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    func_?();
    pcVar24 = (code *)swi(3);
    bVar15 = (*pcVar24)();
    return bVar15;
  }
  pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
           VisualTreeAsset+UsingEntry]::
           List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                     ((VisualTreeAsset_UsingEntry *)&stack0xffffffb0,
                      (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                      epsilon._sizeEps.y,0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                     );
  uVar25._0_4_ = (float)pVVar4->alias;
  uVar25._4_4_ = (float)pVVar4->path;
  pVVar26 = pVVar4->asset;
  pVVar4 = (VisualTreeAsset_UsingEntry *)&stack0xffffffb0;
  puVar3 = &UNK_?;
  fVar7 = fVar13;
  pVVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      (pVVar4,(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                              epsilon._sizeEps.y,1,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
  fVar11 = (float)pVVar27->alias;
  fVar12 = (float)pVVar27->path;
  point_01.y = fVar7;
  point_01.x = (float)pfVar6;
  point_01.z = fVar8;
  point0_01.z = (float)pVVar26;
  point0_01.x = (float)uVar25;
  point0_01.y = SUB84(uVar25,4);
  pfVar5 = pfVar6;
  quadCenter.x = fVar7;
  quadCenter.y = fVar8;
  fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                    (point_01,point0_01,(Vector3)*pVVar27,(MethodInfo *)0x0);
  if (epsilon._wireEps < fVar13) {
    pVVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb0,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                         epsilon._sizeEps.y,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar28._0_4_ = (float)pVVar27->alias;
    uVar28._4_4_ = (float)pVVar27->path;
    pVVar26 = pVVar27->asset;
    pVVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb0,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                         epsilon._sizeEps.y,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    point_02.y = quadCenter.x;
    point_02.x = (float)pfVar5;
    point_02.z = quadCenter.y;
    point0_02.z = (float)pVVar26;
    point0_02.x = (float)uVar28;
    point0_02.y = SUB84(uVar28,4);
    pfVar9 = pfVar5;
    fVar1 = quadCenter.x;
    fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                      (point_02,point0_02,(Vector3)*pVVar27,(MethodInfo *)0x0);
    if (epsilon._wireEps < fVar13) {
      ray.m_Direction.y = (float)&stack0xffffffb0;
      ray.m_Direction.x = (float)&UNK_?;
      ray.m_Direction.z = epsilon._sizeEps.y;
      pVVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)ray.m_Direction.y,
                           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                           epsilon._sizeEps.y,2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      uVar29._0_4_ = (float)pVVar27->alias;
      uVar29._4_4_ = (float)pVVar27->path;
      pVVar26 = pVVar27->asset;
      ray.m_Direction.y = (float)&stack0xffffffb0;
      ray.m_Direction.x = (float)&UNK_?;
      ray.m_Direction.z = epsilon._sizeEps.y;
      t = pfVar5;
      pVVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                VisualTreeAsset+UsingEntry]::
                List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                          ((VisualTreeAsset_UsingEntry *)ray.m_Direction.y,
                           (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                           epsilon._sizeEps.y,3,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                          );
      quadCenter.z = (float)uVar29;
      ray.m_Direction.z = (float)&UNK_?;
      point.y = quadCenter.x;
      point.x = (float)t;
      point.z = quadCenter.y;
      point0.z = (float)pVVar26;
      point0.x = (float)uVar29;
      point0.y = SUB84(uVar29,4);
      pfVar5 = t;
      fVar13 = quadCenter.x;
      fVar14 = quadCenter.y;
      fVar17 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                         (point,point0,(Vector3)*pVVar27,(MethodInfo *)0x0);
      if (epsilon._wireEps < fVar17) {
        puVar30 = (undefined8 *)func_?();
        pMVar31 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
        epsilon._wireEps =
             (float)
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
        epsilon._extrudeEps = 0.0;
        uVar25 = *puVar30;
        fVar17 = *(float *)(puVar30 + 1);
        epsilon._sizeEps.x = (float)&stack0xffffffb0;
        quadUp.z = (float)&UNK_?;
        pVVar2 = (Vector3 *)func_?();
        point_00.y = fVar13;
        point_00.x = (float)pfVar5;
        point_00.z = fVar14;
        point0_00.z = fVar17;
        point0_00.x = (float)uVar25;
        point0_00.y = SUB84(uVar25,4);
        fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                          (point_00,point0_00,*pVVar2,(MethodInfo *)0x0);
        quadWidth = fVar11;
        quadHeight = fVar12;
        if ((float)pMVar31 < fVar13) goto code_?;
      }
    }
  }
  *t = fVar1;
  return 1;
}

