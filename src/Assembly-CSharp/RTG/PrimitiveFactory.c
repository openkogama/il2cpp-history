
/* List`1[UnityEngine.Vector2] Generate2DArcBorderPoints(Vector2, Vector2, Single, Boolean, Int32)
    */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints
          (Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,bool forceShortestArc,
          int32_t numPoints,MethodInfo *method)

{
  iVar1 = numPoints;
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?();
  if (numPoints < 2) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    return (List_1_UnityEngine_Vector2_ *)this;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,numPoints,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
  fVar2 = (float10)func_?();
  fVar3 = arcStartPoint.x - arcOrigin.x;
  fVar4 = arcStartPoint.y - arcOrigin.y;
  fVar5 = (float)fVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
            ((Quaternion *)&stack0xffffffbc,fVar5,
             TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0);
  func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
            ((Vector2 *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (forceShortestArc == 0) {
    numPoints = (int32_t)(fVar5 / (float)(numPoints + -1));
  }
  else {
    fVar5 = ArcMath::ArcMath_ConvertToSh2DArcAngle
                       (arcOrigin,arcStartPoint,fVar5,(MethodInfo *)0x0);
    numPoints = (int32_t)(fVar5 / (float)(numPoints + -1));
  }
  iVar6 = 0;
  fVar5 = 0.0;
  while( true ) {
    fVar7 = fVar3;
    fVar8 = fVar4;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fVar7 = fVar3;
      fVar8 = fVar4;
    }
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffac,(float)iVar6 * (float)numPoints,
                        TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                        (MethodInfo *)0x0);
    fVar10 = 0.0;
    fVar3 = pQVar9->z;
    fVar4 = pQVar9->w;
    point.y = fVar8;
    point.x = fVar7;
    point.z = fVar5;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffcc,*pQVar9,point,(MethodInfo *)0x0);
    numPoints = 0;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffc0,*pVVar11,(MethodInfo *)0x0);
    pMVar12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
    uVar13 = pVVar11->x;
    uVar14 = pVVar11->y;
    fVar5 = arcOrigin.x + (float)uVar13 * fVar10;
    pSVar15 = (String *)((float)uVar14 * fVar10 + 4.3701683e-29);
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    piVar16 = &(this->fields)._version;
    *piVar16 = *piVar16 + 1;
    pMVar17 = (this->fields)._items;
    if (pMVar17 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar18 = (this->fields)._size;
    if (uVar18 < pMVar17->max_length) {
      (this->fields)._size = uVar18 + 1;
      if (pMVar17->max_length <= uVar18) {
        func_?();
        break;
      }
      (&pMVar17->vector[0].index)[uVar18 * 2] = (int32_t)fVar5;
      (&pMVar17->vector[0].name)[uVar18 * 2] = pSVar15;
    }
    else {
      item.y = (float)pSVar15;
      item.x = fVar5;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__AddWithResize
                ((List_1_UnityEngine_Vector2_ *)this,item,pMVar12->klass->rgctx_data[0xe].method);
    }
    iVar6 = iVar6 + 1;
    fVar5 = fVar7;
    if (iVar1 <= iVar6) {
      return (List_1_UnityEngine_Vector2_ *)this;
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  pLVar20 = (List_1_UnityEngine_Vector2_ *)(*pcVar19)();
  return pLVar20;
}


/* List`1[UnityEngine.Vector2] Generate2DCircleBorderPointsCW(Vector2, Single, Int32) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
          (Vector2 circleCenter,float circleRadius,int32_t numPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (numPoints < 5) {
    numPoints = 4;
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,numPoints,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
  iVar1 = 0;
  fVar2 = _UNK_? / (float)(numPoints + -1);
  if (0 < numPoints) {
    do {
      fVar3 = (float)iVar1 * fVar2 * _UNK_?;
      dVar4 = (double)fVar3;
      func_?();
      dVar5 = (double)fVar3;
      func_?();
      pMVar6 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar3 = circleCenter.x + (float)dVar4 * circleRadius;
      pSVar7 = (String *)(circleCenter.y + (float)dVar5 * circleRadius);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar8 = (code *)swi(3);
        pLVar9 = (List_1_UnityEngine_Vector2_ *)(*pcVar8)();
        return pLVar9;
      }
      piVar10 = &(this->fields)._version;
      *piVar10 = *piVar10 + 1;
      pMVar11 = (this->fields)._items;
      if (pMVar11 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      uVar12 = (this->fields)._size;
      if (uVar12 < pMVar11->max_length) {
        (this->fields)._size = uVar12 + 1;
        if (pMVar11->max_length <= uVar12) goto code_?;
        (&pMVar11->vector[0].index)[uVar12 * 2] = (int32_t)fVar3;
        (&pMVar11->vector[0].name)[uVar12 * 2] = pSVar7;
      }
      else {
        item.y = (float)pSVar7;
        item.x = fVar3;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  ((List_1_UnityEngine_Vector2_ *)this,item,pMVar6->klass->rgctx_data[0xe].method);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < numPoints);
  }
  return (List_1_UnityEngine_Vector2_ *)this;
}


/* List`1[UnityEngine.Vector2] Generate2DPolyBorderPointsCW(List`1[UnityEngine.Vector2],
   PrimitiveFactory+PolyBorderDirection, Single, Boolean) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderPointsCW
          (List_1_UnityEngine_Vector2_ *cwPolyPoints,
          PrimitiveFactory_PolyBorderDirection__Enum borderDirection,float borderThickness,
          bool isClosed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (cwPolyPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    fStack_1 = (float)(cwPolyPoints->fields)._size;
    if (isClosed == 0) {
      if ((int)fStack_1 < 3) goto code_?;
    }
    else if ((int)fStack_1 < 4) {
code_?:
      pLVar2 = (List_1_UnityEngine_Vector2_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
      return pLVar2;
    }
    fStack_3 = _UNK_?;
    if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Inward) {
      fStack_3 = _UNK_?;
    }
    fStack_3 = fStack_3 * borderThickness;
    pLVar4 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?();
    pLStack_5 = pLVar4;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (pLVar4,(int32_t)fStack_1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
             List_1_UnityEngine_Vector2__get_Item
                       (cwPolyPoints,0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                       );
    if (isClosed == 0) {
      VStack_7 = VVar6;
      VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__get_Item
                         (cwPolyPoints,1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
      VStack_8.y = VVar6.y;
      VStack_9.y = VStack_8.x - VStack_7.x;
      VStack_9.x = (float)((uint)(VStack_8.y - VStack_7.y) ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      VStack_8 = VVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                (&VStack_9,(MethodInfo *)0x0);
      VStack_8.x = VStack_9.x * fStack_3 + VStack_7.x;
      VStack_8.y = VStack_9.y * fStack_3 + VStack_7.y;
      if (pLVar4 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) {
        func_?(pLVar4,VStack_8.x,VStack_8.y,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        puStack_10 = (undefined *)((int)fStack_1 + -2);
        pLStack_5 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0;
        if (0 < (int)puStack_10) {
          do {
            pLVar11 = pLStack_5;
            VStack_8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                        List_1_UnityEngine_Vector2__get_Item
                                  (cwPolyPoints,(int32_t)pLStack_5,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                  );
            VStack_9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                        List_1_UnityEngine_Vector2__get_Item
                                  (cwPolyPoints,(int32_t)((int)&pLVar11->klass + 1),
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                  );
            VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               ((List_1_UnityEngine_Vector2_ *)pLVar4,(int32_t)pLStack_5,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            fVar12 = VVar6.y;
            VVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               (cwPolyPoints,(int32_t)((int)&pLVar11->klass + 2),
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            VStack_14.y = VVar13.y;
            VStack_7.y = VStack_14.x - VStack_9.x;
            VStack_7.x = (float)((uint)(VStack_14.y - VStack_9.y) ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 );
            VStack_14 = VVar13;
            UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                      (&VStack_7,(MethodInfo *)0x0);
            fStack_1 = VStack_7.x * fStack_3 + VStack_14.x;
            fStack_15 = VStack_7.y * fStack_3 + VStack_14.y;
            VStack_16.x = VStack_9.x - VStack_8.x;
            VStack_16.y = VStack_9.y - VStack_8.y;
            UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                      (&VStack_16,(MethodInfo *)0x0);
            fVar17 = VStack_16.y * VStack_7.y + VStack_16.x * VStack_7.x;
            if ((_UNK_? <= (float)((uint)fVar17 & _UNK_?)) &&
               (fVar17 = ((fVar12 - fStack_15) * VStack_7.y + (VVar6.x - fStack_1) * VStack_7.x)
                         / (float)((uint)fVar17 ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  ), 0.0 <= fVar17)) {
              fVar18 = VStack_16.x * fVar17;
              VStack_16.x = (float)
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              VStack_8.y = VStack_16.y * fVar17 + fVar12;
              VStack_8.x = fVar18 + VVar6.x;
              func_?(pLVar4);
            }
            pLStack_5 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)((int)&pLStack_5->klass + 1);
          } while ((int)pLStack_5 < (int)puStack_10);
        }
        VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,(cwPolyPoints->fields)._size + -2,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        VVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,(cwPolyPoints->fields)._size + -1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        fStack_19 = VVar6.x;
        VStack_16.y = VStack_9.x - fStack_19;
        VStack_9.y = VVar13.y;
        pSStack_20 = (String *)VVar6.y;
        VStack_16.x = (float)((uint)(VStack_9.y - (float)pSStack_20) ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             );
        VStack_9 = VVar13;
        UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                  (&VStack_16,(MethodInfo *)0x0);
        pMVar21 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar12 = VStack_16.x * fStack_3 + VStack_9.x;
        pSVar22 = (String *)(VStack_16.y * fStack_3 + VStack_9.y);
        piVar23 = &(pLVar4->fields)._version;
        *piVar23 = *piVar23 + 1;
        pMVar24 = (pLVar4->fields)._items;
        if (pMVar24 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          uVar25 = (pLVar4->fields)._size;
          if (pMVar24->max_length <= uVar25) {
            VVar13.y = (float)pSVar22;
            VVar13.x = fVar12;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)pLVar4,VVar13,
                       pMVar21->klass->rgctx_data[0xe].method);
            return (List_1_UnityEngine_Vector2_ *)pLVar4;
          }
          (pLVar4->fields)._size = uVar25 + 1;
          if (uVar25 < pMVar24->max_length) {
            (&pMVar24->vector[0].index)[uVar25 * 2] = (int32_t)fVar12;
            (&pMVar24->vector[0].name)[uVar25 * 2] = pSVar22;
            return (List_1_UnityEngine_Vector2_ *)pLVar4;
          }
          goto code_?;
        }
      }
    }
    else {
      VStack_14 = VVar6;
      VVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__get_Item
                         (cwPolyPoints,1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
      pSStack_20 = (String *)VVar13.y;
      VStack_7.y = fStack_19 - VStack_14.x;
      VStack_7.x = (float)((uint)((float)pSStack_20 - VStack_14.y) ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                (&VStack_7,(MethodInfo *)0x0);
      VStack_9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(cwPolyPoints->fields)._size + -2,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      VVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__get_Item
                         (cwPolyPoints,(cwPolyPoints->fields)._size + -1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
      fStack_19 = VVar13.x;
      VStack_16.y = fStack_19 - VStack_9.x;
      pSStack_20 = (String *)VVar26.y;
      fStack_15 = (float)pSStack_20 - VStack_9.y;
      VStack_16.x = (float)((uint)fStack_15 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      puStack_10 = (undefined *)VStack_16.y;
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                (&VStack_16,(MethodInfo *)0x0);
      VStack_8.y = fStack_15;
      VStack_8.x = (float)puStack_10;
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                (&VStack_8,(MethodInfo *)0x0);
      pLVar4 = pLStack_5;
      fVar12 = VStack_16.x * fStack_3 + VStack_9.x;
      fVar17 = VStack_16.y * fStack_3 + VStack_9.y;
      puStack_10 = (undefined *)(VStack_7.y * fStack_3 + VStack_14.y);
      fVar18 = VStack_8.y * VStack_7.y + VStack_8.x * VStack_7.x;
      if (((float)((uint)fVar18 & _UNK_?) < _UNK_?) ||
         (fVar18 = ((fVar17 - (float)puStack_10) * VStack_7.y +
                   (fVar12 - (VStack_7.x * fStack_3 + VStack_14.x)) * VStack_7.x) /
                   (float)((uint)fVar18 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field),
         fVar18 < 0.0)) {
        if (pLStack_5 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
      }
      else if (pLStack_5 !=
               (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)0x0) {
        VVar6.y = fVar17 + VStack_8.y * fVar18;
        VVar6.x = fVar12 + VStack_8.x * fVar18;
code_?:
        func_?(pLStack_5,VVar6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        fStack_1 = (float)((int)fStack_1 + -2);
        pLStack_5 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0;
        if (0 < (int)fStack_1) {
          do {
            pLVar11 = pLStack_5;
            VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               (cwPolyPoints,(int32_t)pLStack_5,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            VStack_14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                        List_1_UnityEngine_Vector2__get_Item
                                  (cwPolyPoints,(int32_t)((int)&pLVar11->klass + 1),
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                  );
            VVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               ((List_1_UnityEngine_Vector2_ *)pLVar4,(int32_t)pLStack_5,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            fVar12 = VVar13.y;
            VVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               (cwPolyPoints,(int32_t)((int)&pLVar11->klass + 2),
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            VStack_9.y = VVar26.y;
            VStack_7.y = VStack_9.x - VStack_14.x;
            VStack_7.x = (float)((uint)(VStack_9.y - VStack_14.y) ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 );
            VStack_9 = VVar26;
            UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                      (&VStack_7,(MethodInfo *)0x0);
            puStack_10 = (undefined *)(VStack_7.x * fStack_3 + VStack_9.x);
            fStack_15 = VStack_7.y * fStack_3 + VStack_9.y;
            fStack_19 = VVar6.x;
            pSStack_20 = (String *)VVar6.y;
            VStack_8.y = VStack_14.y - (float)pSStack_20;
            VStack_8.x = VStack_14.x - fStack_19;
            UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Normalize
                      (&VStack_8,(MethodInfo *)0x0);
            fVar17 = VStack_8.y * VStack_7.y + VStack_8.x * VStack_7.x;
            if ((_UNK_? <= (float)((uint)fVar17 & _UNK_?)) &&
               (fVar17 = ((fVar12 - fStack_15) * VStack_7.y +
                         (VVar13.x - (float)puStack_10) * VStack_7.x) /
                         (float)((uint)fVar17 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ), 0.0 <= fVar17)) {
              VStack_16.x = VVar13.x + VStack_8.x * fVar17;
              VStack_14.y = (float)
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              VStack_14.x = fVar12 + VStack_8.y * fVar17;
              VStack_9.y = VStack_16.x;
              VStack_9.x = (float)pLVar4;
              VStack_16.y = (float)&UNK_?;
              func_?();
            }
            pLStack_5 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)((int)&pLStack_5->klass + 1);
          } while ((int)pLStack_5 < (int)fStack_1);
        }
        VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           ((List_1_UnityEngine_Vector2_ *)pLVar4,0,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar21 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar23 = &(pLVar4->fields)._version;
        *piVar23 = *piVar23 + 1;
        pMVar24 = (pLVar4->fields)._items;
        if (pMVar24 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          uVar25 = (pLVar4->fields)._size;
          if (pMVar24->max_length <= uVar25) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)pLVar4,VVar6,
                       pMVar21->klass->rgctx_data[0xe].method);
            return (List_1_UnityEngine_Vector2_ *)pLVar4;
          }
          (pLVar4->fields)._size = uVar25 + 1;
          if (uVar25 < pMVar24->max_length) {
            fStack_19 = VVar6.x;
            (&pMVar24->vector[0].index)[uVar25 * 2] = (int32_t)fStack_19;
            pSStack_20 = (String *)VVar6.y;
            (&pMVar24->vector[0].name)[uVar25 * 2] = pSStack_20;
            return (List_1_UnityEngine_Vector2_ *)pLVar4;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  pLVar2 = (List_1_UnityEngine_Vector2_ *)(*pcVar27)();
  return pLVar2;
}


/* List`1[UnityEngine.Vector2] Generate2DPolyBorderQuadsCW(List`1[UnityEngine.Vector2],
   List`1[UnityEngine.Vector2], PrimitiveFactory+PolyBorderDirection, Boolean) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderQuadsCW
          (List_1_UnityEngine_Vector2_ *cwPolyPoints,List_1_UnityEngine_Vector2_ *cwBorderPts,
          PrimitiveFactory_PolyBorderDirection__Enum borderDirection,bool isClosed,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if ((cwPolyPoints == (List_1_UnityEngine_Vector2_ *)0x0) ||
     (cwBorderPts == (List_1_UnityEngine_Vector2_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_UnityEngine_Vector2_ *)(*pcVar1)();
    return pLVar2;
  }
  iVar3 = (cwPolyPoints->fields)._size;
  if (iVar3 == (cwBorderPts->fields)._size) {
    if (isClosed == 0) {
      if (2 < iVar3) goto code_?;
    }
    else if (3 < iVar3) {
code_?:
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this,iVar3 * 4 + -4,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
      index = (MethodInfo *)0x0;
      if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Outward) {
        while( true ) {
          if ((cwPolyPoints->fields)._size + -1 <= (int)index) break;
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
          }
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwBorderPts,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
          }
          cwBorderPts = (List_1_UnityEngine_Vector2_ *)
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
          ;
          index = (MethodInfo *)((int)&index->methodPointer + 1);
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            ((List_1_UnityEngine_Vector2_ *)
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                             ,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
            cwPolyPoints = (List_1_UnityEngine_Vector2_ *)index;
          }
          else {
            cwPolyPoints = (List_1_UnityEngine_Vector2_ *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
            cwBorderPts = (List_1_UnityEngine_Vector2_ *)this;
          }
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
      else {
        while( true ) {
          if ((cwPolyPoints->fields)._size + -1 <= (int)index) break;
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = (MethodInfo *)((int)&index->methodPointer + 1);
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(int32_t)pMVar5,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar9 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
            cwPolyPoints = (List_1_UnityEngine_Vector2_ *)pMVar5;
          }
          else {
            cwPolyPoints = (List_1_UnityEngine_Vector2_ *)pMVar9->klass->rgctx_data[0xe].method;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,(MethodInfo *)cwPolyPoints);
          }
          cwBorderPts = (List_1_UnityEngine_Vector2_ *)
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
          ;
          pMVar9 = (MethodInfo *)cwPolyPoints;
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            ((List_1_UnityEngine_Vector2_ *)
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                             ,(int32_t)cwPolyPoints,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            pSStack_10 = (String *)VVar4.y;
            (&pMVar7->vector[0].name)[uVar8 * 2] = pSStack_10;
          }
          else {
            cwPolyPoints = (List_1_UnityEngine_Vector2_ *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
            cwBorderPts = (List_1_UnityEngine_Vector2_ *)this;
          }
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwBorderPts,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          index = pMVar9;
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pMVar7 = (this->fields)._items;
          if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          uVar8 = (this->fields)._size;
          if (uVar8 < pMVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pMVar7->max_length <= uVar8) goto code_?;
            (&pMVar7->vector[0].index)[uVar8 * 2] = (int32_t)VVar4.x;
            (&pMVar7->vector[0].name)[uVar8 * 2] = (String *)VVar4.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this,VVar4,
                       pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
      return (List_1_UnityEngine_Vector2_ *)this;
    }
  }
  pLVar2 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  return pLVar2;
}


/* List`1[UnityEngine.Vector3] Generate3DArcBorderPoints(Vector3, Vector3, Plane, Single, Boolean,
   Int32) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints
          (Vector3 arcOrigin,Vector3 arcStartPoint,Plane arcPlane,float degreesFromStart,
          bool forceShortestArc,int32_t numPoints,MethodInfo *method)

{
  iVar1 = numPoints;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  if (numPoints < 2) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    return (List_1_UnityEngine_Vector3_ *)this;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,numPoints,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  fVar2 = (float10)func_?();
  fVar3 = (float)fVar2;
  pVVar4 = PlaneEx::PlaneEx_ProjectPoint
                      ((Vector3 *)&puStack_5,arcPlane,arcOrigin,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
  pVVar4 = PlaneEx::PlaneEx_ProjectPoint
                      ((Vector3 *)&stack0xffffffe8,arcPlane,arcStartPoint,(MethodInfo *)0x0);
  uVar9 = pVVar4->x;
  uVar10 = pVVar4->y;
  fVar11 = pVVar4->z;
  stack0xffffffc8 = (float)&stack0xffffffa8;
  fVar12 = arcPlane.m_Normal.z;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
            ((Quaternion *)&stack0xffffffa8,fVar3,arcPlane.m_Normal,(MethodInfo *)0x0);
  ppuVar13 = &puStack_5;
  fVar2 = (float10)func_?();
  uVar14 = 0;
  fVar15 = (float)fVar2;
  puVar16 = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&puStack_5,(MethodInfo *)0x0);
  if (forceShortestArc == 0) {
    numPoints = (int32_t)(fVar3 / (float)(numPoints + -1));
  }
  else {
    arcOrigin_00.y = (float)ppuVar13;
    arcOrigin_00.x = (float)uVar14;
    arcOrigin_00.z = fVar3;
    arcStartPoint_00.y = (float)uVar10;
    arcStartPoint_00.x = (float)uVar9;
    arcStartPoint_00.z = fVar11;
    fVar15 = arcPlane.m_Normal.y;
    fVar3 = ArcMath::ArcMath_ConvertToSh3DArcAngle
                       (arcOrigin_00,arcStartPoint_00,arcPlane.m_Normal,fVar3,(MethodInfo *)0x0);
    numPoints = (int32_t)(fVar3 / (float)(numPoints + -1));
    fVar12 = arcPlane.m_Normal.z;
  }
  iVar17 = 0;
  while( true ) {
    axis.y = arcPlane.m_Normal.y;
    axis.x = arcPlane.m_Normal.x;
    axis.z = fVar12;
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffff98,(float)iVar17 * (float)numPoints,axis,
                         (MethodInfo *)0x0);
    numPoints = (int32_t)_puStack_3c;
    arcPlane.m_Normal.y = (float)&stack0xffffffb8;
    arcPlane.m_Normal.x = (float)&UNK_?;
    point.z = (float)puVar16;
    point.x = (float)puStack_5;
    point.y = stack0xffffffc8;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)arcPlane.m_Normal.y,*pQVar18,point,(MethodInfo *)0x0);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffac,*pVVar4,(MethodInfo *)0x0);
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar20 = pVVar4->x;
    uVar21 = pVVar4->y;
    fVar3 = (float)uVar6 + (float)uVar20 * fVar15;
    fVar11 = (float)uVar7 + (float)uVar21 * fVar15;
    fVar22 = fVar8 + pVVar4->z * fVar15;
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    piVar23 = &(this->fields)._version;
    *piVar23 = *piVar23 + 1;
    pMVar24 = (this->fields)._items;
    if (pMVar24 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar25 = (this->fields)._size;
    if (uVar25 < pMVar24->max_length) {
      (this->fields)._size = uVar25 + 1;
      if (pMVar24->max_length <= uVar25) {
        func_?();
        break;
      }
      *(ulonglong *)(&pMVar24->vector[0].index + uVar25 * 3) = CONCAT44(fVar11,fVar3);
      (&pMVar24->vector[0].actualWidth)[uVar25 * 3] = fVar22;
    }
    else {
      item.FirstAxisSign = (int32_t)fVar11;
      item.Quadrant = (int32_t)fVar3;
      item.SecondAxisSign = (int32_t)fVar22;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                 pMVar19->klass->rgctx_data[0xe].method);
    }
    iVar17 = iVar17 + 1;
    if (iVar1 <= iVar17) {
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  pLVar27 = (List_1_UnityEngine_Vector3_ *)(*pcVar26)();
  return pLVar27;
}


/* List`1[UnityEngine.Vector3] Generate3DCircleBorderPoints(Vector3, Single, Vector3, Vector3,
   Int32) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
          (Vector3 circleCenter,float circleRadius,Vector3 circleRight,Vector3 circleUp,
          int32_t numPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (numPoints < 5) {
    numPoints = 4;
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,numPoints,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  iVar1 = 0;
  fVar2 = _UNK_? / (float)(numPoints + -1);
  if (0 < numPoints) {
    do {
      fVar3 = (float)iVar1 * fVar2 * _UNK_?;
      dVar4 = (double)fVar3;
      func_?();
      fVar5 = (float)dVar4;
      dVar4 = (double)fVar3;
      func_?();
      pMVar6 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      fVar3 = (float)dVar4;
      fVar7 = circleUp.x * fVar3 * circleRadius +
               circleCenter.x + circleRight.x * fVar5 * circleRadius;
      fVar8 = circleUp.y * fVar3 * circleRadius +
               circleCenter.y + circleRight.y * fVar5 * circleRadius;
      fVar3 = circleUp.z * fVar3 * circleRadius +
              circleCenter.z + circleRight.z * fVar5 * circleRadius;
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar9 = (code *)swi(3);
        pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
        return pLVar10;
      }
      piVar11 = &(this->fields)._version;
      *piVar11 = *piVar11 + 1;
      pMVar12 = (this->fields)._items;
      if (pMVar12 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      uVar13 = (this->fields)._size;
      if (uVar13 < pMVar12->max_length) {
        (this->fields)._size = uVar13 + 1;
        if (pMVar12->max_length <= uVar13) goto code_?;
        *(ulonglong *)(&pMVar12->vector[0].index + uVar13 * 3) = CONCAT44(fVar8,fVar7);
        (&pMVar12->vector[0].actualWidth)[uVar13 * 3] = fVar3;
      }
      else {
        item.FirstAxisSign = (int32_t)fVar8;
        item.Quadrant = (int32_t)fVar7;
        item.SecondAxisSign = (int32_t)fVar3;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                   pMVar6->klass->rgctx_data[0xe].method);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < numPoints);
  }
  return (List_1_UnityEngine_Vector3_ *)this;
}


/* List`1[UnityEngine.Vector3] GenerateSphereBorderPoints(Camera, Vector3, Single, Int32) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
          (Camera *camera,Vector3 sphereCenter,float sphereRadius,int32_t numPoints,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (numPoints < 3) {
code_?:
    this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  }
  else {
    if ((camera == (Camera *)0x0) ||
       (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0), this == (Transform *)0x0)) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pLVar2 = (List_1_UnityEngine_Vector3_ *)(*pcVar1)();
      return pLVar2;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_4,this,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,this,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar3->x;
    uStack_7._4_4_ = pVVar3->y;
    fStack_8 = pVVar3->z;
    value_00.z = fVar6;
    value_00.x = (float)(undefined4)uStack_5;
    value_00.y = uStack_5._4_4_;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_4,value_00,(MethodInfo *)0x0);
    uStack_9._0_4_ = pVVar3->x;
    uStack_9._4_4_ = pVVar3->y;
    fStack_10 = pVVar3->z;
    uStack_5 = CONCAT44((uint)(uStack_7._4_4_ * uStack_9._4_4_ +
                                (float)uStack_7 * (float)uStack_9 + fStack_8 * fStack_10) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field,
                         (undefined4)uStack_5);
    uStack_11 = uStack_9;
    fStack_12 = fStack_10;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_4,this,(MethodInfo *)0x0);
    uStack_13._0_4_ = pVVar3->x;
    uStack_13._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_4,this,(MethodInfo *)0x0);
    circleRight.z = fVar6;
    circleRight.x = (float)(undefined4)uStack_13;
    circleRight.y = uStack_13._4_4_;
    pLStack_14 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                 PrimitiveFactory_Generate3DCircleBorderPoints
                           (sphereCenter,sphereRadius,circleRight,*pVVar3,numPoints,
                            (MethodInfo *)0x0);
    index = 0;
    do {
      if (pLStack_14 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
      pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_16,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLStack_14,
                          index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uStack_17._0_4_ = pVVar15->alias;
      uStack_17._4_4_ = (float)pVVar15->path;
      pVStack_18 = pVVar15->asset;
      fStack_19 = (float)pVStack_18 - sphereCenter.z;
      fStack_20 = (float)(undefined4)uStack_17;
      uStack_21 = 0;
      uStack_22 = 0;
      uStack_23 = 0;
      value.y = uStack_17._4_4_ - sphereCenter.y;
      value.x = (float)(undefined4)uStack_17 - sphereCenter.x;
      value.z = fStack_19;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xfffffee0,value,(MethodInfo *)0x0);
      uStack_24._0_4_ = pVVar3->x;
      uStack_24._4_4_ = pVVar3->y;
      fStack_12 = pVVar3->z;
      uStack_13 = CONCAT44(fStack_12,(undefined4)uStack_13);
      uStack_11 = uStack_24;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_25,this,(MethodInfo *)0x0);
      uStack_26._0_4_ = pVVar3->x;
      uStack_26._4_4_ = pVVar3->y;
      fStack_27 = pVVar3->z;
      fStack_28 = (float)pVStack_18 - fStack_27;
      value_01.y = uStack_17._4_4_ - (float)uStack_26._4_4_;
      value_01.x = fStack_20 - (float)(undefined4)uStack_26;
      value_01.z = fStack_28;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         ((Vector3 *)&stack0xfffffec0,value_01,(MethodInfo *)0x0);
      uStack_29._0_4_ = pVVar3->x;
      uStack_29._4_4_ = pVVar3->y;
      fStack_30 = pVVar3->z;
      bVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar31 != 0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xfffffeb0,this,(MethodInfo *)0x0);
        uStack_29._0_4_ = pVVar3->x;
        uStack_29._4_4_ = pVVar3->y;
        fStack_30 = pVVar3->z;
      }
      fStack_32 = (float)uStack_29;
      fStack_33 = (float)uStack_11;
      fStack_34 = fStack_30;
      fStack_35 = fStack_12;
      fVar6 = (float)uStack_11 * (float)uStack_29 + uStack_11._4_4_ * uStack_29._4_4_ +
              fStack_12 * fStack_30;
      if (_UNK_? < (float)((uint)fVar6 & _UNK_?)) {
        fStack_36 = MathEx::MathEx_SafeAcos(fVar6,(MethodInfo *)0x0);
        fStack_37 = fStack_32 * uStack_11._4_4_ - fStack_33 * uStack_29._4_4_;
        uStack_7 = CONCAT44(fStack_34 * fStack_33 - fStack_35 * fStack_32,
                             fStack_35 * uStack_29._4_4_ - fStack_34 * uStack_11._4_4_);
        fStack_8 = fStack_37;
        pVVar3 = (Vector3 *)func_?();
        pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                           ((Quaternion *)&stack0xfffffe60,_UNK_? - fStack_36 * _UNK_?
                            ,*pVVar3,(MethodInfo *)0x0);
        point.z = uStack_13._4_4_;
        point.x = (float)(undefined4)uStack_24;
        point.y = (float)uStack_24._4_4_;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&stack0xfffffe90,*pQVar38,point,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar3->x;
        uStack_7._4_4_ = pVVar3->y;
        fStack_8 = pVVar3->z;
        puVar39 = (undefined8 *)func_?();
        uVar40 = *puVar39;
        fStack_41 = *(float *)(puVar39 + 1);
        uStack_42._0_4_ = (float)uVar40;
        uStack_42._4_4_ = (float)((ulonglong)uVar40 >> 0x20);
        VStack_4.z = sphereCenter.z + fStack_41 * sphereRadius;
        value_02.FirstAxisSign = (int32_t)(sphereCenter.y + uStack_42._4_4_ * sphereRadius);
        value_02.Quadrant = (int32_t)(sphereCenter.x + (float)uStack_42 * sphereRadius);
        value_02.SecondAxisSign = (int32_t)VStack_4.z;
        uStack_42 = uVar40;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                  (pLStack_14,index,value_02,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                  );
        puVar39 = (undefined8 *)func_?();
        uVar40 = *puVar39;
        fStack_43 = *(float *)(puVar39 + 1);
        uStack_44._0_4_ = (float)uVar40;
        fVar6 = (float)uStack_9 * (float)uStack_44;
        uStack_44._4_4_ = (float)((ulonglong)uVar40 >> 0x20);
        fVar45 = uStack_9._4_4_ * uStack_44._4_4_;
        uStack_44 = uVar40;
        if (fVar45 + fVar6 + fStack_10 * fStack_43 + uStack_5._4_4_ < 0.0) goto code_?;
      }
      index = index + 1;
      this_00 = pLStack_14;
    } while (index < numPoints);
  }
  return (List_1_UnityEngine_Vector3_ *)this_00;
}


/* Single PolyBorderDirToSign(PrimitiveFactory+PolyBorderDirection) */

float Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_PolyBorderDirToSign
                (PrimitiveFactory_PolyBorderDirection__Enum borderDirection,MethodInfo *method)

{
  if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Inward) {
    return _UNK_?;
  }
  return 1.0;
}


/* List`1[UnityEngine.Vector2] ProjectArcPointsOnPoly2DBorder(Vector2, List`1[UnityEngine.Vector2],
   List`1[UnityEngine.Vector2]) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_ProjectArcPointsOnPoly2DBorder
          (Vector2 arcOrigin,List_1_UnityEngine_Vector2_ *arcPoints,
          List_1_UnityEngine_Vector2_ *clockwisePolyPoints,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (MethodInfo *)&stack0xfffffffc;
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff20;
  method_00 = (MethodInfo *)&stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xffffff20;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    func_?(&TypeInfo__RTG__Plane2D);
    cRam_? = '\x01';
    method_00 = pMVar2;
    puVar7 = puStack_1;
    puVar8 = puStack_6;
  }
  puStack_6 = puVar8;
  puStack_1 = puVar7;
  VVar9.y = VStack_10.y;
  VVar9.x = VStack_10.x;
  VVar11.y = VStack_12.y;
  VVar11.x = VStack_12.x;
  fStack_13 = 0.0;
  uStack_14 = CONCAT44(uStack_14._4_4_,(undefined4)uStack_14);
  if (arcPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    uVar15 = func_?();
    func_?(uVar15);
    pcVar16 = (code *)swi(3);
    pLVar17 = (List_1_UnityEngine_Vector2_ *)(*pcVar16)();
    return pLVar17;
  }
  iStack_18 = (arcPoints->fields)._size;
  if (1 < iStack_18) {
    VStack_12 = VVar11;
    uStack_14 = CONCAT44(uStack_14._4_4_,(undefined4)uStack_14);
    VStack_10 = VVar9;
    if (clockwisePolyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
    iStack_19 = (clockwisePolyPoints->fields)._size;
    if (2 < iStack_19) {
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      pLStack_20 = this;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this,iStack_18,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
      pLStack_21 = this;
      pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                         ((List_1_T_Enumerator_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
                           *)&stack0xffffff30,
                          (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                          arcPoints,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__GetEnumerator__
                         );
      pLStack_23 = &LStack_24;
      uStack_25 = 0;
      LStack_24._list = (List_1_UnityEngine_Vector2_ *)pLVar22->_list;
      LStack_24._index = pLVar22->_index;
      LStack_24._version = pLVar22->_version;
      LStack_24._current.x = (float)(pLVar22->_current).qname;
      LStack_24._current.y = (float)(pLVar22->_current).xso;
      uStack_3 = 1;
      iVar26 = iStack_19;
code_?:
      do {
        bVar27 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                Vector2]::List_1_T_Enumerator_UnityEngine_Vector2__MoveNext
                          (&LStack_24,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                          );
        if (bVar27 == 0) {
          uStack_3 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_24,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_5;
          return (List_1_UnityEngine_Vector2_ *)this;
        }
        pXStack_28 = (XmlQualifiedName *)LStack_24._current.x;
        pXStack_29 = (XmlSchemaObject *)LStack_24._current.y;
        iStack_18 = 0;
        do {
          do {
            do {
              if (iVar26 <= iStack_18) goto code_?;
              VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                       List_1_UnityEngine_Vector2__get_Item
                                 (clockwisePolyPoints,iStack_18,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                 );
              iStack_18 = iStack_18 + 1;
              VStack_12 = VVar11;
              VVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                       List_1_UnityEngine_Vector2__get_Item
                                 (clockwisePolyPoints,iStack_18 % iStack_19,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                 );
              fStack_30 = VStack_31.x - VStack_12.x;
              VStack_31.y = VVar9.y;
              fStack_32 = VStack_31.y - VStack_12.y;
              vec.y = fStack_32;
              vec.x = fStack_30;
              fStack_33 = fStack_30;
              fStack_34 = fStack_32;
              VStack_31 = VVar9;
              VVar9 = Vector2Ex::Vector2Ex_GetNormal(vec,(MethodInfo *)0x0);
              fStack_35 = VVar9.y;
              fStack_36 = VVar9.x;
              pPStack_37 = (Plane2D *)func_?();
              method_00 = (MethodInfo *)&UNK_?;
              normal.y = fStack_35;
              normal.x = fStack_36;
              Plane2D::Plane2D__ctor_1(pPStack_37,normal,VVar11,(MethodInfo *)0x0);
              fStack_38 = (float)pXStack_29 - arcOrigin.y;
              fStack_39 = (float)pXStack_28 - arcOrigin.x;
              LStack_24._version = (int32_t)&fStack_39;
              LStack_24._current.x = 0.0;
              LStack_24._index = (int32_t)&UNK_?;
              VVar11 = (Vector2)func_?();
              VStack_10 = VVar11;
              if (pPStack_37 == (Plane2D *)0x0) goto code_?;
              bVar27 = Plane2D::Plane2D_Raycast
                                (pPStack_37,arcOrigin,VVar11,&fStack_13,(MethodInfo *)0x0);
              iVar26 = iStack_19;
              this = pLStack_20;
            } while (bVar27 == 0);
            fStack_40 = arcOrigin.y + VStack_10.y * fStack_13;
            fStack_41 = arcOrigin.x + VStack_10.x * fStack_13;
            pPStack_37 = (Plane2D *)(fStack_40 - VStack_12.y);
            fStack_36 = fStack_41 - VStack_12.x;
            uVar42 = func_?(&fStack_30,0);
            fStack_36 = (float)((ulonglong)uVar42 >> 0x20) * (float)pPStack_37 +
                        (float)uVar42 * fStack_36;
            iVar26 = iStack_19;
            this = pLStack_20;
            uStack_14 = uVar42;
          } while (fStack_36 < _UNK_?);
          fVar43 = (float10)func_?(&fStack_30,0);
          this = pLStack_20;
          pPStack_37 = (Plane2D *)(float)fVar43;
          iVar26 = iStack_19;
        } while ((float)pPStack_37 < fStack_36);
        if (pLStack_20 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
        func_?(pLStack_20,fStack_41,fStack_40,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        iVar26 = iStack_19;
      } while( true );
    }
  }
  pLVar17 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar17,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  *unaff_FS_OFFSET = uStack_5;
  return pLVar17;
}

