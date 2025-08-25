
/* List`1[UnityEngine.Vector2] Generate2DArcBorderPoints(Vector2, Vector2, Single, Boolean, Int32)
    */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints
          (Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,bool forceShortestArc,
          int32_t numPoints,MethodInfo *method)

{
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
  fVar1 = (float10)func_?();
  fVar2 = arcStartPoint.x - arcOrigin.x;
  fVar3 = arcStartPoint.y - arcOrigin.y;
  degreesFromStart = (float)fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
            ((Quaternion *)&stack0xffffffac,degreesFromStart,
             TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0);
  func_?();
  fVar1 = (float10)func_?();
  fVar4 = (float)fVar1;
  if (_UNK_? < fVar4) {
    fVar2 = fVar2 / fVar4;
    puStack_5 = (undefined *)(fVar3 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    puStack_5 = (undefined *)(TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  }
  if (forceShortestArc != 0) {
    degreesFromStart =
         ArcMath::ArcMath_ConvertToSh2DArcAngle
                   (arcOrigin,arcStartPoint,degreesFromStart,(MethodInfo *)0x0);
  }
  iVar6 = 0;
  __return_storage_ptr__ = (Vector3 *)0x0;
  fVar3 = degreesFromStart / (float)(numPoints + -1);
  while( true ) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffff9c,(float)iVar6 * fVar3,
                        TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                        (MethodInfo *)0x0);
    point.y = (float)puStack_5;
    point.x = fVar2;
    point.z = (float)__return_storage_ptr__;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffbc,*pQVar7,point,(MethodInfo *)0x0);
    fVar4 = pVVar8->y;
    fVar3 = 0.0;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffb0;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (__return_storage_ptr__,*pVVar8,(MethodInfo *)0x0);
    pMVar9 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
    uVar10 = pVVar8->x;
    uVar11 = pVVar8->y;
    fVar12 = arcOrigin.x + (float)uVar10 * fVar4;
    pSVar13 = (String *)(arcOrigin.y + (float)uVar11 * fVar4);
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    piVar14 = &(this->fields)._version;
    *piVar14 = *piVar14 + 1;
    pMVar15 = (this->fields)._items;
    if (pMVar15 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar16 = (this->fields)._size;
    if (uVar16 < pMVar15->max_length) {
      (this->fields)._size = uVar16 + 1;
      if (pMVar15->max_length <= uVar16) {
        func_?();
        break;
      }
      (&pMVar15->vector[0].index)[uVar16 * 2] = (int32_t)fVar12;
      (&pMVar15->vector[0].name)[uVar16 * 2] = pSVar13;
    }
    else {
      item.y = (float)pSVar13;
      item.x = fVar12;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__AddWithResize
                ((List_1_UnityEngine_Vector2_ *)this,item,pMVar9->klass->rgctx_data[0xe].method);
    }
    iVar6 = iVar6 + 1;
    if (numPoints <= iVar6) {
      return (List_1_UnityEngine_Vector2_ *)this;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar18 = (List_1_UnityEngine_Vector2_ *)(*pcVar17)();
  return pLVar18;
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
  if (cwPolyPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (cwPolyPoints->fields)._size;
    fStack_2 = (float)(iVar1 + -1);
    if (isClosed == 0) {
      bVar3 = SBORROW4((int)fStack_2,2);
      iVar1 = iVar1 + -3;
    }
    else {
      bVar3 = SBORROW4((int)fStack_2,3);
      iVar1 = iVar1 + -4;
    }
    if (bVar3 != iVar1 < 0) {
      pLVar4 = (List_1_UnityEngine_Vector2_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
      return pLVar4;
    }
    fStack_5 = _UNK_?;
    if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Inward) {
      fStack_5 = _UNK_?;
    }
    fStack_5 = fStack_5 * borderThickness;
    capacity = (cwPolyPoints->fields)._size;
    pLVar6 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    pLStack_7 = pLVar6;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (pLVar6,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    if (isClosed == 0) {
      VStack_8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,0,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      VVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__get_Item
                         (cwPolyPoints,1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
      VStack_10.y = VVar9.y;
      VStack_11.y = VStack_10.x - VStack_8.x;
      VStack_11.x = (float)((uint)(VStack_10.y - VStack_8.y) ^
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
      ;
      VStack_10 = VVar9;
      uVar12 = func_?(&VStack_11);
      VStack_10.x = VStack_8.x + (float)uVar12 * fStack_5;
      VStack_10.y = VStack_8.y + (float)((ulonglong)uVar12 >> 0x20) * fStack_5;
      if (pLVar6 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) {
        func_?(pLVar6,VStack_10.x,VStack_10.y,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                       );
        iVar1 = 0;
        if (fStack_2 != 1.4013e-45 && -1 < (int)fStack_2 + -1) {
          VStack_8.y = (float)((int)fStack_2 + -1);
          do {
            VVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               (cwPolyPoints,iVar1,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            VStack_13 = VVar9;
            VStack_14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                        List_1_UnityEngine_Vector2__get_Item
                                  (cwPolyPoints,iVar1 + 1,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                  );
            VStack_10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                        List_1_UnityEngine_Vector2__get_Item
                                  ((List_1_UnityEngine_Vector2_ *)pLVar6,iVar1,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                  );
            VVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                     List_1_UnityEngine_Vector2__get_Item
                               (cwPolyPoints,iVar1 + 2,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                               );
            fStack_15 = VStack_16.x - VStack_14.x;
            VStack_16.y = VVar9.y;
            fStack_17 = (float)((uint)(VStack_16.y - VStack_14.y) ^
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                               );
            pfVar18 = &fStack_17;
            uVar19 = 0;
            VStack_16 = VVar9;
            VStack_20 = (Vector2)func_?();
            uStack_21._4_4_ = VStack_20.x * fStack_5 + VStack_16.x;
            fStack_22 = VStack_20.y * fStack_5 + VStack_16.y;
            pLStack_7 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)(VStack_14.x - VStack_13.x);
            fStack_23 = VStack_14.y - VStack_13.y;
            fVar24 = (float10)func_?(&stack0xffffff98,0,pfVar18,uVar19);
            fStack_2 = (float)fVar24;
            if (_UNK_? < fStack_2) {
              fVar25 = (float)pLStack_7 / fStack_2;
              fVar26 = fStack_23 / fStack_2;
            }
            else {
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector2);
                cRam_? = '\x01';
              }
              fVar25 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
              fVar26 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
            }
            fVar27 = VStack_20.y * fVar26 + VStack_20.x * fVar25;
            if (_UNK_? <= (float)((uint)fVar27 & _UNK_?)) {
              fVar27 = ((VStack_10.y - fStack_22) * VStack_20.y +
                       (VStack_10.x - uStack_21._4_4_) * VStack_20.x) /
                       (float)((uint)fVar27 ^
                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              );
              if (0.0 <= fVar27) {
                VStack_11.y = fVar26 * fVar27 + VStack_10.y;
                VStack_11.x = fVar25 * fVar27 + VStack_10.x;
                func_?(pLVar6,VStack_11.x,VStack_11.y,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                               );
              }
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)VStack_8.y);
        }
        VStack_11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                    List_1_UnityEngine_Vector2__get_Item
                              (cwPolyPoints,(cwPolyPoints->fields)._size + -2,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                              );
        VStack_20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                    List_1_UnityEngine_Vector2__get_Item
                              (cwPolyPoints,(cwPolyPoints->fields)._size + -1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                              );
        uVar12 = func_?();
        pMVar28 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        VStack_11.x = (float)uVar12 * fStack_5 + VStack_20.x;
        VStack_11.y = (float)((ulonglong)uVar12 >> 0x20) * fStack_5 + VStack_20.y;
        piVar29 = &(pLVar6->fields)._version;
        *piVar29 = *piVar29 + 1;
        pMVar30 = (pLVar6->fields)._items;
        if (pMVar30 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          uVar31 = (pLVar6->fields)._size;
          if (pMVar30->max_length <= uVar31) {
            item.y = VStack_11.y;
            item.x = VStack_11.x;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)pLVar6,item,
                       pMVar28->klass->rgctx_data[0xe].method);
            return (List_1_UnityEngine_Vector2_ *)pLVar6;
          }
          (pLVar6->fields)._size = uVar31 + 1;
          if (uVar31 < pMVar30->max_length) {
            (&pMVar30->vector[0].index)[uVar31 * 2] = (int32_t)VStack_11.x;
            (&pMVar30->vector[0].name)[uVar31 * 2] = (String *)VStack_11.y;
            return (List_1_UnityEngine_Vector2_ *)pLVar6;
          }
          goto code_?;
        }
      }
    }
    else {
      VVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__get_Item
                         (cwPolyPoints,0,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
      VStack_14 = VVar9;
      VStack_11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,1,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      uStack_21 = func_?(&stack0xffffff98);
      VStack_8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(cwPolyPoints->fields)._size + -2,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      VStack_20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (cwPolyPoints,(cwPolyPoints->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      VStack_11 = (Vector2)func_?(&stack0xffffff98,0);
      VStack_14 = (Vector2)((ulonglong)VStack_14 & 0xffffffff00000000);
      VStack_20.y = (float)&stack0xffffff98;
      VStack_20.x = (float)&UNK_?;
      VStack_13 = (Vector2)func_?();
      pLVar6 = pLStack_7;
      fVar26 = VStack_11.x * fStack_5 + VStack_8.x;
      fVar27 = VStack_11.y * fStack_5 + VStack_8.y;
      VStack_8.y = (float)uStack_21 * fStack_5 + VStack_14.x;
      fStack_22 = uStack_21._4_4_ * fStack_5 + VStack_14.y;
      fVar25 = VStack_13.y * uStack_21._4_4_ + VStack_13.x * (float)uStack_21;
      if (((float)((uint)fVar25 & _UNK_?) < _UNK_?) ||
         (fVar25 = ((fVar27 - fStack_22) * uStack_21._4_4_ +
                   (fVar26 - VStack_8.y) * (float)uStack_21) /
                   (float)((uint)fVar25 ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field),
         fVar25 < 0.0)) {
        if (pLStack_7 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
      }
      else {
        VStack_11.x = VStack_13.x * fVar25 + fVar26;
        VStack_11.y = VStack_13.y * fVar25 + fVar27;
        if (pLStack_7 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          VVar9.y = VStack_11.y;
          VVar9.x = VStack_11.x;
code_?:
          func_?(pLStack_7,VVar9,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                         );
          iVar1 = 0;
          if (fStack_2 != 1.4013e-45 && -1 < (int)fStack_2 + -1) {
            pLStack_7 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)((int)fStack_2 + -1);
            do {
              VStack_11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                          List_1_UnityEngine_Vector2__get_Item
                                    (cwPolyPoints,iVar1,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                    );
              VStack_14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                          List_1_UnityEngine_Vector2__get_Item
                                    (cwPolyPoints,iVar1 + 1,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                    );
              VStack_10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                          List_1_UnityEngine_Vector2__get_Item
                                    ((List_1_UnityEngine_Vector2_ *)pLVar6,iVar1,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                    );
              VStack_20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                          List_1_UnityEngine_Vector2__get_Item
                                    (cwPolyPoints,iVar1 + 2,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                    );
              VStack_16 = (Vector2)func_?(&stack0xffffff98,0);
              fStack_23 = VStack_16.x * fStack_5 + VStack_20.x;
              fStack_2 = VStack_16.y * fStack_5 + VStack_20.y;
              fStack_17 = VStack_14.x - VStack_11.x;
              fStack_15 = VStack_14.y - VStack_11.y;
              fStack_22 = fStack_17;
              uStack_21._4_4_ = fStack_15;
              fVar24 = (float10)func_?(&fStack_17,0);
              fVar25 = (float)fVar24;
              VStack_8.y = fVar25;
              if (_UNK_? < fVar25) {
                fVar26 = fStack_22 / fVar25;
                fVar25 = uStack_21._4_4_ / fVar25;
              }
              else {
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector2);
                  cRam_? = '\x01';
                }
                fVar26 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
                fVar25 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
              }
              fVar27 = fVar25 * VStack_16.y + fVar26 * VStack_16.x;
              if (_UNK_? <= (float)((uint)fVar27 & _UNK_?)) {
                fVar27 = ((VStack_10.y - fStack_2) * VStack_16.y +
                         (VStack_10.x - fStack_23) * VStack_16.x) /
                         (float)((uint)fVar27 ^
                                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                );
                if (0.0 <= fVar27) {
                  VStack_13.y = fVar25 * fVar27 + VStack_10.y;
                  VStack_13.x = fVar26 * fVar27 + VStack_10.x;
                  func_?(pLVar6,VStack_13.x,VStack_13.y,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                 );
                }
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)pLStack_7);
          }
          VStack_11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                      List_1_UnityEngine_Vector2__get_Item
                                ((List_1_UnityEngine_Vector2_ *)pLVar6,0,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                );
          pMVar28 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar29 = &(pLVar6->fields)._version;
          *piVar29 = *piVar29 + 1;
          pMVar30 = (pLVar6->fields)._items;
          if (pMVar30 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
            uVar31 = (pLVar6->fields)._size;
            if (pMVar30->max_length <= uVar31) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        ((List_1_UnityEngine_Vector2_ *)pLVar6,VStack_11,
                         pMVar28->klass->rgctx_data[0xe].method);
              return (List_1_UnityEngine_Vector2_ *)pLVar6;
            }
            (pLVar6->fields)._size = uVar31 + 1;
            if (uVar31 < pMVar30->max_length) {
              (&pMVar30->vector[0].index)[uVar31 * 2] = (int32_t)VStack_11.x;
              (&pMVar30->vector[0].name)[uVar31 * 2] = (String *)VStack_11.y;
              return (List_1_UnityEngine_Vector2_ *)pLVar6;
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
  pcVar32 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_Vector2_ *)(*pcVar32)();
  return pLVar4;
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
  if ((cwPolyPoints != (List_1_UnityEngine_Vector2_ *)0x0) &&
     (cwBorderPts != (List_1_UnityEngine_Vector2_ *)0x0)) {
    iVar1 = (cwPolyPoints->fields)._size;
    if (iVar1 != (cwBorderPts->fields)._size) {
      pLVar2 = (List_1_UnityEngine_Vector2_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
      return pLVar2;
    }
    iVar1 = iVar1 + -1;
    if (isClosed == 0) {
      bVar3 = SBORROW4(iVar1,2);
      iVar4 = -2;
    }
    else {
      bVar3 = SBORROW4(iVar1,3);
      iVar4 = -3;
    }
    if (bVar3 != iVar1 + iVar4 < 0) {
      pLVar2 = (List_1_UnityEngine_Vector2_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
      return pLVar2;
    }
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,iVar1 * 4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    iVar1 = 0;
    if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Outward) {
      while( true ) {
        if ((cwPolyPoints->fields)._size + -1 <= iVar1) break;
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,iVar1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwBorderPts,iVar1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        cwPolyPoints = (List_1_UnityEngine_Vector2_ *)(iVar1 + 1);
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,(int32_t)cwPolyPoints,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
          cwBorderPts = cwPolyPoints;
        }
        else {
          cwBorderPts = (List_1_UnityEngine_Vector2_ *)&UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,iVar1 + 1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          iVar1 = iVar1 + 1;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
          iVar1 = iVar1 + 1;
        }
      }
    }
    else {
      while( true ) {
        if ((cwPolyPoints->fields)._size + -1 <= iVar1) break;
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,iVar1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,iVar1 + 1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        cwPolyPoints = (List_1_UnityEngine_Vector2_ *)(iVar1 + 1);
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwPolyPoints,(int32_t)cwPolyPoints,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          pSStack_10 = (String *)VVar5.y;
          (&pMVar8->vector[0].name)[uVar9 * 2] = pSStack_10;
          cwBorderPts = cwPolyPoints;
        }
        else {
          cwBorderPts = (List_1_UnityEngine_Vector2_ *)&UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        VVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (cwBorderPts,iVar1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar7 = &(this->fields)._version;
        *piVar7 = *piVar7 + 1;
        pMVar8 = (this->fields)._items;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar9 = (this->fields)._size;
        if (uVar9 < pMVar8->max_length) {
          (this->fields)._size = uVar9 + 1;
          if (pMVar8->max_length <= uVar9) goto code_?;
          iVar1 = iVar1 + 1;
          (&pMVar8->vector[0].index)[uVar9 * 2] = (int32_t)VVar5.x;
          (&pMVar8->vector[0].name)[uVar9 * 2] = (String *)VVar5.y;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this,VVar5,
                     pMVar6->klass->rgctx_data[0xe].method);
          iVar1 = iVar1 + 1;
        }
      }
    }
    return (List_1_UnityEngine_Vector2_ *)this;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar2 = (List_1_UnityEngine_Vector2_ *)(*pcVar11)();
  return pLVar2;
}


/* List`1[UnityEngine.Vector3] Generate3DArcBorderPoints(Vector3, Vector3, Plane, Single, Boolean,
   Int32) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints
          (Vector3 arcOrigin,Vector3 arcStartPoint,Plane arcPlane,float degreesFromStart,
          bool forceShortestArc,int32_t numPoints,MethodInfo *method)

{
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
  fVar1 = (float10)func_?();
  degreesFromStart = (float)fVar1;
  fVar2 = arcPlane.m_Normal.y * arcOrigin.y + arcPlane.m_Normal.x * arcOrigin.x +
           arcPlane.m_Normal.z * arcOrigin.z + arcPlane.m_Distance;
  fVar3 = arcOrigin.x - arcPlane.m_Normal.x * fVar2;
  fVar4 = arcOrigin.y - arcPlane.m_Normal.y * fVar2;
  pLVar5 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(arcOrigin.z - arcPlane.m_Normal.z * fVar2);
  fVar2 = arcPlane.m_Normal.y * arcStartPoint.y + arcPlane.m_Normal.x * arcStartPoint.x +
           arcPlane.m_Normal.z * arcStartPoint.z + arcPlane.m_Distance;
  fVar6 = arcStartPoint.x - arcPlane.m_Normal.x * fVar2;
  fVar7 = arcStartPoint.y - arcPlane.m_Normal.y * fVar2;
  fVar8 = arcStartPoint.z - arcPlane.m_Normal.z * fVar2;
  fVar9 = fVar8 - (float)pLVar5;
  uVar10._4_4_ = fVar7 - fVar4;
  uVar10._0_4_ = fVar6 - fVar3;
  pLVar11 = pLVar5;
  fVar2 = fVar3;
  fVar12 = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
            (&QStack_13,degreesFromStart,arcPlane.m_Normal,(MethodInfo *)0x0);
  func_?(&stack0xffffffa0,0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xffffffa0,(MethodInfo *)0x0);
  if (forceShortestArc != 0) {
    arcPlaneNormal.y = arcPlane.m_Normal.y;
    arcPlaneNormal.x = arcPlane.m_Normal.x;
    arcStartPoint_00.y = fVar7;
    arcStartPoint_00.x = fVar6;
    arcOrigin_00.y = fVar12;
    arcOrigin_00.x = fVar2;
    arcOrigin_00.z = (float)pLVar5;
    arcStartPoint_00.z = fVar8;
    arcPlaneNormal.z = arcPlane.m_Normal.z;
    degreesFromStart =
         ArcMath::ArcMath_ConvertToSh3DArcAngle
                   (arcOrigin_00,arcStartPoint_00,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0)
    ;
  }
  iVar14 = 0;
  puVar15 = (undefined *)(degreesFromStart / (float)(numPoints + -1));
  while( true ) {
    __return_storage_ptr__ = (Quaternion *)&stack0xffffff50;
    fVar2 = (float)iVar14 * (float)puVar15;
    QStack_13.w = (float)&UNK_?;
    axis.y = arcPlane.m_Normal.y;
    axis.x = arcPlane.m_Normal.x;
    axis.z = arcPlane.m_Normal.z;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       (__return_storage_ptr__,fVar2,axis,(MethodInfo *)0x0);
    fVar7 = 0.0;
    point.z = fVar9;
    point.x = (float)uVar10;
    point.y = SUB84(uVar10,4);
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffff60,*pQVar16,point,(MethodInfo *)0x0);
    puVar15 = (undefined *)0x0;
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&QStack_13,*pVVar17,(MethodInfo *)0x0);
    pMVar18 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar19 = pVVar17->x;
    uVar20 = pVVar17->y;
    fVar12 = (float)uVar19 * fVar7 + fVar3;
    fVar8 = (float)uVar20 * fVar7 + fVar4;
    fVar7 = pVVar17->z * fVar7 + (float)pLVar11;
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    piVar21 = &(this->fields)._version;
    *piVar21 = *piVar21 + 1;
    pMVar22 = (this->fields)._items;
    if (pMVar22 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
    uVar23 = (this->fields)._size;
    if (uVar23 < pMVar22->max_length) {
      (this->fields)._size = uVar23 + 1;
      if (pMVar22->max_length <= uVar23) {
        func_?();
        break;
      }
      *(ulonglong *)(&pMVar22->vector[0].index + uVar23 * 3) = CONCAT44(fVar8,fVar12);
      (&pMVar22->vector[0].actualWidth)[uVar23 * 3] = fVar7;
    }
    else {
      puVar15 = &UNK_?;
      item.FirstAxisSign = (int32_t)fVar8;
      item.Quadrant = (int32_t)fVar12;
      item.SecondAxisSign = (int32_t)fVar7;
      pLVar11 = this;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this,item,
                 pMVar18->klass->rgctx_data[0xe].method);
      fVar4 = fVar12;
      fVar3 = fVar8;
    }
    iVar14 = iVar14 + 1;
    arcPlane.m_Normal.x = (float)__return_storage_ptr__;
    arcPlane.m_Normal.y = fVar2;
    if (numPoints <= iVar14) {
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pLVar25 = (List_1_UnityEngine_Vector3_ *)(*pcVar24)();
  return pLVar25;
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
    func_?();
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (2 < numPoints) {
    if ((camera != (Camera *)0x0) &&
       (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0), this != (Transform *)0x0)) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_2,this,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar1->x;
      uStack_5._4_4_ = pVVar1->y;
      fStack_6 = pVVar1->z;
      value_00.z = fVar4;
      value_00.x = (float)(undefined4)uStack_3;
      value_00.y = uStack_3._4_4_;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         (&VStack_2,value_00,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar1->x;
      uStack_7._4_4_ = pVVar1->y;
      fStack_8 = pVVar1->z;
      uStack_3 = CONCAT44((uint)(uStack_5._4_4_ * uStack_7._4_4_ +
                                  (float)uStack_5 * (float)uStack_7 + fStack_6 * fStack_8) ^
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field,
                           (undefined4)uStack_3);
      uStack_9 = uStack_7;
      fStack_10 = fStack_8;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_2,this,(MethodInfo *)0x0);
      uStack_11._0_4_ = pVVar1->x;
      uStack_11._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_2,this,(MethodInfo *)0x0);
      circleRight.z = fVar4;
      circleRight.x = (float)(undefined4)uStack_11;
      circleRight.y = uStack_11._4_4_;
      pLStack_12 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                   PrimitiveFactory_Generate3DCircleBorderPoints
                             (sphereCenter,sphereRadius,circleRight,*pVVar1,numPoints,
                              (MethodInfo *)0x0);
      index = 0;
      if (pLStack_12 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
        do {
          pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_14,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                              pLStack_12,index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_15._0_4_ = pVVar13->alias;
          uStack_15._4_4_ = (float)pVVar13->path;
          pVStack_16 = pVVar13->asset;
          fStack_17 = (float)pVStack_16 - sphereCenter.z;
          fStack_18 = (float)(undefined4)uStack_15;
          uStack_19 = 0;
          uStack_20 = 0;
          uStack_21 = 0;
          value.y = uStack_15._4_4_ - sphereCenter.y;
          value.x = (float)(undefined4)uStack_15 - sphereCenter.x;
          value.z = fStack_17;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                             (&VStack_22,value,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar1->x;
          uStack_23._4_4_ = pVVar1->y;
          fStack_10 = pVVar1->z;
          uStack_11 = CONCAT44(fStack_10,(undefined4)uStack_11);
          uStack_9 = uStack_23;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_24,this,(MethodInfo *)0x0);
          uStack_25._0_4_ = pVVar1->x;
          uStack_25._4_4_ = pVVar1->y;
          fStack_26 = pVVar1->z;
          fStack_27 = (float)pVStack_16 - fStack_26;
          value_01.y = uStack_15._4_4_ - (float)uStack_25._4_4_;
          value_01.x = fStack_18 - (float)(undefined4)uStack_25;
          value_01.z = fStack_27;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                             (&VStack_28,value_01,(MethodInfo *)0x0);
          uStack_29._0_4_ = pVVar1->x;
          uStack_29._4_4_ = pVVar1->y;
          fStack_30 = pVVar1->z;
          bVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                            (camera,(MethodInfo *)0x0);
          if (bVar31 != 0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                               (&VStack_32,this,(MethodInfo *)0x0);
            uStack_29._0_4_ = pVVar1->x;
            uStack_29._4_4_ = pVVar1->y;
            fStack_30 = pVVar1->z;
          }
          fStack_33 = (float)uStack_29;
          fStack_34 = (float)uStack_9;
          fStack_35 = fStack_30;
          fStack_36 = fStack_10;
          fVar4 = (float)uStack_9 * (float)uStack_29 + uStack_9._4_4_ * uStack_29._4_4_ +
                  fStack_10 * fStack_30;
          if (_UNK_? < (float)((uint)fVar4 & _UNK_?)) {
            fStack_37 = MathEx::MathEx_SafeAcos(fVar4,(MethodInfo *)0x0);
            fStack_37 = fStack_37 * _UNK_?;
            fStack_38 = fStack_33 * uStack_9._4_4_ - fStack_34 * uStack_29._4_4_;
            uStack_5 = CONCAT44(fStack_35 * fStack_34 - fStack_36 * fStack_33,
                                 fStack_36 * uStack_29._4_4_ - fStack_35 * uStack_9._4_4_);
            fStack_6 = fStack_38;
            pVVar1 = (Vector3 *)func_?(auStack_39);
            pQVar40 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                               ((Quaternion *)&stack0xfffffe60,_UNK_? - fStack_37,*pVVar1,
                                (MethodInfo *)0x0);
            point.z = uStack_11._4_4_;
            point.x = (float)(undefined4)uStack_23;
            point.y = (float)uStack_23._4_4_;
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                               ((Vector3 *)&stack0xfffffe90,*pQVar40,point,(MethodInfo *)0x0);
            uStack_5._0_4_ = pVVar1->x;
            uStack_5._4_4_ = pVVar1->y;
            fStack_6 = pVVar1->z;
            puVar41 = (undefined8 *)func_?();
            uVar42 = *puVar41;
            fStack_43 = *(float *)(puVar41 + 1);
            uStack_44._0_4_ = (float)uVar42;
            uStack_44._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
            VStack_2.z = sphereCenter.z + fStack_43 * sphereRadius;
            value_02.FirstAxisSign = (int32_t)(sphereCenter.y + uStack_44._4_4_ * sphereRadius);
            value_02.Quadrant = (int32_t)(sphereCenter.x + (float)uStack_44 * sphereRadius);
            value_02.SecondAxisSign = (int32_t)VStack_2.z;
            uStack_44 = uVar42;
            mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]
            ::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                      (pLStack_12,index,value_02,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                      );
            puVar41 = (undefined8 *)func_?();
            uVar42 = *puVar41;
            fStack_45 = *(float *)(puVar41 + 1);
            uStack_46._0_4_ = (float)uVar42;
            fVar4 = (float)uStack_7 * (float)uStack_46;
            uStack_46._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
            fVar47 = uStack_7._4_4_ * uStack_46._4_4_;
            uStack_46 = uVar42;
            if (fVar47 + fVar4 + fStack_8 * fStack_45 + uStack_3._4_4_ < 0.0)
            goto code_?;
          }
          index = index + 1;
          if (numPoints <= index) {
            return (List_1_UnityEngine_Vector3_ *)pLStack_12;
          }
        } while( true );
      }
    }
    func_?();
    pcVar48 = (code *)swi(3);
    pLVar49 = (List_1_UnityEngine_Vector3_ *)(*pcVar48)();
    return pLVar49;
  }
code_?:
  pLVar49 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar49,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  return pLVar49;
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
  LStack_13._current.y = 0.0;
  fStack_14 = 0.0;
  LStack_13._list = (List_1_UnityEngine_Vector2_ *)0x0;
  LStack_13._index = 0;
  LStack_13._version = 0;
  LStack_13._current.x = 0.0;
  uStack_15 = CONCAT44(uStack_15._4_4_,(undefined4)uStack_15);
  if (arcPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    uVar16 = func_?();
    func_?(uVar16);
    pcVar17 = (code *)swi(3);
    pLVar18 = (List_1_UnityEngine_Vector2_ *)(*pcVar17)();
    return pLVar18;
  }
  if (1 < (arcPoints->fields)._size) {
    VStack_12 = VVar11;
    VStack_10 = VVar9;
    uStack_15 = CONCAT44(uStack_15._4_4_,(undefined4)uStack_15);
    if (clockwisePolyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
    if (2 < (clockwisePolyPoints->fields)._size) {
      iStack_19 = (clockwisePolyPoints->fields)._size;
      capacity = (arcPoints->fields)._size;
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      pLStack_20 = this;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this,capacity,
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
      pLStack_23 = &LStack_13;
      uStack_24 = 0;
      LStack_13._list = (List_1_UnityEngine_Vector2_ *)pLVar22->_list;
      LStack_13._index = pLVar22->_index;
      LStack_13._version = pLVar22->_version;
      LStack_13._current.x = (float)(pLVar22->_current).qname;
      LStack_13._current.y = (float)(pLVar22->_current).xso;
      uStack_3 = 1;
      iVar25 = iStack_19;
      do {
        bVar26 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                Vector2]::List_1_T_Enumerator_UnityEngine_Vector2__MoveNext
                          (&LStack_13,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__
                          );
        if (bVar26 == 0) {
          uStack_3 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_13,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_5;
          return (List_1_UnityEngine_Vector2_ *)this;
        }
        pXStack_27 = (XmlQualifiedName *)LStack_13._current.x;
        pXStack_28 = (XmlSchemaObject *)LStack_13._current.y;
        for (iStack_29 = 0; iStack_29 < iVar25; iStack_29 = iStack_29 + 1) {
          VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                   List_1_UnityEngine_Vector2__get_Item
                             (clockwisePolyPoints,iStack_29,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                             );
          VStack_12 = VVar11;
          VVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                   List_1_UnityEngine_Vector2__get_Item
                             (clockwisePolyPoints,(iStack_29 + 1) % iStack_19,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                             );
          fStack_30 = VStack_31.x - VStack_12.x;
          VStack_31.y = VVar9.y;
          fStack_32 = VStack_31.y - VStack_12.y;
          VStack_31 = VVar9;
          uVar33 = func_?();
          pMStack_34 = (MethodInfo *)((ulonglong)uVar33 >> 0x20);
          fStack_35 = (float)uVar33;
          pPStack_36 = (Plane2D *)func_?();
          normal.y = (float)pMStack_34;
          normal.x = fStack_35;
          method_00 = pMStack_34;
          Plane2D::Plane2D__ctor_1(pPStack_36,normal,VVar11,(MethodInfo *)0x0);
          VVar11 = (Vector2)func_?();
          VStack_10 = VVar11;
          if (pPStack_36 == (Plane2D *)0x0) goto code_?;
          bVar26 = Plane2D::Plane2D_Raycast(pPStack_36,arcOrigin,VVar11,&fStack_14,(MethodInfo *)0x0)
          ;
          if (bVar26 != 0) {
            fStack_37 = arcOrigin.y + VStack_10.y * fStack_14;
            fStack_38 = arcOrigin.x + VStack_10.x * fStack_14;
            fStack_35 = fStack_38 - VStack_12.x;
            pPStack_36 = (Plane2D *)(fStack_37 - VStack_12.y);
            uVar33 = func_?(&fStack_30,0);
            fStack_35 = (float)((ulonglong)uVar33 >> 0x20) * (float)pPStack_36 +
                        (float)uVar33 * fStack_35;
            uStack_15 = uVar33;
            if (_UNK_? <= fStack_35) {
              fVar39 = (float10)func_?(&fStack_30,0);
              this = pLStack_20;
              pPStack_36 = (Plane2D *)(float)fVar39;
              if (fStack_35 <= (float)pPStack_36) {
                if (pLStack_20 ==
                    (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
                func_?(pLStack_20,fStack_38,fStack_37,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                               );
                iVar25 = iStack_19;
                break;
              }
            }
          }
          iVar25 = iStack_19;
          this = pLStack_20;
        }
      } while( true );
    }
  }
  pLVar18 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar18,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  *unaff_FS_OFFSET = uStack_5;
  return pLVar18;
}

