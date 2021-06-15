
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_Initialize
               (TeamRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
  pSVar2 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  if (pSVar1 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(pSVar1,woID,root,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      pMStack_3 = TypeInfo__MVGameControllerBase;
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
        (this_01 = (PrefabPool *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_00,woID,(MethodInfo *)0x0), this_01 != (PrefabPool *)0x0)) &&
       (this_02 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0),
       this_02 !=
       (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
        *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_02,StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 == 0) {
        pOVar5 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToInt32_16(pOVar5,(MethodInfo *)0x0);
        value = (Theme *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)this_02,StringLiteral_team,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      (this->fields).currentOutline = (this->fields).outlineTeamNone;
      value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_02,(Type *)StringLiteral_team,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_16((Object *)value_00,(MethodInfo *)0x0);
      pOVar5 = (Object *)func_?();
      pSVar2 = StringLiteral_team;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar6 = (this->fields).currentOutline;
      if ((pOVar6 != (Outline *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar6,0,(MethodInfo *)0x0), pOVar5 != (Object *)0x0)) {
        if ((pOVar5->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          puVar7 = (undefined4 *)func_?();
          switch(*puVar7) {
          case 0:
            pOVar6 = (this->fields).outlineTeamBlue;
            break;
          case 1:
            pOVar6 = (this->fields).outlineTeamRed;
            break;
          case 2:
            pOVar6 = (this->fields).outlineTeamGreen;
            break;
          case 3:
            pOVar6 = (this->fields).outlineTeamYellow;
            break;
          default:
            pOVar6 = (this->fields).outlineTeamNone;
          }
          (this->fields).currentOutline = pOVar6;
          if (pOVar6 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar6,1,(MethodInfo *)0x0);
            pSVar1 = (this->fields).settingsBase;
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32_16(pOVar5,(MethodInfo *)0x0);
            pOVar5 = (Object *)func_?();
            if (pSVar1 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged(pSVar1,pSVar2,pOVar5,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((this_03 != (MVNetworkGame *)0x0) &&
                 (this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                      ((DayNightCycle *)this_03,(MethodInfo *)0x0),
                 this_04 != (SkyParam *)0x0)) {
                this_05 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_04,(MethodInfo *)0x0);
                pTVar8 = (this->fields).buttonTeamBlueName;
                if ((this_05 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) &&
                   (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::MVTeam,System::Object]::
                             Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                       (this_05,MVTeam__Enum_Blue,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       ), pTVar8 != (Text *)0x0)) {
                  (*(code *)(pTVar8->klass->vtable).set_text.method)
                            (pTVar8,pOVar5,
                             (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pTVar8 = (this->fields).buttonTeamRedName;
                  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject
                           ::MVTeam,System::Object]::
                           Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                     (this_05,MVTeam__Enum_Red,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                     );
                  if (pTVar8 != (Text *)0x0) {
                    (*(code *)(pTVar8->klass->vtable).set_text.method)
                              (pTVar8,pOVar5,
                               (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                    pTVar8 = (this->fields).buttonTeamGreenName;
                    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::MVTeam,System::Object]::
                             Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                       (this_05,MVTeam__Enum_Green,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       );
                    if (pTVar8 != (Text *)0x0) {
                      (*(code *)(pTVar8->klass->vtable).set_text.method)
                                (pTVar8,pOVar5,
                                 (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar8 = (this->fields).buttonTeamYellowName;
                      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                               WorldObject::MVTeam,System::Object]::
                               Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                         (this_05,MVTeam__Enum_Yellow,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                         );
                      if (pTVar8 != (Text *)0x0) {
                        (*(code *)(pTVar8->klass->vtable).set_text.method)
                                  (pTVar8,pOVar5,
                                   (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pSVar9 = (this->fields).buttonTeamNone;
                        pOVar5 = (Object *)
                                 func_?(TypeInfo__MV__WorldObject__MVTeam,&stack0xfffffff8)
                        ;
                        iVar10 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                                          (pOVar5,(MethodInfo *)0x0);
                        if (pSVar9 != (SettingsButton *)0x0) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar9,StringLiteral_team,iVar10,(MethodInfo *)0x0);
                          pSVar9 = (this->fields).buttonTeamBlue;
                          pMStack_3 = (MVGameControllerBase__Class *)0x0;
                          pOVar5 = (Object *)
                                   func_?(TypeInfo__MV__WorldObject__MVTeam,&pMStack_3);
                          iVar10 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                                            (pOVar5,(MethodInfo *)0x0);
                          if (pSVar9 != (SettingsButton *)0x0) {
                            SettingsButton::SettingsButton_Initialize
                                      (pSVar9,StringLiteral_team,iVar10,(MethodInfo *)0x0);
                            pSVar9 = (this->fields).buttonTeamRed;
                            pOVar5 = (Object *)
                                     func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                     &stack0xfffffff0);
                            iVar10 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                                              (pOVar5,(MethodInfo *)0x0);
                            if (pSVar9 != (SettingsButton *)0x0) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar9,StringLiteral_team,iVar10,(MethodInfo *)0x0);
                              pSVar9 = (this->fields).buttonTeamGreen;
                              pOVar5 = (Object *)
                                       func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                       &stack0xffffffec);
                              iVar10 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                                                (pOVar5,(MethodInfo *)0x0);
                              if (pSVar9 != (SettingsButton *)0x0) {
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar9,StringLiteral_team,iVar10,(MethodInfo *)0x0);
                                pSVar9 = (this->fields).buttonTeamYellow;
                                pOVar5 = (Object *)
                                         func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                         &stack0xffffffe8);
                                iVar10 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                                                  (pOVar5,(MethodInfo *)0x0);
                                if (pSVar9 != (SettingsButton *)0x0) {
                                  SettingsButton::SettingsButton_Initialize
                                            (pSVar9,StringLiteral_team,iVar10,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          func_?();
        }
      }
    }
  }
  func_?(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_OnSettingChanged
               (TeamRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  pOVar2 = (this->fields).currentOutline;
  bVar3 = 0;
  if (pOVar2 != (Outline *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pOVar2,0,(MethodInfo *)0x0);
    unaff_EDI = value;
    bVar3 = 0;
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
      bVar3 = pIVar4 < pIVar5;
      if (pIVar4 == pIVar5) {
        puVar6 = (undefined4 *)func_?(value);
        switch(*puVar6) {
        case 0:
          pOVar2 = (pTVar1->fields).outlineTeamBlue;
          break;
        case 1:
          pOVar2 = (pTVar1->fields).outlineTeamRed;
          break;
        case 2:
          pOVar2 = (pTVar1->fields).outlineTeamGreen;
          break;
        case 3:
          pOVar2 = (pTVar1->fields).outlineTeamYellow;
          break;
        default:
          pOVar2 = (pTVar1->fields).outlineTeamNone;
        }
        (pTVar1->fields).currentOutline = pOVar2;
        bVar3 = 0;
        if (pOVar2 != (Outline *)0x0) {
          pOVar7 = (Object *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar2,1,(MethodInfo *)0x0);
          this_00 = (pTVar1->fields).settingsBase;
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            key = (String *)TypeInfo__System__Convert;
            this = (TeamRequirementSettings *)&UNK_?;
            func_?();
          }
          key = (String *)0x0;
          this = (TeamRequirementSettings *)unaff_EDI;
          mscorlib.dll::System::Convert::Convert_ToInt32_16(unaff_EDI,(MethodInfo *)0x0);
          key = (String *)&this;
          this = (TeamRequirementSettings *)TypeInfo__System__Int32;
          unaff_EDI = pOVar7;
          pOVar7 = (Object *)func_?();
          bVar3 = 0;
          pTVar1 = (TeamRequirementSettings *)0x0;
          if (this_00 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged(this_00,key,pOVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        func_?(value,TypeInfo__MV__WorldObject__MVTeam);
      }
    }
  }
  func_?(0);
  puVar8 = (uint *)((int)&unaff_EDI->klass + 1);
  *(undefined1 *)&unaff_EDI->klass = *(undefined1 *)&pTVar1->klass;
  *puVar8 = ~*puVar8;
  pbVar9 = (byte *)(extraout_ECX + -0x51efe809);
  bVar10 = *pbVar9;
  bVar11 = (byte)((uint)extraout_ECX >> 8);
  bVar12 = *pbVar9 + bVar11;
  *pbVar9 = bVar12 + bVar3;
  *puVar8 = ~*puVar8;
  *(char *)(unaff_EBX + -0x33efe809) =
       *(char *)(unaff_EBX + -0x33efe809) + extraout_DH +
       (CARRY1(bVar10,bVar11) || CARRY1(bVar12,bVar3));
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

