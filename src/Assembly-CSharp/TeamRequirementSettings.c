
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_Initialize
               (TeamRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Team_Requirement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    pTVar2 = (this_00->fields).headerText;
    (this_00->fields).woID = woID;
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
      uVar3 = 0;
      SettingsBase::SettingsBase_InitializeHierarchy(this_00,woID,root,(MethodInfo *)0x0);
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_03,woID,(MethodInfo *)0x0),
          pMVar4 != (MVWorldObjectClient *)0x0)) &&
         (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar4->fields)._.data,
         this_01 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (this_01,(Object *)StringLiteral_team,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (iVar5 < 0) {
          aiStackX_10[0] = 5;
          pOVar6 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
          if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
            FUN_?();
          }
          aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar6,(MethodInfo *)0x0)
          ;
          pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_team,pOVar6,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        bVar7 = iRam_? != 0;
        (this->fields).currentOutline = (this->fields).outlineTeamNone;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).currentOutline >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,
                             (Object *)StringLiteral_team,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar6,(MethodInfo *)0x0);
        pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_10);
        TeamRequirementSettings_OnSettingChanged(this,StringLiteral_team,pOVar6,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar12 != (MVGameControllerBase *)0x0) &&
            (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
           (pMVar14 = (pMVar13->fields).teamManager, pMVar14 != (MVTeamManager *)0x0)) {
          this_02 = (pMVar14->fields).teamNames;
          pTVar2 = (this->fields).buttonTeamBlueName;
          if ((this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
             (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                  ), pTVar2 != (Text *)0x0)) {
            (*(pTVar2->klass->vtable).set_text.methodPtr)
                      (pTVar2,pOVar6,(pTVar2->klass->vtable).set_text.method);
            pTVar2 = (this->fields).buttonTeamRedName;
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,1,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                );
            if (pTVar2 != (Text *)0x0) {
              (*(pTVar2->klass->vtable).set_text.methodPtr)
                        (pTVar2,pOVar6,(pTVar2->klass->vtable).set_text.method);
              pTVar2 = (this->fields).buttonTeamGreenName;
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,2,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                  );
              if (pTVar2 != (Text *)0x0) {
                (*(pTVar2->klass->vtable).set_text.methodPtr)
                          (pTVar2,pOVar6,(pTVar2->klass->vtable).set_text.method);
                pTVar2 = (this->fields).buttonTeamYellowName;
                pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,3,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                if (pTVar2 != (Text *)0x0) {
                  (*(pTVar2->klass->vtable).set_text.methodPtr)
                            (pTVar2,pOVar6,(pTVar2->klass->vtable).set_text.method);
                  pSVar15 = (this->fields).buttonTeamNone;
                  aiStackX_10[0] = 5;
                  pOVar6 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar6,(MethodInfo *)0x0)
                  ;
                  if (pSVar15 != (SettingsButton *)0x0) {
                    pOVar6 = (Object *)0x0;
                    SettingsButton::SettingsButton_Initialize
                              (pSVar15,StringLiteral_team,iVar5,MVTeam__Enum_None,1,
                               (MethodInfo *)0x0);
                    pSVar15 = (this->fields).buttonTeamBlue;
                    iVar16._0_2_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.attrs;
                    iVar16._2_1_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.type;
                    iVar16._3_1_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.field_0xb;
                    if (iVar16 < 0) {
                      if (((TypeInfo__MV__WorldObject__MVTeam->_0).generic_class ==
                           (Il2CppGenericClass *)0x0) ||
                         (((TypeInfo__MV__WorldObject__MVTeam->_1).field_0x6d & 8) == 0)) {
                        pOVar6 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                        FUN_?(pOVar6 + 1);
                        if (iRam_? != 0) {
                          uVar8 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
                          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                            LOCK();
                            bVar7 = uVar10 == *puVar11;
                            if (bVar7) {
                              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar7);
                        }
                      }
                    }
                    else {
                      pOVar6 = (Object *)((ulonglong)uStackX_c << 0x20);
                    }
                    iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32
                                       (pOVar6,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
                         (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                        (pMVar14 = (pMVar13->fields).teamManager, pMVar14 != (MVTeamManager *)0x0)) &&
                       (bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                           (pMVar14,MVTeam__Enum_Blue,(MethodInfo *)0x0),
                       pSVar15 != (SettingsButton *)0x0)) {
                      SettingsButton::SettingsButton_Initialize
                                (pSVar15,StringLiteral_team,iVar5,MVTeam__Enum_Blue,bVar17,
                                 (MethodInfo *)0x0);
                      pSVar15 = (this->fields).buttonTeamRed;
                      aiStackX_10[0] = 1;
                      pOVar6 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                      iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32
                                         (pOVar6,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar12 != (MVGameControllerBase *)0x0) &&
                          (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                         ((pMVar14 = (pMVar13->fields).teamManager, pMVar14 != (MVTeamManager *)0x0 &&
                          (bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                              (pMVar14,MVTeam__Enum_Red,(MethodInfo *)0x0),
                          pSVar15 != (SettingsButton *)0x0)))) {
                        SettingsButton::SettingsButton_Initialize
                                  (pSVar15,StringLiteral_team,iVar5,MVTeam__Enum_Red,bVar17,
                                   (MethodInfo *)0x0);
                        pSVar15 = (this->fields).buttonTeamGreen;
                        aiStackX_10[0] = 2;
                        pOVar6 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                        iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar6,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if (((pMVar12 != (MVGameControllerBase *)0x0) &&
                            (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                           ((pMVar14 = (pMVar13->fields).teamManager, pMVar14 != (MVTeamManager *)0x0
                            && (bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                                   (pMVar14,MVTeam__Enum_Green,(MethodInfo *)0x0),
                               pSVar15 != (SettingsButton *)0x0)))) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar15,StringLiteral_team,iVar5,MVTeam__Enum_Green,bVar17,
                                     (MethodInfo *)0x0);
                          pSVar15 = (this->fields).buttonTeamYellow;
                          aiStackX_10[0] = 3;
                          pOVar6 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                          iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32
                                             (pOVar6,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
                               (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                              (pMVar14 = (pMVar13->fields).teamManager, pMVar14 != (MVTeamManager *)0x0
                              )) && (bVar17 = MVTeamManager::MVTeamManager_HasTeam
                                                        (pMVar14,MVTeam__Enum_Yellow,
                                                         (MethodInfo *)0x0),
                                    pSVar15 != (SettingsButton *)0x0)) {
                            SettingsButton::SettingsButton_Initialize
                                      (pSVar15,StringLiteral_team,iVar5,MVTeam__Enum_Yellow,bVar17,
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
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TeamRequirementSettings::TeamRequirementSettings_OnSettingChanged
               (TeamRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).currentOutline;
  if ((pOVar1 != (Outline *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pOVar1,0,(MethodInfo *)0x0), value != (Object *)0x0)) {
    if ((value->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
      FUN_?(value);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = *(int *)&value[1].klass;
    if (iVar3 == 0) {
      bVar4 = iRam_? != 0;
      (this->fields).currentOutline = (this->fields).outlineTeamBlue;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).currentOutline >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    else if (iVar3 == 1) {
      bVar4 = iRam_? != 0;
      (this->fields).currentOutline = (this->fields).outlineTeamRed;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).currentOutline >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    else if (iVar3 == 2) {
      bVar4 = iRam_? != 0;
      (this->fields).currentOutline = (this->fields).outlineTeamGreen;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).currentOutline >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    else if (iVar3 == 3) {
      bVar4 = iRam_? != 0;
      (this->fields).currentOutline = (this->fields).outlineTeamYellow;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).currentOutline >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    else {
      bVar4 = iRam_? != 0;
      (this->fields).currentOutline = (this->fields).outlineTeamNone;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).currentOutline >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    pOVar1 = (this->fields).currentOutline;
    if (pOVar1 != (Outline *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pOVar1,1,(MethodInfo *)0x0);
      pSVar9 = (this->fields).settingsBase;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
      value_00 = (Object *)FUN_?(uRam_?,aiStackX_8);
      if (pSVar9 != (SettingsBase *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((((pSVar9->fields).woID != -1) && (key != (String *)0x0)) &&
           ((key->fields)._stringLength != 0)) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClientManager *)0x0) {
            wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_01,(pSVar9->fields).woID,(MethodInfo *)0x0);
            if (wo == (MVWorldObjectClient *)0x0) {
              return;
            }
            if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar10 = 0;
            WorldObjectDataValidator::WorldObjectDataValidator_Validate
                      (wo,key,value_00,(MethodInfo *)0x0);
            this_00 = (pSVar9->fields).result;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)FUN_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                        (this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              if (this_02 !=
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,
                           value_00,(InsertionBehavior__Enum)
                                    CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                          (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
                return;
              }
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

