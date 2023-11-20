
/* Void CreateLimbController(BodyData+PartIndex, MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_CreateLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MVWorldObjectClient *avatarWO,MVBody *body,AvatarLimbManager *limbManager,
               MethodInfo *method)

{
  key = partIndex;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                   );
    func_?(&TypeInfo__LimbController);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Dead);
    func_?(&StringLiteral_Jump);
    cRam_? = '\x01';
  }
  switch(partIndex) {
  case BodyData_PartIndex__Enum_Head:
    this_01 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_01,(MethodInfo *)0x0);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    in_stack_1.genericMethod =
         (Il2CppGenericMethod *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               in_stack_1.genericMethod,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if ((List_1_System_String_ *)in_stack_1.genericMethod == (List_1_System_String_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)in_stack_1.genericMethod,(Object *)StringLiteral_Dead
               ,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_)
    ;
    pQVar2 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_3);
    pIVar4 = (Il2CppRGCTXData *)pQVar2->x;
    __return_storage_ptr__ = (_union_154)pQVar2->z;
    pIVar5 = (Il2CppRGCTXData *)&UNK_?;
    p_Var4 = (_union_154 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)__return_storage_ptr__.methodMetadataHandle,
                        (MVWorldObject *)pQVar2->w,(MethodInfo *)in_stack_6);
    if (this_01 == (LimbController *)0x0) goto code_?;
    unaff_EBP.rgctx_data = (Il2CppRGCTXData *)0x0;
    maxPitch.genericMethod = (Il2CppGenericMethod *)0x42340000;
    in_stack_7 = (Il2CppType *)0x42b20000;
    break;
  case BodyData_PartIndex__Enum_Torso:
    this_01 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_01,(MethodInfo *)0x0);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    in_stack_1.genericMethod =
         (Il2CppGenericMethod *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    maxPitch.genericMethod = in_stack_1.genericMethod;
    unaff_EBP = (_union_154)MethodInfo__System__Collections__Generic__List<System::String>__List__;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               in_stack_1.genericMethod,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if ((List_1_System_String_ *)in_stack_1.genericMethod == (List_1_System_String_ *)0x0)
    goto code_?;
    limbManager = (AvatarLimbManager *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)in_stack_1.genericMethod,(Object *)StringLiteral_Dead
               ,MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_)
    ;
    pQVar2 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_8);
    pIVar4 = (Il2CppRGCTXData *)pQVar2->x;
    pIVar5 = (Il2CppRGCTXData *)pQVar2->y;
    __return_storage_ptr__ = (_union_154)pQVar2->z;
    p_Var4 = (_union_154 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffe0,(MVWorldObject *)0x0,in_stack_9);
    if (this_01 == (LimbController *)0x0) goto code_?;
    in_stack_7 = (Il2CppType *)0x42b40000;
    break;
  case BodyData_PartIndex__Enum_RArm:
    this_01 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_01,(MethodInfo *)0x0);
    pLVar10 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pLVar10,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar11 = (List_1_System_Object_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar11,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (pLVar11 == (List_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (pLVar11,(Object *)StringLiteral_Dead,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (pLVar11,(Object *)StringLiteral_Jump,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    pQVar2 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_12);
    pIVar4 = (Il2CppRGCTXData *)pQVar2->x;
    pIVar5 = (Il2CppRGCTXData *)pQVar2->y;
    __return_storage_ptr__ = (_union_154)pQVar2->z;
    func_?();
    p_Var4 = (_union_154 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffe0,(MVWorldObject *)0x0,
                        (MethodInfo *)&stack0xffffffd0);
    maxPitch.genericMethod = (Il2CppGenericMethod *)0x438d0000;
    _Var7 = (_union_154)p_Var4->rgctx_data;
    pIVar13 = p_Var4[1].rgctx_data;
    pIVar14 = p_Var4[2].rgctx_data;
    _Var11 = (_union_154)p_Var4[3].methodMetadataHandle;
    func_?();
    _Var6 = _Var7;
    partIndex = (BodyData_PartIndex__Enum)_Var11;
    goto joined_?;
  case BodyData_PartIndex__Enum_LArm:
    this_01 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_01,(MethodInfo *)0x0);
    pLVar10 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pLVar10,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar11 = (List_1_System_Object_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar11,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (pLVar11 == (List_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (pLVar11,(Object *)StringLiteral_Dead,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (pLVar11,(Object *)StringLiteral_Jump,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    pQVar2 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_12);
    _Var6 = (_union_154)pQVar2->w;
    func_?();
    p_Var4 = (_union_154 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,
                        (MethodInfo *)&stack0xffffffe0);
    maxPitch.genericMethod = (Il2CppGenericMethod *)0x42986666;
    _Var7 = (_union_154)p_Var4->rgctx_data;
    pIVar4 = p_Var4[1].rgctx_data;
    pIVar5 = p_Var4[2].rgctx_data;
    __return_storage_ptr__ = (_union_154)p_Var4[3].rgctx_data;
    func_?();
    pIVar13 = pIVar4;
    pIVar14 = pIVar5;
    _Var11 = __return_storage_ptr__;
    partIndex = (BodyData_PartIndex__Enum)_Var6;
joined_?:
    if (this_01 == (LimbController *)0x0) goto code_?;
    goto code_?;
  default:
    goto code_?;
  }
  _Var6 = (_union_154)p_Var4->rgctx_data;
  pIVar13 = p_Var4[1].rgctx_data;
  pIVar14 = p_Var4[2].rgctx_data;
  _Var11 = (_union_154)p_Var4[3].rgctx_data;
  _Var7 = _Var6;
code_?:
  modelRotationOffset.y = (float)pIVar5;
  modelRotationOffset.x = (float)pIVar4;
  modelRotationOffset.z = (float)__return_storage_ptr__.rgctx_data;
  modelRotationOffset.w = (float)_Var6.rgctx_data;
  originalRotation.y = (float)pIVar13;
  originalRotation.x = (float)_Var7.rgctx_data;
  originalRotation.z = (float)pIVar14;
  originalRotation.w = (float)_Var11.rgctx_data;
  LimbController::LimbController_Initialize
            (this_01,limbManager,avatarWO,body,key,modelRotationOffset,originalRotation,
             (List_1_System_String_ *)partIndex,
             (List_1_System_String_ *)in_stack_1.genericMethod,(float)in_stack_7,
             (float)maxPitch,(MethodInfo *)unaff_EBP.methodMetadataHandle);
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
              );
code_?:
    return;
  }
code_?:
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* LimbController GetLimbController(BodyData+PartIndex) */

LimbController *
Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
          (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return (LimbController *)0x0;
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    pLVar2 = (LimbController *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                       );
    return pLVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar2 = (LimbController *)(*pcVar3)();
  return pLVar2;
}


/* Boolean HasLimbController(BodyData+PartIndex) */

bool Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_HasLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__ContainsKey_BodyData__PartIndex_
                   );
    func_?(&TypeInfo__BodyData__PartIndex);
    func_?(&StringLiteral___Returning_null_instead);
    func_?(&StringLiteral_LimbRotator_does_not_have_a_limb);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,partIndex,
                       MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__ContainsKey_BodyData__PartIndex_
                      );
    if (bVar1 == 0) {
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                         ((Enum *)&stack0xfffffff0,(MethodInfo *)0xffffffff);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_LimbRotator_does_not_have_a_limb,pSVar2,
                          StringLiteral___Returning_null_instead,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return 0;
    }
    return 1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Initialize(MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
               (AvatarLimbManager_LimbRotator *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarLimbManager *limbManager,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                   );
    func_?(&MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_);
    cRam_? = '\x01';
  }
  this_01 = (Action_1_String___Class *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
            );
  (this->fields).limbControllers = (Dictionary_2_BodyData_PartIndex_LimbController_ *)this_01;
  func_?(&this->fields,this_01);
  pAVar1 = (Action_1_String___Class *)this;
  if (body == (MVBody *)0x0) {
code_?:
    this = (AvatarLimbManager_LimbRotator *)pAVar1;
    func_?();
  }
  else {
    pAVar1 = (Action_1_String___Class *)MVBody::MVBody_get_Animation(body,(MethodInfo *)0x0);
    if (pAVar1 == (Action_1_String___Class *)0x0) goto code_?;
    pDVar2 = (Delegate *)(pAVar1->_0).byval_arg.data.typeHandle;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::String>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar2,(Delegate *)this_02,(MethodInfo *)0x0);
    this_01 = TypeInfo__System__Action<System::String>;
    if (pDVar2 == (Delegate *)0x0) {
      (pAVar1->_0).byval_arg.data.dummy = (void *)0x0;
      pAStack3 = (Action_1_String___Class *)0x0;
code_?:
      func_?();
      AvatarLimbManager_LimbRotator_CreateLimbController
                (this_00,BodyData_PartIndex__Enum_Torso,avatarWO,(MVBody *)&UNK_?,
                 (AvatarLimbManager *)&UNK_?,(MethodInfo *)0x0);
      AvatarLimbManager_LimbRotator_CreateLimbController
                (this_00,BodyData_PartIndex__Enum_Head,avatarWO,(MVBody *)&UNK_?,
                 (AvatarLimbManager *)&UNK_?,(MethodInfo *)0x0);
      AvatarLimbManager_LimbRotator_CreateLimbController
                (this_00,BodyData_PartIndex__Enum_RArm,avatarWO,(MVBody *)&UNK_?,
                 (AvatarLimbManager *)&UNK_?,(MethodInfo *)0x0);
      AvatarLimbManager_LimbRotator_CreateLimbController
                (this_00,BodyData_PartIndex__Enum_LArm,avatarWO,(MVBody *)&UNK_?,
                 (AvatarLimbManager *)&UNK_?,(MethodInfo *)0x0);
      return;
    }
    pAStack3 = TypeInfo__System__Action<System::String>;
    pvVar4 = (void *)func_?();
    if (pvVar4 == (void *)0x0) goto code_?;
    (pAVar1->_0).byval_arg.data.dummy = pvVar4;
    pAStack3 = TypeInfo__System__Action<System::String>;
    this = (AvatarLimbManager_LimbRotator *)TypeInfo__System__Action<System::String>;
    pAStack3 = (Action_1_String___Class *)func_?();
    this_01 = pAVar1;
    if (pAStack3 != (Action_1_String___Class *)0x0) goto code_?;
  }
  pAStack3 = (Action_1_String___Class *)this;
  func_?();
code_?:
  pAStack3 = this_01;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAnimationChange(String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_OnAnimationChange
               (AvatarLimbManager_LimbRotator *this,String *newAnimation,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<BodyData::PartIndex,_LimbController>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).limbControllers;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (DStack_6._current.value == (Object *)0x0) break;
      DStack_6._current.value[0xf].monitor = (MonitorData *)newAnimation;
      func_?(&DStack_6._current.value[0xf].monitor,newAnimation);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetLimbRotation(BodyData+PartIndex, Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_SetLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               Quaternion limbYawRotation,Quaternion limbPitchRotation,float duration,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
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
    auVar2._12_4_ = 0;
    auVar2._0_12_ = limbYawRotation._4_12_;
    LimbController::LimbController_TrySetNewRotation_1
              (this_01,(Quaternion)(auVar2 << 0x20),limbPitchRotation,duration,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartBlendingWithAnimation(BodyData+PartIndex, String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StartBlendingWithAnimation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
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
    LimbController::LimbController_StartBlendingWithAnimation
              (this_01,(String *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
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
    LimbController::LimbController_StopBlendingWithAnimation
              (this_01,(String *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopLimbRotation(BodyData+PartIndex) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StopLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    this_01 = (LimbController *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                         MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                        );
    if (this_01 != (LimbController *)0x0) {
      LimbController::LimbController_StopRotating(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TrySetLimbRotation(BodyData+PartIndex, Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_TrySetLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               Quaternion limbYawRotation,Quaternion limbPitchRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
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
    auVar2._12_4_ = 0;
    auVar2._0_12_ = limbYawRotation._4_12_;
    LimbController::LimbController_TrySetNewRotation
              (this_01,(Quaternion)(auVar2 << 0x20),limbPitchRotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateLimbs() */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_UpdateLimbs
               (AvatarLimbManager_LimbRotator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<BodyData::PartIndex,_LimbController>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  if ((this->fields).isActive != 0) {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar7 == (MainCameraManager *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pMVar7->fields).blueModeEnabled == 0) {
      this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).limbControllers;
      if (this_00 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffb0,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = pDVar9->_dictionary;
      DStack_6._version = pDVar9->_version;
      DStack_6._index = pDVar9->_index;
      DStack_6._current.key = (pDVar9->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                          );
        if (bVar12 == 0) break;
        if ((LimbController *)DStack_6._current.value == (LimbController *)0x0)
        goto code_?;
        LimbController::LimbController_UpdateRotation
                  ((LimbController *)DStack_6._current.value,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                 ,in_stack_13);
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* AvatarLimbManager+LimbRotator() */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor
               (AvatarLimbManager_LimbRotator *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  return;
}

