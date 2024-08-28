
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_CalculatePosAroundPivot
               (RewardedAdRequirement *this,Vector3 pivot,float spacingAngle,float distanceFromPivot
               ,MethodInfo *method)

{
  fVar1 = pivot.x - (pivot.x + 0.0);
  fVar2 = pivot.y - (pivot.y + 0.0);
  auVar3._4_8_ = 0;
  auVar3._0_4_ = spacingAngle * _UNK_?;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&puStack_5,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
  point.y = fVar2;
  point.x = fVar1;
  point.z = pivot.z - (pivot.z + distanceFromPivot);
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&puStack_5,*pQVar4,point,(MethodInfo *)0x0);
  pGVar6 = (this->fields).displayGO;
  if (pGVar6 != (GameObject *)0x0) {
    fVar2 = 0.0;
    puVar7 = &UNK_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar6,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      value_00.y = (float)pGVar6;
      value_00.x = (float)puVar7;
      value_00.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar8,value_00,(MethodInfo *)0x0);
      pGVar6 = (this->fields).displayGO;
      if (pGVar6 != (GameObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        pGVar6 = (this->fields).displayObjectRoot;
        if (pGVar6 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
            uVar10 = pVVar9->x;
            uVar11 = pVVar9->y;
            if (pTVar8 != (Transform *)0x0) {
              worldPosition.y = pivot.y + (float)uVar11;
              worldPosition.x = pivot.x + (float)uVar10;
              worldPosition.z = pivot.z + pVVar9->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                        (pTVar8,worldPosition,(MethodInfo *)0x0);
              this_00 = (this->fields).displayObject;
              if (this_00 != (RewardedAdDisplayObject *)0x0) {
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                if (pTVar8 != (Transform *)0x0) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position((Vector3 *)&puStack_5,pTVar8,(MethodInfo *)0x0)
                  ;
                  uVar12 = pVVar9->x;
                  uVar13 = pVVar9->y;
                  uVar14 = (this->fields).displayObjectOffset.x;
                  uVar15 = (this->fields).displayObjectOffset.y;
                  value.y = (float)uVar15 + (float)uVar13;
                  value.x = (float)uVar14 + (float)uVar12;
                  value.z = (this->fields).displayObjectOffset.z + pVVar9->z;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar8,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_CreateDisplayObject(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectInteractionSystem__UseSystem__RewardedAdDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this_00 = (pPVar1->fields).rewardedAdDisplayPrefab, this_00 != (RewardedAdDisplayObject *)0x0)
     ) {
    original = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields).displayObjectRoot;
    if (pGVar2 != (GameObject *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pGVar2 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,parent,1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      ppGVar3 = &(this->fields).displayGO;
      *ppGVar3 = pGVar2;
      func_?(ppGVar3,&stack0xfffffffc,&UNK_?);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_DestroyRequirement
               (RewardedAdRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).displayObject == (RewardedAdDisplayObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    obj = (this->fields).displayGO;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void Finalize() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_Finalize(RewardedAdRequirement *this,MethodInfo *method)

{
  method_00 = (MethodInfo *)&DAT_?;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)func_?();
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_remove_OnKilled
              (this_00,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    uVar1 = 0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    *unaff_FS_OFFSET = uVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
RewardedAdRequirement_GetCanUseGUIResult(RewardedAdRequirement *this,MethodInfo *method)

{
  if ((this->fields).requiresRewardedAd == 0) {
    return UseGUIResult__Enum_NoUseButton;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (this_00 = (pMVar1->fields)._WorldObjectUseRequirementTracker_k__BackingField,
     this_00 != (WorldObjectUseRequirementTracker *)0x0)) {
    bVar2 = WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
            WorldObjectUseRequirementTracker_HasUnlocked
                      (this_00,(this->fields).worldObjectID,(MethodInfo *)0x0);
    return (uint)(bVar2 == 0) * 2 + UseGUIResult__Enum_NoCost;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  UVar4 = (*pcVar3)();
  return UVar4;
}


/* Int32 GetRequirementValue() */

int32_t Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
        RewardedAdRequirement_GetRequirementValue(RewardedAdRequirement *this,MethodInfo *method)

{
  return (uint)((this->fields).requiresRewardedAd != 0);
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
RewardedAdRequirement_GetShowOption(RewardedAdRequirement *this,MethodInfo *method)

{
  if ((this->fields).requiresRewardedAd != 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 == (MVLocalPlayer *)0x0) ||
       (this_00 = (pMVar1->fields)._WorldObjectUseRequirementTracker_k__BackingField,
       this_00 == (WorldObjectUseRequirementTracker *)0x0)) {
      func_?();
      pcVar2 = (code *)swi(3);
      SVar3 = (*pcVar2)();
      return SVar3;
    }
    bVar4 = WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
            WorldObjectUseRequirementTracker_HasUnlocked
                      (this_00,(this->fields).worldObjectID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return ShowUseOption__Enum_RewardedAdPossible;
    }
  }
  return ShowUseOption__Enum_Normal;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_IsActive(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).displayGO;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_OnAdFinished
               (RewardedAdRequirement *this,bool adWasSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c___OnAdFinished_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c);
    func_?(&StringLiteral_Ad_RewardRequest_UseRequirement);
    cRam_? = '\x01';
  }
  (this->fields).currentlyInAd = 0;
  if (adWasSuccessful == 0) {
    root = (this->fields).displayGO;
    if ((TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c)
      ;
    }
    callbackFunction =
         TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
         static_fields->__9__29_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(
                       TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c
                       );
      }
      object = TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
               static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c___OnAdFinished_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->static_fields->
      __9__29_0 = callbackFunction;
      func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c
                       ->static_fields->__9__29_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    this_00 = (pMVar1->fields)._WorldObjectUseRequirementTracker_k__BackingField;
    key = (this->fields).worldObjectID;
    if (this_00 != (WorldObjectUseRequirementTracker *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                       );
        cRam_? = '\x01';
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0)
      ;
      this_01 = (this_00->fields).timeouts;
      if (this_01 != (Dictionary_2_UseRequirementType_System_Single_ *)0x0) {
        fVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)this_01,5,
                           MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                          );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
        Dictionary_2_System_Int32_System_Single__set_Item
                  ((Dictionary_2_System_Int32_System_Single_ *)this_00,key,fVar3 + fVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                  );
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_Ad_RewardRequest_UseRequirement,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_OnDataUpdate
               (RewardedAdRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_rewardedAd);
    cRam_? = '\x01';
  }
  worldObjectID = ownerID;
  (this->fields).worldObjectID = ownerID;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_rewardedAd,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_rewardedAd,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar3 = (bool *)func_?();
        ppRVar4 = &(this->fields).displayObject;
        (this->fields).requiresRewardedAd = *pbVar3;
        pRVar5 = *ppRVar4;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pRVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (cRam_? == '\0') {
            func_?(&
                            WorldObjectInteractionSystem__UseSystem__RewardedAdDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject>__
                           );
            func_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                           );
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar6 == (PrefabPool *)0x0) ||
             (pRVar5 = (pPVar6->fields).rewardedAdDisplayPrefab,
             pRVar5 == (RewardedAdDisplayObject *)0x0)) goto code_?;
          original = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar5,(MethodInfo *)0x0);
          pGVar7 = (this->fields).displayObjectRoot;
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar7,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pGVar7 = (GameObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)original,pTVar8,1,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                             );
          ppGVar9 = &(this->fields).displayGO;
          *ppGVar9 = pGVar7;
          func_?(ppGVar9,pGVar7);
          if ((*ppGVar9 == (GameObject *)0x0) ||
             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (*ppGVar9,(MethodInfo *)0x0), pTVar8 == (Transform *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar8,(this->fields).displayObjectOffset,(MethodInfo *)0x0);
          if (*ppGVar9 == (GameObject *)0x0) goto code_?;
          pRVar5 = (RewardedAdDisplayObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (*ppGVar9,
                               WorldObjectInteractionSystem__UseSystem__RewardedAdDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject>__
                              );
          *ppRVar4 = pRVar5;
          func_?(ppRVar4,pRVar5);
          worldObjectID = ownerID;
        }
        if ((this->fields).requiresRewardedAd != 0) {
          return;
        }
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        ownerID = ownerID & 0xffffff;
        value = (Object *)func_?(TypeInfo__System__Boolean,(int)&ownerID + 3);
        if (this_00 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_rewardedAd,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_01,worldObjectID,(Dictionary_2_System_Object_System_Object_ *)this_00,
                       (MethodInfo *)0x0);
            if (*ppRVar4 != (RewardedAdDisplayObject *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)*ppRVar4,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnLocalPlayerKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_OnLocalPlayerKilled
               (RewardedAdRequirement *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  RewardedAdRequirement_OnAdFinished(this,0,(MethodInfo *)0x0);
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_PayUseCost(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnAdFinished_bool_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    cRam_? = '\x01';
  }
  if ((this->fields).requiresRewardedAd == 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (pWVar2 = (pMVar1->fields)._WorldObjectUseRequirementTracker_k__BackingField,
     pWVar2 != (WorldObjectUseRequirementTracker *)0x0)) {
    bVar3 = WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
            WorldObjectUseRequirementTracker_HasUnlocked
                      (pWVar2,(this->fields).worldObjectID,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    if ((this->fields).hasCheckNoCost != 0) {
      pRVar4 = (this->fields).checkNoCost;
      if (pRVar4 == (RewardedCheckNoCost *)0x0) goto code_?;
      cVar5 = (*(pRVar4->fields)._._.invoke_impl)();
      if (cVar5 != '\0') {
        return;
      }
    }
    (this->fields).currentlyInAd = 1;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      pWVar2 = (pMVar1->fields)._WorldObjectUseRequirementTracker_k__BackingField;
      worldObjectID = (this->fields).worldObjectID;
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,
                 MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnAdFinished_bool_
                 ,(MethodInfo *)0x0);
      if (pWVar2 != (WorldObjectUseRequirementTracker *)0x0) {
        WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
        WorldObjectUseRequirementTracker_PayUse
                  (pWVar2,UseRequirementType__Enum_RewardedAd,worldObjectID,
                   (UnityAction_1_System_Boolean_ *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_SetScale(RewardedAdRequirement *this,Vector3 scale,MethodInfo *method)

{
  fVar1 = scale.x * _UNK_?;
  this_00 = (this->fields).displayObject;
  fVar2 = scale.y * _UNK_?;
  fVar3 = scale.z * _UNK_?;
  if (this_00 != (RewardedAdDisplayObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      value.y = fVar2;
      value.x = fVar1;
      value.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RewardedAdRequirement(GameObject) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor(RewardedAdRequirement *this,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    cRam_? = '\x01';
  }
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = -1;
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields).displayObjectRoot;
  *ppGVar1 = root;
  func_?(ppGVar1,root);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)
            func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (this_00,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RewardedAdRequirement(GameObject, RewardedCheckNoCost) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor_1
               (RewardedAdRequirement *this,GameObject *root,RewardedCheckNoCost *action,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    cRam_? = '\x01';
  }
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = -1;
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields).displayObjectRoot;
  *ppGVar1 = root;
  func_?(ppGVar1,root);
  ppRVar2 = &(this->fields).checkNoCost;
  *ppRVar2 = action;
  func_?(ppRVar2,action);
  (this->fields).hasCheckNoCost = *ppRVar2 != (RewardedCheckNoCost *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)
            func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (this_00,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RewardedAdRequirement(GameObject, Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor_2
               (RewardedAdRequirement *this,GameObject *root,Vector3 displayOffset,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    cRam_? = '\x01';
  }
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = -1;
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields).displayObjectRoot;
  *ppGVar1 = root;
  func_?(ppGVar1,root);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)
            func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (this_00,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    uVar2 = (this->fields).displayObjectOffset.x;
    uVar3 = (this->fields).displayObjectOffset.y;
    fVar4 = (this->fields).displayObjectOffset.z;
    (this->fields).displayObjectOffset.x = displayOffset.x + (float)uVar2;
    (this->fields).displayObjectOffset.y = displayOffset.y + (float)uVar3;
    (this->fields).displayObjectOffset.z = displayOffset.z + fVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RewardedAdRequirement(GameObject, RewardedCheckNoCost, Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor_3
               (RewardedAdRequirement *this,GameObject *root,RewardedCheckNoCost *action,
               Vector3 displayOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    cRam_? = '\x01';
  }
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = -1;
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields).displayObjectRoot;
  *ppGVar1 = root;
  func_?(ppGVar1,root);
  ppRVar2 = &(this->fields).checkNoCost;
  *ppRVar2 = action;
  func_?(ppRVar2,action);
  (this->fields).hasCheckNoCost = *ppRVar2 != (RewardedCheckNoCost *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)
            func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (this_00,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    uVar3 = (this->fields).displayObjectOffset.x;
    uVar4 = (this->fields).displayObjectOffset.y;
    fVar5 = (this->fields).displayObjectOffset.z;
    (this->fields).displayObjectOffset.x = displayOffset.x + (float)uVar3;
    (this->fields).displayObjectOffset.y = displayOffset.y + (float)uVar4;
    (this->fields).displayObjectOffset.z = displayOffset.z + fVar5;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
RewardedAdRequirement_get_GameObject(RewardedAdRequirement *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).displayGO;
  if (pGVar2 != (GameObject *)0x0) {
    return pGVar2;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar5)();
  return pGVar2;
}

