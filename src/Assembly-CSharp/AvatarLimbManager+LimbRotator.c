
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void CreateLimbController(BodyData+PartIndex, MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_CreateLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MVWorldObjectClient *avatarWO,MVBody *body,AvatarLimbManager *limbManager,
               MethodInfo *method)

{
  key = partIndex;
  _Stack_24 = in_XMM0_Dd;
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
    cRam_? = '\x01';
    _Stack_24 = in_XMM0_Dd;
  }
  switch(partIndex) {
  case BodyData_PartIndex__Enum_Head:
    pLVar1 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar1);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_03 = (MethodInfo *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    bVar2 = (POPCOUNT((uint)this_03 & 0xff) & 1U) == 0;
    bVar3 = true;
    if (this_03 == (MethodInfo *)0x0) goto code_?;
    func_?();
    p_Var4 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,
                        (MethodInfo *)in_stack_4.typeHandle);
    _Var12 = (_union_86)p_Var4->dummy;
    pMVar5 = p_Var4[1].dummy;
    uStack_6 = *(undefined8 *)(p_Var4 + 2);
    p_Var4 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&_Stack_20,(MVWorldObject *)0x0,in_stack_7);
    in_stack_8 = 45.0;
    in_stack_9 = 89.0;
    break;
  case BodyData_PartIndex__Enum_Torso:
    pLVar1 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar1);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_03 = (MethodInfo *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    bVar2 = (POPCOUNT((uint)this_03 & 0xff) & 1U) == 0;
    bVar3 = true;
    if (this_03 == (MethodInfo *)0x0) goto code_?;
    func_?();
    p_Var4 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,
                        (MethodInfo *)in_stack_4.typeHandle);
    _Var12 = (_union_86)p_Var4->dummy;
    pMVar5 = p_Var4[1].dummy;
    uStack_6 = *(undefined8 *)(p_Var4 + 2);
    p_Var4 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&_Stack_20,(MVWorldObject *)0x0,in_stack_7);
    in_stack_8 = 20.0;
    in_stack_9 = 90.0;
    break;
  case BodyData_PartIndex__Enum_RArm:
    pLVar1 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar1);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_03 = (MethodInfo *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    bVar2 = (POPCOUNT((uint)this_03 & 0xff) & 1U) == 0;
    bVar3 = true;
    if (this_03 == (MethodInfo *)0x0) goto code_?;
    pMVar5 = this_03;
    func_?();
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar5);
    uStack_10._0_2_ = 0;
    uStack_10._2_2_ = 0;
    uStack_11 = ZEXT48(uStack_11._4_4_) << 0x20;
    ppIVar12 = (Il2CppType **)0x0;
    _Stack_20.dummy = (void *)0x0;
    pMVar5 = (MethodInfo *)&stack0xffffffd0;
    func_?();
    _Var12.dummy = (_union_86 *)0x0;
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&_Stack_20,(MVWorldObject *)0x0,pMVar5);
    uStack_10._0_2_ = 0;
    uStack_10._2_2_ = 0x438d;
    _Stack_10.genericMethod = (Il2CppGenericMethod *)0x0;
    uStack_11._4_4_ = _UNK_?;
    uStack_11._0_4_ = (MethodInfo *)_UNK_?;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)0x438d0000;
    _Stack_20.dummy = &_Stack_20;
    func_?();
    in_stack_13 = (MethodInfo *)0x0;
    in_stack_8 = 90.0;
    in_stack_9 = 120.0;
    _Var10.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
    in_stack_4 = _Stack_20;
    in_stack_7 = (MethodInfo *)uStack_11;
    in_stack_14 = uStack_11._4_4_;
    in_stack_15 = _Stack_14;
    in_stack_16 = this_03;
    goto code_?;
  case BodyData_PartIndex__Enum_LArm:
    pLVar1 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar1);
    this_02 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_03 = (MethodInfo *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    bVar2 = (POPCOUNT((uint)this_03 & 0xff) & 1U) == 0;
    bVar3 = true;
    if (this_03 == (MethodInfo *)0x0) goto code_?;
    pMVar5 = this_03;
    func_?();
    pQVar17 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar5);
    uStack_10._0_2_ = 0;
    uStack_10._2_2_ = 0;
    uStack_11._0_4_ = (MethodInfo *)pQVar17->y;
    uStack_11._4_4_ = (Il2CppType **)pQVar17->z;
    _Stack_14 = (_union_154)pQVar17->w;
    _Stack_20.dummy = (void *)0x0;
    p_Var4 = &_Stack_20;
    func_?();
    p_Var4 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,(MethodInfo *)p_Var4);
    uStack_10._0_2_ = 0x6666;
    uStack_10._2_2_ = 0x4298;
    in_XMM0_Da = (_union_86)p_Var4->dummy;
    in_XMM0_Db = p_Var4[1].dummy;
    in_XMM0_Dc = p_Var4[2].dummy;
    _Stack_10.genericMethod = (Il2CppGenericMethod *)0x0;
    uStack_11._4_4_ = _UNK_?;
    uStack_11._0_4_ = (MethodInfo *)_UNK_?;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)0x42986666;
    _Stack_20.dummy = &stack0xffffffd0;
    func_?();
    _Stack_24.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
    partIndex = BodyData_PartIndex__Enum_Head;
    goto code_?;
  default:
    goto code_?;
  }
  in_stack_13 = (MethodInfo *)0x0;
  in_stack_4 = (_union_86)p_Var4->dummy;
  in_stack_7 = p_Var4[1].dummy;
  in_stack_14 = p_Var4[2].dummy;
  in_stack_15 = (_union_154)p_Var4[3].dummy;
  _Var10 = _Stack_24;
  in_stack_16 = this_03;
code_?:
  while( true ) {
    modelRotationOffset.y = (float)pMVar5;
    modelRotationOffset.x = (float)_Var12.dummy;
    modelRotationOffset.z = (float)ppIVar12;
    modelRotationOffset.w = (float)_Var10.rgctx_data;
    originalRotation.y = (float)in_stack_7;
    originalRotation.x = (float)in_stack_4.dummy;
    originalRotation.z = (float)in_stack_14;
    originalRotation.w = (float)in_stack_15.rgctx_data;
    LimbController::LimbController_Initialize
              (this_01,limbManager,avatarWO,body,key,modelRotationOffset,originalRotation,
               (List_1_System_String_ *)partIndex,(List_1_System_String_ *)in_stack_16,
               in_stack_9,in_stack_8,in_stack_13);
    this_00 = (this->fields).limbControllers;
    bVar3 = this_00 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0;
    bVar2 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    in_XMM0_Da = _Var12;
    in_XMM0_Db = pMVar5;
    in_XMM0_Dc = ppIVar12;
    _Stack_24 = _Var10;
    in_stack_18 = (List_1_System_String_ *)partIndex;
    if (!bVar3) break;
code_?:
    partIndex = (BodyData_PartIndex__Enum)in_stack_18;
    bVar19 = 0;
    bVar20 = func_?();
    if (bVar2) {
      in_AF = 9 < (bVar20 & 0xf) | in_AF;
      bVar19 = 0x99 < bVar20 | bVar19;
      bVar20 = bVar20 + in_AF * -6 + bVar19 * -0x60;
      *(byte *)&this_03->methodPointer = *(char *)&this_03->methodPointer + extraout_DH + bVar19;
      in_AF = 9 < (bVar20 & 0xf) | in_AF;
      bVar19 = bVar20 + in_AF * -6 + (0x99 < bVar20 || bVar20 < *(byte *)&this_01->klass) * -0x5f +
              (char)this_03;
      *extraout_ECX =
           *extraout_ECX +
           bVar19 + (9 < (bVar19 & 0xf) | in_AF) * -6 +
           (0x99 < bVar19 || bVar19 < *(byte *)((int)&this_01->klass + 1)) * -0x5f;
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    _Var12 = in_XMM0_Da;
    pMVar5 = in_XMM0_Db;
    ppIVar12 = in_XMM0_Dc;
    _Var10 = _Stack_24;
    if (bVar3) {
code_?:
      _Var12 = _Stack_20;
      pMVar5 = (MethodInfo *)uStack_11;
      ppIVar12 = uStack_11._4_4_;
      _Var10 = _Stack_14;
      in_stack_4 = in_XMM0_Da;
      in_stack_7 = in_XMM0_Db;
      in_stack_14 = in_XMM0_Dc;
      in_stack_15 = _Stack_24;
    }
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__Add
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
            );
code_?:
  return;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (*(char *)&pOVar2[0x11].klass != '\0') {
      return;
    }
    pOVar2[0xc].monitor = (MonitorData *)0x0;
    pOVar2[0xe].monitor = (MonitorData *)0x0;
    pOVar2[6].klass = (Object__Class *)limbYawRotation.x;
    pOVar2[6].monitor = (MonitorData *)limbYawRotation.y;
    pOVar2[7].klass = (Object__Class *)limbYawRotation.z;
    pOVar2[7].monitor = (MonitorData *)limbYawRotation.w;
    *(undefined1 *)&pOVar2[0xf].klass = 1;
    pOVar2[8].klass = (Object__Class *)limbPitchRotation.x;
    pOVar2[8].monitor = (MonitorData *)limbPitchRotation.y;
    pOVar2[9].klass = (Object__Class *)limbPitchRotation.z;
    pOVar2[9].monitor = (MonitorData *)limbPitchRotation.w;
    pOVar2[0xe].klass = (Object__Class *)duration;
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
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    index = 0;
    pOVar3 = pOVar2[0x10].klass;
    while (pOVar3 != (Object__Class *)0x0) {
      this_01 = pOVar2[0x10].klass;
      if ((int)(pOVar3->_0).namespaze <= index) {
        if (this_01 != (Object__Class *)0x0) {
          func_?(this_01,animation,
                          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                         );
          return;
        }
        break;
      }
      if (this_01 == (Object__Class *)0x0) break;
      a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_01,
                     index,
                     MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)a,animation,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      index = index + 1;
      pOVar3 = pOVar2[0x10].klass;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_01 = pOVar2[0x10].klass;
    index = 0;
    while (this_01 != (Object__Class *)0x0) {
      if ((int)(this_01->_0).namespaze <= index) {
        return;
      }
      if (pOVar2[0x10].klass == (Object__Class *)0x0) break;
      a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     pOVar2[0x10].klass,index,
                     MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)a,animation,(MethodInfo *)0x0);
      this_01 = pOVar2[0x10].klass;
      if (bVar1 != 0) {
        if (this_01 != (Object__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)this_01,index,
                     MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
          return;
        }
        break;
      }
      index = index + 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (*(char *)&pOVar1[0x11].klass == '\0') {
        *(undefined1 *)&pOVar1[0xf].klass = 0;
      }
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,partIndex,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar2 != (Object *)0x0)) {
    if (*(char *)&pOVar2[0x11].klass != '\0') {
      return;
    }
    pOVar2[0xc].monitor = (MonitorData *)0x0;
    pOVar2[0xe].monitor = (MonitorData *)0x0;
    pOVar2[6].klass = (Object__Class *)limbYawRotation.x;
    pOVar2[6].monitor = (MonitorData *)limbYawRotation.y;
    pOVar2[7].klass = (Object__Class *)limbYawRotation.z;
    pOVar2[7].monitor = (MonitorData *)limbYawRotation.w;
    *(undefined1 *)&pOVar2[0xf].klass = 1;
    pOVar2[0xe].klass = (Object__Class *)0x0;
    pOVar2[8].klass = (Object__Class *)limbPitchRotation.x;
    pOVar2[8].monitor = (MonitorData *)limbPitchRotation.y;
    pOVar2[9].klass = (Object__Class *)limbPitchRotation.z;
    pOVar2[9].monitor = (MonitorData *)limbPitchRotation.w;
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                 ,in_stack_13);
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}

