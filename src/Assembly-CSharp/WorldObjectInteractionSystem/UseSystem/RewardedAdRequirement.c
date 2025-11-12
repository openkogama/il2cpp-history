
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_CalculatePosAroundPivot
               (RewardedAdRequirement *this,Vector3 *pivot,float spacingAngle,
               float distanceFromPivot,MethodInfo *method)

{
  uStack_1._0_4_ = pivot->x;
  uStack_1._4_4_ = pivot->y;
  fVar2 = (float)(undefined4)uStack_1 - ((float)(undefined4)uStack_1 + 0.0);
  fVar3 = (float)uStack_1._4_4_ - ((float)uStack_1._4_4_ + 0.0);
  fVar4 = pivot->z - (pivot->z + distanceFromPivot);
  VStack_5._0_8_ = (ulonglong)(uint)(spacingAngle * _UNK_?) << 0x20;
  VStack_5.z = 0.0;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&VStack_5);
  fVar10 = (float)uStack_7 + (float)uStack_7;
  fVar11 = uStack_6._4_4_ + uStack_6._4_4_;
  fVar12 = ((float)uStack_6 + (float)uStack_6) * (float)uStack_6;
  fVar13 = ((float)uStack_6 + (float)uStack_6) * uStack_7._4_4_;
  uStack_1._0_4_ = pivot->x;
  uStack_1._4_4_ = pivot->y;
  fVar14 = (_UNK_? - (fVar10 * (float)uStack_7 + fVar11 * uStack_6._4_4_)) * fVar2 +
          (fVar11 * (float)uStack_6 - fVar10 * uStack_7._4_4_) * fVar3 +
          (fVar11 * uStack_7._4_4_ + fVar10 * (float)uStack_6) * fVar4 +
          (float)(undefined4)uStack_1;
  fVar15 = (_UNK_? - (fVar10 * (float)uStack_7 + fVar12)) * fVar3 +
          (fVar10 * uStack_7._4_4_ + fVar11 * (float)uStack_6) * fVar2 +
          (fVar10 * uStack_6._4_4_ - fVar13) * fVar4 + (float)uStack_1._4_4_;
  fVar3 = (fVar10 * (float)uStack_6 - fVar11 * uStack_7._4_4_) * fVar2 +
           (fVar13 + fVar10 * uStack_6._4_4_) * fVar3 +
           (_UNK_? - (fVar11 * uStack_6._4_4_ + fVar12)) * fVar4 + pivot->z;
  pGVar16 = (this->fields).displayGO;
  if ((pGVar16 != (GameObject *)0x0) &&
     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar16,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
    uStack_1 = CONCAT44(fVar15,fVar14);
    fStack_18 = fVar3;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar19 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar19);
    pGVar16 = (this->fields).displayGO;
    if (pGVar16 != (GameObject *)0x0) {
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar16,(MethodInfo *)0x0);
      pGVar16 = (this->fields).displayObjectRoot;
      if ((pGVar16 != (GameObject *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar16,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_5.x = 0.0;
        VStack_5.y = 0.0;
        VStack_5.z = 0.0;
        pvVar19 = (obj->fields)._._.m_CachedPtr;
        if (pvVar19 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar19,&VStack_5);
        uStack_6._0_4_ = pivot->x;
        uStack_6._4_4_ = pivot->y;
        uVar9._0_4_ = (float)uStack_6 + VStack_5.x;
        if (pTVar17 != (Transform *)0x0) {
          uVar9._4_4_ = uStack_6._4_4_ + VStack_5.y;
          VStack_5._0_8_ = uVar9;
          VStack_5.z = pivot->z + VStack_5.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                    (pTVar17,&VStack_5,(MethodInfo *)0x0);
          this_00 = (this->fields).displayObject;
          if ((this_00 != (RewardedAdDisplayObject *)0x0) &&
             (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0),
             pTVar17 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_5.x = 0.0;
            VStack_5.y = 0.0;
            VStack_5.z = 0.0;
            pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar19);
            uStack_6._0_4_ = (this->fields).displayObjectOffset.y;
            uStack_6._4_4_ = (this->fields).displayObjectOffset.z;
            fStack_18 = (float)(this->fields).worldObjectID + VStack_5.z;
            uStack_1 = CONCAT44(uStack_6._4_4_ + VStack_5.y,(float)uStack_6 + VStack_5.x);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar19,&uStack_1);
            return;
          }
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_CreateDisplayObject(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  WorldObjectInteractionSystem__UseSystem__RewardedAdDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (pRVar2 = (pPVar1->fields).rewardedAdDisplayPrefab, pRVar2 != (RewardedAdDisplayObject *)0x0))
  {
    original = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0);
    pGVar3 = (this->fields).displayObjectRoot;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar3 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,pTVar4,1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      bVar5 = iRam_? != 0;
      (this->fields).displayGO = pGVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).displayGO >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pGVar3 = (this->fields).displayGO;
      if ((pGVar3 != (GameObject *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        uStack_10._0_4_ = (this->fields).displayObjectOffset.y;
        uStack_10._4_4_ = (this->fields).displayObjectOffset.z;
        iStack_11 = (this->fields).worldObjectID;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar12 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(pvVar12,&uStack_10);
        pGVar3 = (this->fields).displayGO;
        if (pGVar3 != (GameObject *)0x0) {
          pRVar2 = (RewardedAdDisplayObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar3,
                              WorldObjectInteractionSystem__UseSystem__RewardedAdDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject>__
                             );
          bVar5 = iRam_? != 0;
          (this->fields).displayObject = pRVar2;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(this->fields).displayObject >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *puVar9;
              if (bVar5) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_DestroyRequirement
               (RewardedAdRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).displayObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RewardedAdDisplayObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if ((this->fields).displayObject == (RewardedAdDisplayObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = (this->fields).displayGO;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Finalize() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_Finalize(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
          FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(value,this);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_remove_OnKilled(this_00,value,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) &&
     (*(WorldObjectUseRequirementTracker **)(extraout_RAX + 0xd0) !=
      (WorldObjectUseRequirementTracker *)0x0)) {
    bVar1 = WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
            WorldObjectUseRequirementTracker_HasUnlocked
                      (*(WorldObjectUseRequirementTracker **)(extraout_RAX + 0xd0),
                       *(int32_t *)&(this->fields).field_0x14,(MethodInfo *)0x0);
    UVar2 = UseGUIResult__Enum_NoCost;
    if (bVar1 == 0) {
      UVar2 = UseGUIResult__Enum_CanAfford;
    }
    return UVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  UVar2 = (*pcVar3)();
  return UVar2;
}


/* Int32 GetRequirementValue() */

int32_t Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
        RewardedAdRequirement_GetRequirementValue(RewardedAdRequirement *this,MethodInfo *method)

{
  return (int32_t)((this->fields).requiresRewardedAd != 0);
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
RewardedAdRequirement_GetShowOption(RewardedAdRequirement *this,MethodInfo *method)

{
  if ((this->fields).requiresRewardedAd == 0) {
    return ShowUseOption__Enum_Normal;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) &&
     (*(WorldObjectUseRequirementTracker **)(extraout_RAX + 0xd0) !=
      (WorldObjectUseRequirementTracker *)0x0)) {
    bVar1 = WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
            WorldObjectUseRequirementTracker_HasUnlocked
                      (*(WorldObjectUseRequirementTracker **)(extraout_RAX + 0xd0),
                       *(int32_t *)&(this->fields).field_0x14,(MethodInfo *)0x0);
    SVar2 = ShowUseOption__Enum_Normal;
    if (bVar1 == 0) {
      SVar2 = ShowUseOption__Enum_RewardedAdPossible;
    }
    return SVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  SVar2 = (*pcVar3)();
  return SVar2;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_IsActive(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayGO;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pGVar1->fields)._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_OnAdFinished
               (RewardedAdRequirement *this,bool adWasSuccessful,MethodInfo *method)

{
  player = (MVPlayer *)CONCAT71(in_register_00000011,adWasSuccessful);
  if (cRam_? == '\0') {
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c___OnAdFinished_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c);
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentlyInAd = 0;
  if (adWasSuccessful != 0) {
    PStackY_68._args = (Object__Array *)&UNK_?;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method);
    if (extraout_RAX != 0) {
      this_00 = *(Dictionary_2_System_Int32_System_Single_ **)(extraout_RAX + 0xd0);
      key = *(int32_t *)&(this->fields).field_0x14;
      if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
        if (cRam_? == '\0') {
          PStackY_68._args = (Object__Array *)&UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                       );
          LOCK();
          UNLOCK();
          PStackY_68._args = (Object__Array *)&UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pcVar1 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          PStackY_68._args = (Object__Array *)&UNK_?;
          pcVar1 = (code *)FUN_?(&UNK_?);
          if (pcVar1 == (code *)0x0) {
            PStackY_68._args = (Object__Array *)&UNK_?;
            uVar2 = func_?(&UNK_?);
            PStackY_68._args = (Object__Array *)&UNK_?;
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pcRam_? = pcVar1;
        PStackY_68._args = (Object__Array *)&UNK_?;
        fVar3 = (float)(*pcRam_?)();
        if ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00[1].monitor !=
            (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
          PStackY_68._args = (Object__Array *)&UNK_?;
          fVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00[1].monitor,5,
                              MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                             );
          PStackY_68._args = (Object__Array *)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__TryInsert
                    (this_00,key,fVar4 + fVar3,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
            PStackY_68._args = (Object__Array *)&UNK_?;
            FUN_?();
          }
          pSVar5 = StringLiteral_Ad_RewardRequest_UseRequirement;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__StatHatWrapper,1,0);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__0__u_standalone__1_);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__0__u_fts__1_);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__0__u__1_);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__0__u_fts_standalone__1_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__StatHatWrapper);
          }
          if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
            if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__StatHatWrapper);
            }
            pSVar6 = StringLiteral__0__u__1_;
            PStackY_68._arg0 = (Object *)0x0;
            PStackY_68._arg1 = (Object *)0x0;
            PStackY_68._arg2 = (Object *)0x0;
            PStackY_68._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                      (&PStackY_68,
                       (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                       (Object *)pSVar5,(MethodInfo *)0x0);
            PStackY_48._arg0 = PStackY_68._arg0;
            PStackY_48._arg1 = PStackY_68._arg1;
            PStackY_48._arg2 = PStackY_68._arg2;
            PStackY_48._args = PStackY_68._args;
            pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                               ((IFormatProvider *)0x0,pSVar6,&PStackY_48,(MethodInfo *)0x0);
            pSVar6 = StringLiteral__0__u_standalone__1_;
            PStackY_48._arg0 = (Object *)0x0;
            PStackY_48._arg1 = (Object *)0x0;
            PStackY_48._arg2 = (Object *)0x0;
            PStackY_48._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                      (&PStackY_48,
                       (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                       (Object *)pSVar5,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                               ((IFormatProvider *)0x0,pSVar6,
                                (ParamsArray *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
            StatHatWrapper::StatHatWrapper_Count_1(pSVar7,pSVar6,1,(MethodInfo *)0x0);
            if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
              if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__StatHatWrapper);
              }
              pSVar6 = StringLiteral__0__u_fts__1_;
              PStackY_48._arg0 = (Object *)0x0;
              PStackY_48._arg1 = (Object *)0x0;
              PStackY_48._arg2 = (Object *)0x0;
              PStackY_48._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                        (&PStackY_48,
                         (Object *)
                         (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                         (Object *)pSVar5,(MethodInfo *)0x0);
              pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                                 ((IFormatProvider *)0x0,pSVar6,
                                  (ParamsArray *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
              pSVar6 = StringLiteral__0__u_fts_standalone__1_;
              PStackY_68._arg0 = (Object *)0x0;
              PStackY_68._arg1 = (Object *)0x0;
              PStackY_68._arg2 = (Object *)0x0;
              PStackY_68._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                        (&PStackY_68,
                         (Object *)
                         (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                         (Object *)pSVar5,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                                 ((IFormatProvider *)0x0,pSVar6,
                                  (ParamsArray *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
              StatHatWrapper::StatHatWrapper_Count_1(pSVar7,pSVar5,1,(MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar8 = (this->fields).displayGO;
  if (*(int *)&(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->_1).
               field_0x1c == 0) {
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  this_02 = TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
            static_fields->__9__29_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->_1)
                 .field_0x1c == 0) {
      PStackY_68._args = (Object__Array *)&UNK_?;
      FUN_?();
    }
    object = TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
             static_fields->__9;
    PStackY_68._args = (Object__Array *)&UNK_?;
    this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    PStackY_68._args = (Object__Array *)&UNK_?;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c___OnAdFinished_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->static_fields->
    __9__29_0 = this_02;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)
                      &TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c
                       ->static_fields->__9__29_0 >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  pMVar14 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      PStackY_68._args = (Object__Array *)&UNK_?;
      FUN_?(pMVar14);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    PStackY_68._args = (Object__Array *)&UNK_?;
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  PStackY_68._args = (Object__Array *)&UNK_?;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar16 = (longlong)(pLVar15->fields)._size;
    uVar9 = 0;
    if (0 < lVar16) {
      lVar17 = 0;
      lVar18 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          PStackY_68._args = (Object__Array *)&UNK_?;
          FUN_?();
        }
        pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar15->fields)._size <= uVar9) {
          PStackY_68._args = (Object__Array *)&UNK_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar19 = (pLVar15->fields)._items;
        if (pTVar19 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar19->max_length <= uVar9) {
          PStackY_68._args = (Object__Array *)&UNK_?;
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        PStackY_68._args = (Object__Array *)&UNK_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
        PStackY_68._args = (Object__Array *)&UNK_?;
        bVar20 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                           (pMVar14->field7_0x38).rgctx_data[1].method);
        if (bVar20 != 0) {
          PStackY_68._args = (Object__Array *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar9 = uVar9 + 1;
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar17 < lVar16);
    }
    return;
  }
code_?:
  PStackY_68._args = (Object__Array *)&UNK_?;
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_OnDataUpdate
               (RewardedAdRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardedAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(int32_t *)&(this->fields).field_0x14 = ownerID;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)data,(Object *)StringLiteral_rewardedAd,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,(Object *)StringLiteral_rewardedAd,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pOVar2 == (Object *)0x0) goto code_?;
  if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pRVar4 = (this->fields).displayObject;
  (this->fields).requiresRewardedAd = *(bool *)&pOVar2[1].klass;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar4 == (RewardedAdDisplayObject *)0x0) {
code_?:
    RewardedAdRequirement_CreateDisplayObject(this,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if ((this->fields).requiresRewardedAd != 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  lVar5 = lRam_?;
  uStackX_18 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_18,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        method = (MethodInfo *)0xADDR;
        uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_19 << 8);
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_rewardedAd,pOVar2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_01,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_00,
                 (MethodInfo *)0x0);
      pRVar4 = (this->fields).displayObject;
      if (pRVar4 != (RewardedAdDisplayObject *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar4,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLocalPlayerKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_OnLocalPlayerKilled
               (RewardedAdRequirement *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c___OnAdFinished_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentlyInAd = 0;
  pGVar1 = (this->fields).displayGO;
  if (*(int *)&(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
            static_fields->__9__29_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->_1)
                 .field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->
             static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c___OnAdFinished_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c->static_fields->
    __9__29_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement____c
                       ->static_fields->__9__29_0 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar8->fields)._size;
    uVar2 = 0;
    if (0 < lVar9) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar8->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar13 = (pLVar8->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar7->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_PayUseCost(RewardedAdRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnAdFinished_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).requiresRewardedAd == 0) {
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) &&
     (*(WorldObjectUseRequirementTracker **)(extraout_RAX + 0xd0) !=
      (WorldObjectUseRequirementTracker *)0x0)) {
    worldObjectID = *(uint *)&(this->fields).field_0x14;
    player = (MVPlayer *)(ulonglong)worldObjectID;
    method_00 = (MethodInfo *)0x0;
    bVar1 = WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
            WorldObjectUseRequirementTracker_HasUnlocked
                      (*(WorldObjectUseRequirementTracker **)(extraout_RAX + 0xd0),worldObjectID,
                       (MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if ((this->fields).hasCheckNoCost != 0) {
      pRVar2 = (this->fields).checkNoCost;
      if (pRVar2 == (RewardedCheckNoCost *)0x0) goto code_?;
      player = (pRVar2->fields)._._.method;
      cVar3 = (*(pRVar2->fields)._._.invoke_impl)();
      if (cVar3 != '\0') {
        return;
      }
    }
    (this->fields).currentlyInAd = 1;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (extraout_RAX_00 != 0) {
      object = *(Object **)(extraout_RAX_00 + 0xd0);
      pOVar4 = (Object__Class *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      FUN_?(pOVar4,this,
                    MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnAdFinished_bool_
                   );
      if (object != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>)
          ;
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_An_ad_is_already_on_going);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) {
          pIVar5 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          if (pIVar5 != (IAdManager *)0x0) {
            cVar3 = FUN_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar5);
            if (cVar3 == '\0') {
              if (pOVar4 != (Object__Class *)0x0) {
                pcVar6 = (code *)(pOVar4->_0).namespaze;
                uVar7 = 0;
                uVar8._0_2_ = (pOVar4->_0).byval_arg.attrs;
                uVar8._2_1_ = (pOVar4->_0).byval_arg.type;
                uVar8._3_5_ = *(undefined5 *)&(pOVar4->_0).byval_arg.field_0xb;
                goto code_?;
              }
            }
            else {
              if (object[5].klass != (Object__Class *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pSVar9 = StringLiteral_An_ad_is_already_on_going;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__ILogger);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                if (pIVar10 != (ILogger_1 *)0x0) {
                  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,0,pSVar9);
                  return;
                }
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              object[5].klass = pOVar4;
              func_?();
              pIVar5 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
              this_00 = (UnityAction_1_System_Int32Enum_ *)
                        FUN_?(
                                     TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                     );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (this_00,object,
                         MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                         ,(MethodInfo *)0x0);
              if (pIVar5 != (IAdManager *)0x0) {
                FUN_?();
                return;
              }
            }
          }
        }
        else if (pOVar4 != (Object__Class *)0x0) {
          pcVar6 = (code *)(pOVar4->_0).namespaze;
          uVar7 = 1;
          uVar8._0_2_ = (pOVar4->_0).byval_arg.attrs;
          uVar8._2_1_ = (pOVar4->_0).byval_arg.type;
          uVar8._3_5_ = *(undefined5 *)&(pOVar4->_0).byval_arg.field_0xb;
code_?:
          (*pcVar6)((pOVar4->_0).element_class,uVar7,uVar8);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement_SetScale(RewardedAdRequirement *this,Vector3 *scale,MethodInfo *method)

{
  uStack_1._0_4_ = scale->x;
  uStack_1._4_4_ = scale->y;
  this_00 = (this->fields).displayObject;
  fVar2 = (float)uStack_1._4_4_ * _UNK_?;
  fVar3 = (float)(undefined4)uStack_1 * _UNK_?;
  fVar4 = scale->z * _UNK_?;
  if (this_00 == (RewardedAdDisplayObject *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this_00,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_1 = CONCAT44(fVar2,fVar3);
  fStack_6 = fVar4;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar7,&uStack_1);
  return;
}


/* RewardedAdRequirement(GameObject) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor(RewardedAdRequirement *this,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  *(undefined4 *)&(this->fields).field_0x14 = 0xffffffff;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = 0;
  (this->fields).displayObjectRoot = root;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  b = (Delegate *)FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(b,this);
  if (pSVar6 == (SpawnRoleDataMediator *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar8 = &(pSVar6->fields).OnKilled;
  a = (pSVar6->fields).OnKilled;
  do {
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pAVar10 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    if (pDVar9 == (Delegate *)0x0) {
      pAVar11 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar11 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
               FUN_?(pDVar9,
                             TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (pAVar11 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        FUN_?(pDVar9,pAVar10);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    LOCK();
    pAVar12 = *ppAVar8;
    bVar1 = a == pAVar12;
    if (bVar1) {
      *ppAVar8 = pAVar11;
      pAVar12 = a;
    }
    UNLOCK();
    pAVar11 = a;
    if (!bVar1) {
      pAVar11 = pAVar12;
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)ppAVar8 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    bVar1 = pAVar11 != a;
    a = pAVar11;
  } while (bVar1);
  return;
}


/* RewardedAdRequirement(GameObject, RewardedCheckNoCost) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor_1
               (RewardedAdRequirement *this,GameObject *root,RewardedCheckNoCost *action,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  *(undefined4 *)&(this->fields).field_0x14 = 0xffffffff;
  (this->fields).displayObjectRoot = root;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).checkNoCost = action;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).checkNoCost >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).hasCheckNoCost = (this->fields).checkNoCost != (RewardedCheckNoCost *)0x0;
  pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  b = (Delegate *)FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(b,this);
  if (pSVar7 == (SpawnRoleDataMediator *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar9 = &(pSVar7->fields).OnKilled;
  a = (pSVar7->fields).OnKilled;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    if (pDVar10 == (Delegate *)0x0) {
      pAVar12 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar12 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
               FUN_?(pDVar10,
                             TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (pAVar12 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        FUN_?(pDVar10,pAVar11);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    LOCK();
    pAVar13 = *ppAVar9;
    bVar6 = a == pAVar13;
    if (bVar6) {
      *ppAVar9 = pAVar12;
      pAVar13 = a;
    }
    UNLOCK();
    pAVar12 = a;
    if (!bVar6) {
      pAVar12 = pAVar13;
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)ppAVar9 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    bVar6 = pAVar12 != a;
    a = pAVar12;
  } while (bVar6);
  return;
}


/* RewardedAdRequirement(GameObject, Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor_2
               (RewardedAdRequirement *this,GameObject *root,Vector3 *displayOffset,
               MethodInfo *method)

{
  RewardedAdRequirement__ctor(this,root,(MethodInfo *)0x0);
  uVar1 = (this->fields).displayObjectOffset.y;
  uVar2 = (this->fields).displayObjectOffset.z;
  uVar3 = displayOffset->x;
  fVar4 = displayOffset->y;
  fVar5 = displayOffset->z;
  fVar6 = (float)(this->fields).worldObjectID;
  (this->fields).displayObjectOffset.y = (float)uVar3 + (float)uVar1;
  (this->fields).displayObjectOffset.z = fVar4 + (float)uVar2;
  (this->fields).worldObjectID = (int32_t)(fVar5 + fVar6);
  return;
}


/* RewardedAdRequirement(GameObject, RewardedCheckNoCost, Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
     RewardedAdRequirement__ctor_3
               (RewardedAdRequirement *this,GameObject *root,RewardedCheckNoCost *action,
               Vector3 *displayOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  *(undefined4 *)&(this->fields).field_0x14 = 0xffffffff;
  (this->fields).displayObjectRoot = root;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObjectID = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).checkNoCost = action;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).checkNoCost >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).hasCheckNoCost = (this->fields).checkNoCost != (RewardedCheckNoCost *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
          FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  FUN_?(value,this);
  if (this_00 == (SpawnRoleDataMediator *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator_add_OnKilled(this_00,value,(MethodInfo *)0x0);
  uVar8 = (this->fields).displayObjectOffset.y;
  uVar9 = (this->fields).displayObjectOffset.z;
  uVar10 = displayOffset->x;
  fVar11 = displayOffset->y;
  fVar12 = displayOffset->z;
  fVar13 = (float)(this->fields).worldObjectID;
  (this->fields).displayObjectOffset.y = (float)uVar10 + (float)uVar8;
  (this->fields).displayObjectOffset.z = fVar11 + (float)uVar9;
  (this->fields).worldObjectID = (int32_t)(fVar12 + fVar13);
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
RewardedAdRequirement_get_GameObject(RewardedAdRequirement *this,MethodInfo *method)

{
  pGVar1 = (this->fields).displayGO;
  if (pGVar1 != (GameObject *)0x0) {
    return pGVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar2)();
  return pGVar1;
}

