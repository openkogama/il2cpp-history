
/* SafeSpotData GetSafeGroundedDataAtSelectedIndex() */

SafeSpotData *
Assembly-CSharp.dll::ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
          (SafeSpotData *__return_storage_ptr__,ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).safePositions;
  if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    index = (this->fields).currentPreviewedSafePosition;
    if ((int)pOVar2 <= index) {
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_GetSafeGroundedPosition__,pOVar2,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Safe_position_non_existent_,(MethodInfo *)0x0);
      fVar3 = 7.84727e-44;
      fVar4 = 0.0;
      puVar5 = &UNK_?;
      func_?();
      (__return_storage_ptr__->Position).x = (float)puVar5;
      (__return_storage_ptr__->Position).y = (float)&stack0xffffffc4;
      (__return_storage_ptr__->Position).z = fVar4;
      (__return_storage_ptr__->Rotation).x = fVar3;
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
    pLVar1 = (this->fields).safePositions;
    if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
      pSVar16 = mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::
               List_1_SafeSpotData__get_Item
                         ((SafeSpotData *)&stack0xffffffc4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                         );
      fVar4 = (pSVar16->Position).y;
      fVar3 = (pSVar16->Position).z;
      fVar17 = (pSVar16->Rotation).x;
      (__return_storage_ptr__->Position).x = (pSVar16->Position).x;
      (__return_storage_ptr__->Position).y = fVar4;
      (__return_storage_ptr__->Position).z = fVar3;
      (__return_storage_ptr__->Rotation).x = fVar17;
      fVar4 = (pSVar16->Rotation).z;
      fVar3 = (pSVar16->Rotation).w;
      fVar17 = (pSVar16->CameraPosition).x;
      (__return_storage_ptr__->Rotation).y = (pSVar16->Rotation).y;
      (__return_storage_ptr__->Rotation).z = fVar4;
      (__return_storage_ptr__->Rotation).w = fVar3;
      (__return_storage_ptr__->CameraPosition).x = fVar17;
      fVar4 = (pSVar16->CameraPosition).z;
      fVar3 = (pSVar16->CameraRotation).x;
      fVar17 = (pSVar16->CameraRotation).y;
      (__return_storage_ptr__->CameraPosition).y = (pSVar16->CameraPosition).y;
      (__return_storage_ptr__->CameraPosition).z = fVar4;
      (__return_storage_ptr__->CameraRotation).x = fVar3;
      (__return_storage_ptr__->CameraRotation).y = fVar17;
      fVar4 = (pSVar16->CameraRotation).w;
      (__return_storage_ptr__->CameraRotation).z = (pSVar16->CameraRotation).z;
      (__return_storage_ptr__->CameraRotation).w = fVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentPreviewedSafePosition = 0;
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).safePositions;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetSafeGroundedDataIndex(Int32) */

void Assembly-CSharp.dll::ReviveState::ReviveState_SetSafeGroundedDataIndex
               (ReviveState *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (args == (Object__Array *)0x0) goto code_?;
  if ((StringLiteral_Set_safe_spot_grounded_index__ == (String *)0x0) ||
     (iVar1 = func_?(StringLiteral_Set_safe_spot_grounded_index__,
                              (args->klass->_0).element_class), iVar1 != 0)) {
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Set_safe_spot_grounded_index__;
    iStack_2 = index;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    if ((pOVar3 != (Object *)0x0) &&
       (iVar1 = func_?(pOVar3,(args->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    if ((StringLiteral____ != (String *)0x0) &&
       (iVar1 = func_?(StringLiteral____,(args->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral____;
    pLVar4 = (this->fields).safePositions;
    if (pLVar4 == (List_1_SafeSpotData_ *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    pOStack_5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                           MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                          );
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_5);
    if ((pOVar3 == (Object *)0x0) ||
       (iVar1 = func_?(pOVar3,(args->klass->_0).element_class), iVar1 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar3;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      pLVar4 = (this->fields).safePositions;
      if (pLVar4 != (List_1_SafeSpotData_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                            MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                           );
        if (index < (int)pOVar3) {
          (this->fields).currentPreviewedSafePosition = index;
        }
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
  }
  uVar6 = func_?(0,0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_SafeSpotData_ *)
            func_?(TypeInfo__System__Collections__Generic__List<SafeSpotData>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SafeSpotData>__List__);
  (this->fields).safePositions = this_00;
  (this->fields).minDistanceBetweenSafePositions = 3.0;
  (this->fields).maxNumberOfSafePositions = 3;
  return;
}


/* Boolean get_CanSafelySpawn() */

bool Assembly-CSharp.dll::ReviveState::ReviveState_get_CanSafelySpawn
               (ReviveState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).safePositions;
  if (this_00 != (List_1_SafeSpotData_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    return 0 < (int)pOVar1;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).safePositions;
  if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    if ((int)pOVar2 < 1) {
      fVar3 = 7.84727e-44;
      func_?(&stack0xffffffc4,0);
      (__return_storage_ptr__->Position).x = fVar3;
      (__return_storage_ptr__->Position).y = fStack_4;
      (__return_storage_ptr__->Position).z = fStack_5;
      (__return_storage_ptr__->Rotation).x = fStack_6;
      (__return_storage_ptr__->Rotation).y = fStack_7;
      (__return_storage_ptr__->Rotation).z = fStack_8;
      (__return_storage_ptr__->Rotation).w = fStack_9;
      (__return_storage_ptr__->CameraPosition).x = fStack_10;
      (__return_storage_ptr__->CameraPosition).y = fStack_11;
      (__return_storage_ptr__->CameraPosition).z = fStack_12;
      (__return_storage_ptr__->CameraRotation).x = fStack_13;
      (__return_storage_ptr__->CameraRotation).y = fStack_14;
      (__return_storage_ptr__->CameraRotation).z = fStack_15;
      (__return_storage_ptr__->CameraRotation).w = fStack_16;
      return __return_storage_ptr__;
    }
    pLVar1 = (this->fields).safePositions;
    if (pLVar1 != (List_1_SafeSpotData_ *)0x0) {
      pSVar17 = mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::
               List_1_SafeSpotData__get_Item
                         ((SafeSpotData *)&stack0xffffffc4,pLVar1,
                          (this->fields).currentPreviewedSafePosition,
                          MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Item_int_
                         );
      fVar3 = (pSVar17->Position).y;
      fVar18 = (pSVar17->Position).z;
      fVar19 = (pSVar17->Rotation).x;
      (__return_storage_ptr__->Position).x = (pSVar17->Position).x;
      (__return_storage_ptr__->Position).y = fVar3;
      (__return_storage_ptr__->Position).z = fVar18;
      (__return_storage_ptr__->Rotation).x = fVar19;
      fVar3 = (pSVar17->Rotation).z;
      fVar18 = (pSVar17->Rotation).w;
      fVar19 = (pSVar17->CameraPosition).x;
      (__return_storage_ptr__->Rotation).y = (pSVar17->Rotation).y;
      (__return_storage_ptr__->Rotation).z = fVar3;
      (__return_storage_ptr__->Rotation).w = fVar18;
      (__return_storage_ptr__->CameraPosition).x = fVar19;
      fVar3 = (pSVar17->CameraPosition).z;
      fVar18 = (pSVar17->CameraRotation).x;
      fVar19 = (pSVar17->CameraRotation).y;
      (__return_storage_ptr__->CameraPosition).y = (pSVar17->CameraPosition).y;
      (__return_storage_ptr__->CameraPosition).z = fVar3;
      (__return_storage_ptr__->CameraRotation).x = fVar18;
      (__return_storage_ptr__->CameraRotation).y = fVar19;
      fVar3 = (pSVar17->CameraRotation).w;
      (__return_storage_ptr__->CameraRotation).z = (pSVar17->CameraRotation).z;
      (__return_storage_ptr__->CameraRotation).w = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pSVar17 = (SafeSpotData *)(*pcVar20)();
  return pSVar17;
}


/* Void set_SafeGroundedData(SafeSpotData) */

void Assembly-CSharp.dll::ReviveState::ReviveState_set_SafeGroundedData
               (ReviveState *this,SafeSpotData value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar3 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if ((bVar3 == 0) ||
     (fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fStack_4 - (this->fields).safeSpotSuppressedTime < (this->fields).safeSpotSuppressedDuration))
  {
    return;
  }
  pLVar5 = (this->fields).safePositions;
  if (pLVar5 != (List_1_SafeSpotData_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                        MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
    pLVar5 = (this->fields).safePositions;
    if (pOVar6 == (Object *)0x0) {
      if (pLVar5 != (List_1_SafeSpotData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::List_1_SafeSpotData__Add
                  (pLVar5,value,
                   MethodInfo__System__Collections__Generic__List<SafeSpotData>__Add_SafeSpotData_);
        return;
      }
    }
    else if (pLVar5 != (List_1_SafeSpotData_ *)0x0) {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
      JsonProperty]::
      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                 MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__);
      puVar7 = (undefined4 *)func_?(&stack0xffffff70,pLVar5);
      uStack_8 = *puVar7;
      uStack_9 = puVar7[1];
      fStack_10 = (float)puVar7[2];
      uStack_11 = puVar7[3];
      uStack_12 = puVar7[4];
      uStack_13 = puVar7[5];
      uStack_14 = puVar7[6];
      uStack_15 = puVar7[7];
      uStack_16 = puVar7[8];
      uStack_17 = puVar7[9];
      uStack_18 = puVar7[10];
      uStack_19 = puVar7[0xb];
      uStack_20 = *(undefined8 *)(puVar7 + 0xc);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = (float)uStack_9;
      a.x = (float)uStack_8;
      a.z = fStack_10;
      pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_22,a,value.Position,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar21->x;
      uStack_1._4_4_ = pVVar21->y;
      fStack_2 = pVVar21->z;
      fVar23 = (float10)func_?();
      fStack_4 = (float)fVar23;
      pfVar24 = &(this->fields).minDistanceBetweenSafePositions;
      if (fStack_4 < *pfVar24 || fStack_4 == *pfVar24) {
        return;
      }
      pLVar5 = (this->fields).safePositions;
      if (pLVar5 != (List_1_SafeSpotData_ *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                            MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                           );
        pLVar5 = (this->fields).safePositions;
        if ((this->fields).maxNumberOfSafePositions <= (int)pOVar6) {
          if (pLVar5 == (List_1_SafeSpotData_ *)0x0) goto code_?;
          pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                              MethodInfo__System__Collections__Generic__List<SafeSpotData>__get_Count__
                             );
          iVar25 = (this->fields).maxNumberOfSafePositions;
          if ((int)pOVar6 < iVar25) {
            return;
          }
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          iVar26 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                            ((float)(iVar25 / 2),(MethodInfo *)0x0);
          (this->fields).currentPreviewedSafePosition = iVar26;
          pLVar5 = (this->fields).safePositions;
          if (pLVar5 == (List_1_SafeSpotData_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::
          List_1_SafeSpotData__RemoveAt
                    (pLVar5,0,
                     MethodInfo__System__Collections__Generic__List<SafeSpotData>__RemoveAt_int_);
          pLVar5 = (this->fields).safePositions;
        }
        if (pLVar5 != (List_1_SafeSpotData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[SafeSpotData]::List_1_SafeSpotData__Add
                    (pLVar5,value,
                     MethodInfo__System__Collections__Generic__List<SafeSpotData>__Add_SafeSpotData_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

