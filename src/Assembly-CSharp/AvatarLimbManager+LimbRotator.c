
/* Void CreateLimbController(BodyData+PartIndex, MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_CreateLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MVWorldObjectClient *avatarWO,MVBody *body,AvatarLimbManager *limbManager,
               MethodInfo *method)

{
  key = partIndex;
  pMVar1 = SUB84(in_stack_2,4);
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
  }
  switch(partIndex) {
  case BodyData_PartIndex__Enum_Head:
    pLVar3 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar3);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    cancelAnimations =
         (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               cancelAnimations,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (cancelAnimations == (MethodInfo *)0x0) goto code_?;
    func_?();
    p_Var8 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_4);
    _Var20 = (_union_86)p_Var8->dummy;
    method_00 = p_Var8[1].dummy;
    uVar5 = *(undefined8 *)(p_Var8 + 2);
    p_Var8 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffe0,(MVWorldObject *)0x0,in_stack_6);
    maxPitch = 45.0;
    maxYaw = 89.0;
    goto code_?;
  case BodyData_PartIndex__Enum_Torso:
    pLVar3 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar3);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    cancelAnimations =
         (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               cancelAnimations,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (cancelAnimations == (MethodInfo *)0x0) goto code_?;
    func_?();
    p_Var8 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_4);
    _Var20 = (_union_86)p_Var8->dummy;
    method_00 = p_Var8[1].dummy;
    uVar5 = *(undefined8 *)(p_Var8 + 2);
    p_Var8 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffe0,(MVWorldObject *)0x0,in_stack_6);
    maxPitch = 20.0;
    maxYaw = 90.0;
code_?:
    _Var15 = (_union_86)p_Var8->dummy;
    pIVar7 = p_Var8[1].dummy;
    _Var17 = (_union_86)p_Var8[2].dummy;
    pcVar8 = p_Var8[3].dummy;
    _Var12.__klassIndex = (TypeDefinitionIndex)uVar5;
    pcVar9 = SUB84(uVar5,4);
    break;
  case BodyData_PartIndex__Enum_RArm:
    pLVar3 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar3);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    cancelAnimations =
         (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               cancelAnimations,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (cancelAnimations == (MethodInfo *)0x0) goto code_?;
    pMVar1 = cancelAnimations;
    func_?();
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar1);
    pIVar10 = (InvokerMethod)0x0;
    method_00 = (MethodInfo *)&stack0xffffffd0;
    func_?();
    _Var20.dummy = (Il2CppClass *)0x0;
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&stack0xffffffe0,(MVWorldObject *)0x0,method_00);
    _Var15.dummy = &stack0xffffffe0;
    uVar5._4_4_ = &UNK_?;
    uVar5._0_4_ = (char *)pIVar10;
    pIVar7 = _UNK_?;
    _Var17 = _UNK_?;
    func_?();
    maxPitch = 90.0;
    maxYaw = 120.0;
    pcVar8 = (char *)0x438d0000;
    _Var12.__klassIndex = (TypeDefinitionIndex)uVar5;
    pcVar9 = SUB84(uVar5,4);
    break;
  case BodyData_PartIndex__Enum_LArm:
    pLVar3 = TypeInfo__LimbController;
    this_01 = (LimbController *)func_?();
    (this_01->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar3);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    cancelAnimations =
         (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               cancelAnimations,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (cancelAnimations == (MethodInfo *)0x0) goto code_?;
    pMVar1 = cancelAnimations;
    func_?();
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar1);
    pMVar1 = (MethodInfo *)&stack0xffffffe0;
    func_?();
    p_Var8 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar1);
    _Var15 = (_union_86)p_Var8->dummy;
    pIVar7 = p_Var8[1].dummy;
    _Var20.dummy = &stack0xffffffd0;
    uVar5._4_4_ = &UNK_?;
    uVar5._0_4_ = p_Var8[2].dummy;
    method_00 = _UNK_?;
    _Var12 = _UNK_?;
    func_?();
    _Var17.__klassIndex = (TypeDefinitionIndex)uVar5;
    pcVar8 = SUB84(uVar5,4);
    maxPitch = 90.0;
    maxYaw = 120.0;
    pcVar9 = (char *)0x42986666;
    break;
  default:
    goto code_?;
  }
  pMVar1 = SUB84(uVar5,4);
  modelRotationOffset.y = (float)method_00;
  modelRotationOffset.x = (float)_Var20.dummy;
  modelRotationOffset.z = (float)_Var12.dummy;
  modelRotationOffset.w = (float)pcVar9;
  originalRotation.y = (float)pIVar7;
  originalRotation.x = (float)_Var15.dummy;
  originalRotation.z = (float)_Var17.dummy;
  originalRotation.w = (float)pcVar8;
  LimbController::LimbController_Initialize
            (this_01,limbManager,avatarWO,body,key,modelRotationOffset,originalRotation,
             (List_1_System_String_ *)partIndex,(List_1_System_String_ *)cancelAnimations,maxYaw,
             maxPitch,(MethodInfo *)0x0);
  this_00 = (this->fields).limbControllers;
  if (this_00 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
code_?:
    bVar11 = 0;
    uVar12 = func_?();
    uVar13 = (undefined2)((uint6)uVar12 >> 0x20);
    puVar14 = &cancelAnimations[-1].field_0x2f;
    out(*(undefined1 *)key,uVar13);
    bVar15 = (byte)uVar12;
    in_AF = 9 < (bVar15 & 0xf) | in_AF;
    bVar11 = 0x99 < bVar15 | bVar11;
    bVar16 = bVar15 + in_AF * -6 + bVar11 * -0x60;
    bVar15 = *puVar14;
    cVar17 = *puVar14;
    *puVar14 = cVar17 + bVar16 + bVar11;
    out(*(undefined4 *)(key + BodyData_PartIndex__Enum_Torso),uVar13);
    bVar18 = 0x99 < bVar16 || (CARRY1(bVar15,bVar16) || CARRY1(cVar17 + bVar16,bVar11));
    pcVar9 = (char *)(CONCAT31((int3)((uint6)uVar12 >> 8),
                                bVar16 + (9 < (bVar16 & 0xf) | in_AF) * -6 + bVar18 * -0x60) +
                      -0x2eefd091);
    cVar17 = *pcVar9;
    cVar19 = *pcVar9;
    *pcVar9 = cVar19 + extraout_CH + bVar18;
    if (SCARRY1(cVar17,extraout_CH) == SCARRY1(cVar19 + extraout_CH,bVar18)) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    bVar21 = AvatarLimbManager_LimbRotator_HasLimbController
                      ((AvatarLimbManager_LimbRotator *)(key + BodyData_PartIndex__Enum_RLowLeg),
                       partIndex,pMVar1);
    if (bVar21 != 0) {
      if (*(Dictionary_2_System_Int32Enum_System_Object_ **)
           (key + (BodyData_PartIndex__Enum_Holster|BodyData_PartIndex__Enum_RLowLeg)) ==
          (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        func_?();
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__get_Item
                (*(Dictionary_2_System_Int32Enum_System_Object_ **)
                  (key + (BodyData_PartIndex__Enum_Holster|BodyData_PartIndex__Enum_RLowLeg)),
                 partIndex,
                 MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                );
      return;
    }
    return;
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
    this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::String>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
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

