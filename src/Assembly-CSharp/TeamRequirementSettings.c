
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  this_02 = (Text *)(this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  cVar3 = '\0';
  cVar4 = (int)this_02 < 0;
  if (this_02 != (Text *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_02,woID,root,header,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    cVar3 = '\0';
    cVar4 = (int)this_01 < 0;
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,iVar2,(MethodInfo *)0x0);
      cVar3 = '\0';
      cVar4 = (int)pMVar5 < 0;
      if (pMVar5 != (MVWorldObject *)0x0) {
        this_02 = (Text *)(pMVar5->fields).data;
        cVar3 = '\0';
        cVar4 = (int)this_02 < 0;
        if (this_02 != (Text *)0x0) {
          this = (TeamRequirementSettings *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
                             (Object *)StringLiteral_team,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar6 == 0) {
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
            pOVar7 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,
                       (Object *)StringLiteral_team,pOVar7,
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
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              ((Dictionary_2_System_Object_System_Object_ *)this_02,
                               (Object *)StringLiteral_team,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          in_stack_8 = (Il2CppClass *)&UNK_?;
          this = (TeamRequirementSettings *)
                 mscorlib.dll::System::Convert::Convert_ToInt32(pOVar7,(MethodInfo *)0x0);
          in_stack_8 = (Il2CppClass *)&UNK_?;
          this_02 = (Text *)func_?();
          woID = (int32_t)StringLiteral_team;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Convert);
            func_?(&TypeInfo__System__Int32);
            func_?(&TypeInfo__MV__WorldObject__MVTeam);
            cRam_? = '\x01';
          }
          pOVar9 = (pTVar1->fields).currentOutline;
          cVar3 = '\0';
          cVar4 = (int)pOVar9 < 0;
          if (pOVar9 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar9,0,(MethodInfo *)0x0);
            cVar3 = '\0';
            cVar4 = (int)this_02 < 0;
            if (this_02 != (Text *)0x0) {
              pIVar10 = (this_02->klass->_0).element_class;
              pIVar11 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
              cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
              if (pIVar10 == pIVar11) {
                puVar12 = (undefined4 *)func_?();
                switch(*puVar12) {
                case 0:
                  pOVar9 = (pTVar1->fields).outlineTeamBlue;
                  break;
                case 1:
                  pOVar9 = (pTVar1->fields).outlineTeamRed;
                  break;
                case 2:
                  pOVar9 = (pTVar1->fields).outlineTeamGreen;
                  break;
                case 3:
                  pOVar9 = (pTVar1->fields).outlineTeamYellow;
                  break;
                default:
                  pOVar9 = (pTVar1->fields).outlineTeamNone;
                }
                (pTVar1->fields).currentOutline = pOVar9;
                func_?();
                pOVar9 = (pTVar1->fields).currentOutline;
                cVar3 = '\0';
                cVar4 = (int)pOVar9 < 0;
                if (pOVar9 != (Outline *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pOVar9,1,(MethodInfo *)0x0);
                  pSVar13 = (pTVar1->fields).settingsBase;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  root = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToInt32
                                   ((Object *)this_02,(MethodInfo *)0x0);
                  pOVar7 = (Object *)func_?();
                  cVar3 = '\0';
                  cVar4 = (int)pSVar13 < 0;
                  if (pSVar13 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              (pSVar13,(String *)woID,pOVar7,(MethodInfo *)0x0);
                    pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    cVar3 = '\0';
                    cVar4 = (int)pMVar14 < 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      this_02 = (Text *)(pMVar14->fields).teamManager;
                      cVar3 = '\0';
                      cVar4 = (int)this_02 < 0;
                      if (this_02 != (Text *)0x0) {
                        this_02 = (Text *)(this_02->fields)._._.m_Material;
                        pTVar15 = (pTVar1->fields).buttonTeamBlueName;
                        cVar3 = '\0';
                        cVar4 = (int)this_02 < 0;
                        if (this_02 != (Text *)0x0) {
                          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,0,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          cVar3 = '\0';
                          cVar4 = (int)pTVar15 < 0;
                          if (pTVar15 != (Text *)0x0) {
                            (*(pTVar15->klass->vtable).set_text.methodPtr)
                                      (pTVar15,pOVar7,(pTVar15->klass->vtable).set_text.method);
                            pTVar15 = (pTVar1->fields).buttonTeamRedName;
                            pOVar7 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_02,1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            cVar3 = '\0';
                            cVar4 = (int)pTVar15 < 0;
                            if (pTVar15 != (Text *)0x0) {
                              (*(pTVar15->klass->vtable).set_text.methodPtr)
                                        (pTVar15,pOVar7,(pTVar15->klass->vtable).set_text.method);
                              pTVar15 = (pTVar1->fields).buttonTeamGreenName;
                              pOVar7 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_02,2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                              cVar3 = '\0';
                              cVar4 = (int)pTVar15 < 0;
                              if (pTVar15 != (Text *)0x0) {
                                (*(pTVar15->klass->vtable).set_text.methodPtr)
                                          (pTVar15,pOVar7,(pTVar15->klass->vtable).set_text.method);
                                pTVar15 = (pTVar1->fields).buttonTeamYellowName;
                                pOVar7 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_02,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                                cVar3 = '\0';
                                cVar4 = (int)pTVar15 < 0;
                                if (pTVar15 != (Text *)0x0) {
                                  (*(pTVar15->klass->vtable).set_text.methodPtr)
                                            (pTVar15,pOVar7,(pTVar15->klass->vtable).set_text.method)
                                  ;
                                  this_02 = (Text *)(pTVar1->fields).buttonTeamNone;
                                  pOVar7 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff8);
                                  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar7,(MethodInfo *)0x0);
                                  cVar3 = '\0';
                                  cVar4 = (int)this_02 < 0;
                                  if (this_02 != (Text *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              ((SettingsButton *)this_02,StringLiteral_team,iVar2,
                                               (MethodInfo *)0x0);
                                    this_02 = (Text *)(pTVar1->fields).buttonTeamBlue;
                                    pOVar7 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xfffffff4);
                                    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                       (pOVar7,(MethodInfo *)0x0);
                                    cVar3 = '\0';
                                    cVar4 = (int)this_02 < 0;
                                    if (this_02 != (Text *)0x0) {
                                      SettingsButton::SettingsButton_Initialize
                                                ((SettingsButton *)this_02,StringLiteral_team,iVar2
                                                 ,(MethodInfo *)0x0);
                                      this_02 = (Text *)(pTVar1->fields).buttonTeamRed;
                                      pOVar7 = (Object *)
                                                func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                &stack0xfffffff0);
                                      iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                         (pOVar7,(MethodInfo *)0x0);
                                      cVar3 = '\0';
                                      cVar4 = (int)this_02 < 0;
                                      if (this_02 != (Text *)0x0) {
                                        SettingsButton::SettingsButton_Initialize
                                                  ((SettingsButton *)this_02,StringLiteral_team,
                                                   iVar2,(MethodInfo *)0x0);
                                        this_02 = (Text *)(pTVar1->fields).buttonTeamGreen;
                                        pOVar7 = (Object *)
                                                  func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                  &stack0xffffffec);
                                        iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                           (pOVar7,(MethodInfo *)0x0);
                                        cVar3 = '\0';
                                        cVar4 = (int)this_02 < 0;
                                        if (this_02 != (Text *)0x0) goto code_?;
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
  do {
    iVar2 = func_?();
    if (cVar3 != cVar4) {
      pSVar13 = (SettingsBase *)((int)&this_02[0xff7877af].fields._._.m_OnDirtyVertsCallback + 3);
      bVar16 = *(byte *)&pSVar13->klass;
      *(char *)&pSVar13->klass = *(char *)&pSVar13->klass + -0x33;
      pcVar17 = (char *)((int)this_02 + (int)&stack0xfffffffc * 4 + -0x3333efcd);
      *pcVar17 = *pcVar17 + extraout_CL + (bVar16 < 0x33);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
code_?:
    SettingsButton::SettingsButton_Initialize
              ((SettingsButton *)this_02,StringLiteral_team,iVar2,(MethodInfo *)0x0);
    this_00 = (pTVar1->fields).buttonTeamYellow;
    pOVar7 = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffe8);
    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar7,(MethodInfo *)0x0);
    cVar3 = '\0';
    cVar4 = (int)this_00 < 0;
    pTVar1 = (TeamRequirementSettings *)0x0;
  } while (this_00 == (SettingsButton *)0x0);
  SettingsButton::SettingsButton_Initialize(this_00,StringLiteral_team,iVar2,(MethodInfo *)0x0);
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

