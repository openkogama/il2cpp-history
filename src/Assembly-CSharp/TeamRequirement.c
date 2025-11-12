
/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::TeamRequirement::TeamRequirement_GetCanUseGUIResult
          (TeamRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if ((this->fields).team == 5) {
code_?:
      return ((this->fields).hasUseButtonWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
    }
    iVar4 = (pMVar3->fields)._._Team_k__BackingField;
    if (iVar4 != (this->fields).team) {
      return UseGUIResult__Enum_CannotAfford;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar5 = (pMVar2->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar5->fields).teams;
      if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        if ((pDVar6->fields)._count - (pDVar6->fields)._freeCount != 1) goto code_?;
        if (iVar4 != (this->fields).team) {
          return UseGUIResult__Enum_CannotAfford;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar2->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar6 = (pMVar5->fields).teams;
          if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
            UVar7 = UseGUIResult__Enum_CanAfford;
            if ((pDVar6->fields)._count - (pDVar6->fields)._freeCount == 1) {
              UVar7 = UseGUIResult__Enum_CannotAfford;
            }
            return UVar7;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  UVar7 = (*pcVar8)();
  return UVar7;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::TeamRequirement::TeamRequirement_GetShowOption
          (TeamRequirement *this,MethodInfo *method)

{
  if ((this->fields).team == 5) {
    return ShowUseOption__Enum_Normal;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      if ((pMVar3->fields)._._Team_k__BackingField != (this->fields).team) {
        return ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_UsingTeam;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar5 = (pMVar4->fields).teams;
        if (pDVar5 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
          SVar6 = ShowUseOption__Enum_TeamAllowed|ShowUseOption__Enum_UsingTeam;
          if ((pDVar5->fields)._count - (pDVar5->fields)._freeCount == 1) {
            SVar6 = ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_UsingTeam;
          }
          return SVar6;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  SVar6 = (*pcVar7)();
  return SVar6;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::TeamRequirement::TeamRequirement_OnDataUpdate
               (TeamRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unable_to_tint_null_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)data,(Object *)StringLiteral_team,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)StringLiteral_team,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
    {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = *(int *)&pOVar2[1].klass;
    (this->fields).team = iVar4;
    if (iVar4 == 5) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar5 = lRam_?;
      pOVar2 = (Object *)0x0;
      uStackX_10 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
        }
      }
      else {
        pOVar2 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_team,
                 pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_01,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_00,
                 (MethodInfo *)0x0);
    }
    pTVar10 = (this->fields).tintObject;
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
    if (pTVar10 != (TintObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar10->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pTVar10 = (this->fields).tintObject;
        if (pTVar10 != (TintObject *)0x0) {
          (*(pTVar10->klass->vtable).TeamTint.methodPtr)
                    (pTVar10,(ulonglong)(uint)(this->fields).team,
                     (pTVar10->klass->vtable).TeamTint.method);
          return;
        }
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unable_to_tint_null_,(MethodInfo *)0x0);
  }
  return;
}


/* TeamRequirement(TintObject, Boolean) */

void Assembly-CSharp.dll::TeamRequirement::TeamRequirement__ctor
               (TeamRequirement *this,TintObject *tintObject,bool hasUseButtonWhenFree,
               MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).team = 5;
  (this->fields).tintObject = tintObject;
  if (bVar1) {
    (this->fields).hasUseButtonWhenFree = hasUseButtonWhenFree;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).tintObject >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields).hasUseButtonWhenFree = hasUseButtonWhenFree;
  return;
}

