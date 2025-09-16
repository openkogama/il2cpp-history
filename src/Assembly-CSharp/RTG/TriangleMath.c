
/* OBB Calc3DTriangleOBB(Vector3, Vector3, Vector3, Vector3, TriangleEpsilon) */

OBB * Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Calc3DTriangleOBB
                (OBB *__return_storage_ptr__,Vector3 p0,Vector3 p1,Vector3 p2,Vector3 normal,
                TriangleEpsilon epsilon,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x2c);
  fVar1 = (p0.y - p1.y) * (p0.y - p1.y) + (p0.x - p1.x) * (p0.x - p1.x) +
           (p0.z - p1.z) * (p0.z - p1.z) + _UNK_?;
  fVar2 = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) +
           (p1.z - p2.z) * (p1.z - p2.z);
  uStack_3 = p0._0_8_;
  fVar4 = p0.z;
  fVar5 = p1.x;
  fVar6 = p1.y;
  fVar7 = p1.z;
  if (fVar1 < fVar2) {
    fVar1 = fVar2;
    uStack_3 = p1._0_8_;
    fVar4 = p1.z;
    fVar5 = p2.x;
    fVar6 = p2.y;
    fVar7 = p2.z;
  }
  if (fVar1 < (p2.y - p0.y) * (p2.y - p0.y) + (p2.x - p0.x) * (p2.x - p0.x) +
               (p2.z - p0.z) * (p2.z - p0.z)) {
    uStack_3 = p2._0_8_;
    fVar4 = p2.z;
    fVar5 = p0.x;
    fVar6 = p0.y;
    fVar7 = p0.z;
  }
  value.y = fVar6 - uStack_3._4_4_;
  value.x = fVar5 - (float)uStack_3;
  value.z = fVar7 - fVar4;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0);
  upwards.y = normal.y;
  upwards.x = normal.x;
  upwards.z = normal.z;
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                     ((Quaternion *)&stack0xfffffffc,*pVVar8,upwards,(MethodInfo *)0x0);
  OBB::OBB__ctor_3(__return_storage_ptr__,*pQVar9,(MethodInfo *)0x0);
  if (fStack_10 < 0.0) {
    func_?();
  }
  pVVar8 = SphereShape3D::SphereShape3D_get_Right
                     ((Vector3 *)&normal.z,(SphereShape3D *)__return_storage_ptr__,(MethodInfo *)0x0
                     );
  uVar11 = pVVar8->x;
  uVar12 = pVVar8->y;
  fVar1 = pVVar8->z;
  fVar5 = epsilon._areaEps - p1.z;
  fVar4 = epsilon._extrudeEps * _UNK_?;
  epsilon._areaEps = p0.z;
  (__return_storage_ptr__->_size).x =
       (float)((uint)((float)uVar11 * (normal.y - p1.x) + (float)uVar12 * (normal.z - p1.y) +
                     fVar1 * fVar5) & _UNK_?) + p0.y;
  (__return_storage_ptr__->_size).y = fVar4;
  (__return_storage_ptr__->_size).z = p0.z;
  pVVar8 = SphereShape3D::SphereShape3D_get_Right
                     ((Vector3 *)&epsilon._wireEps,(SphereShape3D *)__return_storage_ptr__,
                      (MethodInfo *)0x0);
  uVar13 = pVVar8->x;
  uVar14 = pVVar8->y;
  epsilon._extrudeEps = (float)uVar13;
  epsilon._wireEps = (float)uVar14;
  pVVar8 = SphereShape3D::SphereShape3D_get_Look
                     ((Vector3 *)((int)register0x00000010 + 0x4c),
                      (SphereShape3D *)__return_storage_ptr__,(MethodInfo *)0x0);
  uStack15._0_4_ = pVVar8->x;
  uStack15._4_4_ = pVVar8->y;
  fStack16 = pVVar8->z;
  pVVar8 = SphereShape3D::SphereShape3D_get_Look
                     ((Vector3 *)&stack0x00000058,(SphereShape3D *)__return_storage_ptr__,
                      (MethodInfo *)0x0);
  uVar17 = pVVar8->x;
  uVar18 = pVVar8->y;
  fVar5 = (float)uVar18 * normal.z * _UNK_?;
  fVar4 = pVVar8->z * normal.z * _UNK_?;
  (__return_storage_ptr__->_center).x = (float)uVar17 * normal.z * _UNK_? + fVar1;
  (__return_storage_ptr__->_center).y = fVar5 + normal.x;
  (__return_storage_ptr__->_center).z = fVar4 + normal.y;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] CalcEqTriangle2DPoints(Vector2, Single, Quaternion) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcEqTriangle2DPoints
          (Vector2 centroid,float sideLength,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  fVar1 = sideLength * _UNK_?;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  fVar2 = (sideLength * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor) /
           _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  rotation_00.y = rotation.y;
  rotation_00.x = rotation.x;
  rotation_00.z = rotation.z;
  rotation_00.w = rotation.w;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffdc,rotation_00,point,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation_01.y = rotation.y;
  rotation_01.x = rotation.x;
  rotation_01.z = rotation.z;
  rotation_01.w = rotation.w;
  point_00.z = 0.0;
  point_00.x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  point_00.y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  fVar3 = rotation.y;
  fVar4 = rotation.z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&rotation.y,rotation_01,point_00,(MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  rotation.w = centroid.x - (float)uVar6 * fVar2;
  fVar8 = centroid.y - (float)uVar7 * fVar2;
  this = (List_1_UnityEngine_Vector2_ *)func_?();
  puVar9 = &UNK_?;
  pLVar10 = this;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar11 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar12 = rotation.w - fVar3 * fVar1;
  fVar13 = fVar8 - fVar4 * fVar1;
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar14 = &(this->fields)._version;
    *piVar14 = *piVar14 + 1;
    pVVar15 = (this->fields)._items;
    if (pVVar15 != (Vector2__Array *)0x0) {
      uVar16 = (this->fields)._size;
      if (uVar16 < pVVar15->max_length) {
        (this->fields)._size = uVar16 + 1;
        if (pVVar15->max_length <= uVar16) goto code_?;
        pVVar15->vector[uVar16].x = fVar12;
        pVVar15->vector[uVar16].y = fVar13;
      }
      else {
        rotation.y = (float)pMVar11->klass->rgctx_data[0xe].method;
        centroid.x = (float)&UNK_?;
        item.y = fVar13;
        item.x = fVar12;
        rotation.x = fVar13;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(this,item,(MethodInfo *)rotation.y);
        centroid.y = (float)this;
        sideLength = fVar12;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar11 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar2 = sideLength * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor -
               fVar2;
      fVar13 = (float)puVar9 * fVar2 + centroid.x;
      fVar2 = (float)pLVar10 * fVar2 + centroid.y;
      piVar14 = &(this->fields)._version;
      *piVar14 = *piVar14 + 1;
      pVVar15 = (this->fields)._items;
      if (pVVar15 != (Vector2__Array *)0x0) {
        uVar16 = (this->fields)._size;
        if (uVar16 < pVVar15->max_length) {
          (this->fields)._size = uVar16 + 1;
          if (pVVar15->max_length <= uVar16) goto code_?;
          pVVar15->vector[uVar16].x = fVar13;
          pVVar15->vector[uVar16].y = fVar2;
        }
        else {
          rotation.y = (float)&UNK_?;
          item_00.y = fVar2;
          item_00.x = fVar13;
          rotation.z = (float)this;
          rotation.w = fVar13;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this,item_00,pMVar11->klass->rgctx_data[0xe].method);
        }
        pMVar11 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar2 = fVar3 * fVar1 + rotation.w;
        fVar8 = fVar4 * fVar1 + fVar8;
        piVar14 = &(this->fields)._version;
        *piVar14 = *piVar14 + 1;
        pVVar15 = (this->fields)._items;
        if (pVVar15 != (Vector2__Array *)0x0) {
          uVar16 = (this->fields)._size;
          if (pVVar15->max_length <= uVar16) {
            rotation.y = (float)&UNK_?;
            item_01.y = fVar8;
            item_01.x = fVar2;
            rotation.z = (float)this;
            rotation.w = fVar2;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this,item_01,pMVar11->klass->rgctx_data[0xe].method);
            return this;
          }
          (this->fields)._size = uVar16 + 1;
          if (uVar16 < pVVar15->max_length) {
            pVVar15->vector[uVar16].x = fVar2;
            pVVar15->vector[uVar16].y = fVar8;
            return this;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector2_ *)(*pcVar17)();
  return pLVar10;
}


/* List`1[UnityEngine.Vector3] CalcEqTriangle3DPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcEqTriangle3DPoints
          (Vector3 centroid,float sideLength,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffb8,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffb8,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffb8,rotation,
               TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffb8,rotation,
               TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
    func_?();
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar2)();
  return pLVar1;
}


/* List`1[UnityEngine.Vector2] CalcRATriangle2DPoints(Vector2, Single, Single, Single) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangle2DPoints
          (Vector2 rightAngleCorner,float xLength,float yLength,float degreeTriRotation,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffd4,degreeTriRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                       (MethodInfo *)0x0);
  fVar2 = pQVar1->x;
  fVar3 = pQVar1->y;
  puVar4 = (undefined *)pQVar1->z;
  ppVVar5 = (Vector2__Class **)pQVar1->w;
  if (cRam_? == '\0') {
    ppVVar5 = &TypeInfo__UnityEngine__Vector2;
    puVar4 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  VVar6 = TypeInfo__UnityEngine__Vector2->static_fields->rightVector;
  fVar7 = 0.0;
  fVar8 = VVar6.x;
  fVar9 = VVar6.y;
  fVar10 = 0.0;
  rotation.y = fVar3;
  rotation.x = fVar2;
  rotation.z = (float)puVar4;
  rotation.w = (float)ppVVar5;
  point.z = 0.0;
  point.x = VVar6.x;
  point.y = VVar6.y;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xfffffff0,rotation,point,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  __return_storage_ptr__ = (Vector3 *)&stack0xffffffd8;
  rotation_00.y = fVar9;
  rotation_00.x = fVar8;
  rotation_00.z = fVar10;
  rotation_00.w = fVar7;
  point_00.z = 0.0;
  point_00.x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  point_00.y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (__return_storage_ptr__,rotation_00,point_00,(MethodInfo *)0x0);
  pLVar12 = TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>;
  fVar2 = pVVar11->x;
  fVar3 = pVVar11->y;
  pLVar13 = (List_1_UnityEngine_Vector2_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar13,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar14 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  if (pLVar13 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar15 = &(pLVar13->fields)._version;
    *piVar15 = *piVar15 + 1;
    pVVar16 = (pLVar13->fields)._items;
    if (pVVar16 != (Vector2__Array *)0x0) {
      uVar17 = (pLVar13->fields)._size;
      if (uVar17 < pVVar16->max_length) {
        (pLVar13->fields)._size = uVar17 + 1;
        if (pVVar16->max_length <= uVar17) goto code_?;
        pVVar16->vector[uVar17].x = (float)pLVar12;
        pVVar16->vector[uVar17].y = rightAngleCorner.y;
      }
      else {
        VVar6.y = rightAngleCorner.y;
        VVar6.x = (float)pLVar12;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (pLVar13,VVar6,pMVar14->klass->rgctx_data[0xe].method);
      }
      pMVar14 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar2 = (float)pLVar12 + fVar2 * yLength;
      fVar3 = rightAngleCorner.y + fVar3 * yLength;
      piVar15 = &(pLVar13->fields)._version;
      *piVar15 = *piVar15 + 1;
      pVVar16 = (pLVar13->fields)._items;
      if (pVVar16 != (Vector2__Array *)0x0) {
        uVar17 = (pLVar13->fields)._size;
        if (uVar17 < pVVar16->max_length) {
          (pLVar13->fields)._size = uVar17 + 1;
          if (pVVar16->max_length <= uVar17) goto code_?;
          pVVar16->vector[uVar17].x = fVar2;
          pVVar16->vector[uVar17].y = fVar3;
        }
        else {
          item.y = fVar3;
          item.x = fVar2;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (pLVar13,item,pMVar14->klass->rgctx_data[0xe].method);
        }
        pMVar14 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar2 = (float)pLVar12 + (float)__return_storage_ptr__ * xLength;
        fVar3 = rightAngleCorner.y + fVar8 * xLength;
        piVar15 = &(pLVar13->fields)._version;
        *piVar15 = *piVar15 + 1;
        pVVar16 = (pLVar13->fields)._items;
        if (pVVar16 != (Vector2__Array *)0x0) {
          uVar17 = (pLVar13->fields)._size;
          if (pVVar16->max_length <= uVar17) {
            item_00.y = fVar3;
            item_00.x = fVar2;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar13,item_00,pMVar14->klass->rgctx_data[0xe].method);
            return pLVar13;
          }
          (pLVar13->fields)._size = uVar17 + 1;
          if (uVar17 < pVVar16->max_length) {
            pVVar16->vector[uVar17].x = fVar2;
            pVVar16->vector[uVar17].y = fVar3;
            return pLVar13;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar13 = (List_1_UnityEngine_Vector2_ *)(*pcVar18)();
  return pLVar13;
}


/* List`1[UnityEngine.Vector3] CalcRATriangle3DPoints(Vector3, Single, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangle3DPoints
          (Vector3 rightAngleCorner,float xLength,float yLength,Quaternion triangleRotation,
          MethodInfo *method)

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
            (&VStack_1,triangleRotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffc0,triangleRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  VStack_1.x = pVVar2->x;
  VStack_1.y = pVVar2->y;
  VStack_1.z = pVVar2->z;
  pLVar3 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  if (pLVar3 != (List_1_UnityEngine_Vector3_ *)0x0) {
    VStack_1.z = (float)&UNK_?;
    pLStack_4 = pLVar3;
    func_?();
    VStack_1.z = (float)&UNK_?;
    pLStack_4 = pLVar3;
    func_?();
    VStack_1.z = (float)&UNK_?;
    pLStack_4 = pLVar3;
    func_?();
    return pLVar3;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar3 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
  return pLVar3;
}


/* Single CalcRATriangleAltitude(Vector2) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangleAltitude
                (Vector2 sides,MethodInfo *method)

{
  dVar1 = (double)(sides.y * sides.y + sides.x * sides.x);
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  return (sides.y * sides.x) / (float)dVar1;
}


/* Single CalcRATriangleHypotenuse(Single, Single) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangleHypotenuse
                (float side0,float side1,MethodInfo *method)

{
  dVar1 = (double)(side0 * side0 + side1 * side1);
  if (0.0 <= dVar1) {
    return (float)SQRT(dVar1);
  }
  func_?();
  return (float)dVar1;
}


/* Single CalcRATriangleHypotenuse(Vector2) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangleHypotenuse_1
                (Vector2 sides,MethodInfo *method)

{
  dVar1 = (double)(sides.y * sides.y + sides.x * sides.x);
  if (0.0 <= dVar1) {
    return (float)SQRT(dVar1);
  }
  func_?();
  return (float)dVar1;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Vector2, Vector2, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Contains2DPoint
               (Vector2 point,Vector2 p0,Vector2 p1,Vector2 p2,TriangleEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  point_00.z = 0.0;
  point_00._0_8_ = point;
  p0_00.z = 0.0;
  p0_00._0_8_ = p0;
  p1_00.z = 0.0;
  p1_00._0_8_ = p1;
  p2_00.z = 0.0;
  p2_00._0_8_ = p2;
  bVar1 = TriangleMath_Contains3DPoint(point_00,0,p0_00,p1_00,p2_00,epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Vector3, Vector3, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Contains3DPoint
               (Vector3 point,bool checkOnPlane,Vector3 p0,Vector3 p1,Vector3 p2,
               TriangleEpsilon epsilon,MethodInfo *method)

{
  fVar1 = p1.x - p0.x;
  fVar2 = p1.y - p0.y;
  fVar3 = p1.z - p0.z;
  fVar4 = p2.x - p1.x;
  fVar5 = p2.y - p1.y;
  fVar6 = p2.z - p1.z;
  fVar7 = p0.x - p2.x;
  fVar8 = p0.y - p2.y;
  fVar9 = p0.z - p2.z;
  value.y = (float)((uint)fVar7 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
            fVar3 - (float)((uint)fVar9 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ) * fVar1;
  value.x = (float)((uint)fVar9 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
            fVar2 - (float)((uint)fVar8 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ) * fVar3;
  value.z = (float)((uint)fVar8 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
            fVar1 - (float)((uint)fVar7 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ) * fVar2;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffa8,value,(MethodInfo *)0x0);
  uVar11._0_4_ = pVVar10->x;
  uVar11._4_4_ = pVVar10->y;
  fVar12 = pVVar10->z;
  if ((checkOnPlane != 0) &&
     (epsilon._extrudeEps <
      (float)((uint)((float)uVar11._4_4_ * (point.y - p0.y) +
                     (float)(undefined4)uVar11 * (point.x - p0.x) + fVar12 * (point.z - p0.z)) &
             _UNK_?))) {
    return 0;
  }
  uVar13 = pVVar10->x;
  uVar14 = pVVar10->y;
  value_00.y = (float)uVar13 * fVar3 - fVar12 * fVar1;
  value_00.x = fVar12 * fVar2 - (float)uVar14 * fVar3;
  value_00.z = (float)uVar14 * fVar1 - (float)uVar13 * fVar2;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffa8,value_00,(MethodInfo *)0x0);
  uVar15 = pVVar10->x;
  uVar16 = pVVar10->y;
  if ((point.y - p0.y) * (float)uVar16 + (point.x - p0.x) * (float)uVar15 +
      (point.z - p0.z) * pVVar10->z <= epsilon._areaEps) {
    fVar1 = (float)((ulonglong)uVar11 >> 0x20);
    lVar17 = (ulonglong)(uint)fVar1 << 0x20;
    value_01.y = (float)uVar11 * fVar6 - fVar12 * fVar4;
    value_01.x = fVar12 * fVar5 - fVar1 * fVar6;
    value_01.z = fVar1 * fVar4 - (float)uVar11 * fVar5;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffa8,value_01,(MethodInfo *)0x0);
    uVar18 = pVVar10->x;
    uVar19 = pVVar10->y;
    if ((point.y - p1.y) * (float)uVar19 + (point.x - p1.x) * (float)uVar18 +
        (point.z - p1.z) * pVVar10->z <= epsilon._areaEps) {
      fVar4 = (float)((ulonglong)lVar17 >> 0x20);
      value_02.y = (float)lVar17 * fVar9 - fVar12 * fVar7;
      value_02.x = fVar12 * fVar8 - fVar4 * fVar9;
      value_02.z = fVar4 * fVar7 - (float)lVar17 * fVar8;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         (&p1,value_02,(MethodInfo *)0x0);
      uVar20 = pVVar10->x;
      uVar21 = pVVar10->y;
      if ((point.y - p2.y) * (float)uVar21 + (point.x - p2.x) * (float)uVar20 +
          (point.z - p2.z) * pVVar10->z <= epsilon._areaEps) {
        return 1;
      }
    }
  }
  return 0;
}


/* Single GetEqTriangleAltitude(Single) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_GetEqTriangleAltitude
                (float sideLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor * sideLength;
}


/* Single GetEqTriangleCentroidAltitude(Single) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_GetEqTriangleCentroidAltitude
                (float sideLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return (TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor * sideLength) /
         _UNK_?;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Vector3, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Raycast
               (Ray ray,float *t,Vector3 p0,Vector3 p1,Vector3 p2,TriangleEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  *t = 0.0;
  VVar2.y = (p2.x - p0.x) * (p1.z - p0.z) - (p2.z - p0.z) * (p1.x - p0.x);
  VVar2.x = (p2.z - p0.z) * (p1.y - p0.y) - (p2.y - p0.y) * (p1.z - p0.z);
  VVar2.z = (p2.y - p0.y) * (p1.x - p0.x) - (p2.x - p0.x) * (p1.y - p0.y);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffff9c,VVar2,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffdc,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffff9c,&ray,fVar1,(MethodInfo *)0x0);
    uVar8._0_4_ = pVVar3->x;
    uVar8._4_4_ = pVVar3->y;
    fVar9 = pVVar3->z;
    if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    point.z = fVar9;
    point.x = (float)(int)uVar8;
    point.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    bVar7 = TriangleMath_Contains3DPoint(point,0,p0,p1,p2,epsilon,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if (epsilon._extrudeEps != 0.0) {
    puVar10 = &UNK_?;
    v1.y = ray.m_Direction.y;
    v1.x = ray.m_Direction.x;
    v1.z = ray.m_Direction.z;
    v2.y = (float)uVar5;
    v2.x = (float)uVar4;
    v2.z = fVar6;
    fVar1 = ray.m_Direction.x;
    fVar9 = Vector3Ex::Vector3Ex_AbsDot(v1,v2,(MethodInfo *)0x0);
    fVar11 = ExtrudeEpsThreshold::ExtrudeEpsThreshold_get_Get((MethodInfo *)0x0);
    if (fVar9 < fVar11) {
      if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
        ray.m_Direction.x = (float)TypeInfo__RTG__TriangleMath;
        ray.m_Origin.z = (float)&UNK_?;
        func_?();
      }
      ray.m_Direction.x = 0.0;
      ray.m_Origin.x = epsilon._areaEps;
      ray.m_Origin.y = epsilon._extrudeEps;
      normal.y = fVar1;
      normal.x = (float)puVar10;
      ray.m_Origin.z = epsilon._wireEps;
      normal.z = fVar6;
      pOVar12 = TriangleMath_Calc3DTriangleOBB
                          ((OBB *)&stack0xffffff70,p0,p1,p2,normal,epsilon,(MethodInfo *)0x0);
      fVar6 = (pOVar12->_size).x;
      fVar1 = (pOVar12->_size).y;
      fVar9 = (pOVar12->_size).z;
      fVar11 = (pOVar12->_center).y;
      fVar13 = (pOVar12->_center).z;
      VVar2 = pOVar12->_center;
      uVar14 = (pOVar12->_rotation).w;
      uVar15 = (pOVar12->_rotation).x;
      uVar16 = (pOVar12->_rotation).y;
      uVar17 = (pOVar12->_rotation).z;
      boxRotation.z = (float)uVar17;
      boxRotation.y = (float)uVar16;
      boxRotation.x = (float)uVar15;
      fVar18 = ray.m_Origin.x;
      fVar19 = ray.m_Origin.y;
      fVar20 = ray.m_Origin.z;
      fVar21 = ray.m_Direction.x;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        fVar18 = ray.m_Origin.x;
        fVar19 = ray.m_Origin.y;
        fVar20 = ray.m_Origin.z;
        fVar21 = ray.m_Direction.x;
      }
      ray.m_Direction.y = fVar21;
      ray.m_Direction.x = fVar20;
      ray.m_Origin.z = fVar19;
      ray.m_Origin.y = fVar18;
      ray.m_Origin.x = (float)&UNK_?;
      ray_00.m_Origin.y = ray.m_Origin.z;
      ray_00.m_Origin.x = ray.m_Origin.y;
      ray_00.m_Origin.z = ray.m_Direction.x;
      ray_00.m_Direction.x = ray.m_Direction.y;
      ray_00.m_Direction.y = fVar11;
      ray_00.m_Direction.z = fVar13;
      boxSize.y = fVar1;
      boxSize.x = fVar6;
      boxSize.z = fVar9;
      boxRotation.w = (float)uVar14;
      ray.m_Direction.z = fVar11;
      bVar7 = BoxMath::BoxMath_Raycast
                         (ray_00,VVar2,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0)
      ;
      return bVar7;
    }
  }
  return 0;
}


/* Boolean RaycastWire(Ray, Single ByRef, Vector3, Vector3, Vector3, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_RaycastWire
               (Ray ray,float *t,Vector3 p0,Vector3 p1,Vector3 p2,TriangleEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  *t = 0.0;
  VVar2.y = (p1.z - p0.z) * (p2.x - p0.x) - (p2.z - p0.z) * (p1.x - p0.x);
  VVar2.x = (p1.y - p0.y) * (p2.z - p0.z) - (p1.z - p0.z) * (p2.y - p0.y);
  VVar2.z = (p2.y - p0.y) * (p1.x - p0.x) - (p1.y - p0.y) * (p2.x - p0.x);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffff90,VVar2,(MethodInfo *)0x0);
  fVar4 = pVVar3->x;
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffd4,ray_01,(float *)&puStack_1,(MethodInfo *)0x0);
  fVar4 = fVar4;
  fVar5 = fVar5;
  if (bVar7 == 0) {
code_?:
    ray.m_Direction.x = fVar5;
    ray.m_Origin.z = fVar4;
    if (epsilon._extrudeEps != 0.0) {
      ray.m_Direction.z = 0.0;
      ray.m_Origin.x = ray.m_Direction.y;
      ray.m_Origin.y = 0.0;
      v1.y = ray.m_Direction.y;
      v1.x = ray.m_Direction.x;
      v1.z = 0.0;
      v2.y = ray.m_Direction.x;
      v2.x = ray.m_Origin.z;
      v2.z = fVar6;
      fVar4 = ray.m_Origin.z;
      fVar5 = ray.m_Direction.x;
      ray.m_Direction.y = fVar6;
      fVar8 = Vector3Ex::Vector3Ex_AbsDot(v1,v2,(MethodInfo *)0x0);
      ray.m_Direction.z = 0.0;
      ray.m_Direction.y = (float)&UNK_?;
      fVar9 = ExtrudeEpsThreshold::ExtrudeEpsThreshold_get_Get((MethodInfo *)0x0);
      if (fVar8 < fVar9) {
        if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ray.m_Direction.y = 0.0;
        ray.m_Direction.z = p2.y;
        ray.m_Origin.y = epsilon._areaEps;
        ray.m_Origin.z = epsilon._extrudeEps;
        ray.m_Direction.x = epsilon._wireEps;
        ray.m_Origin.x = fVar6;
        fVar10 = fVar5;
        VVar2.x = fVar4;
        VVar2 = (Vector3)CONCAT84(VVar2._0_8_,VVar2.x);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = p2._4_8_;
        normal.y = fVar5;
        normal.x = fVar4;
        normal.z = fVar6;
        pOVar12 = TriangleMath_Calc3DTriangleOBB
                            ((OBB *)&stack0xffffff64,VVar2,(Vector3)epsilon,
                             (Vector3)(auVar11 << 0x20),normal,epsilon,(MethodInfo *)0x0);
        fVar13 = ray.m_Direction.z;
        fVar14 = ray.m_Direction.y;
        fVar4 = (pOVar12->_size).x;
        fVar5 = (pOVar12->_size).y;
        fVar8 = (pOVar12->_size).z;
        fVar9 = (pOVar12->_center).x;
        fVar15 = (pOVar12->_center).y;
        fVar16 = (pOVar12->_center).z;
        fVar17 = (pOVar12->_rotation).x;
        fVar18 = (pOVar12->_rotation).y;
        uVar19 = (pOVar12->_rotation).z;
        fVar6 = (pOVar12->_rotation).w;
        fVar20 = ray.m_Origin.x;
        fVar21 = ray.m_Origin.y;
        fVar22 = ray.m_Origin.z;
        fVar23 = ray.m_Direction.x;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        boxSize.y = fVar5;
        boxSize.x = fVar4;
        ray_00.m_Origin.y = fVar21;
        ray_00.m_Origin.x = fVar20;
        ray_00.m_Origin.z = fVar22;
        ray_00.m_Direction.x = fVar23;
        ray_00.m_Direction.y = fVar14;
        ray_00.m_Direction.z = fVar13;
        boxCenter.y = fVar15;
        boxCenter.x = fVar9;
        boxCenter.z = fVar16;
        boxSize.z = fVar8;
        boxRotation.y = fVar18;
        boxRotation.x = fVar17;
        boxRotation.z = (float)uVar19;
        boxRotation.w = fVar6;
        bVar7 = BoxMath::BoxMath_Raycast
                           (ray_00,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                            (MethodInfo *)0x0);
        return bVar7;
      }
    }
    return 0;
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffff90,&ray,(float)puStack_1,(MethodInfo *)0x0);
  uVar24 = pVVar3->x;
  uVar25 = pVVar3->y;
  fVar4 = pVVar3->z;
  fVar5 = Vector3Ex::Vector3Ex_GetDistanceToSegment(*pVVar3,p0,p1,(MethodInfo *)0x0);
  if ((epsilon._wireEps < fVar5) &&
     (point.y = (float)uVar25, point.x = (float)uVar24, point.z = fVar4,
     fVar5 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,p1,p2,(MethodInfo *)0x0),
     epsilon._wireEps < fVar5)) {
    fVar6 = 0.0;
    point_00.z = fVar4;
    point_00.x = (float)(int)p0._4_8_;
    point_00.y = (float)(int)((ulonglong)p0._4_8_ >> 0x20);
    fVar8 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point_00,p2,p0,(MethodInfo *)0x0);
    fVar4 = p0.y;
    fVar5 = p0.z;
    if (epsilon._wireEps < fVar8) goto code_?;
  }
  *t = (float)puStack_1;
  return 1;
}


/* TriangleMath() */

void Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if (_UNK_? < 0.0) {
    dVar1 = _UNK_?;
    func_?();
  }
  else {
    dVar1 = SQRT(_UNK_?);
  }
  TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor = (float)dVar1 * _UNK_?;
  return;
}


/* Single get_EqTriangleAltFactor() */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_get_EqTriangleAltFactor
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor;
}

