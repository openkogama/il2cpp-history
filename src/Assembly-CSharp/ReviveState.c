
/* SafeSpotData GetSafeGroundedDataAtSelectedIndex() */

SafeSpotData *
Assembly-CSharp.dll::ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
          (SafeSpotData *__return_storage_ptr__,ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_);
    func_?(&StringLiteral_Safe_position_non_existent_);
    func_?(&StringLiteral_GetSafeGroundedPosition__);
    cRam_? = '\x01';
  }
  this_01 = (this->fields).safePositions;
  if (this_01 != (List_1_SafeSpotData_ *)0x0) {
    this_00 = &(this->fields).currentPreviewedSafePosition;
    if ((this_01->fields)._size <= (this->fields).currentPreviewedSafePosition) {
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_GetSafeGroundedPosition__,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Safe_position_non_existent_,(MethodInfo *)0x0);
      fVar2 = 7.84727e-44;
      ppuStack_3 = &puStack_4;
      fVar5 = 0.0;
      func_?();
      (__return_storage_ptr__->Position).x = (float)puStack_4;
      (__return_storage_ptr__->Position).y = (float)ppuStack_3;
      (__return_storage_ptr__->Position).z = fVar5;
      (__return_storage_ptr__->Rotation).x = fVar2;
      (__return_storage_ptr__->Rotation).y = fStack_6;
      (__return_storage_ptr__->Rotation).z = fStack_7;
      (__return_storage_ptr__->Rotation).w = fStack_8;
      (__return_storage_ptr__->CameraPosition).x = fStack_9;
      (__return_storage_ptr__->CameraPosition).y = fStack_10;
      (__return_storage_ptr__->CameraPosition).z = fStack_11;
      (__return_storage_ptr__->CameraRotation).x = fStack_12;
      (__return_storage_ptr__->CameraRotation).y = fStack_13;
      (__return_storage_ptr__->CameraRotation).z = fStack_14;
      (__return_storage_ptr__->CameraRotation).w = fStack_15;
      return __return_storage_ptr__;
    }
    if (this_01 != (List_1_SafeSpotData_ *)0x0) {
      pSVar16 = mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::
               List_1_SafeSpotData__get_Item
                         ((SafeSpotData *)&puStack_4,this_01,*this_00,
                          MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                         );
      fVar5 = (pSVar16->Position).y;
      fVar2 = (pSVar16->Position).z;
      fVar17 = (pSVar16->Rotation).x;
      (__return_storage_ptr__->Position).x = (pSVar16->Position).x;
      (__return_storage_ptr__->Position).y = fVar5;
      (__return_storage_ptr__->Position).z = fVar2;
      (__return_storage_ptr__->Rotation).x = fVar17;
      fVar5 = (pSVar16->Rotation).z;
      fVar2 = (pSVar16->Rotation).w;
      fVar17 = (pSVar16->CameraPosition).x;
      (__return_storage_ptr__->Rotation).y = (pSVar16->Rotation).y;
      (__return_storage_ptr__->Rotation).z = fVar5;
      (__return_storage_ptr__->Rotation).w = fVar2;
      (__return_storage_ptr__->CameraPosition).x = fVar17;
      fVar5 = (pSVar16->CameraPosition).z;
      fVar2 = (pSVar16->CameraRotation).x;
      fVar17 = (pSVar16->CameraRotation).y;
      (__return_storage_ptr__->CameraPosition).y = (pSVar16->CameraPosition).y;
      (__return_storage_ptr__->CameraPosition).z = fVar5;
      (__return_storage_ptr__->CameraRotation).x = fVar2;
      (__return_storage_ptr__->CameraRotation).y = fVar17;
      fVar5 = (pSVar16->CameraRotation).w;
      (__return_storage_ptr__->CameraRotation).z = (pSVar16->CameraRotation).z;
      (__return_storage_ptr__->CameraRotation).w = fVar5;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar16 = (SafeSpotData *)(*pcVar18)();
  return pSVar16;
}


/* Void ResetSafePostions() */

void Assembly-CSharp.dll::ReviveState::ReviveState_ResetSafePostions
               (ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).safePositions;
  (this->fields).currentPreviewedSafePosition = 0;
  if (pLVar2 != (List_1_SafeSpotData_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar2->fields)._size = 0;
    return;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetSafeGroundedDataIndex(Int32) */

void Assembly-CSharp.dll::ReviveState::ReviveState_SetSafeGroundedDataIndex
               (ReviveState *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_Set_safe_spot_grounded_index__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&index,(MethodInfo *)0x0);
  pLVar2 = (this->fields).safePositions;
  if (pLVar2 != (List_1_SafeSpotData_ *)0x0) {
    IStack_3.m_value = (pLVar2->fields)._size;
    str3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_Set_safe_spot_grounded_index__,pSVar1,::StringLiteral____,str3
                        ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_4 = TypeInfo__UnityEngine__Debug;
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pLVar2 = (this->fields).safePositions;
    if (pLVar2 != (List_1_SafeSpotData_ *)0x0) {
      if (index < (pLVar2->fields)._size) {
        (this->fields).currentPreviewedSafePosition = index;
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SuppressSafeSpotSaving(Single) */

void Assembly-CSharp.dll::ReviveState::ReviveState_SuppressSafeSpotSaving
               (ReviveState *this,float duration,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).safeSpotSuppressedTime = fVar1;
  (this->fields).safeSpotSuppressedDuration = duration;
  return;
}


/* ReviveState() */

void Assembly-CSharp.dll::ReviveState::ReviveState__ctor(ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<SafeSpotData>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_SafeSpotData_ *)
            func_?(TypeInfo__System__Collections__Generic__List<SafeSpotData>);
  if (this_00 != (List_1_SafeSpotData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<SafeSpotData>__List__);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).safePositions = this_00;
    func_?(method_00,this_00);
    (this->fields).minDistanceBetweenSafePositions = 3.0;
    (this->fields).maxNumberOfSafePositions = 3;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_CanSafelySpawn() */

bool Assembly-CSharp.dll::ReviveState::ReviveState_get_CanSafelySpawn
               (ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).safePositions;
  if (pLVar2 != (List_1_SafeSpotData_ *)0x0) {
    return 0 < (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* SafeSpotData get_SafeGroundedData() */

SafeSpotData *
Assembly-CSharp.dll::ReviveState::ReviveState_get_SafeGroundedData
          (SafeSpotData *__return_storage_ptr__,ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).safePositions;
  if (this_00 != (List_1_SafeSpotData_ *)0x0) {
    if ((this_00->fields)._size < 1) {
      func_?(&SStack_1,0,0x38);
      (__return_storage_ptr__->Position).x = SStack_1.Position.x;
      (__return_storage_ptr__->Position).y = SStack_1.Position.y;
      (__return_storage_ptr__->Position).z = SStack_1.Position.z;
      (__return_storage_ptr__->Rotation).x = SStack_1.Rotation.x;
      (__return_storage_ptr__->Rotation).y = SStack_1.Rotation.y;
      (__return_storage_ptr__->Rotation).z = SStack_1.Rotation.z;
      (__return_storage_ptr__->Rotation).w = SStack_1.Rotation.w;
      (__return_storage_ptr__->CameraPosition).x = SStack_1.CameraPosition.x;
      (__return_storage_ptr__->CameraPosition).y = SStack_1.CameraPosition.y;
      (__return_storage_ptr__->CameraPosition).z = SStack_1.CameraPosition.z;
      (__return_storage_ptr__->CameraRotation).x = SStack_1.CameraRotation.x;
      (__return_storage_ptr__->CameraRotation).y = SStack_1.CameraRotation.y;
      (__return_storage_ptr__->CameraRotation).z = SStack_1.CameraRotation.z;
      (__return_storage_ptr__->CameraRotation).w = SStack_1.CameraRotation.w;
      return __return_storage_ptr__;
    }
    if (this_00 != (List_1_SafeSpotData_ *)0x0) {
      pSVar2 = mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::
               List_1_SafeSpotData__get_Item
                         (&SStack_1,this_00,(this->fields).currentPreviewedSafePosition,
                          MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                         );
      fVar3 = (pSVar2->Position).y;
      fVar4 = (pSVar2->Position).z;
      fVar5 = (pSVar2->Rotation).x;
      (__return_storage_ptr__->Position).x = (pSVar2->Position).x;
      (__return_storage_ptr__->Position).y = fVar3;
      (__return_storage_ptr__->Position).z = fVar4;
      (__return_storage_ptr__->Rotation).x = fVar5;
      fVar3 = (pSVar2->Rotation).z;
      fVar4 = (pSVar2->Rotation).w;
      fVar5 = (pSVar2->CameraPosition).x;
      (__return_storage_ptr__->Rotation).y = (pSVar2->Rotation).y;
      (__return_storage_ptr__->Rotation).z = fVar3;
      (__return_storage_ptr__->Rotation).w = fVar4;
      (__return_storage_ptr__->CameraPosition).x = fVar5;
      fVar3 = (pSVar2->CameraPosition).z;
      fVar4 = (pSVar2->CameraRotation).x;
      fVar5 = (pSVar2->CameraRotation).y;
      (__return_storage_ptr__->CameraPosition).y = (pSVar2->CameraPosition).y;
      (__return_storage_ptr__->CameraPosition).z = fVar3;
      (__return_storage_ptr__->CameraRotation).x = fVar4;
      (__return_storage_ptr__->CameraRotation).y = fVar5;
      fVar3 = (pSVar2->CameraRotation).w;
      (__return_storage_ptr__->CameraRotation).z = (pSVar2->CameraRotation).z;
      (__return_storage_ptr__->CameraRotation).w = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar2 = (SafeSpotData *)(*pcVar6)();
  return pSVar2;
}


/* Void set_SafeGroundedData(SafeSpotData) */

void Assembly-CSharp.dll::ReviveState::ReviveState_set_SafeGroundedData
               (ReviveState *this,SafeSpotData value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__Add_SafeSpotData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_);
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  fStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fStack_2 - (this->fields).safeSpotSuppressedTime < (this->fields).safeSpotSuppressedDuration)
  {
    return;
  }
  pLVar3 = (this->fields).safePositions;
  if (pLVar3 != (List_1_SafeSpotData_ *)0x0) {
    if ((pLVar3->fields)._size != 0) {
      pfVar4 = (float *)func_?(&stack0xffffff70,(this->fields).safePositions);
      fStack_5 = pfVar4[2] - value.Position.z;
      uStack_6 = CONCAT44(pfVar4[1] - value.Position.y,*pfVar4 - value.Position.x);
      fVar7 = (float10)func_?(&uStack_6,0);
      fStack_2 = (float)fVar7;
      pfVar4 = &(this->fields).minDistanceBetweenSafePositions;
      if (fStack_2 < *pfVar4 || fStack_2 == *pfVar4) {
        return;
      }
      pLVar3 = (this->fields).safePositions;
      if (pLVar3 == (List_1_SafeSpotData_ *)0x0) goto code_?;
      if ((pLVar3->fields)._size < (this->fields).maxNumberOfSafePositions) {
        pLVar3 = (this->fields).safePositions;
        goto code_?;
      }
      iVar8 = func_?();
      (this->fields).currentPreviewedSafePosition = iVar8;
      pLVar3 = (this->fields).safePositions;
      if (pLVar3 == (List_1_SafeSpotData_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveAt
                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pLVar3,0,
                 MethodInfo__System__Collections__Generic__List<SafeSpotData>__RemoveAt_int_);
      pLVar3 = (this->fields).safePositions;
    }
    if (pLVar3 != (List_1_SafeSpotData_ *)0x0) {
code_?:
      func_?(pLVar3,value.Position.x,value.Position.y,value.Position.z,value.Rotation.x,
                      value.Rotation.y,value.Rotation.z,value.Rotation.w,value.CameraPosition.x,
                      value.CameraPosition.y,value.CameraPosition.z,value.CameraRotation.x,
                      value.CameraRotation.y,value.CameraRotation._8_8_);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

