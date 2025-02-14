
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
  this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)(this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  bVar3 = 0;
  if (this_03 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_03,woID,root,header,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar3 = 0;
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,iVar2,(MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar4 != (MVWorldObject *)0x0) {
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar4->fields).data;
        bVar3 = 0;
        this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
        if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          this = (TeamRequirementSettings *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
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
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_team,pOVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          method = (MethodInfo *)(pTVar1->fields).outlineTeamNone;
          (pTVar1->fields).currentOutline = (Outline *)method;
          root = (GameObject *)&(pTVar1->fields).currentOutline;
          woID = (int32_t)&UNK_?;
          func_?();
          woID = (int32_t)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
          ;
          this = (TeamRequirementSettings *)StringLiteral_team;
          value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_00,(Object *)StringLiteral_team,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          in_stack_7 = (Il2CppClass *)&UNK_?;
          this = (TeamRequirementSettings *)
                 mscorlib.dll::System::Convert::Convert_ToInt32
                           ((Object *)value_00.m_Index,(MethodInfo *)0x0);
          in_stack_7 = (Il2CppClass *)&UNK_?;
          this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)func_?();
          woID = (int32_t)StringLiteral_team;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Convert);
            func_?(&TypeInfo__System__Int32);
            func_?(&TypeInfo__MV__WorldObject__MVTeam);
            cRam_? = '\x01';
          }
          pOVar8 = (pTVar1->fields).currentOutline;
          bVar3 = 0;
          if (pOVar8 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar8,0,(MethodInfo *)0x0);
            bVar3 = 0;
            if (this_03 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
              pIVar9 = (((Dictionary_2_System_Int32Enum_System_Object___Class *)this_03->klass)->_0)
                       .element_class;
              pIVar10 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              bVar3 = pIVar9 < pIVar10;
              if (pIVar9 == pIVar10) {
                puVar11 = (undefined4 *)func_?();
                switch(*puVar11) {
                case 0:
                  pOVar8 = (pTVar1->fields).outlineTeamBlue;
                  break;
                case 1:
                  pOVar8 = (pTVar1->fields).outlineTeamRed;
                  break;
                case 2:
                  pOVar8 = (pTVar1->fields).outlineTeamGreen;
                  break;
                case 3:
                  pOVar8 = (pTVar1->fields).outlineTeamYellow;
                  break;
                default:
                  pOVar8 = (pTVar1->fields).outlineTeamNone;
                }
                (pTVar1->fields).currentOutline = pOVar8;
                func_?();
                pOVar8 = (pTVar1->fields).currentOutline;
                bVar3 = 0;
                if (pOVar8 != (Outline *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pOVar8,1,(MethodInfo *)0x0);
                  this_01 = (pTVar1->fields).settingsBase;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  root = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToInt32
                                   ((Object *)this_03,(MethodInfo *)0x0);
                  pOVar6 = (Object *)func_?();
                  bVar3 = 0;
                  if (this_01 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              (this_01,(String *)woID,pOVar6,(MethodInfo *)0x0);
                    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    bVar3 = 0;
                    if (pMVar12 != (MVNetworkGame *)0x0) {
                      pMVar13 = (pMVar12->fields).teamManager;
                      bVar3 = 0;
                      this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                      if (pMVar13 != (MVTeamManager *)0x0) {
                        this_03 = (pMVar13->fields).teamNames;
                        pTVar14 = (pTVar1->fields).buttonTeamBlueName;
                        bVar3 = 0;
                        if (this_03 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_03,0,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          bVar3 = 0;
                          if (pTVar14 != (Text *)0x0) {
                            (*(code *)(pTVar14->klass->vtable).set_text.method)
                                      (pTVar14,pOVar6,
                                       (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.
                                       methodPtr);
                            pTVar14 = (pTVar1->fields).buttonTeamRedName;
                            pOVar6 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_03,1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            bVar3 = 0;
                            if (pTVar14 != (Text *)0x0) {
                              (*(code *)(pTVar14->klass->vtable).set_text.method)
                                        (pTVar14,pOVar6,
                                         (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.
                                         methodPtr);
                              pTVar14 = (pTVar1->fields).buttonTeamGreenName;
                              pOVar6 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_03,2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                              bVar3 = 0;
                              if (pTVar14 != (Text *)0x0) {
                                (*(code *)(pTVar14->klass->vtable).set_text.method)
                                          (pTVar14,pOVar6,
                                           (pTVar14->klass->vtable).CalculateLayoutInputHorizontal_1.
                                           methodPtr);
                                pTVar14 = (pTVar1->fields).buttonTeamYellowName;
                                pOVar6 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_03,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                                bVar3 = 0;
                                if (pTVar14 != (Text *)0x0) {
                                  (*(code *)(pTVar14->klass->vtable).set_text.method)
                                            (pTVar14,pOVar6,
                                             (pTVar14->klass->vtable).
                                             CalculateLayoutInputHorizontal_1.methodPtr);
                                  pSVar15 = (pTVar1->fields).buttonTeamNone;
                                  pOVar6 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff8);
                                  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar6,(MethodInfo *)0x0);
                                  bVar3 = 0;
                                  this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0
                                  ;
                                  if (pSVar15 != (SettingsButton *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              (pSVar15,StringLiteral_team,iVar2,(MethodInfo *)0x0);
                                    pSVar15 = (pTVar1->fields).buttonTeamBlue;
                                    pOVar6 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xfffffff4);
                                    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                       (pOVar6,(MethodInfo *)0x0);
                                    bVar3 = 0;
                                    this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                              0x0;
                                    if (pSVar15 != (SettingsButton *)0x0) {
                                      SettingsButton::SettingsButton_Initialize
                                                (pSVar15,StringLiteral_team,iVar2,(MethodInfo *)0x0)
                                      ;
                                      pSVar15 = (pTVar1->fields).buttonTeamRed;
                                      pOVar6 = (Object *)
                                                func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                &stack0xfffffff0);
                                      iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                         (pOVar6,(MethodInfo *)0x0);
                                      bVar3 = 0;
                                      this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *
                                                )0x0;
                                      if (pSVar15 != (SettingsButton *)0x0) {
                                        SettingsButton::SettingsButton_Initialize
                                                  (pSVar15,StringLiteral_team,iVar2,
                                                   (MethodInfo *)0x0);
                                        this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_
                                                   *)(pTVar1->fields).buttonTeamGreen;
                                        pOVar6 = (Object *)
                                                  func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                  &stack0xffffffec);
                                        iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                           (pOVar6,(MethodInfo *)0x0);
                                        bVar3 = 0;
                                        if (this_03 !=
                                            (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0
                                           ) {
                                          SettingsButton::SettingsButton_Initialize
                                                    ((SettingsButton *)this_03,StringLiteral_team,
                                                     iVar2,(MethodInfo *)0x0);
                                          pSVar15 = (pTVar1->fields).buttonTeamYellow;
                                          pOVar6 = (Object *)
                                                    func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffe8
                                                  );
                                          iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                             (pOVar6,(MethodInfo *)0x0);
                                          bVar3 = 0;
                                          if (pSVar15 != (SettingsButton *)0x0) {
                                            SettingsButton::SettingsButton_Initialize
                                                      (pSVar15,StringLiteral_team,iVar2,
                                                       (MethodInfo *)0x0);
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
                }
              }
              else {
                func_?();
              }
            }
          }
        }
      }
    }
  }
  uVar16 = func_?();
  pbVar17 = (byte *)((ulonglong)uVar16 >> 0x20);
  bVar18 = (byte)uVar16;
  bVar19 = CARRY1(*pbVar17,bVar18) || CARRY1(*pbVar17 + bVar18,bVar3);
  *pbVar17 = *pbVar17 + bVar18 + bVar3;
  bVar3 = *(byte *)&this_03->klass;
  bVar20 = *(char *)&this_03->klass + bVar18;
  *(byte *)&this_03->klass = bVar20 + bVar19;
  (&stack0xffffffea)[(int)uVar16 * 2] =
       (&stack0xffffffea)[(int)uVar16 * 2] + extraout_CL +
       (CARRY1(bVar3,bVar18) || CARRY1(bVar20,bVar19));
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
        func_?(&(pTVar1->fields).currentOutline,pOVar2);
        pOVar2 = (pTVar1->fields).currentOutline;
        bVar3 = 0;
        if (pOVar2 != (Outline *)0x0) {
          pOVar7 = (Object *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar2,1,(MethodInfo *)0x0);
          this_00 = (pTVar1->fields).settingsBase;
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            key = (String *)TypeInfo__System__Convert;
            this = (TeamRequirementSettings *)&UNK_?;
            func_?();
          }
          key = (String *)0x0;
          this = (TeamRequirementSettings *)unaff_EDI;
          mscorlib.dll::System::Convert::Convert_ToInt32(unaff_EDI,(MethodInfo *)0x0);
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
  iVar8 = func_?();
  pbVar9 = (byte *)((int)&unaff_EDI[8].klass + iVar8 * 2);
  bVar10 = *pbVar9 + (byte)extraout_ECX;
  bVar11 = CARRY1(*pbVar9,(byte)extraout_ECX) || CARRY1(bVar10,bVar3);
  *pbVar9 = bVar10 + bVar3;
  pbVar9 = (byte *)(extraout_ECX + 0x47);
  bVar3 = *pbVar9;
  bVar10 = *pbVar9;
  *pbVar9 = bVar10 + extraout_DL + bVar11;
  pcVar12 = (char *)((int)&(pTVar1->fields).outlineTeamGreen + 3);
  *pcVar12 = *pcVar12 + extraout_DL +
            (CARRY1(bVar3,extraout_DL) || CARRY1(bVar10 + extraout_DL,bVar11));
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

