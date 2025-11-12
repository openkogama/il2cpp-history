
/* Void CreateLimbController(BodyData+PartIndex, MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_CreateLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MVWorldObjectClient *avatarWO,MVBody *body,AvatarLimbManager *limbManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LimbController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dead);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (partIndex == BodyData_PartIndex__Enum_Head) {
    this_00 = (LimbController *)FUN_?(TypeInfo__LimbController);
    (this_00->fields).interpolationSpeed = 5.0;
    pLVar1 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar2 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (pLVar2 != (List_1_System_String_ *)0x0) {
      FUN_?(pLVar2,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uVar4._0_4_ = (pQVar3->identityQuaternion).x;
      uVar4._4_4_ = (pQVar3->identityQuaternion).y;
      uVar5._0_4_ = (pQVar3->identityQuaternion).z;
      uVar5._4_4_ = (pQVar3->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      aQStack_6[0].x = (pQVar3->identityQuaternion).x;
      aQStack_6[0].y = (pQVar3->identityQuaternion).y;
      aQStack_6[0].z = (pQVar3->identityQuaternion).z;
      aQStack_6[0].w = (pQVar3->identityQuaternion).w;
      QStack_7._0_8_ = uVar4;
      QStack_7._8_8_ = uVar5;
      LimbController::LimbController_Initialize
                (this_00,limbManager,avatarWO,body,BodyData_PartIndex__Enum_Head,&QStack_7,
                 aQStack_6,pLVar1,pLVar2,_UNK_?,_UNK_?,(MethodInfo *)0x0);
      this_01 = (this->fields).limbControllers;
      if (this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)body >> 8),2);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    ->klass->rgctx_data[0x22].method;
        key = 0;
        goto code_?;
      }
    }
  }
  else if (partIndex == BodyData_PartIndex__Enum_Torso) {
    this_00 = (LimbController *)FUN_?(TypeInfo__LimbController);
    (this_00->fields).interpolationSpeed = 5.0;
    pLVar1 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar2 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (pLVar2 != (List_1_System_String_ *)0x0) {
      FUN_?(pLVar2,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uVar8._0_4_ = (pQVar3->identityQuaternion).x;
      uVar8._4_4_ = (pQVar3->identityQuaternion).y;
      uVar9._0_4_ = (pQVar3->identityQuaternion).z;
      uVar9._4_4_ = (pQVar3->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      aQStack_6[0].x = (pQVar3->identityQuaternion).x;
      aQStack_6[0].y = (pQVar3->identityQuaternion).y;
      aQStack_6[0].z = (pQVar3->identityQuaternion).z;
      aQStack_6[0].w = (pQVar3->identityQuaternion).w;
      QStack_7._0_8_ = uVar8;
      QStack_7._8_8_ = uVar9;
      LimbController::LimbController_Initialize
                (this_00,limbManager,avatarWO,body,BodyData_PartIndex__Enum_Torso,&QStack_7,
                 aQStack_6,pLVar1,pLVar2,_UNK_?,_UNK_?,(MethodInfo *)0x0);
      this_01 = (this->fields).limbControllers;
      if (this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)body >> 8),2);
        key = 1;
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    ->klass->rgctx_data[0x22].method;
        goto code_?;
      }
    }
  }
  else if (partIndex == BodyData_PartIndex__Enum_RArm) {
    this_00 = (LimbController *)FUN_?(TypeInfo__LimbController);
    (this_00->fields).interpolationSpeed = 5.0;
    pLVar1 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar2 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (pLVar2 != (List_1_System_String_ *)0x0) {
      FUN_?(pLVar2,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lStack_10 = (ulonglong)_UNK_? << 0x20;
      uStack_11 = 0;
      QStack_7.x = 0.0;
      QStack_7.y = 0.0;
      QStack_7.z = 0.0;
      QStack_7.w = 0.0;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&lStack_10,&QStack_7);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lStack_13 = CONCAT44(_UNK_?,_UNK_?);
      uStack_14 = _UNK_?;
      aQStack_6[0].x = 0.0;
      aQStack_6[0].y = 0.0;
      aQStack_6[0].z = 0.0;
      aQStack_6[0].w = 0.0;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&lStack_13,aQStack_6);
      LimbController::LimbController_Initialize
                (this_00,limbManager,avatarWO,body,BodyData_PartIndex__Enum_RArm,&QStack_7,
                 aQStack_6,pLVar1,pLVar2,_UNK_?,_UNK_?,(MethodInfo *)0x0);
      this_01 = (this->fields).limbControllers;
      if (this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)body >> 8),2);
        key = 2;
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    ->klass->rgctx_data[0x22].method;
        goto code_?;
      }
    }
  }
  else {
    if (partIndex != BodyData_PartIndex__Enum_LArm) {
      return;
    }
    this_00 = (LimbController *)FUN_?(TypeInfo__LimbController);
    (this_00->fields).interpolationSpeed = 5.0;
    pLVar1 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar2 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (pLVar2 != (List_1_System_String_ *)0x0) {
      FUN_?(pLVar2,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lStack_13 = (ulonglong)_UNK_? << 0x20;
      uStack_14 = 0;
      aQStack_6[0].x = 0.0;
      aQStack_6[0].y = 0.0;
      aQStack_6[0].z = 0.0;
      aQStack_6[0].w = 0.0;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&lStack_13,aQStack_6);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lStack_10 = CONCAT44(_UNK_?,_UNK_?);
      uStack_11 = _UNK_?;
      QStack_7.x = 0.0;
      QStack_7.y = 0.0;
      QStack_7.z = 0.0;
      QStack_7.w = 0.0;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&lStack_10,&QStack_7);
      LimbController::LimbController_Initialize
                (this_00,limbManager,avatarWO,body,BodyData_PartIndex__Enum_LArm,aQStack_6,
                 &QStack_7,pLVar1,pLVar2,_UNK_?,_UNK_?,(MethodInfo *)0x0);
      this_01 = (this->fields).limbControllers;
      if (this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)body >> 8),2);
        key = 3;
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    ->klass->rgctx_data[0x22].method;
code_?:
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,(Object *)this_00,
                   behavior,method_00);
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* LimbController GetLimbController(BodyData+PartIndex) */

LimbController *
Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
          (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
  ;
  if (bVar1 == 0) {
    return (LimbController *)0x0;
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).limbControllers;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (LimbController *)(*pcVar3)();
    return pLVar4;
  }
  uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,partIndex,
                     MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < (int)uVar5) {
    pDVar6 = (this_00->fields)._entries;
    if (pDVar6 == (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)0x0
       ) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pLVar4 = (LimbController *)(*pcVar3)();
      return pLVar4;
    }
    if (uVar5 < (uint)pDVar6->max_length) {
      return *(LimbController **)&pDVar6->vector[(int)uVar5].value.y;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (LimbController *)(*pcVar3)();
    return pLVar4;
  }
  uVar7 = func_?(pMVar2->klass->rgctx_data,0xe);
  key = (Object *)func_?(uVar7);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException(key,(MethodInfo *)0x0);
  pcVar3 = (code *)swi(3);
  pLVar4 = (LimbController *)(*pcVar3)();
  return pLVar4;
}


/* Boolean HasLimbController(BodyData+PartIndex) */

bool Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_HasLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__ContainsKey_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BodyData__PartIndex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Returning_null_instead);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LimbRotator_does_not_have_a_limb);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).limbControllers;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,partIndex,
                       MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__ContainsKey_BodyData__PartIndex_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      EStack_2.klass = (Enum__Class *)TypeInfo__BodyData__PartIndex;
      EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
      BStack_3 = partIndex;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_LimbRotator_does_not_have_a_limb,pSVar4,
                          StringLiteral___Returning_null_instead,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return 0;
    }
    return 1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Initialize(MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
               (AvatarLimbManager_LimbRotator *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarLimbManager *limbManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).limbControllers = (Dictionary_2_BodyData_PartIndex_LimbController_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (((body == (MVBody *)0x0) ||
      (pMVar6 = (body->fields).bodyObject, pMVar6 == (MVBodyObject *)0x0)) ||
     (pBVar7 = (pMVar6->fields).boneAnimation, pBVar7 == (BoneAnimation *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar9 = (pBVar7->fields).OnAnimationChange;
  this_01 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_,
             (MethodInfo *)0x0);
  pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar9,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar11 = TypeInfo__System__Action<System::String>;
  if (pDVar10 == (Delegate *)0x0) {
    (pBVar7->fields).OnAnimationChange = (Action_1_String_ *)0x0;
  }
  else {
    pAVar9 = (Action_1_String_ *)FUN_?(pDVar10,TypeInfo__System__Action<System::String>);
    if (pAVar9 == (Action_1_String_ *)0x0) {
      FUN_?(pDVar10,pAVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pBVar7->fields).OnAnimationChange = pAVar9;
    pAVar11 = TypeInfo__System__Action<System::String>;
    lVar3 = FUN_?(pDVar10,TypeInfo__System__Action<System::String>);
    if (lVar3 == 0) {
      FUN_?(pDVar10,pAVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pBVar7->fields).OnAnimationChange >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  AvatarLimbManager_LimbRotator_CreateLimbController
            (this,BodyData_PartIndex__Enum_Torso,avatarWO,body,limbManager,(MethodInfo *)0x0);
  AvatarLimbManager_LimbRotator_CreateLimbController
            (this,BodyData_PartIndex__Enum_Head,avatarWO,body,limbManager,(MethodInfo *)0x0);
  AvatarLimbManager_LimbRotator_CreateLimbController
            (this,BodyData_PartIndex__Enum_RArm,avatarWO,body,limbManager,(MethodInfo *)0x0);
  AvatarLimbManager_LimbRotator_CreateLimbController
            (this,BodyData_PartIndex__Enum_LArm,avatarWO,body,limbManager,(MethodInfo *)0x0);
  return;
}


/* Void OnAnimationChange(String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_OnAnimationChange
               (AvatarLimbManager_LimbRotator *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<BodyData::PartIndex,_LimbController>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).limbControllers;
  if (pDStack_1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  uStack_8 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_9 = 2;
  uStack_10 = 0;
  uStack_11 = 0;
  DStack_12._version = (undefined4)uStack_8;
  DStack_12._index = uStack_8._4_4_;
  DStack_12._current.key = 0;
  DStack_12._current._4_4_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = pDStack_1;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                      );
    if (bVar13 == 0) {
      return;
    }
    if (DStack_12._current.value == (Object *)0x0) break;
    DStack_12._current.value[9].klass = (Object__Class *)newAnimation;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(DStack_12._current.value + 9) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLimbRotation(BodyData+PartIndex, Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_SetLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               Quaternion *limbYawRotation,Quaternion *limbPitchRotation,float duration,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (*(char *)&pOVar2[10].monitor != '\0') {
      return;
    }
    pOVar3 = *(Object__Class **)limbYawRotation;
    pMVar4 = *(MonitorData **)&limbYawRotation->z;
    *(undefined1 *)&pOVar2[8].monitor = 1;
    pOVar2[4].klass = pOVar3;
    pOVar2[4].monitor = pMVar4;
    *(undefined4 *)((longlong)&pOVar2[7].klass + 4) = 0;
    pOVar3 = *(Object__Class **)limbPitchRotation;
    pMVar4 = *(MonitorData **)&limbPitchRotation->z;
    *(undefined4 *)((longlong)&pOVar2[8].klass + 4) = 0;
    *(float *)&pOVar2[8].klass = duration;
    pOVar2[5].klass = pOVar3;
    pOVar2[5].monitor = pMVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartBlendingWithAnimation(BodyData+PartIndex, String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StartBlendingWithAnimation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (this_01 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                          ), this_01 != (LimbController *)0x0)) {
    LimbController::LimbController_StartBlendingWithAnimation(this_01,animation,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopBlendingWithAnimation(BodyData+PartIndex, String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StopBlendingWithAnimation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Object_ *)pOVar2[9].monitor;
    index = 0;
    if (this_01 != (List_1_System_Object_ *)0x0) {
      lVar3 = 0x20;
      while( true ) {
        if ((this_01->fields)._size <= (int)index) {
          return;
        }
        if ((uint)(this_01->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pOVar5 = (this_01->fields)._items;
        if (pOVar5 == (Object__Array *)0x0) break;
        if ((uint)pOVar5->max_length <= index) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar6 = *(String **)((longlong)pOVar5->vector + lVar3 + -0x20);
        if (pSVar6 == animation) {
code_?:
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    (this_01,index,
                     MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
          return;
        }
        if (((pSVar6 == (String *)0x0) || (animation == (String *)0x0)) ||
           ((pSVar6->fields)._stringLength != (animation->fields)._stringLength)) {
          index = index + 1;
          lVar3 = lVar3 + 8;
        }
        else {
          bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar6->fields)._firstChar,
                             (uint8_t *)&(animation->fields)._firstChar,
                             (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar1 != 0) goto code_?;
          index = index + 1;
          lVar3 = lVar3 + 8;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StopLimbRotation(BodyData+PartIndex) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StopLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (*(char *)&pOVar1[10].monitor == '\0') {
        *(undefined1 *)&pOVar1[8].monitor = 0;
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TrySetLimbRotation(BodyData+PartIndex, Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_TrySetLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               Quaternion *limbYawRotation,Quaternion *limbPitchRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (*(char *)&pOVar2[10].monitor != '\0') {
      return;
    }
    pOVar3 = *(Object__Class **)limbYawRotation;
    pMVar4 = *(MonitorData **)&limbYawRotation->z;
    *(undefined1 *)&pOVar2[8].monitor = 1;
    *(undefined4 *)((longlong)&pOVar2[7].klass + 4) = 0;
    pOVar2[4].klass = pOVar3;
    pOVar2[4].monitor = pMVar4;
    pOVar2[8].klass = (Object__Class *)0x0;
    pMVar4 = *(MonitorData **)&limbPitchRotation->z;
    pOVar2[5].klass = *(Object__Class **)limbPitchRotation;
    pOVar2[5].monitor = pMVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateLimbs() */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_UpdateLimbs
               (AvatarLimbManager_LimbRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isActive != 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 == (MainCameraManager *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pMVar1->fields).blueModeEnabled == 0) {
      pDStack_3 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).limbControllers;
      if (pDStack_3 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      uStack_4 = 0;
      uStack_5 = 0;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pDStack_3 >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      uStack_10 = (ulonglong)(uint)(pDStack_3->fields)._version;
      uStack_11 = 2;
      DStack_12._version = (undefined4)uStack_10;
      DStack_12._index = uStack_10._4_4_;
      DStack_12._current.key = 0;
      DStack_12._current._4_4_ = 0;
      DStack_12._current.value = (Object *)0x0;
      DStack_12._getEnumeratorRetType = 2;
      DStack_12._36_4_ = 0;
      DStack_12._dictionary = pDStack_3;
      while (bVar13 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_12,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                               ), bVar13 != 0) {
        if ((LimbController *)DStack_12._current.value == (LimbController *)0x0) {
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LimbController::LimbController_UpdateRotation
                  ((LimbController *)DStack_12._current.value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}

