
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.checkmark;
  bVar2 = 0;
  if (pIVar1 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    bVar2 = 0;
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pMVar4 = (pMVar3->fields).teamManager;
      bVar2 = 0;
      if (pMVar4 != (MVTeamManager *)0x0) {
        unaff_EDI = (Image *)(pMVar4->fields).teamNames;
        bVar2 = 0;
        if (unaff_EDI != (Image *)0x0) {
          this = (TeamRequirementPanel *)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
          ;
          bVar2 = 0;
          if (team != (Object *)0x0) {
            pIVar5 = (team->klass->_0).element_class;
            pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar2 = pIVar5 < pIVar6;
            if (pIVar5 == pIVar6) {
              pIVar1 = (Image *)team;
              pIVar7 = (Int32Enum__Enum *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar7,
                         method_00);
              unaff_EDI = pIVar1;
              bVar2 = 0;
              if (unaff_EBX == (Text *)0x0) goto code_?;
              ppTVar8 = &unaff_EBX->klass;
              unaff_EBX = (Text *)((*ppTVar8)->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
              (*(code *)((*ppTVar8)->vtable).set_text.method)();
              pIVar5 = (team->klass->_0).element_class;
              pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              bVar2 = pIVar5 < pIVar6;
              if (pIVar5 == pIVar6) {
                func_?();
                return;
              }
            }
            func_?();
          }
        }
      }
    }
  }
code_?:
  uVar9 = func_?();
  iVar10 = (int)unaff_EBX + (-(uint)bVar2 - (int)&stack0xfffffffc);
  *extraout_ECX = *extraout_ECX + (char)iVar10 + (uVar9 < 0x3deb1910);
  pIVar1 = (Image *)CONCAT31((int3)((uint)iVar10 >> 8),0x11);
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  uRam_? = 1;
  pIVar11 = (this->fields)._.checkmark;
  pSVar12 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  if (pIVar11 != (Image *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              ((SettingsBase *)pIVar11,(int32_t)unaff_EDI,(GameObject *)pIVar1,pSVar12,
               (MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pIVar1 = unaff_EDI;
    if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_03,(int32_t)unaff_EDI,(MethodInfo *)0x0),
        pMVar13 != (MVWorldObject *)0x0)) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar13->fields).data,
       this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                         (this_00,(Object *)StringLiteral_team,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
      if (bVar14 == 0) {
        pOVar15 = (Object *)func_?();
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToInt32(pOVar15,(MethodInfo *)0x0);
        pOVar15 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_team
                   ,pOVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      pIVar1 = (Image *)&this[1].fields.blueNotificationIcon;
      *(Image **)pIVar1 = (Image *)this[1].fields._._.m_CancellationTokenSource;
      func_?();
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32((Object *)value.m_Index,(MethodInfo *)0x0);
      pOVar15 = (Object *)func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((*(Image **)pIVar1 != (Image *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)*(Image **)pIVar1,0,(MethodInfo *)0x0), pOVar15 != (Object *)0x0)
         ) {
        if ((pOVar15->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          puVar16 = (undefined4 *)func_?();
          switch(*puVar16) {
          case 0:
            pIVar11 = (Image *)this[1].fields._.textField;
            break;
          case 1:
            pIVar11 = this[1].fields._.checkmark;
            break;
          case 2:
            pIVar11 = this[1].fields.redNotificationIcon;
            break;
          case 3:
            pIVar11 = this[1].fields.greenNotificationIcon;
            break;
          default:
            pIVar11 = (Image *)this[1].fields._._.m_CancellationTokenSource;
          }
          *(Image **)pIVar1 = pIVar11;
          func_?();
          if (*(Image **)pIVar1 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)*(Image **)pIVar1,1,(MethodInfo *)0x0);
            pIVar1 = (this->fields)._.checkmark;
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32(pOVar15,(MethodInfo *)0x0);
            pSVar12 = (String *)func_?();
            if (pIVar1 != (Image *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        ((SettingsBase *)pIVar1,pSVar12,(Object *)pSVar12,(MethodInfo *)0x0);
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar3 != (MVNetworkGame *)0x0) &&
                 (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
                this_01 = (pMVar4->fields).teamNames;
                pIVar1 = (this->fields).activeNotificationIcon;
                if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                   (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                              ), pIVar1 != (Image *)0x0)) {
                  (*(code *)(pIVar1->klass->vtable).get_layoutPriority.method)();
                  pTVar17 = this[1].klass;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                            );
                  pIVar1 = (Image *)0x0;
                  if (pTVar17 != (TeamRequirementPanel__Class *)0x0) {
                    (*(code *)(pTVar17->_0).image[0x12].name)();
                    pMVar18 = this[1].monitor;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                              );
                    pIVar1 = (Image *)0x0;
                    if (pMVar18 != (MonitorData *)0x0) {
                      (**(code **)(*(int *)pMVar18 + 0x318))();
                      piVar19 = this[1].fields._._._._._.m_CachedPtr;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,3,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                );
                      pIVar1 = (Image *)0x0;
                      if (piVar19 != (int *)0x0) {
                        iVar10 = *piVar19;
                        pIVar1 = *(Image **)(iVar10 + 0x31c);
                        (**(code **)(iVar10 + 0x318))();
                        this_02 = (this->fields)._.textField;
                        pOVar15 = (Object *)func_?();
                        iVar20 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar15,(MethodInfo *)0x0);
                        if (this_02 != (Text *)0x0) {
                          SettingsButton::SettingsButton_Initialize
                                    ((SettingsButton *)this_02,StringLiteral_team,iVar20,
                                     (MethodInfo *)0x0);
                          pIVar11 = (this->fields).redNotificationIcon;
                          pOVar15 = (Object *)func_?();
                          iVar20 = mscorlib.dll::System::Convert::Convert_ToInt32
                                             (pOVar15,(MethodInfo *)0x0);
                          if (pIVar11 != (Image *)0x0) {
                            SettingsButton::SettingsButton_Initialize
                                      ((SettingsButton *)pIVar11,StringLiteral_team,iVar20,
                                       (MethodInfo *)0x0);
                            pIVar11 = (this->fields).greenNotificationIcon;
                            pOVar15 = (Object *)func_?();
                            iVar20 = mscorlib.dll::System::Convert::Convert_ToInt32
                                               (pOVar15,(MethodInfo *)0x0);
                            if (pIVar11 != (Image *)0x0) {
                              SettingsButton::SettingsButton_Initialize
                                        ((SettingsButton *)pIVar11,StringLiteral_team,iVar20,
                                         (MethodInfo *)0x0);
                              pIVar11 = (this->fields).blueNotificationIcon;
                              pOVar15 = (Object *)func_?();
                              iVar20 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar15,(MethodInfo *)0x0);
                              if (pIVar11 != (Image *)0x0) {
                                SettingsButton::SettingsButton_Initialize
                                          ((SettingsButton *)pIVar11,StringLiteral_team,iVar20,
                                           (MethodInfo *)0x0);
                                pIVar11 = (this->fields).yellowNotificationIcon;
                                pOVar15 = (Object *)func_?();
                                iVar20 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                   (pOVar15,(MethodInfo *)0x0);
                                if (pIVar11 != (Image *)0x0) {
                                  SettingsButton::SettingsButton_Initialize
                                            ((SettingsButton *)pIVar11,StringLiteral_team,iVar20,
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
        else {
          func_?();
        }
      }
    }
  }
  uVar21 = func_?();
  pcVar22 = (char *)((uint)uVar21 - 0x13);
  *pcVar22 = *pcVar22 + (char)((ulonglong)uVar21 >> 0x28) +
            ((longlong)(int)((longlong)(int)&stack0xfffffffc * 0x3d) !=
            (longlong)(int)&stack0xfffffffc * 0x3d);
  pcVar22 = (char *)((int)((ulonglong)uVar21 >> 0x20) + -0x13);
  *pcVar22 = *pcVar22 + (char)((uint)pIVar1 >> 8) + ((uint)uVar21 < 0x3ded7510);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}

