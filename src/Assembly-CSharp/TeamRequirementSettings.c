
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_Initialize
               (TeamRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_Team_Requirement);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  pSVar2 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar3 = woID;
  if (pSVar2 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(pSVar2,woID,root,header,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_02,iVar3,(MethodInfo *)0x0), pMVar4 != (MVWorldObject *)0x0)) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar4->fields).data,
       this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
      this = (TeamRequirementSettings *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar5 == 0) {
        method = (MethodInfo *)&this;
        this = (TeamRequirementSettings *)0x5;
        root = (GameObject *)TypeInfo__MV__WorldObject__MVTeam;
        woID = (int32_t)&UNK_?;
        value = (GameObject *)func_?();
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)TypeInfo__System__Convert;
          root = (GameObject *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)0x0;
        woID = (int32_t)&UNK_?;
        root = value;
        mscorlib.dll::System::Convert::Convert_ToInt32((Object *)value,(MethodInfo *)0x0);
        method = (MethodInfo *)&root;
        root = (GameObject *)TypeInfo__System__Int32;
        woID = (int32_t)&UNK_?;
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_team
                   ,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      method = (MethodInfo *)(pTVar1->fields).outlineTeamNone;
      ppOVar7 = &(pTVar1->fields).currentOutline;
      *ppOVar7 = (Outline *)method;
      woID = (int32_t)&UNK_?;
      root = (GameObject *)ppOVar7;
      func_?();
      woID = (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      this = (TeamRequirementSettings *)StringLiteral_team;
      value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (this_00,(Object *)StringLiteral_team,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_8 = (Il2CppClass *)&UNK_?;
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Convert::Convert_ToInt32
                       ((Object *)value_00.m_Index,(MethodInfo *)0x0);
      in_stack_8 = (Il2CppClass *)&UNK_?;
      pOVar6 = (Object *)func_?();
      woID = (int32_t)StringLiteral_team;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Convert);
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__MV__WorldObject__MVTeam);
        cRam_? = '\x01';
      }
      if ((*ppOVar7 != (Outline *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)*ppOVar7,0,(MethodInfo *)0x0), pOVar6 != (Object *)0x0)) {
        if ((pOVar6->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          puVar9 = (undefined4 *)func_?();
          switch(*puVar9) {
          case 0:
            pOVar10 = (pTVar1->fields).outlineTeamBlue;
            break;
          case 1:
            pOVar10 = (pTVar1->fields).outlineTeamRed;
            break;
          case 2:
            pOVar10 = (pTVar1->fields).outlineTeamGreen;
            break;
          case 3:
            pOVar10 = (pTVar1->fields).outlineTeamYellow;
            break;
          default:
            pOVar10 = (pTVar1->fields).outlineTeamNone;
          }
          *ppOVar7 = pOVar10;
          func_?();
          if (*ppOVar7 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)*ppOVar7,1,(MethodInfo *)0x0);
            pSVar2 = (pTVar1->fields).settingsBase;
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            root = (GameObject *)
                   mscorlib.dll::System::Convert::Convert_ToInt32(pOVar6,(MethodInfo *)0x0);
            pOVar6 = (Object *)func_?();
            if (pSVar2 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        (pSVar2,(String *)woID,pOVar6,(MethodInfo *)0x0);
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pMVar12 = (pMVar11->fields).teamManager, pMVar12 != (MVTeamManager *)0x0)) {
                this_01 = (pMVar12->fields).teamNames;
                pTVar13 = (pTVar1->fields).buttonTeamBlueName;
                if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                   (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                        ), pTVar13 != (Text *)0x0)) {
                  (*(code *)(pTVar13->klass->vtable).set_text.method)
                            (pTVar13,pOVar6,
                             (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pTVar13 = (pTVar1->fields).buttonTeamRedName;
                  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                      );
                  if (pTVar13 != (Text *)0x0) {
                    (*(code *)(pTVar13->klass->vtable).set_text.method)
                              (pTVar13,pOVar6,
                               (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                    pTVar13 = (pTVar1->fields).buttonTeamGreenName;
                    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                        );
                    if (pTVar13 != (Text *)0x0) {
                      (*(code *)(pTVar13->klass->vtable).set_text.method)
                                (pTVar13,pOVar6,
                                 (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar13 = (pTVar1->fields).buttonTeamYellowName;
                      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,3
                                           ,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                          );
                      if (pTVar13 != (Text *)0x0) {
                        (*(code *)(pTVar13->klass->vtable).set_text.method)
                                  (pTVar13,pOVar6,
                                   (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pSVar14 = (pTVar1->fields).buttonTeamNone;
                        pOVar6 = (Object *)
                                  func_?(TypeInfo__MV__WorldObject__MVTeam,&stack0xfffffff8
                                                 );
                        iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar6,(MethodInfo *)0x0);
                        if (pSVar14 != (SettingsButton *)0x0) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar14,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                          pSVar14 = (pTVar1->fields).buttonTeamBlue;
                          pOVar6 = (Object *)
                                    func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                    &stack0xfffffff4);
                          iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                             (pOVar6,(MethodInfo *)0x0);
                          if (pSVar14 != (SettingsButton *)0x0) {
                            SettingsButton::SettingsButton_Initialize
                                      (pSVar14,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                            pSVar14 = (pTVar1->fields).buttonTeamRed;
                            pOVar6 = (Object *)
                                      func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                      &stack0xfffffff0);
                            iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                               (pOVar6,(MethodInfo *)0x0);
                            if (pSVar14 != (SettingsButton *)0x0) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar14,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                              pSVar14 = (pTVar1->fields).buttonTeamGreen;
                              pOVar6 = (Object *)
                                        func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                        &stack0xffffffec);
                              iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar6,(MethodInfo *)0x0);
                              if (pSVar14 != (SettingsButton *)0x0) {
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar14,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                                pSVar14 = (pTVar1->fields).buttonTeamYellow;
                                pOVar6 = (Object *)
                                          func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                          &stack0xffffffe8);
                                iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                   (pOVar6,(MethodInfo *)0x0);
                                if (pSVar14 != (SettingsButton *)0x0) {
                                  SettingsButton::SettingsButton_Initialize
                                            (pSVar14,StringLiteral_team,iVar3,(MethodInfo *)0x0);
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
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_OnSettingChanged
               (TeamRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  pOVar2 = (this->fields).currentOutline;
  ppOVar3 = &(this->fields).currentOutline;
  if ((pOVar2 != (Outline *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pOVar2,0,(MethodInfo *)0x0), unaff_EDI = value, value != (Object *)0x0
     )) {
    if ((value->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
      puVar4 = (undefined4 *)func_?(value);
      switch(*puVar4) {
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
      *ppOVar3 = pOVar2;
      func_?(ppOVar3,pOVar2);
      if (*ppOVar3 != (Outline *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)*ppOVar3,1,(MethodInfo *)0x0);
        pSVar5 = (pTVar1->fields).settingsBase;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          this = (TeamRequirementSettings *)TypeInfo__System__Convert;
          func_?();
        }
        this = (TeamRequirementSettings *)0x0;
        mscorlib.dll::System::Convert::Convert_ToInt32(unaff_EDI,(MethodInfo *)0x0);
        this = (TeamRequirementSettings *)&this;
        value_00 = (Object *)func_?();
        if (pSVar5 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar5,key,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      func_?(value,TypeInfo__MV__WorldObject__MVTeam);
    }
  }
  uVar6 = 0x103c;
  piVar7 = (int *)func_?();
  puVar8 = (undefined1 *)((longlong)*piVar7 * 0x3c);
  *(char *)(piVar7 + 0xc) =
       (char)piVar7[0xc] + extraout_DH + ((longlong)(int)puVar8 != (longlong)*piVar7 * 0x3c);
  bVar9 = (byte)piVar7;
  if (bVar9 != 0x10) {
    if (bVar9 < 0x11) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)piVar7[-0x12])();
      return;
    }
    piVar7 = (int *)(int)(short)piVar7;
    *(undefined1 *)&unaff_EDI->klass = *puVar8;
    *piVar7 = (int)piVar7 + (uint)(bVar9 < 0x10) + *piVar7;
    if (*piVar7 != 0) goto code_?;
    func_?(&TypeInfo__System__Convert,CONCAT22(uVar6,in_ES));
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
  }
  func_?(&StringLiteral_time);
  func_?(&StringLiteral_duration);
  uRam_? = 1;
code_?:
  id = key;
  pTVar1 = this;
  pSVar5 = (this->fields).settingsBase;
  if (pSVar5 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (pSVar5,(int32_t)key,(GameObject *)value,
               MVWorldObjectDocumentationType__Enum_TimeTrigger,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,(int32_t)id,(MethodInfo *)0x0),
        pMVar10 != (MVWorldObject *)0x0)) &&
       (this_00 = (TeamRequirementSettings *)(pMVar10->fields).data,
       this_00 != (TeamRequirementSettings *)0x0)) {
      value = (Object *)
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      key = StringLiteral_duration;
      this = this_00;
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                        (Object *)StringLiteral_duration,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Convert::Convert_ToSingle_1
                       ((Object *)this,(IFormatProvider *)pCVar11,(MethodInfo *)0x0);
      method = (MethodInfo *)&UNK_?;
      value_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                            (Object *)StringLiteral_time,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      method = (MethodInfo *)&UNK_?;
      value = (Object *)
              mscorlib.dll::System::Convert::Convert_ToSingle_1
                        ((Object *)value_01.m_Index,(IFormatProvider *)pCVar11,(MethodInfo *)0x0);
      pSVar12 = (SettingsSlider *)(pTVar1->fields).buttonTeamNone;
      if (pSVar12 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar12,StringLiteral_duration,(float)this,0.1,1000.0,(MethodInfo *)0x0);
        pSVar13 = (SettingsInputFieldSlider *)(pTVar1->fields).buttonTeamBlue;
        if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                    (pSVar13,StringLiteral_duration,(float)this,(MethodInfo *)0x0);
          pSVar12 = (SettingsSlider *)(pTVar1->fields).buttonTeamRed;
          if (pSVar12 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar12,StringLiteral_time,(float)value,0.0,1000.0,(MethodInfo *)0x0);
            pSVar13 = (SettingsInputFieldSlider *)(pTVar1->fields).buttonTeamGreen;
            if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (pSVar13,StringLiteral_time,(float)value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

