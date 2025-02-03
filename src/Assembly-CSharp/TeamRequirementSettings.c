
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
  this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)(this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  cVar3 = '\0';
  cVar4 = '\0';
  cVar5 = (int)this_02 < 0;
  if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_02,woID,root,header,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    cVar3 = '\0';
    cVar4 = '\0';
    cVar5 = (int)this_01 < 0;
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,iVar2,(MethodInfo *)0x0);
      cVar3 = '\0';
      cVar4 = '\0';
      cVar5 = (int)pMVar6 < 0;
      if (pMVar6 != (MVWorldObject *)0x0) {
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar6->fields).data;
        cVar3 = '\0';
        cVar4 = '\0';
        cVar5 = (int)this_00 < 0;
        this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
        if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          this = (TeamRequirementSettings *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (this_00,(Object *)StringLiteral_team,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar7 == 0) {
            method = (MethodInfo *)&this;
            this = (TeamRequirementSettings *)0x5;
            root = (GameObject *)TypeInfo__MV__WorldObject__MVTeam;
            woID = (int32_t)&UNK_?;
            pGVar8 = (GameObject *)func_?();
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              method = (MethodInfo *)TypeInfo__System__Convert;
              root = (GameObject *)&UNK_?;
              func_?();
            }
            method = (MethodInfo *)0x0;
            woID = (int32_t)&UNK_?;
            root = pGVar8;
            mscorlib.dll::System::Convert::Convert_ToInt32((Object *)pGVar8,(MethodInfo *)0x0);
            method = (MethodInfo *)&root;
            root = (GameObject *)TypeInfo__System__Int32;
            woID = (int32_t)&UNK_?;
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_team,pOVar9,
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
                            (this_00,(Object *)StringLiteral_team,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          in_stack_10 = (Il2CppClass *)&UNK_?;
          this = (TeamRequirementSettings *)
                 mscorlib.dll::System::Convert::Convert_ToInt32
                           ((Object *)value.m_Index,(MethodInfo *)0x0);
          in_stack_10 = (Il2CppClass *)&UNK_?;
          this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)func_?();
          woID = (int32_t)StringLiteral_team;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Convert);
            func_?(&TypeInfo__System__Int32);
            func_?(&TypeInfo__MV__WorldObject__MVTeam);
            cRam_? = '\x01';
          }
          pOVar11 = (pTVar1->fields).currentOutline;
          cVar3 = '\0';
          cVar4 = '\0';
          cVar5 = (int)pOVar11 < 0;
          if (pOVar11 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar11,0,(MethodInfo *)0x0);
            cVar3 = '\0';
            cVar4 = '\0';
            cVar5 = (int)this_02 < 0;
            if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
              pIVar12 = (((Dictionary_2_System_Int32Enum_System_Object___Class *)this_02->klass)->_0)
                       .element_class;
              pIVar13 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              cVar3 = pIVar12 < pIVar13;
              cVar4 = SBORROW4((int)pIVar12,(int)pIVar13);
              cVar5 = (int)pIVar12 - (int)pIVar13 < 0;
              if (pIVar12 == pIVar13) {
                puVar14 = (undefined4 *)func_?();
                switch(*puVar14) {
                case 0:
                  pOVar11 = (pTVar1->fields).outlineTeamBlue;
                  break;
                case 1:
                  pOVar11 = (pTVar1->fields).outlineTeamRed;
                  break;
                case 2:
                  pOVar11 = (pTVar1->fields).outlineTeamGreen;
                  break;
                case 3:
                  pOVar11 = (pTVar1->fields).outlineTeamYellow;
                  break;
                default:
                  pOVar11 = (pTVar1->fields).outlineTeamNone;
                }
                (pTVar1->fields).currentOutline = pOVar11;
                func_?();
                pOVar11 = (pTVar1->fields).currentOutline;
                cVar3 = '\0';
                cVar4 = '\0';
                cVar5 = (int)pOVar11 < 0;
                if (pOVar11 != (Outline *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pOVar11,1,(MethodInfo *)0x0);
                  pSVar15 = (pTVar1->fields).settingsBase;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  root = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToInt32
                                   ((Object *)this_02,(MethodInfo *)0x0);
                  pOVar9 = (Object *)func_?();
                  cVar3 = '\0';
                  cVar4 = '\0';
                  cVar5 = (int)pSVar15 < 0;
                  if (pSVar15 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              (pSVar15,(String *)woID,pOVar9,(MethodInfo *)0x0);
                    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    cVar3 = '\0';
                    cVar4 = '\0';
                    cVar5 = (int)pMVar16 < 0;
                    if (pMVar16 != (MVNetworkGame *)0x0) {
                      pMVar17 = (pMVar16->fields).teamManager;
                      cVar3 = '\0';
                      cVar4 = '\0';
                      cVar5 = (int)pMVar17 < 0;
                      this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                      if (pMVar17 != (MVTeamManager *)0x0) {
                        this_02 = (pMVar17->fields).teamNames;
                        pTVar18 = (pTVar1->fields).buttonTeamBlueName;
                        cVar3 = '\0';
                        cVar4 = '\0';
                        cVar5 = (int)this_02 < 0;
                        if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,0,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          cVar3 = '\0';
                          cVar4 = '\0';
                          cVar5 = (int)pTVar18 < 0;
                          if (pTVar18 != (Text *)0x0) {
                            (*(code *)(pTVar18->klass->vtable).set_text.method)
                                      (pTVar18,pOVar9,
                                       (pTVar18->klass->vtable).CalculateLayoutInputHorizontal_1.
                                       methodPtr);
                            pTVar18 = (pTVar1->fields).buttonTeamRedName;
                            pOVar9 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_02,1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            cVar3 = '\0';
                            cVar4 = '\0';
                            cVar5 = (int)pTVar18 < 0;
                            if (pTVar18 != (Text *)0x0) {
                              (*(code *)(pTVar18->klass->vtable).set_text.method)
                                        (pTVar18,pOVar9,
                                         (pTVar18->klass->vtable).CalculateLayoutInputHorizontal_1.
                                         methodPtr);
                              pTVar18 = (pTVar1->fields).buttonTeamGreenName;
                              pOVar9 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_02,2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                              cVar3 = '\0';
                              cVar4 = '\0';
                              cVar5 = (int)pTVar18 < 0;
                              if (pTVar18 != (Text *)0x0) {
                                (*(code *)(pTVar18->klass->vtable).set_text.method)
                                          (pTVar18,pOVar9,
                                           (pTVar18->klass->vtable).CalculateLayoutInputHorizontal_1.
                                           methodPtr);
                                pTVar18 = (pTVar1->fields).buttonTeamYellowName;
                                pOVar9 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_02,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                                cVar3 = '\0';
                                cVar4 = '\0';
                                cVar5 = (int)pTVar18 < 0;
                                if (pTVar18 != (Text *)0x0) {
                                  (*(code *)(pTVar18->klass->vtable).set_text.method)
                                            (pTVar18,pOVar9,
                                             (pTVar18->klass->vtable).
                                             CalculateLayoutInputHorizontal_1.methodPtr);
                                  pSVar19 = (pTVar1->fields).buttonTeamNone;
                                  pOVar9 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff8);
                                  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar9,(MethodInfo *)0x0);
                                  cVar3 = '\0';
                                  cVar4 = '\0';
                                  cVar5 = (int)pSVar19 < 0;
                                  this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0
                                  ;
                                  if (pSVar19 != (SettingsButton *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              (pSVar19,StringLiteral_team,iVar2,(MethodInfo *)0x0);
                                    pSVar19 = (pTVar1->fields).buttonTeamBlue;
                                    pOVar9 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xfffffff4);
                                    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                       (pOVar9,(MethodInfo *)0x0);
                                    cVar3 = '\0';
                                    cVar4 = '\0';
                                    cVar5 = (int)pSVar19 < 0;
                                    this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                              0x0;
                                    if (pSVar19 != (SettingsButton *)0x0) {
                                      SettingsButton::SettingsButton_Initialize
                                                (pSVar19,StringLiteral_team,iVar2,(MethodInfo *)0x0)
                                      ;
                                      pSVar19 = (pTVar1->fields).buttonTeamRed;
                                      pOVar9 = (Object *)
                                                func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                &stack0xfffffff0);
                                      iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                         (pOVar9,(MethodInfo *)0x0);
                                      cVar3 = '\0';
                                      cVar4 = '\0';
                                      cVar5 = (int)pSVar19 < 0;
                                      this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *
                                                )0x0;
                                      if (pSVar19 != (SettingsButton *)0x0) {
                                        SettingsButton::SettingsButton_Initialize
                                                  (pSVar19,StringLiteral_team,iVar2,
                                                   (MethodInfo *)0x0);
                                        this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_
                                                   *)(pTVar1->fields).buttonTeamGreen;
                                        pOVar9 = (Object *)
                                                  func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                  &stack0xffffffec);
                                        iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                           (pOVar9,(MethodInfo *)0x0);
                                        cVar3 = '\0';
                                        cVar4 = '\0';
                                        cVar5 = (int)this_02 < 0;
                                        if (this_02 !=
                                            (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0
                                           ) {
                                          SettingsButton::SettingsButton_Initialize
                                                    ((SettingsButton *)this_02,StringLiteral_team,
                                                     iVar2,(MethodInfo *)0x0);
                                          pSVar19 = (pTVar1->fields).buttonTeamYellow;
                                          pOVar9 = (Object *)
                                                    func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffe8
                                                  );
                                          iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                             (pOVar9,(MethodInfo *)0x0);
                                          cVar3 = '\0';
                                          cVar4 = '\0';
                                          cVar5 = (int)pSVar19 < 0;
                                          if (pSVar19 != (SettingsButton *)0x0) {
                                            SettingsButton::SettingsButton_Initialize
                                                      (pSVar19,StringLiteral_team,iVar2,
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
  bVar20 = func_?();
  if (cVar4 == cVar5) {
    func_?();
    pTVar1 = this;
    cRam_? = 1;
    pOVar11 = (this->fields).currentOutline;
    if ((pOVar11 != (Outline *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pOVar11,0,(MethodInfo *)0x0), pGVar8 = root,
       root != (GameObject *)0x0)) {
      if ((root->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        puVar14 = (undefined4 *)func_?();
        switch(*puVar14) {
        case 0:
          pOVar11 = (pTVar1->fields).outlineTeamBlue;
          break;
        case 1:
          pOVar11 = (pTVar1->fields).outlineTeamRed;
          break;
        case 2:
          pOVar11 = (pTVar1->fields).outlineTeamGreen;
          break;
        case 3:
          pOVar11 = (pTVar1->fields).outlineTeamYellow;
          break;
        default:
          pOVar11 = (pTVar1->fields).outlineTeamNone;
        }
        (pTVar1->fields).currentOutline = pOVar11;
        func_?();
        pOVar11 = (pTVar1->fields).currentOutline;
        if (pOVar11 != (Outline *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar11,1,(MethodInfo *)0x0);
          pSVar15 = (pTVar1->fields).settingsBase;
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this = (TeamRequirementSettings *)
                 mscorlib.dll::System::Convert::Convert_ToInt32((Object *)pGVar8,(MethodInfo *)0x0)
          ;
          pOVar9 = (Object *)func_?();
          if (pSVar15 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      (pSVar15,(String *)woID,pOVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        func_?();
      }
    }
    func_?();
    *(undefined4 *)(extraout_EDX_00 + 0x3e) = 0x3e42cc10;
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  *(char *)(extraout_EDX + -0x78efc1c1) = *(char *)(extraout_EDX + -0x78efc1c1) + bVar20 + cVar3;
  pcVar22 = (char *)((int)this_02 * 2 + -0x3333efc2);
  *pcVar22 = *pcVar22 + extraout_CL + (9 < (bVar20 & 0xf) | in_AF);
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
  func_?();
  *(undefined4 *)(extraout_EDX + 0x3e) = 0x3e42cc10;
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

