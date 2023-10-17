
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
    this_03 = (LimbController *)func_?(TypeInfo__LimbController);
    if (this_03 == (LimbController *)0x0) goto code_?;
    (this_03->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_03,ExceptionArgument__Enum_obj,unaff_EDI);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if ((LowLevelList_1_System_Object_ *)partIndex == (LowLevelList_1_System_Object_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    unaff_EBX = (MethodInfo *)
                func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (unaff_EBX == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)unaff_EBX,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(unaff_EBX,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    p_Var6 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_1);
    _Var11 = (_union_86)p_Var6->dummy;
    uVar2 = *(undefined8 *)(p_Var6 + 1);
    _Stack_24 = (_union_154)p_Var6[3].dummy;
    p_Var6 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&_Stack_20,(MVWorldObject *)0x0,in_stack_3);
    maxPitch = 45.0;
    maxYaw = 89.0;
    goto code_?;
  case BodyData_PartIndex__Enum_Torso:
    this_03 = (LimbController *)func_?(TypeInfo__LimbController);
    if (this_03 == (LimbController *)0x0) goto code_?;
    (this_03->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_03,ExceptionArgument__Enum_obj,unaff_EDI);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if ((LowLevelList_1_System_Object_ *)partIndex == (LowLevelList_1_System_Object_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    unaff_EBX = (MethodInfo *)
                func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (unaff_EBX == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)unaff_EBX,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(unaff_EBX,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    p_Var6 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,in_stack_1);
    _Var11 = (_union_86)p_Var6->dummy;
    uVar2 = *(undefined8 *)(p_Var6 + 1);
    _Stack_24 = (_union_154)p_Var6[3].dummy;
    p_Var6 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&_Stack_20,(MVWorldObject *)0x0,in_stack_3);
    maxPitch = 20.0;
    maxYaw = 90.0;
code_?:
    _Var14 = (_union_86)p_Var6->dummy;
    pIVar4 = p_Var6[1].dummy;
    ppIVar5 = p_Var6[2].dummy;
    _Var17 = (_union_154)p_Var6[3].dummy;
    pIVar6 = (Il2CppType *)uVar2;
    ppIVar7 = SUB84(uVar2,4);
    pMVar8 = (MethodInfo *)partIndex;
    cancelAnimations = unaff_EBX;
    break;
  case BodyData_PartIndex__Enum_RArm:
    this_03 = (LimbController *)func_?(TypeInfo__LimbController);
    if (this_03 == (LimbController *)0x0) goto code_?;
    (this_03->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_03,ExceptionArgument__Enum_obj,unaff_EDI);
    unaff_EBX = (MethodInfo *)
                func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (unaff_EBX == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)unaff_EBX,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if ((MethodInfo *)partIndex == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(partIndex,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    pMVar8 = (MethodInfo *)partIndex;
    func_?(partIndex,StringLiteral_Jump,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar8);
    pMVar8 = (MethodInfo *)&stack0xffffffd0;
    func_?(pMVar8,(ulonglong)_UNK_? << 0x20);
    p_Var6 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&_Stack_20,(MVWorldObject *)0x0,pMVar8);
    _Stack_20 = (_union_86)p_Var6->dummy;
    pIStack_9 = p_Var6[1].dummy;
    ppIStack_10 = p_Var6[2].dummy;
    _Var17 = (_union_154)p_Var6[3].dummy;
    _Var11.dummy = &_Stack_20;
    pIVar6 = _UNK_?;
    ppIVar7 = _UNK_?;
    func_?();
    maxPitch = 45.0;
    maxYaw = 90.0;
    _Stack_24.rgctx_data = (Il2CppRGCTXData *)0x438d0000;
    _Var14 = _Stack_20;
    pIVar4 = pIStack_9;
    ppIVar5 = ppIStack_10;
    pMVar8 = unaff_EBX;
    cancelAnimations = (MethodInfo *)partIndex;
    break;
  case BodyData_PartIndex__Enum_LArm:
    this_03 = (LimbController *)func_?(TypeInfo__LimbController);
    if (this_03 == (LimbController *)0x0) goto code_?;
    (this_03->fields).interpolationSpeed = 5.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_03,ExceptionArgument__Enum_obj,unaff_EDI);
    unaff_EBX = (MethodInfo *)
                func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (unaff_EBX == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)unaff_EBX,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    partIndex = func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if ((MethodInfo *)partIndex == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)partIndex,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(partIndex,StringLiteral_Dead,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    pMVar8 = (MethodInfo *)partIndex;
    func_?(partIndex,StringLiteral_Jump,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    p_Var6 = (_union_86 *)
             MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                       ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,pMVar8);
    _Stack_20 = *p_Var6;
    pIStack_9 = p_Var6[1].dummy;
    ppIStack_10 = p_Var6[2].dummy;
    _Stack_24 = (_union_154)p_Var6[3].dummy;
    p_Var6 = &_Stack_20;
    func_?(p_Var6,(ulonglong)_UNK_? << 0x20);
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
              ((Quaternion *)&stack0xffffffd0,(MVWorldObject *)0x0,(MethodInfo *)p_Var6);
    _Stack_20.dummy = (_union_86 *)0x0;
    _Var14.dummy = &stack0xffffffd0;
    pIVar4 = _UNK_?;
    ppIVar5 = _UNK_?;
    func_?();
    maxPitch = 45.0;
    maxYaw = 90.0;
    _Var17.rgctx_data = (Il2CppRGCTXData *)0x42986666;
    _Var11 = _Stack_20;
    pIVar6 = pIStack_9;
    ppIVar7 = ppIStack_10;
    pMVar8 = unaff_EBX;
    cancelAnimations = (MethodInfo *)partIndex;
    break;
  default:
    goto code_?;
  }
  modelRotationOffset.y = (float)pIVar6;
  modelRotationOffset.x = (float)_Var11.dummy;
  modelRotationOffset.z = (float)ppIVar7;
  modelRotationOffset.w = (float)_Stack_24.rgctx_data;
  originalRotation.y = (float)pIVar4;
  originalRotation.x = (float)_Var14.dummy;
  originalRotation.z = (float)ppIVar5;
  originalRotation.w = (float)_Var17.rgctx_data;
  LimbController::LimbController_Initialize
            (this_03,limbManager,avatarWO,body,key,modelRotationOffset,originalRotation,
             (List_1_System_String_ *)pMVar8,(List_1_System_String_ *)cancelAnimations,maxYaw,
             maxPitch,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).limbControllers;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    bVar11 = true;
    bVar12 = false;
    bVar13 = func_?();
    this_03->klass = (LimbController__Class *)*(Object__Class **)key;
    if (bVar12 || bVar11) {
      *(char *)&unaff_EBX[2].parameters = *(char *)&unaff_EBX[2].parameters + extraout_DH + bVar12;
      *(byte *)&unaff_EBX[-0x114ff39].iflags = (char)unaff_EBX[-0x114ff39].iflags + (bVar13 & 0x10);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    bVar15 = (byte)((uint)extraout_ECX >> 8);
    bVar16 = bVar13 + bVar15;
    bVar11 = CARRY1(bVar13,bVar15) || CARRY1(bVar16,bVar12);
    pLVar17 = (LowLevelList_1_System_Object___Fields *)&unaff_EBX[0x1ecac4].virtualMethodPointer;
    pLVar17->_items = (Object__Array *)((int)&pLVar17->_items->klass + 1);
    if (bVar11 || pLVar17->_items == (Object__Array *)0x0) {
      func_?();
      func_?(&StringLiteral___Returning_null_instead);
      func_?(&StringLiteral_LimbRotator_does_not_have_a_limb);
      uRam_? = 1;
      this_02 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).limbControllers;
      if (this_02 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        func_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_02,(Object *)partIndex,
                         MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__ContainsKey_BodyData__PartIndex_
                        );
      if (bVar18 != 0) {
        return;
      }
      pSVar19 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar19 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_LimbRotator_does_not_have_a_limb,pSVar19,
                          StringLiteral___Returning_null_instead,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar19,(MethodInfo *)0x0);
      return;
    }
    *extraout_ECX = *extraout_ECX + bVar16 + bVar12 + bVar11;
    bVar18 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
    if (bVar18 == 0) {
      return;
    }
    this_01 = (this->fields).limbControllers;
    if (this_01 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
      func_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__get_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,partIndex,
               MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
              );
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_00,(Object *)key,(Object *)this_03,
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).limbControllers
  ;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)partIndex,
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
  this_00 = (Dictionary_2_BodyData_PartIndex_LimbController_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                           );
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
              );
    (this->fields).limbControllers = this_00;
    func_?(&this->fields,this_00);
    if ((body != (MVBody *)0x0) &&
       (pBVar1 = MVBody::MVBody_get_Animation(body,(MethodInfo *)0x0),
       pBVar1 != (BoneAnimation *)0x0)) {
      a = (pBVar1->fields).OnAnimationChange;
      this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
      unaff_EDI = (Delegate *)0x0;
      if (this_01 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_,
                   (MethodInfo *)0x0);
        unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
        if (unaff_EDI == (Delegate *)0x0) {
          (pBVar1->fields).OnAnimationChange = (Action_1_String_ *)0x0;
code_?:
          func_?(&(pBVar1->fields).OnAnimationChange);
          AvatarLimbManager_LimbRotator_CreateLimbController
                    (this,BodyData_PartIndex__Enum_Torso,avatarWO,body,limbManager,(MethodInfo *)0x0
                    );
          AvatarLimbManager_LimbRotator_CreateLimbController
                    (this,BodyData_PartIndex__Enum_Head,avatarWO,body,limbManager,(MethodInfo *)0x0)
          ;
          AvatarLimbManager_LimbRotator_CreateLimbController
                    (this,BodyData_PartIndex__Enum_RArm,avatarWO,body,limbManager,(MethodInfo *)0x0)
          ;
          AvatarLimbManager_LimbRotator_CreateLimbController
                    (this,BodyData_PartIndex__Enum_LArm,avatarWO,body,limbManager,(MethodInfo *)0x0)
          ;
          return;
        }
        puVar2 = &UNK_?;
        iVar3 = func_?(unaff_EDI);
        if (iVar3 != 0) {
          *(int *)(puVar2 + 0xc) = iVar3;
          pBVar1 = (BoneAnimation *)&UNK_?;
          iVar3 = func_?(unaff_EDI);
          if (iVar3 != 0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).limbControllers;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
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
      this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).limbControllers;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffb0,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9->_dictionary;
      DStack_6._version = pDVar9->_version;
      DStack_6._index = pDVar9->_index;
      DStack_6._current.key = (int32_t)(pDVar9->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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

