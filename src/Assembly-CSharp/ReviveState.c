
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
  this_01 = (List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_ *)
            (this->fields).safePositions;
  if (this_01 != (List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_ *)0x0) {
    this_00 = &(this->fields).currentPreviewedSafePosition;
    if ((this_01->fields)._size <= (this->fields).currentPreviewedSafePosition) {
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_GetSafeGroundedPosition__,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Safe_position_non_existent_,(MethodInfo *)0x0);
      pRVar2 = (RenderChainCommand *)0x38;
      pMStack_3 = (Material *)&pMStack_4;
      pMVar5 = (MaterialPropertyBlock *)0x0;
      func_?();
      (__return_storage_ptr__->Position).x = (float)pMStack_4;
      (__return_storage_ptr__->Position).y = (float)pMStack_3;
      (__return_storage_ptr__->Position).z = (float)pMVar5;
      (__return_storage_ptr__->Rotation).x = (float)pRVar2;
      (__return_storage_ptr__->Rotation).y = (float)pUStack_6;
      (__return_storage_ptr__->Rotation).z = (float)pTStack_7;
      (__return_storage_ptr__->Rotation).w = (float)pTStack_8;
      (__return_storage_ptr__->CameraPosition).x = fStack_9;
      (__return_storage_ptr__->CameraPosition).y = (float)puStack_10;
      (__return_storage_ptr__->CameraPosition).z = fStack_11;
      (__return_storage_ptr__->CameraRotation).x = fStack_12;
      (__return_storage_ptr__->CameraRotation).y = (float)puStack_13;
      (__return_storage_ptr__->CameraRotation).z = (float)iStack_14;
      (__return_storage_ptr__->CameraRotation).w = (float)iStack_15;
      return __return_storage_ptr__;
    }
    if (this_01 != (List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_ *)0x0) {
      pRVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderChain+RenderNodeData]::
                List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData__get_Item
                          ((RenderChain_RenderNodeData *)&pMStack_4,this_01,*this_00,
                           MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                          );
      pMVar17 = pRVar16->initialMaterial;
      pMVar5 = pRVar16->matPropBlock;
      pRVar2 = pRVar16->firstCommand;
      (__return_storage_ptr__->Position).x = (float)pRVar16->standardMaterial;
      (__return_storage_ptr__->Position).y = (float)pMVar17;
      (__return_storage_ptr__->Position).z = (float)pMVar5;
      (__return_storage_ptr__->Rotation).x = (float)pRVar2;
      pTVar18 = pRVar16->vectorAtlas;
      pTVar19 = pRVar16->shaderInfoAtlas;
      fVar20 = pRVar16->dpiScale;
      (__return_storage_ptr__->Rotation).y = (float)pRVar16->device;
      (__return_storage_ptr__->Rotation).z = (float)pTVar18;
      (__return_storage_ptr__->Rotation).w = (float)pTVar19;
      (__return_storage_ptr__->CameraPosition).x = fVar20;
      fVar20 = (float)(pRVar16->transformConstants).m_Stride;
      fVar21 = (float)(pRVar16->transformConstants).m_Length;
      puVar22 = (pRVar16->clipRectConstants).m_Buffer;
      (__return_storage_ptr__->CameraPosition).y = (float)(pRVar16->transformConstants).m_Buffer;
      (__return_storage_ptr__->CameraPosition).z = fVar20;
      (__return_storage_ptr__->CameraRotation).x = fVar21;
      (__return_storage_ptr__->CameraRotation).y = (float)puVar22;
      iVar23 = (pRVar16->clipRectConstants).m_Length;
      (__return_storage_ptr__->CameraRotation).z = (float)(pRVar16->clipRectConstants).m_Stride;
      (__return_storage_ptr__->CameraRotation).w = (float)iVar23;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pSVar25 = (SafeSpotData *)(*pcVar24)();
  return pSVar25;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SafeSpotData>__List__);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).safePositions = this_00;
  func_?(method_00,this_00);
  (this->fields).minDistanceBetweenSafePositions = 3.0;
  (this->fields).maxNumberOfSafePositions = 3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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
  this_00 = (List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_ *)
            (this->fields).safePositions;
  if (this_00 != (List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_ *)0x0) {
    if ((this_00->fields)._size < 1) {
      func_?(&RStack_1,0,0x38);
      (__return_storage_ptr__->Position).x = (float)RStack_1.standardMaterial;
      (__return_storage_ptr__->Position).y = (float)RStack_1.initialMaterial;
      (__return_storage_ptr__->Position).z = (float)RStack_1.matPropBlock;
      (__return_storage_ptr__->Rotation).x = (float)RStack_1.firstCommand;
      (__return_storage_ptr__->Rotation).y = (float)RStack_1.device;
      (__return_storage_ptr__->Rotation).z = (float)RStack_1.vectorAtlas;
      (__return_storage_ptr__->Rotation).w = (float)RStack_1.shaderInfoAtlas;
      (__return_storage_ptr__->CameraPosition).x = RStack_1.dpiScale;
      (__return_storage_ptr__->CameraPosition).y = (float)RStack_1.transformConstants.m_Buffer;
      (__return_storage_ptr__->CameraPosition).z = (float)RStack_1.transformConstants.m_Stride;
      (__return_storage_ptr__->CameraRotation).x = (float)RStack_1.transformConstants.m_Length;
      (__return_storage_ptr__->CameraRotation).y = (float)RStack_1.clipRectConstants.m_Buffer;
      (__return_storage_ptr__->CameraRotation).z = (float)RStack_1.clipRectConstants.m_Stride;
      (__return_storage_ptr__->CameraRotation).w = (float)RStack_1.clipRectConstants.m_Length;
      return __return_storage_ptr__;
    }
    if (this_00 != (List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_ *)0x0) {
      pRVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderChain+RenderNodeData]::
                List_1_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData__get_Item
                          (&RStack_1,this_00,(this->fields).currentPreviewedSafePosition,
                           MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                          );
      pMVar3 = pRVar2->initialMaterial;
      pMVar4 = pRVar2->matPropBlock;
      pRVar5 = pRVar2->firstCommand;
      (__return_storage_ptr__->Position).x = (float)pRVar2->standardMaterial;
      (__return_storage_ptr__->Position).y = (float)pMVar3;
      (__return_storage_ptr__->Position).z = (float)pMVar4;
      (__return_storage_ptr__->Rotation).x = (float)pRVar5;
      pTVar6 = pRVar2->vectorAtlas;
      pTVar7 = pRVar2->shaderInfoAtlas;
      fVar8 = pRVar2->dpiScale;
      (__return_storage_ptr__->Rotation).y = (float)pRVar2->device;
      (__return_storage_ptr__->Rotation).z = (float)pTVar6;
      (__return_storage_ptr__->Rotation).w = (float)pTVar7;
      (__return_storage_ptr__->CameraPosition).x = fVar8;
      fVar8 = (float)(pRVar2->transformConstants).m_Stride;
      fVar9 = (float)(pRVar2->transformConstants).m_Length;
      puVar10 = (pRVar2->clipRectConstants).m_Buffer;
      (__return_storage_ptr__->CameraPosition).y = (float)(pRVar2->transformConstants).m_Buffer;
      (__return_storage_ptr__->CameraPosition).z = fVar8;
      (__return_storage_ptr__->CameraRotation).x = fVar9;
      (__return_storage_ptr__->CameraRotation).y = (float)puVar10;
      iVar11 = (pRVar2->clipRectConstants).m_Length;
      (__return_storage_ptr__->CameraRotation).z = (float)(pRVar2->clipRectConstants).m_Stride;
      (__return_storage_ptr__->CameraRotation).w = (float)iVar11;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pSVar13 = (SafeSpotData *)(*pcVar12)();
  return pSVar13;
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
  uStack_2._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
  ;
  if (uStack_2._4_4_ - (this->fields).safeSpotSuppressedTime <
      (this->fields).safeSpotSuppressedDuration) {
    return;
  }
  pLVar3 = (this->fields).safePositions;
  if (pLVar3 != (List_1_SafeSpotData_ *)0x0) {
    if ((pLVar3->fields)._size != 0) {
      pfVar4 = (float *)func_?(auStack_5,(this->fields).safePositions,
                                        (pLVar3->fields)._size + -1,
                                        MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                                       );
      fStack_6 = pfVar4[4];
      fStack_7 = pfVar4[5];
      fStack_8 = pfVar4[6];
      fStack_9 = pfVar4[7];
      fStack_10 = pfVar4[8];
      fStack_11 = pfVar4[9];
      fStack_12 = pfVar4[10];
      fStack_13 = pfVar4[0xb];
      fStack_14 = *pfVar4 - value.Position.x;
      uStack_15 = *(undefined8 *)(pfVar4 + 0xc);
      uStack_2._0_4_ = pfVar4[1] - value.Position.y;
      fStack_16 = pfVar4[2] - value.Position.z;
      uStack_2._4_4_ = fStack_16;
      fVar17 = (float10)func_?(&fStack_14,0);
      uStack_2._4_4_ = (float)fVar17;
      pfVar4 = &(this->fields).minDistanceBetweenSafePositions;
      if (uStack_2._4_4_ < *pfVar4 || uStack_2._4_4_ == *pfVar4) {
        return;
      }
      pLVar3 = (this->fields).safePositions;
      if (pLVar3 == (List_1_SafeSpotData_ *)0x0) goto code_?;
      if ((pLVar3->fields)._size < (this->fields).maxNumberOfSafePositions) {
        pLVar3 = (this->fields).safePositions;
        goto code_?;
      }
      iVar18 = (this->fields).maxNumberOfSafePositions;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      uStack_2._4_4_ = (float)(iVar18 / 2);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      uStack_2 = (double)uStack_2._4_4_;
      func_?(SUB84(uStack_2,0),(int)((ulonglong)uStack_2 >> 0x20));
      iVar19 = func_?();
      (this->fields).currentPreviewedSafePosition = iVar19;
      pLVar3 = (this->fields).safePositions;
      if (pLVar3 == (List_1_SafeSpotData_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      Implementation::UIRStylePainter+RepeatRectUV]::
      List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                ((List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
                 pLVar3,0,
                 MethodInfo__System__Collections__Generic__List<SafeSpotData>__RemoveAt_int_);
      pLVar3 = (this->fields).safePositions;
    }
    if (pLVar3 != (List_1_SafeSpotData_ *)0x0) {
code_?:
      func_?(pLVar3,value.Position.x,value.Position.y,value.Position.z,value.Rotation.x,
                      value.Rotation.y,value.Rotation.z,value.Rotation.w,value.CameraPosition.x,
                      value.CameraPosition.y,value.CameraPosition.z,value.CameraRotation.x,
                      value.CameraRotation.y,value.CameraRotation.z,value.CameraRotation.w,
                      MethodInfo__System__Collections__Generic__List<SafeSpotData>__Add_SafeSpotData_
                     );
      return;
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

