
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
  this_04 = this;
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar1 = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_EBX = (Text *)iVar1;
    if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_03,iVar1,(MethodInfo *)0x0), pMVar2 != (MVWorldObject *)0x0)) &&
       (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar2->fields).data,
       this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
      this = (TeamRequirementSettings *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_01,(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
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
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_team
                   ,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      method = (MethodInfo *)(this_04->fields).outlineTeamNone;
      (this_04->fields).currentOutline = (Outline *)method;
      root = (GameObject *)&(this_04->fields).currentOutline;
      woID = (int32_t)&UNK_?;
      func_?();
      woID = (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      this = (TeamRequirementSettings *)StringLiteral_team;
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_01,(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_5 = (Il2CppClass *)&UNK_?;
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Convert::Convert_ToInt32
                       ((Object *)value.m_Index,(MethodInfo *)0x0);
      in_stack_5 = (Il2CppClass *)&UNK_?;
      pOVar4 = (Object *)func_?();
      woID = (int32_t)StringLiteral_team;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Convert);
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__MV__WorldObject__MVTeam);
        cRam_? = '\x01';
      }
      pOVar6 = (this_04->fields).currentOutline;
      if ((pOVar6 != (Outline *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pOVar6,0,(MethodInfo *)0x0), pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          puVar7 = (undefined4 *)func_?();
          switch(*puVar7) {
          case 0:
            pOVar6 = (this_04->fields).outlineTeamBlue;
            break;
          case 1:
            pOVar6 = (this_04->fields).outlineTeamRed;
            break;
          case 2:
            pOVar6 = (this_04->fields).outlineTeamGreen;
            break;
          case 3:
            pOVar6 = (this_04->fields).outlineTeamYellow;
            break;
          default:
            pOVar6 = (this_04->fields).outlineTeamNone;
          }
          (this_04->fields).currentOutline = pOVar6;
          func_?();
          pOVar6 = (this_04->fields).currentOutline;
          if (pOVar6 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar6,1,(MethodInfo *)0x0);
            unaff_EBX = (Text *)(this_04->fields).settingsBase;
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            root = (GameObject *)
                   mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
            pOVar4 = (Object *)func_?();
            if (unaff_EBX != (Text *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        ((SettingsBase *)unaff_EBX,(String *)woID,pOVar4,(MethodInfo *)0x0);
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar8 != (MVNetworkGame *)0x0) &&
                 (pMVar9 = (pMVar8->fields).teamManager, pMVar9 != (MVTeamManager *)0x0)) {
                this_02 = (pMVar9->fields).teamNames;
                unaff_EBX = (this_04->fields).buttonTeamBlueName;
                if ((this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                   (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       ), unaff_EBX != (Text *)0x0)) {
                  (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                            (unaff_EBX,pOVar4,
                             (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pTVar10 = (this_04->fields).buttonTeamRedName;
                  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,System::Object]::
                           Dictionary_2_System_Int32Enum_System_Object__get_Item
                                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,1,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                     );
                  unaff_EBX = (Text *)0x0;
                  if (pTVar10 != (Text *)0x0) {
                    (*(code *)(pTVar10->klass->vtable).set_text.method)
                              (pTVar10,pOVar4,
                               (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                    pTVar10 = (this_04->fields).buttonTeamGreenName;
                    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,2,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       );
                    unaff_EBX = (Text *)0x0;
                    if (pTVar10 != (Text *)0x0) {
                      (*(code *)(pTVar10->klass->vtable).set_text.method)
                                (pTVar10,pOVar4,
                                 (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      unaff_EBX = (this_04->fields).buttonTeamYellowName;
                      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32Enum,System::Object]::
                               Dictionary_2_System_Int32Enum_System_Object__get_Item
                                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,3,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                         );
                      if (unaff_EBX != (Text *)0x0) {
                        (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                  (unaff_EBX,pOVar4,
                                   (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pSVar11 = (this_04->fields).buttonTeamNone;
                        pOVar4 = (Object *)
                                 func_?(TypeInfo__MV__WorldObject__MVTeam,&stack0xfffffff8)
                        ;
                        iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar4,(MethodInfo *)0x0);
                        if (pSVar11 != (SettingsButton *)0x0) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar11,StringLiteral_team,iVar1,MVTeam__Enum_None,1,
                                     (MethodInfo *)0x0);
                          pSVar11 = (this_04->fields).buttonTeamBlue;
                          pOVar4 = (Object *)
                                   func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                   &stack0xfffffff4);
                          unaff_EBX = (Text *)mscorlib.dll::System::Convert::Convert_ToInt32
                                                        (pOVar4,(MethodInfo *)0x0);
                          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar8 != (MVNetworkGame *)0x0) &&
                             (pMVar9 = (pMVar8->fields).teamManager, pMVar9 != (MVTeamManager *)0x0
                             )) {
                            bVar3 = MVTeamManager::MVTeamManager_HasTeam
                                              (pMVar9,MVTeam__Enum_Blue,(MethodInfo *)0x0);
                            root = (GameObject *)CONCAT31(root._1_3_,bVar3);
                            if (pSVar11 != (SettingsButton *)0x0) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar11,StringLiteral_team,(int32_t)unaff_EBX,
                                         MVTeam__Enum_Blue,bVar3,(MethodInfo *)0x0);
                              pSVar11 = (this_04->fields).buttonTeamRed;
                              pOVar4 = (Object *)
                                       func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                       &stack0xfffffff0);
                              unaff_EBX = (Text *)mscorlib.dll::System::Convert::Convert_ToInt32
                                                            (pOVar4,(MethodInfo *)0x0);
                              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              if ((pMVar8 != (MVNetworkGame *)0x0) &&
                                 (pMVar9 = (pMVar8->fields).teamManager,
                                 pMVar9 != (MVTeamManager *)0x0)) {
                                bVar3 = MVTeamManager::MVTeamManager_HasTeam
                                                  (pMVar9,MVTeam__Enum_Red,(MethodInfo *)0x0);
                                root = (GameObject *)CONCAT31(root._1_3_,bVar3);
                                if (pSVar11 != (SettingsButton *)0x0) {
                                  SettingsButton::SettingsButton_Initialize
                                            (pSVar11,StringLiteral_team,(int32_t)unaff_EBX,
                                             MVTeam__Enum_Red,bVar3,(MethodInfo *)0x0);
                                  pSVar11 = (this_04->fields).buttonTeamGreen;
                                  pOVar4 = (Object *)
                                           func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                           &stack0xffffffec);
                                  unaff_EBX = (Text *)mscorlib.dll::System::Convert::Convert_ToInt32
                                                                (pOVar4,(MethodInfo *)0x0);
                                  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                      ((MethodInfo *)0x0);
                                  if ((pMVar8 != (MVNetworkGame *)0x0) &&
                                     (pMVar9 = (pMVar8->fields).teamManager,
                                     pMVar9 != (MVTeamManager *)0x0)) {
                                    bVar3 = MVTeamManager::MVTeamManager_HasTeam
                                                      (pMVar9,MVTeam__Enum_Green,(MethodInfo *)0x0);
                                    root = (GameObject *)CONCAT31(root._1_3_,bVar3);
                                    if (pSVar11 != (SettingsButton *)0x0) {
                                      SettingsButton::SettingsButton_Initialize
                                                (pSVar11,StringLiteral_team,(int32_t)unaff_EBX,
                                                 MVTeam__Enum_Green,bVar3,(MethodInfo *)0x0);
                                      this_04 = (TeamRequirementSettings *)
                                                (this_04->fields).buttonTeamYellow;
                                      pOVar4 = (Object *)
                                               func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                               &stack0xffffffe8);
                                      iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                         (pOVar4,(MethodInfo *)0x0);
                                      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                          ((MethodInfo *)0x0);
                                      if ((pMVar8 != (MVNetworkGame *)0x0) &&
                                         (pMVar9 = (pMVar8->fields).teamManager,
                                         pMVar9 != (MVTeamManager *)0x0)) {
                                        bVar3 = MVTeamManager::MVTeamManager_HasTeam
                                                          (pMVar9,MVTeam__Enum_Yellow,
                                                           (MethodInfo *)0x0);
                                        root = (GameObject *)CONCAT31(root._1_3_,bVar3);
                                        if (this_04 != (TeamRequirementSettings *)0x0) {
                                          SettingsButton::SettingsButton_Initialize
                                                    ((SettingsButton *)this_04,StringLiteral_team,
                                                     iVar1,MVTeam__Enum_Yellow,bVar3,
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
          }
        }
        else {
          func_?();
        }
      }
    }
  }
  uVar12 = func_?();
  pcVar13 = (char *)((int)(uVar12 >> 0x20) + -0x58efc162);
  *pcVar13 = *pcVar13 + (char)(uVar12 >> 8) + ((uVar12 & 0x100) != 0);
  pcVar13 = (char *)((int)this_04 + (int)unaff_EBX * 4 + -0x3333efc2);
  *pcVar13 = *pcVar13 + extraout_CH + ((uVar12 & 0x100) != 0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
                ((Behaviour *)pOVar2,0,(MethodInfo *)0x0), unaff_EDI = value, value != (Object *)0x0
     )) {
    if ((value->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
      puVar3 = (undefined4 *)func_?(value);
      switch(*puVar3) {
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
        pOVar4 = (Object *)0x0;
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
        unaff_EDI = pOVar4;
        pOVar4 = (Object *)func_?();
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
  uRam_? = func_?();
  uRam_? = uRam_?;
  *(char *)(extraout_ECX + -0x49efc15e) =
       *(char *)(extraout_ECX + -0x49efc15e) + extraout_DH +
       (pTVar1->klass < (TeamRequirementSettings__Class *)unaff_EDI->klass);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

