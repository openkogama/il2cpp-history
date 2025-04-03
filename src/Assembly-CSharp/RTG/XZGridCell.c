
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
  if (parentGrid == (IXZGrid *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pXVar2 = (XZGridCell *)(*pcVar1)();
    return pXVar2;
  }
  pIStack_3 = parentGrid->klass;
  uVar4 = 0;
  uStack_5 = (ulonglong)(uint)uStack_5;
  uVar6._0_1_ = (pIStack_3->_1).rank;
  uVar6._1_1_ = (pIStack_3->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIStack_3->interfaceOffsets[uVar4].interfaceType == (Il2CppClass *)TypeInfo__RTG__IXZGrid
         ) {
        ppMVar7 = &(&(pIStack_3->vtable).get_WorldMatrix)
                   [pIStack_3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)func_?(parentGrid,TypeInfo__RTG__IXZGrid,1);
code_?:
  pfVar8 = (float *)(*(code *)*ppMVar7)(&stack0xfffffed0,parentGrid,ppMVar7[1]);
  MStack_9.m00 = *pfVar8;
  MStack_9.m10 = pfVar8[1];
  MStack_9.m20 = pfVar8[2];
  MStack_9.m30 = pfVar8[3];
  MStack_9.m01 = pfVar8[4];
  MStack_9.m11 = pfVar8[5];
  MStack_9.m21 = pfVar8[6];
  MStack_9.m31 = pfVar8[7];
  MStack_9.m02 = pfVar8[8];
  MStack_9.m12 = pfVar8[9];
  MStack_9.m22 = pfVar8[10];
  MStack_9.m32 = pfVar8[0xb];
  MStack_9.m03 = pfVar8[0xc];
  MStack_9.m13 = pfVar8[0xd];
  MStack_9.m23 = pfVar8[0xe];
  MStack_9.m33 = pfVar8[0xf];
  pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xfffffed0,&MStack_9,(MethodInfo *)0x0);
  MStack_11.m00 = pMVar10->m00;
  MStack_11.m10 = pMVar10->m10;
  MStack_11.m20 = pMVar10->m20;
  MStack_11.m30 = pMVar10->m30;
  MStack_11.m01 = pMVar10->m01;
  MStack_11.m11 = pMVar10->m11;
  MStack_11.m21 = pMVar10->m21;
  MStack_11.m31 = pMVar10->m31;
  MStack_11.m02 = pMVar10->m02;
  MStack_11.m12 = pMVar10->m12;
  MStack_11.m22 = pMVar10->m22;
  MStack_11.m32 = pMVar10->m32;
  MStack_11.m03 = pMVar10->m03;
  MStack_11.m13 = pMVar10->m13;
  MStack_11.m23 = pMVar10->m23;
  MStack_11.m33 = pMVar10->m33;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_13,&MStack_11,point,(MethodInfo *)0x0);
  VStack_14.x = pVVar12->x;
  VStack_14.y = pVVar12->y;
  pIStack_3 = (IXZGrid__Class *)(VStack_14.x / cellSizeX);
  VStack_14.z = pVVar12->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_15 = (double)(float)pIStack_3;
  fVar16 = (float10)func_?();
  pIStack_3 = (IXZGrid__Class *)(VStack_14.z / cellSizeZ);
  dStack_17 = (double)fVar16;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_15 = (double)(float)pIStack_3;
  fVar18 = (float10)func_?();
  dStack_15 = (double)fVar18;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_20._0_4_ = (pVVar19->rightVector).x;
  uStack_20._4_4_ = (pVVar19->rightVector).y;
  fVar21 = (float)(int)fVar16;
  pIStack_3 = (IXZGrid__Class *)((float)(undefined4)uStack_20 * fVar21 * cellSizeX);
  fVar22 = (float)uStack_20._4_4_ * fVar21 * cellSizeX;
  fStack_23 = (pVVar19->rightVector).z * fVar21 * cellSizeX;
  uStack_5._4_4_ = fVar22;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_13.x = (pVVar19->forwardVector).x;
  VStack_13.y = (pVVar19->forwardVector).y;
  VStack_13.z = (pVVar19->forwardVector).z;
  fVar21 = (float)(int)fVar18;
  pIStack_3 = (IXZGrid__Class *)(VStack_13.x * fVar21 * cellSizeZ + (float)pIStack_3);
  uStack_5._4_4_ = VStack_13.y * fVar21 * cellSizeZ + uStack_5._4_4_;
  fStack_23 = VStack_13.z * fVar21 * cellSizeZ + fStack_23;
  VStack_14.y = uStack_5._4_4_;
  VStack_14.x = (float)pIStack_3;
  VStack_14.z = fStack_23;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_13.x = (pVVar19->rightVector).x;
  VStack_13.y = (pVVar19->rightVector).y;
  VStack_13.z = (pVVar19->rightVector).z;
  fVar21 = VStack_13.x * cellSizeX + (float)pIStack_3;
  pIStack_3 = (IXZGrid__Class *)(VStack_13.y * cellSizeX + uStack_5._4_4_);
  uStack_5._4_4_ = VStack_13.z * cellSizeX + fStack_23;
  fStack_23 = fVar21;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_13.x = (pVVar19->forwardVector).x;
  VStack_13.y = (pVVar19->forwardVector).y;
  fStack_24 = VStack_13.x * cellSizeZ + fStack_23;
  fStack_23 = VStack_13.y * cellSizeZ + (float)pIStack_3;
  VStack_13.z = (pVVar19->forwardVector).z * cellSizeZ + uStack_5._4_4_;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  point_00.z = VStack_14.z;
  point_00.x = VStack_14.x;
  point_00.y = VStack_14.y;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_14,&MStack_9,point_00,(MethodInfo *)0x0);
  uStack_5._0_4_ = (uint)pVVar12->x;
  uStack_5._4_4_ = pVVar12->y;
  pIStack_3 = (IXZGrid__Class *)pVVar12->z;
  point_01.y = fStack_23;
  point_01.x = fStack_24;
  point_01.z = VStack_13.z;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_14,&MStack_9,point_01,(MethodInfo *)0x0);
  uStack_20._0_4_ = pVVar12->x;
  uStack_20._4_4_ = pVVar12->y;
  fVar21 = pVVar12->z;
  method_00 = TypeInfo__RTG__XZGridCell;
  pXVar2 = (XZGridCell *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pXVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (pXVar2->fields)._parentGrid = parentGrid;
  (pXVar2->fields)._xIndex = (int)dStack_17;
  (pXVar2->fields)._min.x = (float)(uint)uStack_5;
  (pXVar2->fields)._min.y = uStack_5._4_4_;
  (pXVar2->fields)._zIndex = (int)dStack_15;
  (pXVar2->fields)._min.z = (float)pIStack_3;
  (pXVar2->fields)._max.x = (float)(undefined4)uStack_20;
  (pXVar2->fields)._max.y = (float)uStack_20._4_4_;
  (pXVar2->fields)._max.z = fVar21;
  func_?();
  return pXVar2;
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

