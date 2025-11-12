
/* XZGridCell FromPoint(Vector3, Single, Single, IXZGrid) */

XZGridCell *
Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell_FromPoint
          (Vector3 *point,float cellSizeX,float cellSizeZ,IXZGrid *parentGrid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IXZGrid);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (parentGrid == (IXZGrid *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pXVar2 = (XZGridCell *)(*pcVar1)();
    return pXVar2;
  }
  pIVar3 = parentGrid->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType == (Il2CppClass *)TypeInfo__RTG__IXZGrid) {
        pVVar6 = &(pIVar3->vtable).get_WorldPlane + (pIVar3->interfaceOffsets[uVar4].offset + 1);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(parentGrid,TypeInfo__RTG__IXZGrid,1);
code_?:
  pfVar7 = (float *)(*pVVar6->methodPtr)(auStack_8,parentGrid,pVVar6->method);
  fStack_9 = pfVar7[0xc];
  fStack_10 = pfVar7[0xd];
  fStack_11 = pfVar7[0xe];
  fStack_12 = pfVar7[0xf];
  fStack_13 = pfVar7[8];
  fStack_14 = pfVar7[9];
  fStack_15 = pfVar7[10];
  fStack_16 = pfVar7[0xb];
  fVar17 = *pfVar7;
  fStack_18 = pfVar7[1];
  fStack_19 = pfVar7[2];
  fStack_20 = pfVar7[3];
  fVar21 = pfVar7[4];
  fStack_22 = pfVar7[5];
  fStack_23 = pfVar7[6];
  fStack_24 = pfVar7[7];
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
  pcVar1 = pcRam_?;
  fStack_33 = fStack_10;
  fStack_34 = fStack_10;
  fStack_35 = fStack_10;
  fStack_36 = fStack_12;
  fStack_37 = fStack_12;
  fStack_38 = fStack_12;
  fStack_39 = fStack_11;
  fStack_40 = fStack_11;
  fStack_41 = fStack_11;
  fStack_42 = fStack_18;
  fStack_43 = fStack_18;
  fStack_44 = fStack_18;
  fStack_45 = fStack_22;
  fStack_46 = fStack_22;
  fStack_47 = fStack_22;
  fStack_48 = fStack_14;
  fStack_49 = fStack_14;
  fStack_50 = fStack_14;
  fStack_51 = fStack_23;
  fStack_52 = fStack_23;
  fStack_53 = fStack_23;
  fStack_54 = fStack_20;
  fStack_55 = fStack_20;
  fStack_56 = fStack_20;
  fStack_57 = fStack_24;
  fStack_58 = fStack_24;
  fStack_59 = fStack_24;
  fStack_60 = fStack_16;
  fStack_61 = fStack_16;
  fStack_62 = fStack_16;
  fStack_63 = fStack_14;
  fStack_64 = fStack_16;
  fStack_65 = fStack_10;
  fStack_66 = fStack_11;
  fStack_67 = fStack_12;
  fStack_68 = fStack_19;
  fStack_69 = fStack_19;
  fStack_70 = fStack_19;
  fStack_71 = fStack_15;
  fStack_72 = fStack_15;
  fStack_73 = fStack_15;
  fStack_74 = fStack_15;
  fStack_75 = fVar17;
  fStack_76 = fStack_18;
  fStack_77 = fStack_19;
  fStack_78 = fStack_20;
  fStack_79 = fVar21;
  fStack_80 = fStack_22;
  fStack_81 = fStack_23;
  fStack_82 = fStack_24;
  fStack_83 = fStack_13;
  fStack_84 = fStack_14;
  fStack_85 = fStack_15;
  fStack_86 = fStack_16;
  fStack_87 = fStack_9;
  fStack_88 = fStack_10;
  fStack_89 = fStack_11;
  fStack_90 = fStack_12;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar91 = func_?(&UNK_?);
    FUN_?(uVar91,0);
    pcVar1 = (code *)swi(3);
    pXVar2 = (XZGridCell *)(*pcVar1)();
    return pXVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&fStack_75,&uStack_25);
  uVar91._0_4_ = point->x;
  uVar91._4_4_ = point->y;
  fVar92 = point->z;
  fVar93 = _UNK_? /
           ((float)uVar91._4_4_ * uStack_28._4_4_ + (float)(undefined4)uVar91 * uStack_26._4_4_ +
            fVar92 * uStack_30._4_4_ + uStack_32._4_4_);
  uStack_94 = uVar91;
  iVar95 = FUN_?((((float)uVar91._4_4_ * (float)uStack_27 +
                           (float)(undefined4)uVar91 * (float)uStack_25 +
                           fVar92 * (float)uStack_29 + (float)uStack_31) * fVar93) / cellSizeX);
  iVar96 = FUN_?((((float)uVar91._4_4_ * (float)uStack_28 +
                           (float)(undefined4)uVar91 * (float)uStack_26 +
                           fVar92 * (float)uStack_30 + (float)uStack_32) * fVar93) / cellSizeZ);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar97 = (float)iVar95;
  pVVar98 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar99 = (pVVar98->rightVector).x;
  fVar92 = (pVVar98->rightVector).y;
  fVar93 = (pVVar98->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar98 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar100 = (float)iVar96;
  uVar101 = (pVVar98->forwardVector).x;
  fVar102 = (float)uVar101 * fVar100 * cellSizeZ + (float)uVar99 * fVar97 * cellSizeX;
  fVar92 = (pVVar98->forwardVector).y * fVar100 * cellSizeZ + fVar92 * fVar97 * cellSizeX;
  fVar93 = (pVVar98->forwardVector).z * fVar100 * cellSizeZ + fVar93 * fVar97 * cellSizeX;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar98 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar103 = (pVVar98->rightVector).x;
  fVar97 = (pVVar98->rightVector).y;
  fVar100 = (pVVar98->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar98 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar104 = (pVVar98->forwardVector).x;
  fVar105 = (float)uVar104 * cellSizeZ + (float)uVar103 * cellSizeX + fVar102;
  fVar106 = (pVVar98->forwardVector).y * cellSizeZ + fVar97 * cellSizeX + fVar92;
  fVar100 = (pVVar98->forwardVector).z * cellSizeZ + fVar100 * cellSizeX + fVar93;
  fVar107 = _UNK_? /
           (fStack_20 * fVar102 + fStack_24 * fVar92 + fStack_16 * fVar93 + fStack_12);
  fVar97 = _UNK_? /
           (fStack_24 * fVar106 + fStack_20 * fVar105 + fStack_16 * fVar100 + fStack_12);
  pXVar2 = (XZGridCell *)FUN_?(TypeInfo__RTG__XZGridCell);
  bVar108 = iRam_? != 0;
  (pXVar2->fields)._zIndex = iVar96;
  (pXVar2->fields)._xIndex = iVar95;
  (pXVar2->fields)._parentGrid = parentGrid;
  (pXVar2->fields)._max.x =
       (fVar21 * fVar106 + fVar17 * fVar105 + fStack_13 * fVar100 + fStack_9) * fVar97;
  (pXVar2->fields)._max.y =
       (fStack_22 * fVar106 + fStack_18 * fVar105 + fStack_14 * fVar100 + fStack_10) * fVar97;
  (pXVar2->fields)._max.z =
       (fStack_23 * fVar106 + fStack_19 * fVar105 + fStack_71 * fVar100 + fStack_11) * fVar97;
  (pXVar2->fields)._min.x =
       (fVar21 * fVar92 + fVar17 * fVar102 + fStack_13 * fVar93 + fStack_9) * fVar107;
  (pXVar2->fields)._min.y =
       (fStack_18 * fVar102 + fStack_22 * fVar92 + fStack_14 * fVar93 + fStack_10) * fVar107;
  (pXVar2->fields)._min.z =
       (fStack_19 * fVar102 + fStack_23 * fVar92 + fStack_71 * fVar93 + fStack_11) * fVar107;
  if (bVar108) {
    uVar109 = (uint)((ulonglong)&pXVar2->fields >> 0xc);
    uVar110 = (ulonglong)((uVar109 & 0x1fffff) >> 6);
    do {
      uVar111 = *(ulonglong *)(uVar110 * 8 + 0xADDR);
      puVar112 = (ulonglong *)(uVar110 * 8 + 0xADDR);
      LOCK();
      bVar108 = uVar111 == *puVar112;
      if (bVar108) {
        *puVar112 = uVar111 | 1L << (uVar109 & 0x3f);
      }
      UNLOCK();
    } while (!bVar108);
  }
  return pXVar2;
}


/* List`1[UnityEngine.Vector3] GetCenterAndCorners() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell_GetCenterAndCorners
          (XZGridCell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
               );
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  uVar2 = (this->fields)._max.x;
  uVar3 = (this->fields)._max.y;
  aPStack_4[0].Quadrant = (int32_t)(this->fields)._min.x;
  aPStack_4[0].FirstAxisSign = (int32_t)(this->fields)._min.y;
  fVar5 = ((float)uVar2 + (float)aPStack_4[0].Quadrant) * _UNK_?;
  fVar6 = ((this->fields)._max.z + (this->fields)._min.z) * _UNK_?;
  fVar7 = ((float)uVar3 + (float)aPStack_4[0].FirstAxisSign) * _UNK_?;
  if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar8 = &(this_00->fields)._version;
    *piVar8 = *piVar8 + 1;
    pPVar9 = (this_00->fields)._items;
    if (pPVar9 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar10 = (this_00->fields)._size;
    if (uVar10 < (uint)pPVar9->max_length) {
      (this_00->fields)._size = uVar10 + 1;
      if ((uint)pPVar9->max_length <= uVar10) goto code_?;
      pPVar9->vector[(int)uVar10].Quadrant = (int32_t)fVar5;
      pPVar9->vector[(int)uVar10].FirstAxisSign = (int32_t)fVar7;
      pPVar9->vector[(int)uVar10].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      aPStack_4[0].FirstAxisSign = (int32_t)fVar7;
      aPStack_4[0].Quadrant = (int32_t)fVar5;
      aPStack_4[0].SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,aPStack_4,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar11 = (this->fields)._max.x;
    aPStack_4[0].Quadrant = (int32_t)(this->fields)._min.x;
    aPStack_4[0].FirstAxisSign = (int32_t)(this->fields)._min.y;
    fVar6 = (this->fields)._max.z - (this->fields)._min.z;
    fVar5 = (float)uVar11 - (float)aPStack_4[0].Quadrant;
    fVar7 = (this->fields)._min.z;
    piVar8 = &(this_00->fields)._version;
    *piVar8 = *piVar8 + 1;
    pPVar9 = (this_00->fields)._items;
    if (pPVar9 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar10 = (this_00->fields)._size;
    if (uVar10 < (uint)pPVar9->max_length) {
      (this_00->fields)._size = uVar10 + 1;
      if ((uint)pPVar9->max_length <= uVar10) goto code_?;
      pPVar9->vector[(int)uVar10].Quadrant = aPStack_4[0].Quadrant;
      pPVar9->vector[(int)uVar10].FirstAxisSign = aPStack_4[0].FirstAxisSign;
      pPVar9->vector[(int)uVar10].SecondAxisSign = (int32_t)fVar7;
    }
    else {
      aPStack_4[0].SecondAxisSign = (int32_t)fVar7;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,aPStack_4,pMVar1->klass->rgctx_data[0xe].method);
    }
    aPStack_4[0].Quadrant = (int32_t)(this->fields)._min.x;
    aPStack_4[0].FirstAxisSign = (int32_t)(this->fields)._min.y;
    fVar7 = (this->fields)._min.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar12->forwardVector).x;
    uVar14 = (pVVar12->forwardVector).y;
    fVar15 = fVar6 * (float)uVar13 + (float)aPStack_4[0].Quadrant;
    fVar16 = fVar6 * (float)uVar14 + (float)aPStack_4[0].FirstAxisSign;
    fVar7 = fVar6 * (pVVar12->forwardVector).z + fVar7;
    piVar8 = &(this_00->fields)._version;
    *piVar8 = *piVar8 + 1;
    pPVar9 = (this_00->fields)._items;
    if (pPVar9 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar10 = (this_00->fields)._size;
    if (uVar10 < (uint)pPVar9->max_length) {
      (this_00->fields)._size = uVar10 + 1;
      if ((uint)pPVar9->max_length <= uVar10) goto code_?;
      pPVar9->vector[(int)uVar10].Quadrant = (int32_t)fVar15;
      pPVar9->vector[(int)uVar10].FirstAxisSign = (int32_t)fVar16;
      pPVar9->vector[(int)uVar10].SecondAxisSign = (int32_t)fVar7;
    }
    else {
      aPStack_4[0].FirstAxisSign = (int32_t)fVar16;
      aPStack_4[0].Quadrant = (int32_t)fVar15;
      aPStack_4[0].SecondAxisSign = (int32_t)fVar7;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,aPStack_4,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar17._0_4_ = (int32_t)(this->fields)._max.x;
    uVar17._4_4_ = (int32_t)(this->fields)._max.y;
    fVar7 = (this->fields)._max.z;
    piVar8 = &(this_00->fields)._version;
    *piVar8 = *piVar8 + 1;
    pPVar9 = (this_00->fields)._items;
    if (pPVar9 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar10 = (this_00->fields)._size;
    if (uVar10 < (uint)pPVar9->max_length) {
      (this_00->fields)._size = uVar10 + 1;
      if ((uint)pPVar9->max_length <= uVar10) goto code_?;
      pPVar9->vector[(int)uVar10].Quadrant = (int32_t)uVar17;
      pPVar9->vector[(int)uVar10].FirstAxisSign = uVar17._4_4_;
      pPVar9->vector[(int)uVar10].SecondAxisSign = (int32_t)fVar7;
    }
    else {
      aPStack_4[0]._0_8_ = uVar17;
      aPStack_4[0].SecondAxisSign = (int32_t)fVar7;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,aPStack_4,pMVar1->klass->rgctx_data[0xe].method);
    }
    aPStack_4[0].Quadrant = (int32_t)(this->fields)._min.x;
    aPStack_4[0].FirstAxisSign = (int32_t)(this->fields)._min.y;
    fVar7 = (this->fields)._min.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar18 = (pVVar12->rightVector).x;
    uVar19 = (pVVar12->rightVector).y;
    fVar6 = fVar5 * (float)uVar18 + (float)aPStack_4[0].Quadrant;
    fVar15 = fVar5 * (float)uVar19 + (float)aPStack_4[0].FirstAxisSign;
    fVar7 = fVar5 * (pVVar12->rightVector).z + fVar7;
    piVar8 = &(this_00->fields)._version;
    *piVar8 = *piVar8 + 1;
    pPVar9 = (this_00->fields)._items;
    if (pPVar9 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar10 = (this_00->fields)._size;
      if (uVar10 < (uint)pPVar9->max_length) {
        (this_00->fields)._size = uVar10 + 1;
        if ((uint)pPVar9->max_length <= uVar10) {
code_?:
          FUN_?();
          pcVar20 = (code *)swi(3);
          pLVar21 = (List_1_UnityEngine_Vector3_ *)(*pcVar20)();
          return pLVar21;
        }
        pPVar9->vector[(int)uVar10].Quadrant = (int32_t)fVar6;
        pPVar9->vector[(int)uVar10].FirstAxisSign = (int32_t)fVar15;
        pPVar9->vector[(int)uVar10].SecondAxisSign = (int32_t)fVar7;
      }
      else {
        aPStack_4[0].FirstAxisSign = (int32_t)fVar15;
        aPStack_4[0].Quadrant = (int32_t)fVar6;
        aPStack_4[0].SecondAxisSign = (int32_t)fVar7;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,aPStack_4,pMVar1->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this_00;
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  pLVar21 = (List_1_UnityEngine_Vector3_ *)(*pcVar20)();
  return pLVar21;
}


/* XZGridCell(Int32, Int32, Vector3, Vector3, IXZGrid) */

void Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell__ctor
               (XZGridCell *this,int32_t xIndex,int32_t zIndex,Vector3 *min,Vector3 *max,
               IXZGrid *parentGrid,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  fVar2 = min->y;
  fVar3 = min->z;
  (this->fields)._min.x = min->x;
  (this->fields)._min.y = fVar2;
  (this->fields)._min.z = fVar3;
  (this->fields)._xIndex = xIndex;
  (this->fields)._zIndex = zIndex;
  fVar2 = max->y;
  fVar3 = max->z;
  (this->fields)._max.x = max->x;
  (this->fields)._max.y = fVar2;
  (this->fields)._max.z = fVar3;
  (this->fields)._parentGrid = parentGrid;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar6 == *puVar7;
      if (bVar1) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::XZGridCell::XZGridCell_get_Center
                    (Vector3 *__return_storage_ptr__,XZGridCell *this,MethodInfo *method)

{
  uVar1 = (this->fields)._min.x;
  uVar2 = (this->fields)._min.y;
  uVar3 = (this->fields)._max.x;
  fVar4 = ((this->fields)._max.z + (this->fields)._min.z) * _UNK_?;
  fVar5 = ((this->fields)._max.y + (float)uVar2) * _UNK_?;
  __return_storage_ptr__->x = ((float)uVar3 + (float)uVar1) * _UNK_?;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}

