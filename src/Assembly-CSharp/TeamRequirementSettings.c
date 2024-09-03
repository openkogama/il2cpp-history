
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
  if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_02,woID,root,header,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_EBX = (Text *)iVar2;
    if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,iVar2,(MethodInfo *)0x0), pMVar3 != (MVWorldObject *)0x0)) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar3->fields).data;
      this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        this = (TeamRequirementSettings *)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (this_00,(Object *)StringLiteral_team,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar4 == 0) {
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
          pOVar5 = (Object *)func_?();
          in_stack_6 = StringLiteral_team;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_team,pOVar5,
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
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
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
                         ((Object *)value.m_Index,(MethodInfo *)0x0);
        in_stack_7 = (Il2CppClass *)&UNK_?;
        this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)func_?();
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
                      ((Behaviour *)pOVar8,0,(MethodInfo *)0x0),
           this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) {
          if ((((Dictionary_2_System_Int32Enum_System_Object___Class *)this_02->klass)->_0).
              element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
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
            in_stack_6 = (String *)&UNK_?;
            func_?();
            pOVar8 = (pTVar1->fields).currentOutline;
            if (pOVar8 != (Outline *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pOVar8,1,(MethodInfo *)0x0);
              unaff_EBX = (Text *)(pTVar1->fields).settingsBase;
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              root = (GameObject *)
                     mscorlib.dll::System::Convert::Convert_ToInt32
                               ((Object *)this_02,(MethodInfo *)0x0);
              in_stack_6 = (String *)&UNK_?;
              pOVar5 = (Object *)func_?();
              if (unaff_EBX != (Text *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          ((SettingsBase *)unaff_EBX,(String *)woID,pOVar5,(MethodInfo *)0x0);
                pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar10 != (MVNetworkGame *)0x0) {
                  pMVar11 = (pMVar10->fields).teamManager;
                  this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                  if (pMVar11 != (MVTeamManager *)0x0) {
                    this_02 = (pMVar11->fields).teamNames;
                    unaff_EBX = (pTVar1->fields).buttonTeamBlueName;
                    if ((this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02
                                             ,0,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                            ), unaff_EBX != (Text *)0x0)) {
                      (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                (unaff_EBX,pOVar5,
                                 (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                 methodPtr);
                      pTVar12 = (pTVar1->fields).buttonTeamRedName;
                      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,1
                                           ,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                          );
                      unaff_EBX = (Text *)0x0;
                      if (pTVar12 != (Text *)0x0) {
                        (*(code *)(pTVar12->klass->vtable).set_text.method)
                                  (pTVar12,pOVar5,
                                   (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pTVar12 = (pTVar1->fields).buttonTeamGreenName;
                        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02
                                             ,2,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                            );
                        unaff_EBX = (Text *)0x0;
                        if (pTVar12 != (Text *)0x0) {
                          (*(code *)(pTVar12->klass->vtable).set_text.method)
                                    (pTVar12,pOVar5,
                                     (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.
                                     methodPtr);
                          pTVar12 = (pTVar1->fields).buttonTeamYellowName;
                          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,3,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          unaff_EBX = (Text *)0x0;
                          if (pTVar12 != (Text *)0x0) {
                            unaff_EBX = (Text *)(pTVar12->klass->vtable).
                                                CalculateLayoutInputHorizontal_1.methodPtr;
                            (*(code *)(pTVar12->klass->vtable).set_text.method)(pTVar12,pOVar5);
                            pSVar13 = (pTVar1->fields).buttonTeamNone;
                            pOVar5 = (Object *)
                                      func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                      &stack0xfffffff8);
                            iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                               (pOVar5,(MethodInfo *)0x0);
                            this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                            if (pSVar13 != (SettingsButton *)0x0) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar13,StringLiteral_team,iVar2,(MethodInfo *)0x0);
                              pSVar13 = (pTVar1->fields).buttonTeamBlue;
                              pOVar5 = (Object *)
                                        func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                        &stack0xfffffff4);
                              iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar5,(MethodInfo *)0x0);
                              this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                              if (pSVar13 != (SettingsButton *)0x0) {
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar13,StringLiteral_team,iVar2,(MethodInfo *)0x0);
                                pSVar13 = (pTVar1->fields).buttonTeamRed;
                                pOVar5 = (Object *)
                                          func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                          &stack0xfffffff0);
                                iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                   (pOVar5,(MethodInfo *)0x0);
                                this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                                if (pSVar13 != (SettingsButton *)0x0) {
                                  SettingsButton::SettingsButton_Initialize
                                            (pSVar13,StringLiteral_team,iVar2,(MethodInfo *)0x0);
                                  this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                            (pTVar1->fields).buttonTeamGreen;
                                  pOVar5 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xffffffec);
                                  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar5,(MethodInfo *)0x0);
                                  if (this_02 !=
                                      (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              ((SettingsButton *)this_02,StringLiteral_team,iVar2,
                                               (MethodInfo *)0x0);
                                    pSVar13 = (pTVar1->fields).buttonTeamYellow;
                                    in_stack_6 = (String *)0x3;
                                    pOVar5 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xffffffe8);
                                    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                       (pOVar5,(MethodInfo *)0x0);
                                    if (pSVar13 != (SettingsButton *)0x0) {
                                      SettingsButton::SettingsButton_Initialize
                                                (pSVar13,StringLiteral_team,iVar2,(MethodInfo *)0x0)
                                      ;
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
          else {
            in_stack_6 = (String *)0x0;
            func_?();
          }
        }
      }
    }
  }
  func_?();
  bVar14 = ((uint)in_stack_6 & 1) != 0;
  bVar15 = (byte)((uint)unaff_EBX >> 8);
  bVar16 = bRam_? < bVar15 || (byte)(bRam_? - bVar15) < bVar14;
  bRam_? = (bRam_? - bVar15) - bVar14;
  pDVar17 = &this_02[-0x1bfa965].fields;
  bVar18 = *(byte *)&pDVar17->_buckets;
  bVar19 = *(char *)&pDVar17->_buckets + extraout_AH;
  *(byte *)&pDVar17->_buckets = bVar19 + bVar16;
  cRam_? = (cRam_? - bVar15) - (CARRY1(bVar18,extraout_AH) || CARRY1(bVar19,bVar16));
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  uVar5 = func_?();
  out(0x1b,uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

