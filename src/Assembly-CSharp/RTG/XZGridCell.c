
/* XZGridCell FromPoint(Vector3, Single, Single, IXZGrid) */

XZGridCell *
Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell_FromPoint
          (Vector3 point,float cellSizeX,float cellSizeZ,IXZGrid *parentGrid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IXZGrid);
    func_?(&TypeInfo__RTG__XZGridCell);
    cRam_? = '\x01';
  }
  func_?(&MStack_1,0,0x40);
  func_?(&MStack_2,0,0x40);
  if (parentGrid == (IXZGrid *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    pXVar4 = (XZGridCell *)(*pcVar3)();
    return pXVar4;
  }
  pIVar5 = parentGrid->klass;
  uVar6 = 0;
  uVar7._0_1_ = (pIVar5->_1).rank;
  uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__RTG__IXZGrid) {
        ppMVar8 = &(&(parentGrid->klass->vtable).get_WorldMatrix)
                   [parentGrid->klass->interfaceOffsets[uVar6].offset].method;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  ppMVar8 = (MethodInfo **)func_?(parentGrid,TypeInfo__RTG__IXZGrid,1);
code_?:
  pfVar9 = (float *)(*(code *)*ppMVar8)(&stack0xfffffec8,parentGrid,ppMVar8[1]);
  MStack_1.m00 = *pfVar9;
  MStack_1.m10 = pfVar9[1];
  MStack_1.m20 = pfVar9[2];
  MStack_1.m30 = pfVar9[3];
  MStack_1.m01 = pfVar9[4];
  MStack_1.m11 = pfVar9[5];
  MStack_1.m21 = pfVar9[6];
  MStack_1.m31 = pfVar9[7];
  MStack_1.m02 = pfVar9[8];
  MStack_1.m12 = pfVar9[9];
  MStack_1.m22 = pfVar9[10];
  MStack_1.m32 = pfVar9[0xb];
  MStack_1.m03 = pfVar9[0xc];
  MStack_1.m13 = pfVar9[0xd];
  MStack_1.m23 = pfVar9[0xe];
  MStack_1.m33 = pfVar9[0xf];
  pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                      ((Matrix4x4 *)&stack0xfffffec8,&MStack_1,(MethodInfo *)0x0);
  MStack_2.m00 = pMVar10->m00;
  MStack_2.m10 = pMVar10->m10;
  MStack_2.m20 = pMVar10->m20;
  MStack_2.m30 = pMVar10->m30;
  MStack_2.m01 = pMVar10->m01;
  MStack_2.m11 = pMVar10->m11;
  MStack_2.m21 = pMVar10->m21;
  MStack_2.m31 = pMVar10->m31;
  MStack_2.m02 = pMVar10->m02;
  MStack_2.m12 = pMVar10->m12;
  MStack_2.m22 = pMVar10->m22;
  MStack_2.m32 = pMVar10->m32;
  MStack_2.m03 = pMVar10->m03;
  MStack_2.m13 = pMVar10->m13;
  MStack_2.m23 = pMVar10->m23;
  MStack_2.m33 = pMVar10->m33;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&VStack_12,&MStack_2,point,(MethodInfo *)0x0);
  VStack_13.x = pVVar11->x;
  VStack_13.y = pVVar11->y;
  fStack_14 = VStack_13.x / cellSizeX;
  VStack_13.z = pVVar11->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_15 = (double)fStack_14;
  fVar16 = (float10)func_?();
  fStack_14 = VStack_13.z / cellSizeZ;
  dStack_17 = (double)fVar16;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_15 = (double)fStack_14;
  fVar18 = (float10)func_?();
  dStack_15 = (double)fVar18;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_20._0_4_ = (pVVar19->rightVector).x;
  uStack_20._4_4_ = (pVVar19->rightVector).y;
  fStack_21 = (pVVar19->rightVector).z;
  fVar22 = (float)(int)fVar16;
  fStack_23 = (float)(undefined4)uStack_20 * fVar22 * cellSizeX;
  uStack_24._4_4_ = (float)uStack_20._4_4_ * fVar22 * cellSizeX;
  fStack_14 = fStack_21 * fVar22 * cellSizeX;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    uVar28 = uStack_25;
    uVar29 = uStack_26;
    uVar30 = uStack_27;
  }
  uStack_27 = uVar30;
  uStack_26 = uVar29;
  uStack_25 = uVar28;
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_20._0_4_ = (pVVar19->forwardVector).x;
  uStack_20._4_4_ = (pVVar19->forwardVector).y;
  fStack_21 = (pVVar19->forwardVector).z;
  fVar22 = (float)(int)fVar18;
  fStack_23 = fStack_23 + (float)(undefined4)uStack_20 * fVar22 * cellSizeZ;
  uStack_24._4_4_ = uStack_24._4_4_ + (float)uStack_20._4_4_ * fVar22 * cellSizeZ;
  fStack_14 = fStack_14 + fStack_21 * fVar22 * cellSizeZ;
  VStack_13.y = uStack_24._4_4_;
  VStack_13.x = fStack_23;
  VStack_13.z = fStack_14;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_20._0_4_ = (pVVar19->rightVector).x;
  uStack_20._4_4_ = (pVVar19->rightVector).y;
  fStack_21 = (pVVar19->rightVector).z;
  fStack_23 = fStack_23 + (float)(undefined4)uStack_20 * cellSizeX;
  uStack_24._4_4_ = uStack_24._4_4_ + (float)uStack_20._4_4_ * cellSizeX;
  fStack_14 = fStack_14 + fStack_21 * cellSizeX;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_20._0_4_ = (pVVar19->forwardVector).x;
  uStack_20._4_4_ = (pVVar19->forwardVector).y;
  fStack_21 = (pVVar19->forwardVector).z;
  fStack_23 = fStack_23 + (float)(undefined4)uStack_20 * cellSizeZ;
  uStack_24._4_4_ = uStack_24._4_4_ + (float)uStack_20._4_4_ * cellSizeZ;
  VStack_12.z = fStack_14 + fStack_21 * cellSizeZ;
  point_00.z = VStack_13.z;
  point_00.x = VStack_13.x;
  point_00.y = VStack_13.y;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&VStack_13,&MStack_1,point_00,(MethodInfo *)0x0);
  uStack_20._0_4_ = pVVar11->x;
  uStack_20._4_4_ = pVVar11->y;
  fStack_14 = pVVar11->z;
  point_01.y = uStack_24._4_4_;
  point_01.x = fStack_23;
  point_01.z = VStack_12.z;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                      (&VStack_12,&MStack_1,point_01,(MethodInfo *)0x0);
  uStack_24._0_4_ = pVVar11->x;
  uStack_24._4_4_ = pVVar11->y;
  fVar22 = pVVar11->z;
  method_00 = TypeInfo__RTG__XZGridCell;
  pXVar4 = (XZGridCell *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pXVar4,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (pXVar4->fields)._xIndex = (int)dStack_17;
  (pXVar4->fields)._min.x = (float)(undefined4)uStack_20;
  (pXVar4->fields)._min.y = (float)uStack_20._4_4_;
  (pXVar4->fields)._zIndex = (int)dStack_15;
  (pXVar4->fields)._min.z = fStack_14;
  (pXVar4->fields)._parentGrid = parentGrid;
  (pXVar4->fields)._max.x = (float)(undefined4)uStack_24;
  (pXVar4->fields)._max.y = uStack_24._4_4_;
  (pXVar4->fields)._max.z = fVar22;
  func_?();
  return pXVar4;
}


/* List`1[UnityEngine.Vector3] GetCenterAndCorners() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell_GetCenterAndCorners
          (XZGridCell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  uVar2 = (this->fields)._min.x;
  uVar3 = (this->fields)._min.y;
  uVar4 = (this->fields)._max.x;
  uVar5 = (this->fields)._max.y;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?(pLVar1,CONCAT44(((float)uVar5 + (float)uVar3) * _UNK_?,
                                     ((float)uVar4 + (float)uVar2) * _UNK_?),
                    ((this->fields)._max.z + (this->fields)._min.z) * _UNK_?,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar6._0_4_ = (this->fields)._max.x;
    uVar6._4_4_ = (this->fields)._max.y;
    fVar7 = (this->fields)._max.z;
    uVar8._0_4_ = (this->fields)._min.x;
    uVar8._4_4_ = (this->fields)._min.y;
    fVar9 = (float)(undefined4)uVar6 - (float)(undefined4)uVar8;
    fVar10 = (this->fields)._min.z;
    fVar11 = fVar7 - fVar10;
    uVar12._0_4_ = (this->fields)._min.x;
    uVar12._4_4_ = (this->fields)._min.y;
    func_?(pLVar1,uVar12,fVar10,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                    ,uVar6,fVar7,uVar8,fVar10,fVar9);
    uVar13._0_4_ = (this->fields)._min.x;
    uVar13._4_4_ = (this->fields)._min.y;
    fVar7 = (this->fields)._min.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar14->forwardVector).x;
    uVar16 = (pVVar14->forwardVector).y;
    func_?(pLVar1,CONCAT44((float)((ulonglong)uVar13 >> 0x20) + (float)uVar16 * fVar11,
                                     (float)uVar13 + (float)uVar15 * fVar11),
                    fVar7 + (pVVar14->forwardVector).z * fVar11,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar17._0_4_ = (this->fields)._max.x;
    uVar17._4_4_ = (this->fields)._max.y;
    func_?(pLVar1,uVar17,(this->fields)._max.z,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar18._0_4_ = (this->fields)._min.x;
    uVar18._4_4_ = (this->fields)._min.y;
    fVar7 = (this->fields)._min.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar14->rightVector).x;
    uVar20 = (pVVar14->rightVector).y;
    func_?(pLVar1,CONCAT44((float)((ulonglong)uVar18 >> 0x20) + (float)uVar20 * fVar9,
                                     (float)uVar18 + (float)uVar19 * fVar9),
                    fVar7 + (pVVar14->rightVector).z * fVar9,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    return pLVar1;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar21)();
  return pLVar1;
}


/* XZGridCell(Int32, Int32, Vector3, Vector3, IXZGrid) */

void Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell__ctor
               (XZGridCell *this,int32_t xIndex,int32_t zIndex,Vector3 min,Vector3 max,
               IXZGrid *parentGrid,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._xIndex = xIndex;
  (this->fields)._zIndex = zIndex;
  (this->fields)._min.x = min.x;
  (this->fields)._min.y = min.y;
  (this->fields)._min.z = min.z;
  (this->fields)._max.x = max.x;
  (this->fields)._max.y = max.y;
  (this->fields)._max.z = max.z;
  (this->fields)._parentGrid = parentGrid;
  func_?(&this->fields,parentGrid);
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell_get_Center
                    (Vector3 *__return_storage_ptr__,XZGridCell *this,MethodInfo *method)

{
  uVar1 = (this->fields)._min.x;
  uVar2 = (this->fields)._min.y;
  uVar3 = (this->fields)._max.x;
  uVar4 = (this->fields)._max.y;
  fVar5 = ((this->fields)._max.z + (this->fields)._min.z) * _UNK_?;
  fVar6 = ((float)uVar4 + (float)uVar2) * _UNK_?;
  __return_storage_ptr__->x = ((float)uVar3 + (float)uVar1) * _UNK_?;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}

