
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
  fVar7 = (quadCenter.x - (float)pLVar1 * fVar4) + fVar3 * fVar5;
  fVar8 = (quadCenter.y - fVar2 * fVar4) + (float)method_00 * fVar5;
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
      fVar7 = quadCenter.x + (float)pLVar1 * fVar4 + fVar3 * fVar5;
      fVar8 = quadCenter.y + fVar2 * fVar4 + (float)method_00 * fVar5;
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
        fVar7 = (quadCenter.x + (float)pLVar1 * fVar4) - fVar3 * fVar5;
        fVar8 = (quadCenter.y + fVar2 * fVar4) - (float)method_00 * fVar5;
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
  fVar5 = (quadCenter.x - right.x * fVar1) + up.x * fVar2;
  fVar6 = (quadCenter.y - right.y * fVar1) + up.y * fVar2;
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
      fVar5 = quadCenter.x + right.x * fVar1 + up.x * fVar2;
      fVar6 = quadCenter.y + right.y * fVar1 + up.y * fVar2;
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
    fVar5 = quadCenter.x - fVar5;
    fVar6 = quadCenter.y - fVar6;
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
      fVar5 = fVar5 - (float)uVar7 * fVar4;
      fVar6 = fVar6 - (float)uVar8 * fVar4;
      fRam00000008 = fVar2 - pVVar1->z * fVar4;
      goto code_?;
    }
    fVar5 = quadCenter.x + fVar5;
    fVar6 = quadCenter.y + fVar6;
    fVar2 = quadCenter.z + fVar2;
  }
  uVar9 = pVVar1->x;
  uVar10 = pVVar1->y;
  fRam00000008 = fVar2 + pVVar1->z * fVar4;
  fVar6 = fVar6 + (float)uVar10 * fVar4;
  fVar5 = fVar5 + (float)uVar9 * fVar4;
code_?:
  uRam_? = CONCAT44(fVar6,fVar5);
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
  if ((checkOnPlane != 0) &&
     (plane.m_Distance =
           (float)((uint)(quadCenter.y * (float)uVar3 + quadCenter.x * (float)uVar2 +
                         quadCenter.z * pVVar1->z) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field),
     plane.m_Normal = *pVVar1,
     fVar4 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0),
     epsilon._extrudeEps < fVar4)) {
    return 0;
  }
  if (((float)((uint)((point.x - quadCenter.x) * quadRight.x +
                      (point.y - quadCenter.y) * quadRight.y +
                     (point.z - quadCenter.z) * quadRight.z) & _UNK_?) <=
       (epsilon._sizeEps.x + quadWidth) * _UNK_?) &&
     ((float)((uint)((point.x - quadCenter.x) * quadUp.x + (point.y - quadCenter.y) * quadUp.y +
                    (point.z - quadCenter.z) * quadUp.z) & _UNK_?) <=
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
  fVar1 = 0.0;
  QuadMath_Calc2DQuadRightUp
            (degreeRotation,(Vector2 *)&stack0xffffffec,(Vector2 *)&stack0xfffffff4,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  puVar2 = (undefined *)((uint)epsilon._wireEps & _UNK_?);
  fVar3 = 0.0;
  VVar4.y = quadHeight;
  VVar4.x = quadWidth;
  VVar5.y = 0.0;
  VVar5.x = fVar1;
  up.y = fVar1;
  up.x = (float)puVar2;
  this = QuadMath_Calc2DQuadCornerPoints_1(quadCenter,VVar4,VVar5,up,(MethodInfo *)0x0);
  degreeRotation = 0.0;
  if (this == (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  while( true ) {
    if ((this->fields)._size <= (int)degreeRotation) {
      return 0;
    }
    VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this,(int32_t)degreeRotation,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (unaff_ESI,((int)degreeRotation + 1) % (unaff_ESI->fields)._size,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    puVar8 = &UNK_?;
    point_00.y = (float)puVar2;
    point_00.x = fVar3;
    epsilon_00._ptOnSegmentEps = (float)puVar2;
    epsilon_00._raycastEps = fVar3;
    bVar7 = SegmentMath::SegmentMath_Is2DPointOnSegment
                      (point_00,VVar4,VVar5,epsilon_00,(MethodInfo *)0x0);
    if (bVar7 != 0) break;
    degreeRotation = (float)((int)degreeRotation + 1);
    this = unaff_ESI;
    puVar2 = puVar8;
  }
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
  epsilon_00 = (SegmentEpsilon)((ulonglong)((uint)epsilon._wireEps & _UNK_?) << 0x20);
  VVar1.y = quadHeight;
  VVar1.x = quadWidth;
  this = QuadMath_Calc2DQuadCornerPoints_1(quadCenter,VVar1,quadRight,quadUp,(MethodInfo *)0x0);
  quadWidth = 0.0;
  if (this == (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  while( true ) {
    if ((this->fields)._size <= (int)quadWidth) {
      return 0;
    }
    startPoint = (SegmentEpsilon)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (this,(int32_t)quadWidth,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
    VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this,((int)quadWidth + 1) % (this->fields)._size,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    bVar3 = SegmentMath::SegmentMath_Is2DPointOnSegment
                      ((Vector2)((ulonglong)unaff_EDI << 0x20),(Vector2)startPoint,VVar1,epsilon_00,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) break;
    quadWidth = (float)((int)quadWidth + 1);
    epsilon_00 = startPoint;
  }
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
  pfVar1 = t;
  fStack_2 = 0.0;
  *t = 0.0;
  value.y = quadUp.x * quadRight.z - quadRight.x * quadUp.z;
  value.x = quadRight.y * quadUp.z - quadRight.z * quadUp.y;
  value.z = quadRight.x * quadUp.y - quadUp.x * quadRight.y;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe4,value,(MethodInfo *)0x0);
  t = (float *)pVVar3->z;
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  forward.y = (float)uVar5;
  forward.x = (float)uVar4;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar3,(MethodInfo *)0x0);
  fVar6 = pVVar3->x;
  fVar7 = pVVar3->y;
  fVar8 = pVVar3->z;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffc4,ray_01,&fStack_2,(MethodInfo *)0x0);
  fVar10 = quadCenter.z;
  if (bVar9 != 0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffd8,&ray,fStack_2,(MethodInfo *)0x0);
    quadCenter_00.y = quadCenter.y;
    quadCenter_00.x = quadCenter.x;
    quadCenter_00.z = fVar10;
    fVar8 = quadUp.x;
    bVar9 = QuadMath_Contains3DPoint
                      (*pVVar3,0,quadCenter_00,quadWidth,quadHeight,quadRight,quadUp,epsilon,
                       (MethodInfo *)0x0);
    fVar6 = quadRight.y;
    fVar7 = quadRight.z;
    if (bVar9 != 0) {
      *pfVar1 = fStack_2;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * fVar6 + ray.m_Direction.y * fVar7 +
                    ray.m_Direction.z * fVar8) & _UNK_?) < _UNK_?)) {
    quadCenter.z = (float)t;
    ray.m_Direction.z = (float)&UNK_?;
    forward.z = (float)t;
    t = (float *)&stack0xffffffc4;
    quadCenter.x = (float)uVar4;
    quadCenter.y = (float)uVar5;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                       ((Quaternion *)&stack0xffffffc4,forward,quadUp,(MethodInfo *)0x0);
    fVar12 = epsilon._sizeEps.x + quadUp.x;
    fVar13 = epsilon._sizeEps.y + quadUp.y;
    fVar14 = epsilon._extrudeEps * _UNK_?;
    fVar6 = pQVar11->x;
    fVar7 = pQVar11->y;
    fVar8 = pQVar11->z;
    pfVar1 = (float *)pQVar11->w;
    fVar15 = ray.m_Origin.x;
    fVar16 = ray.m_Origin.y;
    fVar17 = ray.m_Origin.z;
    fVar18 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    t = (float *)0x0;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Direction.y = fVar18;
    ray.m_Direction.x = fVar17;
    ray.m_Origin.z = fVar16;
    ray.m_Origin.y = fVar15;
    t = pfVar1;
    ray.m_Direction.z = fVar8;
    quadCenter.z = quadCenter.y;
    quadCenter.y = quadCenter.x;
    ray.m_Origin.x = (float)&UNK_?;
    ray_00.m_Origin.y = ray.m_Origin.z;
    ray_00.m_Origin.x = ray.m_Origin.y;
    ray_00.m_Origin.z = ray.m_Direction.x;
    ray_00.m_Direction.x = ray.m_Direction.y;
    ray_00.m_Direction.y = ray.m_Direction.z;
    ray_00.m_Direction.z = (float)t;
    boxCenter.y = quadCenter.z;
    boxCenter.x = quadCenter.x;
    boxCenter.z = fVar10;
    boxSize.y = fVar13;
    boxSize.x = fVar12;
    boxSize.z = fVar14;
    boxRotation.y = fVar7;
    boxRotation.x = fVar6;
    boxRotation.z = ray.m_Direction.z;
    boxRotation.w = (float)t;
    quadCenter.x = (float)&t;
    bVar9 = BoxMath::BoxMath_Raycast_1
                      (ray_00,(float *)&t,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                       (MethodInfo *)0x0);
    return bVar9;
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
        if (4.3898588e-29 < fVar15) goto code_?;
      }
    }
  }
  *t = (float)puStack_1;
  return 1;
}

