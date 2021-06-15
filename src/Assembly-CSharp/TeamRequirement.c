
/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::TeamRequirement::TeamRequirement_GetCanUseGUIResult
          (TeamRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     this_00 != (MVLocalPlayer *)0x0)) {
    pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
    if (*(IKogamaSetting **)(unaff_ESI + 0xc) == (IKogamaSetting *)0x5) {
code_?:
      return (*(char *)(unaff_ESI + 0x10) != '\0') + UseGUIResult__Enum_NoUseButton;
    }
    if (pIVar2 == *(IKogamaSetting **)(unaff_ESI + 0xc)) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), pSVar3 == (SkyParam *)0x0)
         ) goto code_?;
      iVar4 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar3,(MethodInfo *)0x0);
      if (iVar4 != 1) goto code_?;
    }
    if (pIVar2 != *(IKogamaSetting **)(unaff_ESI + 0xc)) {
      return UseGUIResult__Enum_CannotAfford;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), pSVar3 != (SkyParam *)0x0))
    {
      iVar4 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar3,(MethodInfo *)0x0);
      if (iVar4 == 1) {
        return UseGUIResult__Enum_CannotAfford;
      }
      return UseGUIResult__Enum_CanAfford;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  UVar6 = (*pcVar5)();
  return UVar6;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::TeamRequirement::TeamRequirement_GetShowOption
          (TeamRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).team == 5) {
    return ShowUseOption__Enum_Normal;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     this_00 != (MVLocalPlayer *)0x0)) {
    pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
    if (pIVar2 != (IKogamaSetting *)(this->fields).team) {
      return ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_UsingTeam;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_01 != (SkyParam *)0x0)
       ) {
      iVar3 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
      if (iVar3 == 1) {
        return ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_UsingTeam;
      }
      return ShowUseOption__Enum_TeamAllowed|ShowUseOption__Enum_UsingTeam;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)data,StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    data = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)StringLiteral_team,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if ((data->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        ownerID = unaff_EDI;
        piVar3 = (int *)func_?();
        _UNK_? = (Dictionary_2_System_Object_System_Object_ *)*piVar3;
        if (_UNK_? == (Dictionary_2_System_Object_System_Object_ *)0x5) {
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          value = (CrossPlatformInputManager_VirtualButton *)
                  func_?(TypeInfo__System__Int32,&data);
          if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar1,StringLiteral_team,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                    (this_00,ownerID,pDVar1,(MethodInfo *)0x0);
        }
        x = _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            ownerID = (int32_t)TypeInfo__UnityEngine__Debug;
            data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
            func_?();
          }
          ownerID = 0;
          data = (Dictionary_2_System_Object_System_Object_ *)StringLiteral_Unable_to_tint_null_;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
  ownerID = 0;
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
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
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).tintObject = tintObject;
  (this->fields).hasUseButtonWhenFree = hasUseButtonWhenFree;
  return;
}

