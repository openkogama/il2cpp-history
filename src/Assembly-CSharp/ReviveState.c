
/* SafeSpotData GetSafeGroundedDataAtSelectedIndex() */

SafeSpotData *
Assembly-CSharp.dll::ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
          (SafeSpotData *__return_storage_ptr__,ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Safe_position_non_existent_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GetSafeGroundedPosition__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).safePositions;
  if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
    this_00 = &(this->fields).currentPreviewedSafePosition;
    if ((pLVar1->fields)._size <= (this->fields).currentPreviewedSafePosition) {
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_GetSafeGroundedPosition__,pSVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Safe_position_non_existent_,(MethodInfo *)0x0);
      (__return_storage_ptr__->Position).x = 0.0;
      (__return_storage_ptr__->Position).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->Position).z = 0;
      (__return_storage_ptr__->Rotation).y = 0.0;
      (__return_storage_ptr__->Rotation).z = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->Rotation).w = 0;
      (__return_storage_ptr__->CameraPosition).y = 0.0;
      (__return_storage_ptr__->CameraPosition).z = 0.0;
      (__return_storage_ptr__->CameraRotation).x = 0.0;
      (__return_storage_ptr__->CameraRotation).y = 0.0;
      (__return_storage_ptr__->CameraRotation).z = 0.0;
      (__return_storage_ptr__->CameraRotation).w = 0.0;
      return __return_storage_ptr__;
    }
    if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
      uVar3 = *this_00;
      if ((uint)(pLVar1->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (SafeSpotData *)(*pcVar4)();
        return pSVar5;
      }
      pSVar6 = (pLVar1->fields)._items;
      if (pSVar6 != (SafeSpotData__Array *)0x0) {
        if (uVar3 < (uint)pSVar6->max_length) {
          pSVar5 = pSVar6->vector + (int)uVar3;
          fVar7 = (pSVar5->Position).y;
          uVar8 = *(undefined8 *)&(pSVar5->Position).z;
          pQVar9 = &pSVar6->vector[(int)uVar3].Rotation;
          fVar10 = pQVar9->y;
          fVar11 = pQVar9->z;
          uVar12 = *(undefined8 *)&pQVar9->w;
          (__return_storage_ptr__->Position).x = (pSVar5->Position).x;
          (__return_storage_ptr__->Position).y = fVar7;
          *(undefined8 *)&(__return_storage_ptr__->Position).z = uVar8;
          pVVar13 = &pSVar6->vector[(int)uVar3].CameraPosition;
          fVar7 = pVVar13->y;
          fVar14 = pVVar13->z;
          fVar15 = pVVar13[1].x;
          fVar16 = pVVar13[1].y;
          (__return_storage_ptr__->Rotation).y = fVar10;
          (__return_storage_ptr__->Rotation).z = fVar11;
          *(undefined8 *)&(__return_storage_ptr__->Rotation).w = uVar12;
          fVar10 = pSVar6->vector[(int)uVar3].CameraRotation.z;
          fVar11 = pSVar6->vector[(int)uVar3].CameraRotation.w;
          (__return_storage_ptr__->CameraPosition).y = fVar7;
          (__return_storage_ptr__->CameraPosition).z = fVar14;
          (__return_storage_ptr__->CameraRotation).x = fVar15;
          (__return_storage_ptr__->CameraRotation).y = fVar16;
          (__return_storage_ptr__->CameraRotation).z = fVar10;
          (__return_storage_ptr__->CameraRotation).w = fVar11;
          return __return_storage_ptr__;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pSVar5 = (SafeSpotData *)(*pcVar4)();
        return pSVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (SafeSpotData *)(*pcVar4)();
  return pSVar5;
}


/* Void ResetSafePostions() */

void Assembly-CSharp.dll::ReviveState::ReviveState_ResetSafePostions
               (ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).safePositions;
  (this->fields).currentPreviewedSafePosition = 0;
  if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSafeGroundedDataIndex(Int32) */

void Assembly-CSharp.dll::ReviveState::ReviveState_SetSafeGroundedDataIndex
               (ReviveState *this,int32_t index,MethodInfo *method)

{
  aIStackX_10[0].m_value = index;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Set_safe_spot_grounded_index__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  pLVar2 = (this->fields).safePositions;
  if (pLVar2 != (List_1_SafeSpotData_ *)0x0) {
    value = (pLVar2->fields)._size;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    str3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_6
                       (StringLiteral_Set_safe_spot_grounded_index__,pSVar1,::StringLiteral____,str3
                        ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pLVar2 = (this->fields).safePositions;
    if (pLVar2 != (List_1_SafeSpotData_ *)0x0) {
      if (index < (pLVar2->fields)._size) {
        (this->fields).currentPreviewedSafePosition = index;
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SuppressSafeSpotSaving(Single) */

void Assembly-CSharp.dll::ReviveState::ReviveState_SuppressSafeSpotSaving
               (ReviveState *this,float duration,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).safeSpotSuppressedDuration = duration;
  (this->fields).safeSpotSuppressedTime = fVar3;
  return;
}


/* ReviveState() */

void Assembly-CSharp.dll::ReviveState::ReviveState__ctor(ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SafeSpotData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_SafeSpotData_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<SafeSpotData>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<SafeSpotData>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).safePositions = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).maxNumberOfSafePositions = 3;
  (this->fields).minDistanceBetweenSafePositions = 3.0;
  return;
}


/* Boolean get_CanSafelySpawn() */

bool Assembly-CSharp.dll::ReviveState::ReviveState_get_CanSafelySpawn
               (ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).safePositions;
  if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
    return 0 < (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* SafeSpotData get_SafeGroundedData() */

SafeSpotData *
Assembly-CSharp.dll::ReviveState::ReviveState_get_SafeGroundedData
          (SafeSpotData *__return_storage_ptr__,ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).safePositions;
  if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      (__return_storage_ptr__->Position).x = 0.0;
      (__return_storage_ptr__->Position).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->Position).z = 0;
      (__return_storage_ptr__->Rotation).y = 0.0;
      (__return_storage_ptr__->Rotation).z = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->Rotation).w = 0;
      (__return_storage_ptr__->CameraPosition).y = 0.0;
      (__return_storage_ptr__->CameraPosition).z = 0.0;
      (__return_storage_ptr__->CameraRotation).x = 0.0;
      (__return_storage_ptr__->CameraRotation).y = 0.0;
      (__return_storage_ptr__->CameraRotation).z = 0.0;
      (__return_storage_ptr__->CameraRotation).w = 0.0;
      return __return_storage_ptr__;
    }
    if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
      uVar2 = (this->fields).currentPreviewedSafePosition;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (SafeSpotData *)(*pcVar3)();
        return pSVar4;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 != (SafeSpotData__Array *)0x0) {
        if (uVar2 < (uint)pSVar5->max_length) {
          pSVar4 = pSVar5->vector + (int)uVar2;
          fVar6 = (pSVar4->Position).y;
          uVar7 = *(undefined8 *)&(pSVar4->Position).z;
          pQVar8 = &pSVar5->vector[(int)uVar2].Rotation;
          fVar9 = pQVar8->y;
          fVar10 = pQVar8->z;
          uVar11 = *(undefined8 *)&pQVar8->w;
          (__return_storage_ptr__->Position).x = (pSVar4->Position).x;
          (__return_storage_ptr__->Position).y = fVar6;
          *(undefined8 *)&(__return_storage_ptr__->Position).z = uVar7;
          pVVar12 = &pSVar5->vector[(int)uVar2].CameraPosition;
          fVar6 = pVVar12->y;
          fVar13 = pVVar12->z;
          fVar14 = pVVar12[1].x;
          fVar15 = pVVar12[1].y;
          (__return_storage_ptr__->Rotation).y = fVar9;
          (__return_storage_ptr__->Rotation).z = fVar10;
          *(undefined8 *)&(__return_storage_ptr__->Rotation).w = uVar11;
          fVar9 = pSVar5->vector[(int)uVar2].CameraRotation.z;
          fVar10 = pSVar5->vector[(int)uVar2].CameraRotation.w;
          (__return_storage_ptr__->CameraPosition).y = fVar6;
          (__return_storage_ptr__->CameraPosition).z = fVar13;
          (__return_storage_ptr__->CameraRotation).x = fVar14;
          (__return_storage_ptr__->CameraRotation).y = fVar15;
          (__return_storage_ptr__->CameraRotation).z = fVar9;
          (__return_storage_ptr__->CameraRotation).w = fVar10;
          return __return_storage_ptr__;
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        pSVar4 = (SafeSpotData *)(*pcVar3)();
        return pSVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (SafeSpotData *)(*pcVar3)();
  return pSVar4;
}


/* Void set_SafeGroundedData(SafeSpotData) */

void Assembly-CSharp.dll::ReviveState::ReviveState_set_SafeGroundedData
               (ReviveState *this,SafeSpotData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__Add_SafeSpotData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 - (this->fields).safeSpotSuppressedTime < (this->fields).safeSpotSuppressedDuration) {
    return;
  }
  pLVar5 = (this->fields).safePositions;
  if (pLVar5 == (List_1_SafeSpotData_ *)0x0) goto code_?;
  if ((pLVar5->fields)._size != 0) {
    iVar6 = (pLVar5->fields)._size;
    if ((uint)(pLVar5->fields)._size <= iVar6 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar7 = (pLVar5->fields)._items;
    if (pSVar7 == (SafeSpotData__Array *)0x0) goto code_?;
    if ((uint)pSVar7->max_length <= iVar6 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar8 = pSVar7->vector + (longlong)iVar6 + -1;
    uStack_9._0_4_ = (value->Rotation).y;
    uStack_9._4_4_ = (value->Rotation).z;
    uStack_10 = *(undefined8 *)&(value->Rotation).w;
    uStack_11._0_4_ = (value->CameraPosition).y;
    uStack_11._4_4_ = (value->CameraPosition).z;
    uStack_12._0_4_ = (value->CameraRotation).x;
    uStack_12._4_4_ = (value->CameraRotation).y;
    uStack_13._0_4_ = (value->CameraRotation).z;
    uStack_13._4_4_ = (value->CameraRotation).w;
    fStack_14 = (pSVar8->Position).z - (value->Position).z;
    uStack_15 = CONCAT44((pSVar8->Position).y - (value->Position).y,
                         (pSVar8->Position).x - (value->Position).x);
    fVar4 = (float)FUN_?(&uStack_15);
    pfVar16 = &(this->fields).minDistanceBetweenSafePositions;
    if (fVar4 < *pfVar16 || fVar4 == *pfVar16) {
      return;
    }
    pLVar5 = (this->fields).safePositions;
    if (pLVar5 == (List_1_SafeSpotData_ *)0x0) goto code_?;
    if ((pLVar5->fields)._size < (this->fields).maxNumberOfSafePositions) goto code_?;
    iVar17 = FUN_?();
    pLVar5 = (this->fields).safePositions;
    (this->fields).currentPreviewedSafePosition = iVar17;
    if (pLVar5 == (List_1_SafeSpotData_ *)0x0) goto code_?;
    FUN_?(pLVar5,0);
    pLVar5 = (this->fields).safePositions;
  }
  if (pLVar5 != (List_1_SafeSpotData_ *)0x0) {
code_?:
    uStack_18._0_4_ = (value->Position).x;
    uStack_18._4_4_ = (value->Position).y;
    uStack_19 = *(undefined8 *)&(value->Position).z;
    uStack_9._0_4_ = (value->Rotation).y;
    uStack_9._4_4_ = (value->Rotation).z;
    uStack_10 = *(undefined8 *)&(value->Rotation).w;
    uStack_11._0_4_ = (value->CameraPosition).y;
    uStack_11._4_4_ = (value->CameraPosition).z;
    uStack_12._0_4_ = (value->CameraRotation).x;
    uStack_12._4_4_ = (value->CameraRotation).y;
    uStack_13._0_4_ = (value->CameraRotation).z;
    uStack_13._4_4_ = (value->CameraRotation).w;
    FUN_?(pLVar5,&uStack_18,
                  MethodInfo__System__Collections__Generic__List<SafeSpotData>__Add_SafeSpotData_);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

