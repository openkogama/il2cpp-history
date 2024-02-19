
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
    in_stack_1 = 0x84;
    func_?();
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_Team_Requirement);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  pTVar2 = this;
  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)(this->fields).settingsBase;
  method_00 = (MVTeam__Enum__Class *)&UNK_?;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar3 = woID;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    pDVar4 = this_00;
    method_00 = (MVTeam__Enum__Class *)woID;
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_00,woID,root,header,(MethodInfo *)0x0);
    in_stack_1 = (bool)pDVar4;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_EBX = (Text *)iVar3;
    if ((pMVar5 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar5,iVar3,(MethodInfo *)0x0), pMVar6 != (MVWorldObject *)0x0)) {
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar6->fields).data;
      this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
      if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        this = (TeamRequirementSettings *)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                           (pDVar7,(Object *)StringLiteral_team,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
        if (bVar8 == 0) {
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
          pOVar9 = (Object *)func_?();
          in_stack_10 = StringLiteral_team;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                     (Object *)StringLiteral_team,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        method = (MethodInfo *)(pTVar2->fields).outlineTeamNone;
        (pTVar2->fields).currentOutline = (Outline *)method;
        root = (GameObject *)&(pTVar2->fields).currentOutline;
        woID = (int32_t)&UNK_?;
        func_?();
        woID = (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        this = (TeamRequirementSettings *)StringLiteral_team;
        TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar7,(Object *)StringLiteral_team,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        in_stack_12 = (Il2CppClass *)&UNK_?;
        this = (TeamRequirementSettings *)
               mscorlib.dll::System::Convert::Convert_ToInt32
                         ((Object *)TVar11.m_Index,(MethodInfo *)0x0);
        in_stack_12 = (Il2CppClass *)&UNK_?;
        this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)func_?();
        woID = (int32_t)StringLiteral_team;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Convert);
          func_?(&TypeInfo__System__Int32);
          func_?(&TypeInfo__MV__WorldObject__MVTeam);
          cRam_? = '\x01';
        }
        pOVar13 = (pTVar2->fields).currentOutline;
        if ((pOVar13 != (Outline *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar13,0,(MethodInfo *)0x0),
           this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) {
          if ((((Dictionary_2_System_Int32Enum_System_Object___Class *)this_00->klass)->_0).
              element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
            puVar14 = (undefined4 *)func_?();
            switch(*puVar14) {
            case 0:
              pOVar13 = (pTVar2->fields).outlineTeamBlue;
              break;
            case 1:
              pOVar13 = (pTVar2->fields).outlineTeamRed;
              break;
            case 2:
              pOVar13 = (pTVar2->fields).outlineTeamGreen;
              break;
            case 3:
              pOVar13 = (pTVar2->fields).outlineTeamYellow;
              break;
            default:
              pOVar13 = (pTVar2->fields).outlineTeamNone;
            }
            (pTVar2->fields).currentOutline = pOVar13;
            in_stack_10 = (String *)&UNK_?;
            func_?();
            pOVar13 = (pTVar2->fields).currentOutline;
            if (pOVar13 != (Outline *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pOVar13,1,(MethodInfo *)0x0);
              unaff_EBX = (Text *)(pTVar2->fields).settingsBase;
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              root = (GameObject *)
                     mscorlib.dll::System::Convert::Convert_ToInt32
                               ((Object *)this_00,(MethodInfo *)0x0);
              in_stack_10 = (String *)&UNK_?;
              pOVar9 = (Object *)func_?();
              if (unaff_EBX != (Text *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          ((SettingsBase *)unaff_EBX,(String *)woID,pOVar9,(MethodInfo *)0x0);
                pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar15 != (MVNetworkGame *)0x0) {
                  pMVar16 = (pMVar15->fields).teamManager;
                  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                  if (pMVar16 != (MVTeamManager *)0x0) {
                    this_00 = (pMVar16->fields).teamNames;
                    unaff_EBX = (pTVar2->fields).buttonTeamBlueName;
                    if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                      method_00 = (MVTeam__Enum__Class *)0x0;
                      pDVar4 = this_00;
                      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0
                                           ,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                          );
                      in_stack_1 = (bool)pDVar4;
                      if (unaff_EBX != (Text *)0x0) {
                        (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                  (unaff_EBX,pOVar9,
                                   (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr);
                        pTVar17 = (pTVar2->fields).buttonTeamRedName;
                        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00
                                             ,1,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                            );
                        unaff_EBX = (Text *)0x0;
                        if (pTVar17 != (Text *)0x0) {
                          (*(code *)(pTVar17->klass->vtable).set_text.method)
                                    (pTVar17,pOVar9,
                                     (pTVar17->klass->vtable).CalculateLayoutInputHorizontal_1.
                                     methodPtr);
                          pTVar17 = (pTVar2->fields).buttonTeamGreenName;
                          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_00,2,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          unaff_EBX = (Text *)0x0;
                          if (pTVar17 != (Text *)0x0) {
                            (*(code *)(pTVar17->klass->vtable).set_text.method)
                                      (pTVar17,pOVar9,
                                       (pTVar17->klass->vtable).CalculateLayoutInputHorizontal_1.
                                       methodPtr);
                            pTVar17 = (pTVar2->fields).buttonTeamYellowName;
                            pOVar9 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_00,3,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            unaff_EBX = (Text *)0x0;
                            if (pTVar17 != (Text *)0x0) {
                              unaff_EBX = (Text *)(pTVar17->klass->vtable).
                                                  CalculateLayoutInputHorizontal_1.methodPtr;
                              (*(code *)(pTVar17->klass->vtable).set_text.method)(pTVar17,pOVar9);
                              pSVar18 = (pTVar2->fields).buttonTeamNone;
                              in_stack_1 = 0x27;
                              method_00 = TypeInfo__MV__WorldObject__MVTeam;
                              pOVar9 = (Object *)
                                        func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                        &stack0xfffffff8);
                              iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar9,(MethodInfo *)0x0);
                              this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                              if (pSVar18 != (SettingsButton *)0x0) {
                                method_00 = (MVTeam__Enum__Class *)&UNK_?;
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar18,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                                pSVar18 = (pTVar2->fields).buttonTeamBlue;
                                pOVar9 = (Object *)
                                          func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                          &stack0xfffffff4);
                                iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                   (pOVar9,(MethodInfo *)0x0);
                                this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
                                if (pSVar18 != (SettingsButton *)0x0) {
                                  method_00 = (MVTeam__Enum__Class *)&UNK_?;
                                  SettingsButton::SettingsButton_Initialize
                                            (pSVar18,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                                  pSVar18 = (pTVar2->fields).buttonTeamRed;
                                  pOVar9 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff0);
                                  iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar9,(MethodInfo *)0x0);
                                  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0
                                  ;
                                  if (pSVar18 != (SettingsButton *)0x0) {
                                    method_00 = (MVTeam__Enum__Class *)&UNK_?;
                                    SettingsButton::SettingsButton_Initialize
                                              (pSVar18,StringLiteral_team,iVar3,(MethodInfo *)0x0);
                                    this_00 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                              (pTVar2->fields).buttonTeamGreen;
                                    pOVar9 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xffffffec);
                                    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                       (pOVar9,(MethodInfo *)0x0);
                                    if (this_00 !=
                                        (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                                      method_00 = (MVTeam__Enum__Class *)&UNK_?;
                                      SettingsButton::SettingsButton_Initialize
                                                ((SettingsButton *)this_00,StringLiteral_team,iVar3
                                                 ,(MethodInfo *)0x0);
                                      pSVar18 = (pTVar2->fields).buttonTeamYellow;
                                      in_stack_10 = (String *)0x3;
                                      pOVar9 = (Object *)
                                                func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                &stack0xffffffe8);
                                      iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                         (pOVar9,(MethodInfo *)0x0);
                                      pTVar2 = (TeamRequirementSettings *)0x0;
                                      if (pSVar18 != (SettingsButton *)0x0) {
                                        SettingsButton::SettingsButton_Initialize
                                                  (pSVar18,StringLiteral_team,iVar3,
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
            in_stack_10 = (String *)0x0;
            func_?();
          }
        }
      }
    }
  }
  uVar19 = func_?();
  pcVar20 = (char *)((ulonglong)uVar19 >> 0x20);
  if (((uint)in_stack_10 & 1) == 0) {
    pbVar21 = (byte *)(pcVar20 + -0x58efc38e);
    bVar22 = *pbVar21;
    bVar23 = (byte)((ulonglong)uVar19 >> 8);
    *pbVar21 = *pbVar21 + bVar23;
    if (!CARRY1(bVar22,bVar23)) {
      pcVar20[(int)pTVar2 * 2 + -0x3333efc4] =
           pcVar20[(int)pTVar2 * 2 + -0x3333efc4] + extraout_CH;
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
    uVar25 = *(undefined6 *)(&pTVar2->klass + (int)uVar19 * 2);
    pOVar13 = (Outline *)((int)uVar19 + 0xADDR);
    piVar26 = (int *)((int)&pTVar2[-2].fields.buttonTeamBlueName + 3);
    *piVar26 = (int)(pcVar20 + *piVar26);
    if (*piVar26 == 0) goto code_?;
    *(char *)&pOVar13->klass = *(char *)&pOVar13->klass + (char)pOVar13;
    pcVar27 = (char *)((int)&this_00[2].fields._buckets + 2);
    *pcVar27 = *pcVar27 + (char)((ulonglong)uVar19 >> 0x20);
    *pcVar20 = *pcVar20 + (char)((uint6)uVar25 >> 8);
  }
  else {
    LOCK();
    *(char *)((int)unaff_EBX * 8 + 0xcc483ff) = (char)((ulonglong)uVar19 >> 0x28);
    UNLOCK();
    cRam_? = '\x01';
    pTVar2 = this;
code_?:
    pOVar13 = (pTVar2->fields).currentOutline;
    if (pOVar13 == (Outline *)0x0) goto code_?;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pOVar13,in_stack_1,(MethodInfo *)method_00);
  value = root;
  if (root != (GameObject *)0x0) {
    if ((root->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
      puVar14 = (undefined4 *)func_?(root);
      switch(*puVar14) {
      case 0:
        pOVar13 = (pTVar2->fields).outlineTeamBlue;
        break;
      case 1:
        pOVar13 = (pTVar2->fields).outlineTeamRed;
        break;
      case 2:
        pOVar13 = (pTVar2->fields).outlineTeamGreen;
        break;
      case 3:
        pOVar13 = (pTVar2->fields).outlineTeamYellow;
        break;
      default:
        pOVar13 = (pTVar2->fields).outlineTeamNone;
      }
      (pTVar2->fields).currentOutline = pOVar13;
      func_?(&(pTVar2->fields).currentOutline,pOVar13);
      pOVar13 = (pTVar2->fields).currentOutline;
      if (pOVar13 != (Outline *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pOVar13,1,(MethodInfo *)0x0);
        pSVar28 = (pTVar2->fields).settingsBase;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = (TeamRequirementSettings *)
               mscorlib.dll::System::Convert::Convert_ToInt32((Object *)value,(MethodInfo *)0x0);
        pOVar9 = (Object *)func_?();
        if (pSVar28 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (pSVar28,(String *)woID,pOVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      func_?(root,TypeInfo__MV__WorldObject__MVTeam);
    }
  }
code_?:
  uVar25 = func_?();
  out(0x75,(int)uVar25);
  uVar29 = in((short)((uint6)uVar25 >> 0x20));
  puVar14 = (undefined4 *)CONCAT31((int3)((uint6)uVar25 >> 8),uVar29);
  if ((char)uVar25 == '\x10') {
    bVar22 = (byte)extraout_ECX;
    bVar23 = (byte)((uint6)uVar25 >> 0x28);
    piVar26 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar22 + bVar23);
    if ((byte)(bVar22 + bVar23) != '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar14)();
      return;
    }
    if ((byte)(bVar23 * '\x02' + CARRY1(bVar22,bVar23)) == '\0') {
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
    piVar30 = (int *)(((uint)unaff_EBX ^ (uint)&stack0xfffffffc) + 0x5c614c4);
    *piVar30 = *piVar30 + 1;
    *piVar26 = (int)((undefined1 *)((int)puVar14 + (int)&stack0xfffffffc) +
                    *piVar26 +
                    (uint)(CARRY1(bVar23,bVar23) || CARRY1(bVar23 * '\x02',CARRY1(bVar22,bVar23))));
  }
  else {
    func_?();
    func_?(&StringLiteral_duration);
    uRam_? = 1;
  }
  iVar3 = woID;
  pTVar2 = this;
  pSVar28 = (this->fields).settingsBase;
  if (pSVar28 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (pSVar28,woID,root,MVWorldObjectDocumentationType__Enum_TimeTrigger,(MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar5 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar5,iVar3,(MethodInfo *)0x0), pMVar6 != (MVWorldObject *)0x0))
       && (pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar6->fields).data,
          pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar7,(Object *)StringLiteral_duration,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar31 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        this = (TeamRequirementSettings *)TypeInfo__System__Convert;
        func_?();
      }
      this = (TeamRequirementSettings *)0x0;
      this = (TeamRequirementSettings *)
             mscorlib.dll::System::Convert::Convert_ToSingle_1
                       ((Object *)0x0,(IFormatProvider *)pCVar31,(MethodInfo *)0x0);
      TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (pDVar7,(Object *)StringLiteral_time,(MethodInfo *)this);
      this = (TeamRequirementSettings *)0x0;
      pCVar31 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      this = (TeamRequirementSettings *)0x0;
      root = (GameObject *)
             mscorlib.dll::System::Convert::Convert_ToSingle_1
                       ((Object *)TVar11.m_Index,(IFormatProvider *)pCVar31,(MethodInfo *)0x0);
      pSVar32 = (SettingsSlider *)(pTVar2->fields).buttonTeamNone;
      if (pSVar32 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar32,StringLiteral_duration,(float)this,0.1,1000.0,(MethodInfo *)0x0);
        pSVar33 = (SettingsInputFieldSlider *)(pTVar2->fields).buttonTeamBlue;
        if (pSVar33 != (SettingsInputFieldSlider *)0x0) {
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                    (pSVar33,StringLiteral_duration,(float)this,(MethodInfo *)0x0);
          pSVar32 = (SettingsSlider *)(pTVar2->fields).buttonTeamRed;
          if (pSVar32 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar32,StringLiteral_time,(float)root,0.0,1000.0,(MethodInfo *)0x0);
            pSVar33 = (SettingsInputFieldSlider *)(pTVar2->fields).buttonTeamGreen;
            if (pSVar33 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (pSVar33,StringLiteral_time,(float)root,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
      puVar4 = (undefined4 *)func_?();
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
      func_?(&(pTVar1->fields).currentOutline);
      pOVar2 = (pTVar1->fields).currentOutline;
      if (pOVar2 != (Outline *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pOVar2,1,(MethodInfo *)0x0);
        pSVar5 = (pTVar1->fields).settingsBase;
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
        if (pSVar5 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar5,key,pOVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      func_?(value);
    }
  }
  uVar6 = func_?();
  out(0x75,(int)uVar6);
  uVar7 = in((short)((uint6)uVar6 >> 0x20));
  puVar4 = (undefined4 *)CONCAT31((int3)((uint6)uVar6 >> 8),uVar7);
  if ((char)uVar6 == '\x10') {
    bVar8 = (byte)extraout_ECX;
    bVar9 = (byte)((uint6)uVar6 >> 0x28);
    piVar10 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar8 + bVar9);
    if ((byte)(bVar8 + bVar9) != '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)();
      return;
    }
    if ((byte)(bVar9 * '\x02' + CARRY1(bVar8,bVar9)) == '\0') {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    piVar12 = (int *)((unaff_EBX ^ (uint)&stack0xfffffffc) + 0x5c614c4);
    *piVar12 = *piVar12 + 1;
    *piVar10 = (int)((undefined1 *)((int)puVar4 + (int)&stack0xfffffffc) +
                    *piVar10 +
                    (uint)(CARRY1(bVar9,bVar9) || CARRY1(bVar9 * '\x02',CARRY1(bVar8,bVar9))));
  }
  else {
    func_?();
    func_?();
    uRam_? = 1;
  }
  id = key;
  pTVar1 = this;
  pSVar5 = (this->fields).settingsBase;
  if (pSVar5 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (pSVar5,(int32_t)key,(GameObject *)value,
               MVWorldObjectDocumentationType__Enum_TimeTrigger,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this = (TeamRequirementSettings *)0x0;
      pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,(int32_t)id,(MethodInfo *)0x0);
      if ((pMVar13 != (MVWorldObject *)0x0) &&
         (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar13->fields).data,
         this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
        method = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        value = (Object *)StringLiteral_duration;
        this = (TeamRequirementSettings *)&UNK_?;
        key = (String *)this_00;
        this = (TeamRequirementSettings *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (this_00,(Object *)StringLiteral_duration,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        in_stack_15 = &UNK_?;
        this = (TeamRequirementSettings *)
               mscorlib.dll::System::Convert::Convert_ToSingle_1
                         ((Object *)this,(IFormatProvider *)pCVar14,(MethodInfo *)0x0);
        in_stack_15 = &UNK_?;
        value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (this_00,(Object *)StringLiteral_time,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        in_stack_15 = &UNK_?;
        value = (Object *)
                mscorlib.dll::System::Convert::Convert_ToSingle_1
                          ((Object *)value_00.m_Index,(IFormatProvider *)pCVar14,(MethodInfo *)0x0);
        pSVar16 = (SettingsSlider *)(pTVar1->fields).buttonTeamNone;
        if (pSVar16 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar16,StringLiteral_duration,(float)this,0.1,1000.0,(MethodInfo *)0x0);
          pSVar17 = (SettingsInputFieldSlider *)(pTVar1->fields).buttonTeamBlue;
          if (pSVar17 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (pSVar17,StringLiteral_duration,(float)this,(MethodInfo *)0x0);
            pSVar16 = (SettingsSlider *)(pTVar1->fields).buttonTeamRed;
            if (pSVar16 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar16,StringLiteral_time,(float)value,0.0,1000.0,(MethodInfo *)0x0);
              pSVar17 = (SettingsInputFieldSlider *)(pTVar1->fields).buttonTeamGreen;
              if (pSVar17 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                          (pSVar17,StringLiteral_time,(float)value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

