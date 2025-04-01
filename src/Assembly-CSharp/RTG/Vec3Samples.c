
/* Void AddSample(Vector3) */

void Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_AddSample
               (Vec3Samples *this,Vector3 sample,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Insert_int__UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)(this->fields)._samples;
  if (pLVar1 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    if ((pLVar1->fields)._size < (this->fields)._maxNumSamples) {
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__Insert
                (pLVar1,0,(PlaneIdHelper_PlaneQuadrantInfo)sample,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Insert_int__UnityEngine__Vector3_
                );
      return;
    }
    index = 0;
    while( true ) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pLVar1 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)(this->fields)._samples;
      if (pLVar1 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
      if ((pLVar1->fields)._size + -1 <= index) break;
      pPVar2 = (PlaneIdHelper_PlaneQuadrantInfo *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      index = index + 1;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                (pLVar1,index,*pPVar2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
    }
    if (pLVar1 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                (pLVar1,0,(PlaneIdHelper_PlaneQuadrantInfo)sample,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 GetAverage() */

Vector3 * Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_GetAverage
                    (Vector3 *__return_storage_ptr__,Vec3Samples *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff50;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff50;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fStack_9 = (pVVar8->zeroVector).x;
  fStack_10 = (pVVar8->zeroVector).y;
  fVar11 = (pVVar8->zeroVector).z;
  uStack_12 = 0;
  uStack_13 = 0;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)(this->fields)._samples;
  fStack_14 = fVar11;
  fStack_15 = fStack_9;
  fStack_16 = fStack_10;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                        &stack0xffffff60,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                       );
    uStack_18 = 0;
    LStack_19._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar17->_list;
    LStack_19._index = pLVar17->_index;
    LStack_19._version = pLVar17->_version;
    LStack_19._current.Quadrant = (int32_t)(pLVar17->_current).alias;
    LStack_19._current.FirstAxisSign = (int32_t)(pLVar17->_current).path;
    LStack_19._current.SecondAxisSign = (int32_t)(pLVar17->_current).asset;
    uStack_2 = 1;
    pLStack_20 = &LStack_19;
    while( true ) {
      bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                        (&LStack_19,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                        );
      if (bVar21 == 0) break;
      fVar11 = fStack_14 + (float)LStack_19._current.SecondAxisSign;
      fStack_9 = fStack_15 + (float)LStack_19._current.Quadrant;
      fStack_10 = fStack_16 + (float)LStack_19._current.FirstAxisSign;
      uStack_12 = 0;
      uStack_13 = 0;
      VStack_22.z = fVar11;
      fStack_14 = fVar11;
      fStack_15 = fStack_9;
      fStack_16 = fStack_10;
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_19,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
               ,in_stack_23);
    uStack_2 = 0xffffffff;
    value.y = fStack_10;
    value.x = fStack_9;
    value.z = fVar11;
    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_22,value,(MethodInfo *)0x0);
    fVar25 = pVVar24->y;
    fVar11 = pVVar24->z;
    __return_storage_ptr__->x = pVVar24->x;
    __return_storage_ptr__->y = fVar25;
    __return_storage_ptr__->z = fVar11;
    *unaff_FS_OFFSET = uStack_4;
    return __return_storage_ptr__;
  }
  uVar26 = func_?();
  func_?(uVar26);
  pcVar27 = (code *)swi(3);
  pVVar24 = (Vector3 *)(*pcVar27)();
  return pVVar24;
}


/* Void SetMaxNumSamples(Int32) */

void Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_SetMaxNumSamples
               (Vec3Samples *this,int32_t maxNumSamples,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (maxNumSamples != (this->fields)._maxNumSamples) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields)._samples;
    if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (maxNumSamples < (pLVar1->fields)._size) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields)._samples;
      if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      iVar3 = maxNumSamples - (pLVar1->fields)._size;
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          this_00 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_
                     *)(this->fields)._samples;
          if (this_00 ==
              (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
          Implementation::UIRStylePainter+RepeatRectUV]::
          List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                    (this_00,(this_00->fields)._size + -1,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__RemoveAt_int_
                    );
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
  }
  return;
}


/* Vec3Samples() */

void Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples__ctor(Vec3Samples *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  (this->fields)._maxNumSamples = 2;
  this_00 = (List_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  method_00 = (MethodInfo *)&(this->fields)._samples;
  *(List_1_UnityEngine_Vector3_ **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_NumSamples() */

int32_t Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_get_NumSamples
                  (Vec3Samples *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._samples;
  if (pLVar2 != (List_1_UnityEngine_Vector3_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

