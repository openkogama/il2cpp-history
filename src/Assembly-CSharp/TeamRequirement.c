
/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::TeamRequirement::TeamRequirement_GetCanUseGUIResult
          (TeamRequirement *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    if ((this->fields).team == 5) {
code_?:
      return ((this->fields).hasUseButtonWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
    }
    iVar3 = (pMVar2->fields)._._Team_k__BackingField;
    if (iVar3 != (this->fields).team) {
      return UseGUIResult__Enum_CannotAfford;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar1->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
      iVar5 = MVTeamManager::MVTeamManager_TeamCount(pMVar4,(MethodInfo *)0x0);
      if (iVar5 != 1) goto code_?;
      if (iVar3 != (this->fields).team) {
        return UseGUIResult__Enum_CannotAfford;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar1->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
        iVar5 = MVTeamManager::MVTeamManager_TeamCount(pMVar4,(MethodInfo *)0x0);
        return (-(uint)(iVar5 != 1) & 0xfffffffc) + UseGUIResult__Enum_CannotAfford;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  UVar7 = (*pcVar6)();
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if ((pMVar2->fields)._._Team_k__BackingField != (this->fields).team) {
        return ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_UsingTeam;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
        iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
        return (-(uint)(iVar3 != 1) & 0xfffffc00) +
               (ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_UsingTeam);
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  SVar5 = (*pcVar4)();
  return SVar5;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::TeamRequirement::TeamRequirement_OnDataUpdate
               (TeamRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
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
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Unable_to_tint_null_);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  this_00 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       (Object *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      data = (Dictionary_2_System_Object_System_Object_ *)TVar2;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
        ownerID = unaff_EDI;
        piVar3 = (int *)func_?();
        _UNK_? = (Dictionary_2_System_Object_System_Object_ *)*piVar3;
        if (_UNK_? == (Dictionary_2_System_Object_System_Object_ *)0x5) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)func_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          value = (Object *)func_?(TypeInfo__System__Int32,&data);
          if (this_01 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_team,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                    (this_02,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_01,
                     (MethodInfo *)0x0);
        }
        x = _UNK_?;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            ownerID = (int32_t)TypeInfo__UnityEngine__Debug;
            data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
            func_?();
          }
          ownerID = 0;
          data = (Dictionary_2_System_Object_System_Object_ *)StringLiteral_Unable_to_tint_null_;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Unable_to_tint_null_,(MethodInfo *)0x0);
          return;
        }
        if (_UNK_? != (Object_1 *)0x0) {
          ownerID = _UNK_?->klass[1]._0.byval_arg.data.__klassIndex;
          data = _UNK_?;
          (*(code *)_UNK_?->klass[1]._0.namespaze)();
          return;
        }
      }
      else {
        ownerID = (int32_t)TypeInfo__MV__WorldObject__MVTeam;
        func_?();
      }
    }
  }
code_?:
  ownerID = (int32_t)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TeamRequirement(TintObject, Boolean) */

void Assembly-CSharp.dll::TeamRequirement::TeamRequirement__ctor
               (TeamRequirement *this,TintObject *tintObject,bool hasUseButtonWhenFree,
               MethodInfo *method)

{
  (this->fields).team = 5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).tintObject = tintObject;
  func_?(&(this->fields).tintObject,tintObject);
  (this->fields).hasUseButtonWhenFree = hasUseButtonWhenFree;
  return;
}

