
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields)._.checkmark;
  if (pIVar2 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar2,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (Image *)(this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) &&
        (unaff_EDI = (Image *)(pMVar4->fields).teamNames, unaff_EDI != (Image *)0x0)) &&
       (this = (TeamRequirementPanel *)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
       , team != (Object *)0x0)) {
      if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        pIVar2 = (Image *)team;
        pIVar5 = (Int32Enum__Enum *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__get_Item
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar5,method_00);
        unaff_EDI = pIVar2;
        if (unaff_EBX == (Image *)0x0) goto code_?;
        ppIVar6 = &unaff_EBX->klass;
        unaff_EBX = (Image *)((*ppIVar6)->vtable).IsRaycastLocationValid.methodPtr;
        (*(code *)((*ppIVar6)->vtable).get_layoutPriority.method)();
        if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) {
          func_?();
          return;
        }
      }
      func_?();
    }
  }
code_?:
  Var32 = func_?();
  puVar7 = (uint *)(extraout_ECX + 0x3e);
  pIVar2 = (Image *)*puVar7;
  *puVar7 = *puVar7 - (int)unaff_EDI;
  bVar8 = (byte)((uint)extraout_ECX >> 8);
  bVar9 = CARRY1(*extraout_ECX,bVar8) || CARRY1(*extraout_ECX + bVar8,pIVar2 < unaff_EDI);
  *extraout_ECX = *extraout_ECX + bVar8 + (pIVar2 < unaff_EDI);
  if ((char)*extraout_ECX < '\0') {
    bVar10 = *extraout_ECX;
    bVar11 = *extraout_ECX;
    *extraout_ECX = bVar11 + bVar8 + bVar9;
    if ((char)*extraout_ECX < '\0') {
      *extraout_ECX =
           *extraout_ECX + bVar8 + (CARRY1(bVar10,bVar8) || CARRY1(bVar11 + bVar8,bVar9));
      if ((char)*extraout_ECX < '\0') {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fcos(Var32);
    }
  }
  else {
    func_?();
  }
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  uRam_? = 1;
  this_03 = (Int32__Class *)(this->fields)._.checkmark;
  pSVar13 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  bVar8 = 0;
  cVar14 = '\0';
  cVar15 = (int)this_03 < 0;
  if (this_03 != (Int32__Class *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)this_03,(int32_t)unaff_EDI,(GameObject *)unaff_EBX,pSVar13,
               (MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    bVar8 = 0;
    cVar14 = '\0';
    cVar15 = (int)this_02 < 0;
    unaff_EBX = unaff_EDI;
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,(int32_t)unaff_EDI,(MethodInfo *)0x0);
      bVar8 = 0;
      cVar14 = '\0';
      cVar15 = (int)pMVar16 < 0;
      if (pMVar16 != (MVWorldObject *)0x0) {
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar16->fields).data;
        bVar8 = 0;
        cVar14 = '\0';
        cVar15 = (int)this_00 < 0;
        this_03 = (Int32__Class *)0x0;
        if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (this_00,(Object *)StringLiteral_team,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar17 == 0) {
            unaff_EBX = (Image *)func_?();
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32((Object *)unaff_EBX,(MethodInfo *)0x0);
            pOVar18 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_team,pOVar18,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          this[1].fields.blueNotificationIcon =
               (Image *)this[1].fields._._.m_CancellationTokenSource;
          in_stack_19 = (Int32__Class *)&this[1].fields.blueNotificationIcon;
          func_?();
          in_stack_20 =
               (bool)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
          ;
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_team,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_ToInt32((Object *)value.m_Index,(MethodInfo *)0x0);
          this_03 = (Int32__Class *)func_?();
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pIVar2 = this[1].fields.blueNotificationIcon;
          bVar8 = 0;
          cVar14 = '\0';
          cVar15 = (int)pIVar2 < 0;
          if (pIVar2 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar2,0,(MethodInfo *)0x0);
            bVar8 = 0;
            cVar14 = '\0';
            cVar15 = (int)this_03 < 0;
            if (this_03 != (Int32__Class *)0x0) {
              pIVar21 = (((Dictionary_2_System_Int32Enum_System_Object___Class *)(this_03->_0).image
                         )->_0).element_class;
              pIVar22 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              bVar8 = pIVar21 < pIVar22;
              cVar14 = SBORROW4((int)pIVar21,(int)pIVar22);
              cVar15 = (int)pIVar21 - (int)pIVar22 < 0;
              if (pIVar21 == pIVar22) {
                puVar23 = (undefined4 *)func_?();
                switch(*puVar23) {
                case 0:
                  pIVar2 = (Image *)this[1].fields._.textField;
                  break;
                case 1:
                  pIVar2 = this[1].fields._.checkmark;
                  break;
                case 2:
                  pIVar2 = this[1].fields.redNotificationIcon;
                  break;
                case 3:
                  pIVar2 = this[1].fields.greenNotificationIcon;
                  break;
                default:
                  pIVar2 = (Image *)this[1].fields._._.m_CancellationTokenSource;
                }
                this[1].fields.blueNotificationIcon = pIVar2;
                in_stack_20 = 0xa3;
                func_?();
                pIVar2 = this[1].fields.blueNotificationIcon;
                bVar8 = 0;
                cVar14 = '\0';
                cVar15 = (int)pIVar2 < 0;
                in_stack_19 = (Int32__Class *)&this[1].fields.blueNotificationIcon;
                if (pIVar2 != (Image *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pIVar2,1,(MethodInfo *)0x0);
                  unaff_EBX = (this->fields)._.checkmark;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  mscorlib.dll::System::Convert::Convert_ToInt32
                            ((Object *)this_03,(MethodInfo *)0x0);
                  in_stack_19 = TypeInfo__System__Int32;
                  in_stack_20 = 0xef;
                  pSVar13 = (String *)func_?();
                  bVar8 = 0;
                  cVar14 = '\0';
                  cVar15 = (int)unaff_EBX < 0;
                  if (unaff_EBX != (Image *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              ((SettingsBase *)unaff_EBX,pSVar13,(Object *)pSVar13,(MethodInfo *)0x0
                              );
                    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    bVar8 = 0;
                    cVar14 = '\0';
                    cVar15 = (int)pMVar3 < 0;
                    if (pMVar3 != (MVNetworkGame *)0x0) {
                      pMVar4 = (pMVar3->fields).teamManager;
                      bVar8 = 0;
                      cVar14 = '\0';
                      cVar15 = (int)pMVar4 < 0;
                      this_03 = (Int32__Class *)0x0;
                      if (pMVar4 != (MVTeamManager *)0x0) {
                        this_03 = (Int32__Class *)(pMVar4->fields).teamNames;
                        unaff_EBX = (this->fields).activeNotificationIcon;
                        bVar8 = 0;
                        cVar14 = '\0';
                        cVar15 = (int)this_03 < 0;
                        if (this_03 != (Int32__Class *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                          bVar8 = 0;
                          cVar14 = '\0';
                          cVar15 = (int)unaff_EBX < 0;
                          if (unaff_EBX != (Image *)0x0) {
                            (*(code *)*(MethodInfo **)
                                       ((int)&(unaff_EBX->klass->vtable).get_layoutPriority + 4))();
                            pTVar24 = this[1].klass;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,1,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                      );
                            bVar8 = 0;
                            cVar14 = '\0';
                            cVar15 = (int)pTVar24 < 0;
                            unaff_EBX = (Image *)0x0;
                            if (pTVar24 != (TeamRequirementPanel__Class *)0x0) {
                              (*(code *)(pTVar24->_0).image[0x12].name)();
                              pMVar25 = this[1].monitor;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,2,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                        );
                              bVar8 = 0;
                              cVar14 = '\0';
                              cVar15 = (int)pMVar25 < 0;
                              unaff_EBX = (Image *)0x0;
                              if (pMVar25 != (MonitorData *)0x0) {
                                (**(code **)(*(int *)pMVar25 + 0x318))();
                                unaff_EBX = this[1].fields._._._._._.m_CachedPtr;
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,3
                                           ,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                          );
                                bVar8 = 0;
                                cVar14 = '\0';
                                cVar15 = (int)unaff_EBX < 0;
                                if (unaff_EBX != (Image *)0x0) {
                                  (**(code **)((int)unaff_EBX->klass + 0x318))();
                                  this_01 = (this->fields)._.textField;
                                  pOVar18 = (Object *)func_?();
                                  iVar26 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar18,(MethodInfo *)0x0);
                                  bVar8 = 0;
                                  cVar14 = '\0';
                                  cVar15 = (int)this_01 < 0;
                                  this_03 = (Int32__Class *)0x0;
                                  if (this_01 != (Text *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              ((SettingsButton *)this_01,StringLiteral_team,iVar26,
                                               MVTeam__Enum_None,1,(MethodInfo *)0x0);
                                    this_03 = (Int32__Class *)(this->fields).redNotificationIcon;
                                    pOVar18 = (Object *)func_?();
                                    unaff_EBX = (Image *)mscorlib.dll::System::Convert::
                                                         Convert_ToInt32(pOVar18,(MethodInfo *)0x0);
                                    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                        ((MethodInfo *)0x0);
                                    bVar8 = 0;
                                    cVar14 = '\0';
                                    cVar15 = (int)pMVar3 < 0;
                                    if (pMVar3 != (MVNetworkGame *)0x0) {
                                      pMVar4 = (pMVar3->fields).teamManager;
                                      bVar8 = 0;
                                      cVar14 = '\0';
                                      cVar15 = (int)pMVar4 < 0;
                                      if (pMVar4 != (MVTeamManager *)0x0) {
                                        bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                                           (pMVar4,MVTeam__Enum_Blue,
                                                            (MethodInfo *)0x0);
                                        bVar8 = 0;
                                        cVar14 = '\0';
                                        cVar15 = (int)this_03 < 0;
                                        if (this_03 != (Int32__Class *)0x0) {
                                          SettingsButton::SettingsButton_Initialize
                                                    ((SettingsButton *)this_03,StringLiteral_team,
                                                     (int32_t)unaff_EBX,MVTeam__Enum_Blue,bVar17,
                                                     (MethodInfo *)0x0);
                                          this_03 = (Int32__Class *)
                                                    (this->fields).greenNotificationIcon;
                                          pOVar18 = (Object *)func_?();
                                          unaff_EBX = (Image *)mscorlib.dll::System::Convert::
                                                               Convert_ToInt32(pOVar18,(MethodInfo *
                                                                                       )0x0);
                                          pMVar3 = MVGameControllerBase::
                                                    MVGameControllerBase_get_Game((MethodInfo *)0x0)
                                          ;
                                          bVar8 = 0;
                                          cVar14 = '\0';
                                          cVar15 = (int)pMVar3 < 0;
                                          if (pMVar3 != (MVNetworkGame *)0x0) {
                                            pMVar4 = (pMVar3->fields).teamManager;
                                            bVar8 = 0;
                                            cVar14 = '\0';
                                            cVar15 = (int)pMVar4 < 0;
                                            if (pMVar4 != (MVTeamManager *)0x0) {
                                              bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                                                 (pMVar4,MVTeam__Enum_Red,
                                                                  (MethodInfo *)0x0);
                                              bVar8 = 0;
                                              cVar14 = '\0';
                                              cVar15 = (int)this_03 < 0;
                                              if (this_03 != (Int32__Class *)0x0) {
                                                SettingsButton::SettingsButton_Initialize
                                                          ((SettingsButton *)this_03,
                                                           StringLiteral_team,(int32_t)unaff_EBX,
                                                           MVTeam__Enum_Red,bVar17,(MethodInfo *)0x0
                                                          );
                                                this_03 = (Int32__Class *)
                                                          (this->fields).blueNotificationIcon;
                                                pOVar18 = (Object *)func_?();
                                                unaff_EBX = (Image *)mscorlib.dll::System::Convert::
                                                                     Convert_ToInt32(pOVar18,(
                                                  MethodInfo *)0x0);
                                                pMVar3 = MVGameControllerBase::
                                                          MVGameControllerBase_get_Game
                                                                    ((MethodInfo *)0x0);
                                                bVar8 = 0;
                                                cVar14 = '\0';
                                                cVar15 = (int)pMVar3 < 0;
                                                if (pMVar3 != (MVNetworkGame *)0x0) {
                                                  pMVar4 = (pMVar3->fields).teamManager;
                                                  bVar8 = 0;
                                                  cVar14 = '\0';
                                                  cVar15 = (int)pMVar4 < 0;
                                                  if (pMVar4 != (MVTeamManager *)0x0) {
                                                    bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                                                       (pMVar4,MVTeam__Enum_Green,
                                                                        (MethodInfo *)0x0);
                                                    bVar8 = 0;
                                                    cVar14 = '\0';
                                                    cVar15 = (int)this_03 < 0;
                                                    if (this_03 != (Int32__Class *)0x0) {
                                                      SettingsButton::SettingsButton_Initialize
                                                                ((SettingsButton *)this_03,
                                                                 StringLiteral_team,
                                                                 (int32_t)unaff_EBX,
                                                                 MVTeam__Enum_Green,bVar17,
                                                                 (MethodInfo *)0x0);
                                                      this = (TeamRequirementPanel *)
                                                             (this->fields).yellowNotificationIcon;
                                                      pOVar18 = (Object *)func_?();
                                                      this_03 = (Int32__Class *)
                                                                mscorlib.dll::System::Convert::
                                                                Convert_ToInt32(pOVar18,(MethodInfo
                                                                                         *)0x0);
                                                      pMVar3 = MVGameControllerBase::
                                                                MVGameControllerBase_get_Game
                                                                          ((MethodInfo *)0x0);
                                                      bVar8 = 0;
                                                      cVar14 = '\0';
                                                      cVar15 = (int)pMVar3 < 0;
                                                      if (pMVar3 != (MVNetworkGame *)0x0) {
                                                        pMVar4 = (pMVar3->fields).teamManager;
                                                        bVar8 = 0;
                                                        cVar14 = '\0';
                                                        cVar15 = (int)pMVar4 < 0;
                                                        if (pMVar4 != (MVTeamManager *)0x0) {
                                                          bVar17 = MVTeamManager::
                                                                   MVTeamManager_HasTeam
                                                                             (pMVar4,
                                                  MVTeam__Enum_Yellow,(MethodInfo *)0x0);
                                                  bVar8 = 0;
                                                  cVar14 = '\0';
                                                  cVar15 = (int)this < 0;
                                                  if ((Image *)this != (Image *)0x0) {
                                                    SettingsButton::SettingsButton_Initialize
                                                              ((SettingsButton *)this,
                                                               StringLiteral_team,(int32_t)this_03,
                                                               MVTeam__Enum_Yellow,bVar17,
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
                in_stack_20 = 0xe2;
                func_?();
                in_stack_19 = this_03;
              }
            }
          }
        }
      }
    }
  }
  uVar27 = func_?();
  pcVar28 = (char *)((ulonglong)uVar27 >> 0x20);
  pUVar29 = (UnityAction *)uVar27;
  if (cVar14 == cVar15) {
    *(byte *)&unaff_EBX->klass = *(byte *)&unaff_EBX->klass & (byte)((uint)unaff_EBX >> 8);
    *(byte *)&(this_03->_0).image = *(byte *)&(this_03->_0).image & (char)extraout_CX + 1U;
  }
  else {
    pbVar30 = (byte *)(pcVar28 + -0x78efc185);
    bVar10 = *pbVar30;
    bVar31 = (byte)uVar27;
    bVar11 = *pbVar30;
    *pbVar30 = bVar11 + bVar31 + bVar8;
    if ((POPCOUNT(*pbVar30) & 1U) == 0) {
      pcVar28 = (char *)((int)unaff_EBX + (int)this_03 * 2 + -0x3333efc2);
      *pcVar28 = *pcVar28 + (char)extraout_CX +
                 (CARRY1(bVar10,bVar31) || CARRY1(bVar11 + bVar31,bVar8));
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    puVar1 = (undefined1 *)0x8b560111;
    if (*pbVar30 == 0) {
      pUVar29 = (((Image *)this)->fields)._._.m_OnDirtyVertsCallback;
      bVar8 = 0;
      if (pUVar29 == (UnityAction *)0x0) goto code_?;
    }
    else {
      *(byte *)&pUVar29->klass = *(char *)&pUVar29->klass + bVar31;
      pcVar32 = (char *)((int)&(this_03->_1).unity_user_data + 2);
      *pcVar32 = *pcVar32 + (char)((ulonglong)uVar27 >> 0x20);
      *pcVar28 = *pcVar28 + (char)((ushort)extraout_CX >> 8);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pUVar29,in_stack_20,(MethodInfo *)in_stack_19);
    this_03 = pIRam8b560121;
    bVar8 = 0;
    if (pIRam8b560121 == (Int32__Class *)0x0) goto code_?;
    pIVar21 = (((Dictionary_2_System_Int32Enum_System_Object___Class *)(pIRam8b560121->_0).image)->
              _0).element_class;
    pIVar22 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
    bVar8 = pIVar21 < pIVar22;
    if (pIVar21 != pIVar22) {
      func_?();
      goto code_?;
    }
  }
  puVar23 = (undefined4 *)func_?();
  switch(*puVar23) {
  case 0:
    pUVar29 = (UnityAction *)(((Image *)this)->fields)._._.m_Canvas;
    break;
  case 1:
    pUVar29 = (UnityAction *)(((Image *)this)->fields)._._.m_CanvasRenderer;
    break;
  case 2:
    pUVar29 = *(UnityAction **)&(((Image *)this)->fields)._._.m_VertsDirty;
    break;
  case 3:
    pUVar29 = (((Image *)this)->fields)._._.m_OnDirtyLayoutCallback;
    break;
  default:
    pUVar29 = (UnityAction *)(((Image *)this)->fields)._._.m_RectTransform;
  }
  (((Image *)this)->fields)._._.m_OnDirtyVertsCallback = pUVar29;
  func_?();
  pUVar29 = (((Image *)this)->fields)._._.m_OnDirtyVertsCallback;
  bVar8 = 0;
  if (pUVar29 != (UnityAction *)0x0) {
    pIVar33 = (Int32__Class *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pUVar29,1,(MethodInfo *)0x0);
    pIVar2 = (Image *)(((Image *)this)->fields)._._.m_Material;
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar26 = mscorlib.dll::System::Convert::Convert_ToInt32((Object *)this_03,(MethodInfo *)0x0);
    this_03 = pIVar33;
    *(int32_t *)(puVar1 + 8) = iVar26;
    pOVar18 = (Object *)func_?();
    bVar8 = 0;
    this = (TeamRequirementPanel *)0x0;
    if (pIVar2 != (Image *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                ((SettingsBase *)pIVar2,*(String **)(puVar1 + 0xc),pOVar18,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  LOCK();
  piVar34 = (int *)((int)&(this_03->_0).klass + 2);
  iVar35 = *piVar34;
  *piVar34 = (int)this_03;
  UNLOCK();
  pbVar30 = (byte *)(iVar35 * 3 + 0x7f91103e);
  bVar10 = *pbVar30;
  bVar11 = *pbVar30;
  *pbVar30 = bVar11 + extraout_CL + bVar8;
  pcVar28 = (char *)((int)&((Image *)((int)this + -0x33efc184))->klass + 3);
  *pcVar28 = *pcVar28 + extraout_DL +
             (CARRY1(bVar10,extraout_CL) || CARRY1(bVar11 + extraout_CL,bVar8));
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

