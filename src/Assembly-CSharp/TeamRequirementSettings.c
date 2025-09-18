
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_Initialize
               (TeamRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
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
  this_05 = this;
  this_04 = (Int32__Class *)(this->fields).settingsBase;
  pSVar2 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar3 = woID;
  bVar4 = 0;
  cVar5 = '\0';
  cVar6 = (int)this_04 < 0;
  if (this_04 != (Int32__Class *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_04,woID,root,pSVar2,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar4 = 0;
    cVar5 = '\0';
    cVar6 = (int)this_03 < 0;
    unaff_EBX = (Text *)iVar3;
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      in_stack_7 = (Int32__Class *)&UNK_?;
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,iVar3,(MethodInfo *)0x0);
      bVar4 = 0;
      cVar5 = '\0';
      cVar6 = (int)pMVar8 < 0;
      if (pMVar8 != (MVWorldObject *)0x0) {
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar8->fields).data;
        bVar4 = 0;
        cVar5 = '\0';
        cVar6 = (int)this_00 < 0;
        this_04 = (Int32__Class *)0x0;
        if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          this = (TeamRequirementSettings *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (this_00,(Object *)StringLiteral_team,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar9 == 0) {
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
            in_stack_7 = (Int32__Class *)func_?();
            pSVar2 = StringLiteral_team;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_team,(Object *)in_stack_7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            in_stack_10 = (bool)pSVar2;
          }
          method = (MethodInfo *)(this_05->fields).outlineTeamNone;
          (this_05->fields).currentOutline = (Outline *)method;
          root = (GameObject *)&(this_05->fields).currentOutline;
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
          in_stack_11 = (Il2CppClass *)&UNK_?;
          this = (TeamRequirementSettings *)
                 mscorlib.dll::System::Convert::Convert_ToInt32
                           ((Object *)value.m_Index,(MethodInfo *)0x0);
          in_stack_11 = (Il2CppClass *)&UNK_?;
          this_04 = (Int32__Class *)func_?();
          woID = (int32_t)StringLiteral_team;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Convert);
            func_?(&TypeInfo__System__Int32);
            func_?(&TypeInfo__MV__WorldObject__MVTeam);
            cRam_? = '\x01';
          }
          pOVar12 = (this_05->fields).currentOutline;
          bVar4 = 0;
          cVar5 = '\0';
          cVar6 = (int)pOVar12 < 0;
          if (pOVar12 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar12,0,(MethodInfo *)0x0);
            bVar4 = 0;
            cVar5 = '\0';
            cVar6 = (int)this_04 < 0;
            if (this_04 != (Int32__Class *)0x0) {
              pIVar13 = (((Dictionary_2_System_Int32Enum_System_Object___Class *)(this_04->_0).image)
                       ->_0).element_class;
              pIVar14 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              bVar4 = pIVar13 < pIVar14;
              cVar5 = SBORROW4((int)pIVar13,(int)pIVar14);
              cVar6 = (int)pIVar13 - (int)pIVar14 < 0;
              if (pIVar13 == pIVar14) {
                puVar15 = (undefined4 *)func_?();
                switch(*puVar15) {
                case 0:
                  pOVar12 = (this_05->fields).outlineTeamBlue;
                  break;
                case 1:
                  pOVar12 = (this_05->fields).outlineTeamRed;
                  break;
                case 2:
                  pOVar12 = (this_05->fields).outlineTeamGreen;
                  break;
                case 3:
                  pOVar12 = (this_05->fields).outlineTeamYellow;
                  break;
                default:
                  pOVar12 = (this_05->fields).outlineTeamNone;
                }
                in_stack_7 = (Int32__Class *)&(this_05->fields).currentOutline;
                (this_05->fields).currentOutline = pOVar12;
                in_stack_10 = 0xa3;
                func_?();
                pOVar12 = (this_05->fields).currentOutline;
                bVar4 = 0;
                cVar5 = '\0';
                cVar6 = (int)pOVar12 < 0;
                if (pOVar12 != (Outline *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pOVar12,1,(MethodInfo *)0x0);
                  unaff_EBX = (Text *)(this_05->fields).settingsBase;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  root = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToInt32
                                   ((Object *)this_04,(MethodInfo *)0x0);
                  in_stack_10 = 0xef;
                  in_stack_7 = TypeInfo__System__Int32;
                  pOVar16 = (Object *)func_?();
                  bVar4 = 0;
                  cVar5 = '\0';
                  cVar6 = (int)unaff_EBX < 0;
                  if (unaff_EBX != (Text *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              ((SettingsBase *)unaff_EBX,(String *)woID,pOVar16,(MethodInfo *)0x0);
                    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    bVar4 = 0;
                    cVar5 = '\0';
                    cVar6 = (int)pMVar17 < 0;
                    if (pMVar17 != (MVNetworkGame *)0x0) {
                      pMVar18 = (pMVar17->fields).teamManager;
                      bVar4 = 0;
                      cVar5 = '\0';
                      cVar6 = (int)pMVar18 < 0;
                      this_04 = (Int32__Class *)0x0;
                      if (pMVar18 != (MVTeamManager *)0x0) {
                        this_04 = (Int32__Class *)(pMVar18->fields).teamNames;
                        unaff_EBX = (this_05->fields).buttonTeamBlueName;
                        bVar4 = 0;
                        cVar5 = '\0';
                        cVar6 = (int)this_04 < 0;
                        if (this_04 != (Int32__Class *)0x0) {
                          pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_04,0,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          bVar4 = 0;
                          cVar5 = '\0';
                          cVar6 = (int)unaff_EBX < 0;
                          if (unaff_EBX != (Text *)0x0) {
                            (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                      (unaff_EBX,pOVar16,
                                       (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                       methodPtr);
                            pTVar19 = (this_05->fields).buttonTeamRedName;
                            pOVar16 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_04,1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            bVar4 = 0;
                            cVar5 = '\0';
                            cVar6 = (int)pTVar19 < 0;
                            unaff_EBX = (Text *)0x0;
                            if (pTVar19 != (Text *)0x0) {
                              (*(code *)(pTVar19->klass->vtable).set_text.method)
                                        (pTVar19,pOVar16,
                                         (pTVar19->klass->vtable).CalculateLayoutInputHorizontal_1.
                                         methodPtr);
                              pTVar19 = (this_05->fields).buttonTeamGreenName;
                              pOVar16 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_04,2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                              bVar4 = 0;
                              cVar5 = '\0';
                              cVar6 = (int)pTVar19 < 0;
                              unaff_EBX = (Text *)0x0;
                              if (pTVar19 != (Text *)0x0) {
                                (*(code *)(pTVar19->klass->vtable).set_text.method)
                                          (pTVar19,pOVar16,
                                           (pTVar19->klass->vtable).CalculateLayoutInputHorizontal_1
                                           .methodPtr);
                                unaff_EBX = (this_05->fields).buttonTeamYellowName;
                                pOVar16 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_04,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                                bVar4 = 0;
                                cVar5 = '\0';
                                cVar6 = (int)unaff_EBX < 0;
                                if (unaff_EBX != (Text *)0x0) {
                                  (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                            (unaff_EBX,pOVar16,
                                             (unaff_EBX->klass->vtable).
                                             CalculateLayoutInputHorizontal_1.methodPtr);
                                  this_01 = (this_05->fields).buttonTeamNone;
                                  pOVar16 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff8);
                                  iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar16,(MethodInfo *)0x0);
                                  bVar4 = 0;
                                  cVar5 = '\0';
                                  cVar6 = (int)this_01 < 0;
                                  this_04 = (Int32__Class *)0x0;
                                  if (this_01 != (SettingsButton *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              (this_01,StringLiteral_team,iVar3,MVTeam__Enum_None,1
                                               ,(MethodInfo *)0x0);
                                    this_04 = (Int32__Class *)(this_05->fields).buttonTeamBlue;
                                    pOVar16 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xfffffff4);
                                    unaff_EBX = (Text *)mscorlib.dll::System::Convert::
                                                        Convert_ToInt32(pOVar16,(MethodInfo *)0x0);
                                    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                        ((MethodInfo *)0x0);
                                    bVar4 = 0;
                                    cVar5 = '\0';
                                    cVar6 = (int)pMVar17 < 0;
                                    if (pMVar17 != (MVNetworkGame *)0x0) {
                                      pMVar18 = (pMVar17->fields).teamManager;
                                      bVar4 = 0;
                                      cVar5 = '\0';
                                      cVar6 = (int)pMVar18 < 0;
                                      if (pMVar18 != (MVTeamManager *)0x0) {
                                        bVar9 = MVTeamManager::MVTeamManager_HasTeam
                                                           (pMVar18,MVTeam__Enum_Blue,
                                                            (MethodInfo *)0x0);
                                        root = (GameObject *)CONCAT31(root._1_3_,bVar9);
                                        bVar4 = 0;
                                        cVar5 = '\0';
                                        cVar6 = (int)this_04 < 0;
                                        if (this_04 != (Int32__Class *)0x0) {
                                          SettingsButton::SettingsButton_Initialize
                                                    ((SettingsButton *)this_04,StringLiteral_team,
                                                     (int32_t)unaff_EBX,MVTeam__Enum_Blue,bVar9,
                                                     (MethodInfo *)0x0);
                                          this_04 = (Int32__Class *)(this_05->fields).buttonTeamRed;
                                          pOVar16 = (Object *)
                                                    func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xfffffff0
                                                  );
                                          unaff_EBX = (Text *)mscorlib.dll::System::Convert::
                                                              Convert_ToInt32(pOVar16,(MethodInfo *)
                                                                                      0x0);
                                          pMVar17 = MVGameControllerBase::
                                                    MVGameControllerBase_get_Game((MethodInfo *)0x0)
                                          ;
                                          bVar4 = 0;
                                          cVar5 = '\0';
                                          cVar6 = (int)pMVar17 < 0;
                                          if (pMVar17 != (MVNetworkGame *)0x0) {
                                            pMVar18 = (pMVar17->fields).teamManager;
                                            bVar4 = 0;
                                            cVar5 = '\0';
                                            cVar6 = (int)pMVar18 < 0;
                                            if (pMVar18 != (MVTeamManager *)0x0) {
                                              bVar9 = MVTeamManager::MVTeamManager_HasTeam
                                                                 (pMVar18,MVTeam__Enum_Red,
                                                                  (MethodInfo *)0x0);
                                              root = (GameObject *)CONCAT31(root._1_3_,bVar9);
                                              bVar4 = 0;
                                              cVar5 = '\0';
                                              cVar6 = (int)this_04 < 0;
                                              if (this_04 != (Int32__Class *)0x0) {
                                                SettingsButton::SettingsButton_Initialize
                                                          ((SettingsButton *)this_04,
                                                           StringLiteral_team,(int32_t)unaff_EBX,
                                                           MVTeam__Enum_Red,bVar9,(MethodInfo *)0x0
                                                          );
                                                this_04 = (Int32__Class *)
                                                          (this_05->fields).buttonTeamGreen;
                                                in_stack_7 = (Int32__Class *)0x2;
                                                pOVar16 = (Object *)
                                                          func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffec
                                                  );
                                                unaff_EBX = (Text *)mscorlib.dll::System::Convert::
                                                                    Convert_ToInt32(pOVar16,(
                                                  MethodInfo *)0x0);
                                                pMVar17 = MVGameControllerBase::
                                                          MVGameControllerBase_get_Game
                                                                    ((MethodInfo *)0x0);
                                                bVar4 = 0;
                                                cVar5 = '\0';
                                                cVar6 = (int)pMVar17 < 0;
                                                if (pMVar17 != (MVNetworkGame *)0x0) {
                                                  pMVar18 = (pMVar17->fields).teamManager;
                                                  bVar4 = 0;
                                                  cVar5 = '\0';
                                                  cVar6 = (int)pMVar18 < 0;
                                                  if (pMVar18 != (MVTeamManager *)0x0) {
                                                    bVar9 = MVTeamManager::MVTeamManager_HasTeam
                                                                       (pMVar18,MVTeam__Enum_Green,
                                                                        (MethodInfo *)0x0);
                                                    root = (GameObject *)CONCAT31(root._1_3_,bVar9)
                                                    ;
                                                    bVar4 = 0;
                                                    cVar5 = '\0';
                                                    cVar6 = (int)this_04 < 0;
                                                    if (this_04 != (Int32__Class *)0x0) {
                                                      SettingsButton::SettingsButton_Initialize
                                                                ((SettingsButton *)this_04,
                                                                 StringLiteral_team,
                                                                 (int32_t)unaff_EBX,
                                                                 MVTeam__Enum_Green,bVar9,
                                                                 (MethodInfo *)0x0);
                                                      this_05 = (TeamRequirementSettings *)
                                                                (this_05->fields).buttonTeamYellow;
                                                      in_stack_10 = 3;
                                                      pOVar16 = (Object *)
                                                                func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffe8
                                                  );
                                                  this_04 = (Int32__Class *)
                                                            mscorlib.dll::System::Convert::
                                                            Convert_ToInt32(pOVar16,(MethodInfo *)
                                                                                    0x0);
                                                  pMVar17 = MVGameControllerBase::
                                                            MVGameControllerBase_get_Game
                                                                      ((MethodInfo *)0x0);
                                                  bVar4 = 0;
                                                  cVar5 = '\0';
                                                  cVar6 = (int)pMVar17 < 0;
                                                  if (pMVar17 != (MVNetworkGame *)0x0) {
                                                    pMVar18 = (pMVar17->fields).teamManager;
                                                    bVar4 = 0;
                                                    cVar5 = '\0';
                                                    cVar6 = (int)pMVar18 < 0;
                                                    if (pMVar18 != (MVTeamManager *)0x0) {
                                                      bVar9 = MVTeamManager::MVTeamManager_HasTeam
                                                                         (pMVar18,MVTeam__Enum_Yellow
                                                                          ,(MethodInfo *)0x0);
                                                      root = (GameObject *)
                                                             CONCAT31(root._1_3_,bVar9);
                                                      bVar4 = 0;
                                                      cVar5 = '\0';
                                                      cVar6 = (int)this_05 < 0;
                                                      if (this_05 != (TeamRequirementSettings *)0x0)
                                                      {
                                                        SettingsButton::SettingsButton_Initialize
                                                                  ((SettingsButton *)this_05,
                                                                   StringLiteral_team,
                                                                   (int32_t)this_04,
                                                                   MVTeam__Enum_Yellow,bVar9,
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
                        }
                      }
                    }
                  }
                }
              }
              else {
                in_stack_10 = 0xe2;
                in_stack_7 = this_04;
                func_?();
              }
            }
          }
        }
      }
    }
  }
  uVar20 = func_?();
  pcVar21 = (char *)((ulonglong)uVar20 >> 0x20);
  pOVar12 = (Outline *)uVar20;
  if (cVar5 == cVar6) {
    *(byte *)&unaff_EBX->klass = *(byte *)&unaff_EBX->klass & (byte)((uint)unaff_EBX >> 8);
    *(byte *)&(this_04->_0).image = *(byte *)&(this_04->_0).image & (char)extraout_CX + 1U;
  }
  else {
    pbVar22 = (byte *)(pcVar21 + -0x78efc185);
    bVar23 = *pbVar22;
    bVar24 = (byte)uVar20;
    bVar25 = *pbVar22;
    *pbVar22 = bVar25 + bVar24 + bVar4;
    if ((POPCOUNT(*pbVar22) & 1U) == 0) {
      pcVar21 = (char *)((int)unaff_EBX + (int)this_04 * 2 + -0x3333efc2);
      *pcVar21 = *pcVar21 + (char)extraout_CX +
                 (CARRY1(bVar23,bVar24) || CARRY1(bVar25 + bVar24,bVar4));
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
      return;
    }
    puVar1 = (undefined1 *)0x8b560111;
    if (*pbVar22 == 0) {
      pOVar12 = (this_05->fields).currentOutline;
      bVar4 = 0;
      if (pOVar12 == (Outline *)0x0) goto code_?;
    }
    else {
      *(byte *)&pOVar12->klass = *(char *)&pOVar12->klass + bVar24;
      pcVar27 = (char *)((int)&(this_04->_1).unity_user_data + 2);
      *pcVar27 = *pcVar27 + (char)((ulonglong)uVar20 >> 0x20);
      *pcVar21 = *pcVar21 + (char)((ushort)extraout_CX >> 8);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pOVar12,in_stack_10,(MethodInfo *)in_stack_7);
    this_04 = pIRam8b560121;
    bVar4 = 0;
    if (pIRam8b560121 == (Int32__Class *)0x0) goto code_?;
    pIVar13 = (((Dictionary_2_System_Int32Enum_System_Object___Class *)(pIRam8b560121->_0).image)->_0
             ).element_class;
    pIVar14 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
    bVar4 = pIVar13 < pIVar14;
    if (pIVar13 != pIVar14) {
      func_?();
      goto code_?;
    }
  }
  puVar15 = (undefined4 *)func_?();
  switch(*puVar15) {
  case 0:
    pOVar12 = (this_05->fields).outlineTeamBlue;
    break;
  case 1:
    pOVar12 = (this_05->fields).outlineTeamRed;
    break;
  case 2:
    pOVar12 = (this_05->fields).outlineTeamGreen;
    break;
  case 3:
    pOVar12 = (this_05->fields).outlineTeamYellow;
    break;
  default:
    pOVar12 = (this_05->fields).outlineTeamNone;
  }
  (this_05->fields).currentOutline = pOVar12;
  func_?(&(this_05->fields).currentOutline);
  pOVar12 = (this_05->fields).currentOutline;
  bVar4 = 0;
  if (pOVar12 != (Outline *)0x0) {
    pIVar28 = (Int32__Class *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pOVar12,1,(MethodInfo *)0x0);
    this_02 = (Button *)(this_05->fields).settingsBase;
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32((Object *)this_04,(MethodInfo *)0x0);
    *(int32_t *)(puVar1 + 8) = iVar3;
    this_04 = pIVar28;
    pOVar16 = (Object *)func_?();
    bVar4 = 0;
    this_05 = (TeamRequirementSettings *)0x0;
    if (this_02 != (Button *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                ((SettingsBase *)this_02,*(String **)(puVar1 + 0xc),pOVar16,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  LOCK();
  piVar29 = (int *)((int)&(this_04->_0).klass + 2);
  iVar30 = *piVar29;
  *piVar29 = (int)this_04;
  UNLOCK();
  pbVar22 = (byte *)(iVar30 * 3 + 0x7f91103e);
  bVar23 = *pbVar22;
  bVar25 = *pbVar22;
  *pbVar22 = bVar25 + extraout_CL + bVar4;
  pcVar21 = (char *)((int)&this_05[-0xa6326c].fields.outlineTeamRed + 3);
  *pcVar21 = *pcVar21 + extraout_DL +
             (CARRY1(bVar23,extraout_CL) || CARRY1(bVar25 + extraout_CL,bVar4));
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
  func_?();
  LOCK();
  piVar8 = (int *)((int)&unaff_EDI[7].monitor + 2);
  iVar9 = *piVar8;
  *piVar8 = (int)unaff_EDI;
  UNLOCK();
  pbVar10 = (byte *)(iVar9 * 3 + 0x7f91103e);
  bVar11 = *pbVar10;
  bVar12 = *pbVar10;
  *pbVar10 = bVar12 + extraout_CL + bVar3;
  pcVar13 = (char *)((int)&pTVar1[-0xa6326c].fields.outlineTeamRed + 3);
  *pcVar13 = *pcVar13 + extraout_DL +
            (CARRY1(bVar11,extraout_CL) || CARRY1(bVar12 + extraout_CL,bVar3));
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

