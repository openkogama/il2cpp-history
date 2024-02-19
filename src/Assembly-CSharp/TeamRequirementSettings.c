
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
      (pTVar1->fields).currentOutline = (Outline *)method;
      root = (GameObject *)&(pTVar1->fields).currentOutline;
      woID = (int32_t)&UNK_?;
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
      in_stack_7 = (Il2CppClass *)&UNK_?;
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Convert::Convert_ToInt32
                       ((Object *)value_00.m_Index,(MethodInfo *)0x0);
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
      if ((pOVar8 != (Outline *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar8,0,(MethodInfo *)0x0), pOVar6 != (Object *)0x0)) {
        if ((pOVar6->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          puVar9 = (undefined4 *)func_?();
          switch(*puVar9) {
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
          if (pOVar8 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar8,1,(MethodInfo *)0x0);
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
              pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar10 != (MVNetworkGame *)0x0) &&
                 (pMVar11 = (pMVar10->fields).teamManager, pMVar11 != (MVTeamManager *)0x0)) {
                this_01 = (pMVar11->fields).teamNames;
                pTVar12 = (pTVar1->fields).buttonTeamBlueName;
                if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                   (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       ), pTVar12 != (Text *)0x0)) {
                  (*(code *)(pTVar12->klass->vtable).set_text.method)
                            (pTVar12,pOVar6,
                             (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pTVar12 = (pTVar1->fields).buttonTeamRedName;
                  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,System::Object]::
                           Dictionary_2_System_Int32Enum_System_Object__get_Item
                                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                     );
                  if (pTVar12 != (Text *)0x0) {
                    (*(code *)(pTVar12->klass->vtable).set_text.method)
                              (pTVar12,pOVar6,
                               (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                    pTVar12 = (pTVar1->fields).buttonTeamGreenName;
                    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       );
                    if (pTVar12 != (Text *)0x0) {
                      (*(code *)(pTVar12->klass->vtable).set_text.method)
                                (pTVar12,pOVar6,
                                 (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      pTVar12 = (pTVar1->fields).buttonTeamYellowName;
                      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32Enum,System::Object]::
                               Dictionary_2_System_Int32Enum_System_Object__get_Item
                                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,3,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                         );
                      if (pTVar12 != (Text *)0x0) {
                        (*(code *)(pTVar12->klass->vtable).set_text.method)
                                  (pTVar12,pOVar6,
                                   (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pSVar13 = (pTVar1->fields).buttonTeamNone;
                        pOVar6 = (Object *)
                                 func_?(TypeInfo__MV__WorldObject__MVTeam,&stack0xfffffff8)
                        ;
                        iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar6,(MethodInfo *)0x0);
                        if (pSVar13 != (SettingsButton *)0x0) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar13,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                          pSVar13 = (pTVar1->fields).buttonTeamBlue;
                          pOVar6 = (Object *)
                                   func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                   &stack0xfffffff4);
                          iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                             (pOVar6,(MethodInfo *)0x0);
                          if (pSVar13 != (SettingsButton *)0x0) {
                            SettingsButton::SettingsButton_Initialize
                                      (pSVar13,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                            pSVar13 = (pTVar1->fields).buttonTeamRed;
                            pOVar6 = (Object *)
                                     func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                     &stack0xfffffff0);
                            iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                               (pOVar6,(MethodInfo *)0x0);
                            if (pSVar13 != (SettingsButton *)0x0) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar13,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                              pSVar13 = (pTVar1->fields).buttonTeamGreen;
                              pOVar6 = (Object *)
                                       func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                       &stack0xffffffec);
                              iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar6,(MethodInfo *)0x0);
                              if (pSVar13 != (SettingsButton *)0x0) {
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar13,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                                pSVar13 = (pTVar1->fields).buttonTeamYellow;
                                pOVar6 = (Object *)
                                         func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                         &stack0xffffffe8);
                                iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                   (pOVar6,(MethodInfo *)0x0);
                                pTVar1 = (TeamRequirementSettings *)0x0;
                                if (pSVar13 != (SettingsButton *)0x0) {
                                  SettingsButton::SettingsButton_Initialize
                                            (pSVar13,StringLiteral_team,iVar3,(MethodInfo *)0x0);
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
  out(pTVar1->klass,extraout_DX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  uVar3 = 0;
  if (pOVar2 != (Outline *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pOVar2,0,(MethodInfo *)0x0);
    pOVar4 = value;
    uVar3 = 0;
    if (value != (Object *)0x0) {
      pIVar5 = (value->klass->_0).element_class;
      pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
      uVar3 = pIVar5 < pIVar6;
      if (pIVar5 == pIVar6) {
        puVar7 = (undefined4 *)func_?(value);
        switch(*puVar7) {
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
        uVar3 = 0;
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
          this = (TeamRequirementSettings *)pOVar4;
          mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
          key = (String *)&this;
          this = (TeamRequirementSettings *)TypeInfo__System__Int32;
          pOVar4 = (Object *)func_?();
          uVar3 = 0;
          pTVar1 = (TeamRequirementSettings *)0x0;
          if (this_00 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged(this_00,key,pOVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        func_?(value,TypeInfo__MV__WorldObject__MVTeam);
      }
    }
  }
  bVar8 = func_?();
  if (!(bool)uVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar9 = (char *)(unaff_EBX + (int)pTVar1 * 2);
  *pcVar9 = *pcVar9 + extraout_CL + uVar3;
  puVar10 = (uint *)(unaff_EBX + 0x3c);
  uVar11 = (int)&pTVar1->klass + *puVar10;
  bVar12 = CARRY4(*puVar10,(uint)pTVar1) || CARRY4(uVar11,(uint)(bVar8 < 0x10));
  *puVar10 = uVar11 + (bVar8 < 0x10);
  bVar8 = *(byte *)&pTVar1->klass;
  bVar13 = *(char *)&pTVar1->klass + extraout_DL;
  *(byte *)&pTVar1->klass = bVar13 + bVar12;
  if (!CARRY1(bVar8,extraout_DL) && !CARRY1(bVar13,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

