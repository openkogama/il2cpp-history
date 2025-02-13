
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
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  bVar3 = 0;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar3 = 0;
    unaff_EBX = (Text *)iVar2;
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,iVar2,(MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar4 != (MVWorldObject *)0x0) {
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar4->fields).data;
        bVar3 = 0;
        if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          this = (TeamRequirementSettings *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (this_01,(Object *)StringLiteral_team,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar5 == 0) {
            method = (MethodInfo *)&this;
            this = (TeamRequirementSettings *)0x5;
            root = (GameObject *)TypeInfo__MV__WorldObject__MVTeam;
            woID = (int32_t)&UNK_?;
            unaff_EBX = (Text *)func_?();
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              method = (MethodInfo *)TypeInfo__System__Convert;
              root = (GameObject *)&UNK_?;
              func_?();
            }
            method = (MethodInfo *)0x0;
            woID = (int32_t)&UNK_?;
            root = (GameObject *)unaff_EBX;
            mscorlib.dll::System::Convert::Convert_ToInt32((Object *)unaff_EBX,(MethodInfo *)0x0);
            method = (MethodInfo *)&root;
            root = (GameObject *)TypeInfo__System__Int32;
            woID = (int32_t)&UNK_?;
            pOVar6 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
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
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01,(Object *)StringLiteral_team,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          in_stack_7 = (Il2CppClass *)&UNK_?;
          this = (TeamRequirementSettings *)
                 mscorlib.dll::System::Convert::Convert_ToInt32
                           ((Object *)value.m_Index,(MethodInfo *)0x0);
          in_stack_7 = (Il2CppClass *)&UNK_?;
          pOVar6 = (Object *)func_?();
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
            if (pOVar6 != (Object *)0x0) {
              pIVar9 = (pOVar6->klass->_0).element_class;
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
                  unaff_EBX = (Text *)(pTVar1->fields).settingsBase;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  root = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToInt32(pOVar6,(MethodInfo *)0x0);
                  pOVar6 = (Object *)func_?();
                  bVar3 = 0;
                  if (unaff_EBX != (Text *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              ((SettingsBase *)unaff_EBX,(String *)woID,pOVar6,(MethodInfo *)0x0);
                    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    bVar3 = 0;
                    if (pMVar12 != (MVNetworkGame *)0x0) {
                      pMVar13 = (pMVar12->fields).teamManager;
                      bVar3 = 0;
                      if (pMVar13 != (MVTeamManager *)0x0) {
                        this_02 = (pMVar13->fields).teamNames;
                        unaff_EBX = (pTVar1->fields).buttonTeamBlueName;
                        bVar3 = 0;
                        if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,0,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          bVar3 = 0;
                          if (unaff_EBX != (Text *)0x0) {
                            (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                      (unaff_EBX,pOVar6,
                                       (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                       methodPtr);
                            pTVar14 = (pTVar1->fields).buttonTeamRedName;
                            pOVar6 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_02,1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            bVar3 = 0;
                            unaff_EBX = (Text *)0x0;
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
                                                   this_02,2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                              bVar3 = 0;
                              unaff_EBX = (Text *)0x0;
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
                                                     )this_02,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                                bVar3 = 0;
                                unaff_EBX = (Text *)0x0;
                                if (pTVar14 != (Text *)0x0) {
                                  unaff_EBX = (Text *)(pTVar14->klass->vtable).
                                                      CalculateLayoutInputHorizontal_1.methodPtr;
                                  (*(code *)(pTVar14->klass->vtable).set_text.method)(pTVar14,pOVar6)
                                  ;
                                  pSVar15 = (pTVar1->fields).buttonTeamNone;
                                  pOVar6 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff8);
                                  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar6,(MethodInfo *)0x0);
                                  bVar3 = 0;
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
                                      if (pSVar15 != (SettingsButton *)0x0) {
                                        SettingsButton::SettingsButton_Initialize
                                                  (pSVar15,StringLiteral_team,iVar2,
                                                   (MethodInfo *)0x0);
                                        pSVar15 = (pTVar1->fields).buttonTeamGreen;
                                        pOVar6 = (Object *)
                                                  func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                  &stack0xffffffec);
                                        iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                           (pOVar6,(MethodInfo *)0x0);
                                        bVar3 = 0;
                                        if (pSVar15 != (SettingsButton *)0x0) {
                                          SettingsButton::SettingsButton_Initialize
                                                    (pSVar15,StringLiteral_team,iVar2,
                                                     (MethodInfo *)0x0);
                                          pSVar15 = (pTVar1->fields).buttonTeamYellow;
                                          pOVar6 = (Object *)
                                                    func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffe8
                                                  );
                                          iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                             (pOVar6,(MethodInfo *)0x0);
                                          bVar3 = 0;
                                          pTVar1 = (TeamRequirementSettings *)0x0;
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
  func_?();
  pTVar16 = pTVar1->klass;
  pbVar17 = (byte *)(extraout_EDX + -0x48efc1bd);
  bVar18 = *pbVar17;
  bVar19 = (byte)((uint)extraout_EDX >> 8);
  bVar20 = *pbVar17 + bVar19;
  *pbVar17 = bVar20 + bVar3;
  pcVar21 = (char *)((int)unaff_EBX + (int)pTVar16 * 2 + -0x3333efc0);
  *pcVar21 = *pcVar21 + (char)((uint)((int)&unaff_EBX->klass + 2) >> 8) +
            (CARRY1(bVar18,bVar19) || CARRY1(bVar20,bVar3));
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  if ((pOVar2 != (Outline *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pOVar2,0,(MethodInfo *)0x0), pOVar3 = value, value != (Object *)0x0))
  {
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
      (pTVar1->fields).currentOutline = pOVar2;
      func_?(&(pTVar1->fields).currentOutline,pOVar2);
      pOVar2 = (pTVar1->fields).currentOutline;
      if (pOVar2 != (Outline *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pOVar2,1,(MethodInfo *)0x0);
        this_00 = (pTVar1->fields).settingsBase;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          key = (String *)TypeInfo__System__Convert;
          this = (TeamRequirementSettings *)&UNK_?;
          func_?();
        }
        key = (String *)0x0;
        this = (TeamRequirementSettings *)pOVar3;
        mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
        key = (String *)&this;
        this = (TeamRequirementSettings *)TypeInfo__System__Int32;
        pOVar3 = (Object *)func_?();
        pTVar1 = (TeamRequirementSettings *)0x0;
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(this_00,key,pOVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      func_?(value,TypeInfo__MV__WorldObject__MVTeam);
    }
  }
  bVar5 = func_?();
  bVar6 = *extraout_ECX;
  *extraout_ECX = *extraout_ECX + bVar5;
  *(byte *)&pTVar1->klass = *(char *)&pTVar1->klass + bVar5 + CARRY1(bVar6,bVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

