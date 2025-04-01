
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
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  uVar3 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    uVar3 = (POPCOUNT((uint)this_03 & 0xff) & 1U) == 0;
    unaff_EBX = (Text *)iVar2;
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,iVar2,(MethodInfo *)0x0);
      uVar3 = (POPCOUNT((uint)pMVar4 & 0xff) & 1U) == 0;
      if (pMVar4 != (MVWorldObject *)0x0) {
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar4->fields).data;
        uVar3 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
        if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          this = (TeamRequirementSettings *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_team,
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
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_team,pOVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          method = (MethodInfo *)(pTVar1->fields).outlineTeamNone;
          unaff_EBX = (Text *)&(pTVar1->fields).currentOutline;
          *(MethodInfo **)unaff_EBX = method;
          woID = (int32_t)&UNK_?;
          root = (GameObject *)unaff_EBX;
          func_?();
          woID = (int32_t)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
          ;
          this = (TeamRequirementSettings *)StringLiteral_team;
          value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_01,(Object *)StringLiteral_team,
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
          pOVar8 = *(Outline **)unaff_EBX;
          uVar3 = (POPCOUNT((uint)pOVar8 & 0xff) & 1U) == 0;
          if (pOVar8 != (Outline *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pOVar8,0,(MethodInfo *)0x0);
            uVar3 = (POPCOUNT((uint)pOVar6 & 0xff) & 1U) == 0;
            if (pOVar6 != (Object *)0x0) {
              uVar9 = (int)(pOVar6->klass->_0).element_class -
                      (int)(TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              uVar3 = (POPCOUNT(uVar9 & 0xff) & 1U) == 0;
              if (uVar9 == 0) {
                puVar10 = (undefined4 *)func_?();
                switch(*puVar10) {
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
                *(Outline **)unaff_EBX = pOVar8;
                func_?();
                pOVar8 = *(Outline **)unaff_EBX;
                uVar3 = (POPCOUNT((uint)pOVar8 & 0xff) & 1U) == 0;
                if (pOVar8 != (Outline *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pOVar8,1,(MethodInfo *)0x0);
                  unaff_EBX = (Text *)(pTVar1->fields).settingsBase;
                  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  root = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToInt32(pOVar6,(MethodInfo *)0x0);
                  pOVar6 = (Object *)func_?();
                  uVar3 = (POPCOUNT((uint)unaff_EBX & 0xff) & 1U) == 0;
                  if (unaff_EBX != (Text *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              ((SettingsBase *)unaff_EBX,(String *)woID,pOVar6,(MethodInfo *)0x0);
                    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    uVar3 = (POPCOUNT((uint)pMVar11 & 0xff) & 1U) == 0;
                    if (pMVar11 != (MVNetworkGame *)0x0) {
                      pMVar12 = (pMVar11->fields).teamManager;
                      uVar3 = (POPCOUNT((uint)pMVar12 & 0xff) & 1U) == 0;
                      if (pMVar12 != (MVTeamManager *)0x0) {
                        this_02 = (pMVar12->fields).teamNames;
                        unaff_EBX = (pTVar1->fields).buttonTeamBlueName;
                        uVar3 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
                        if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
                          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__get_Item
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,0,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                              );
                          uVar3 = (POPCOUNT((uint)unaff_EBX & 0xff) & 1U) == 0;
                          if (unaff_EBX != (Text *)0x0) {
                            (*(code *)(unaff_EBX->klass->vtable).set_text.method)
                                      (unaff_EBX,pOVar6,
                                       (unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.
                                       methodPtr);
                            pTVar13 = (pTVar1->fields).buttonTeamRedName;
                            pOVar6 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_02,1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                );
                            uVar3 = (POPCOUNT((uint)pTVar13 & 0xff) & 1U) == 0;
                            unaff_EBX = (Text *)0x0;
                            if (pTVar13 != (Text *)0x0) {
                              (*(code *)(pTVar13->klass->vtable).set_text.method)
                                        (pTVar13,pOVar6,
                                         (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.
                                         methodPtr);
                              pTVar13 = (pTVar1->fields).buttonTeamGreenName;
                              pOVar6 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_02,2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                              uVar3 = (POPCOUNT((uint)pTVar13 & 0xff) & 1U) == 0;
                              unaff_EBX = (Text *)0x0;
                              if (pTVar13 != (Text *)0x0) {
                                (*(code *)(pTVar13->klass->vtable).set_text.method)
                                          (pTVar13,pOVar6,
                                           (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.
                                           methodPtr);
                                pTVar13 = (pTVar1->fields).buttonTeamYellowName;
                                pOVar6 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_02,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                                  );
                                uVar3 = (POPCOUNT((uint)pTVar13 & 0xff) & 1U) == 0;
                                unaff_EBX = (Text *)0x0;
                                if (pTVar13 != (Text *)0x0) {
                                  unaff_EBX = (Text *)(pTVar13->klass->vtable).
                                                      CalculateLayoutInputHorizontal_1.methodPtr;
                                  (*(code *)(pTVar13->klass->vtable).set_text.method)(pTVar13,pOVar6)
                                  ;
                                  pSVar14 = (pTVar1->fields).buttonTeamNone;
                                  pOVar6 = (Object *)
                                            func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                            &stack0xfffffff8);
                                  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                     (pOVar6,(MethodInfo *)0x0);
                                  uVar3 = (POPCOUNT((uint)pSVar14 & 0xff) & 1U) == 0;
                                  if (pSVar14 != (SettingsButton *)0x0) {
                                    SettingsButton::SettingsButton_Initialize
                                              (pSVar14,StringLiteral_team,iVar2,(MethodInfo *)0x0);
                                    pSVar14 = (pTVar1->fields).buttonTeamBlue;
                                    pOVar6 = (Object *)
                                              func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                              &stack0xfffffff4);
                                    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                       (pOVar6,(MethodInfo *)0x0);
                                    uVar3 = (POPCOUNT((uint)pSVar14 & 0xff) & 1U) == 0;
                                    if (pSVar14 != (SettingsButton *)0x0) {
                                      SettingsButton::SettingsButton_Initialize
                                                (pSVar14,StringLiteral_team,iVar2,(MethodInfo *)0x0)
                                      ;
                                      pSVar14 = (pTVar1->fields).buttonTeamRed;
                                      pOVar6 = (Object *)
                                                func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                &stack0xfffffff0);
                                      iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                         (pOVar6,(MethodInfo *)0x0);
                                      uVar3 = (POPCOUNT((uint)pSVar14 & 0xff) & 1U) == 0;
                                      if (pSVar14 != (SettingsButton *)0x0) {
                                        SettingsButton::SettingsButton_Initialize
                                                  (pSVar14,StringLiteral_team,iVar2,
                                                   (MethodInfo *)0x0);
                                        pSVar14 = (pTVar1->fields).buttonTeamGreen;
                                        pOVar6 = (Object *)
                                                  func_?(TypeInfo__MV__WorldObject__MVTeam,
                                                                  &stack0xffffffec);
                                        iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                           (pOVar6,(MethodInfo *)0x0);
                                        uVar3 = (POPCOUNT((uint)pSVar14 & 0xff) & 1U) == 0;
                                        if (pSVar14 != (SettingsButton *)0x0) {
                                          SettingsButton::SettingsButton_Initialize
                                                    (pSVar14,StringLiteral_team,iVar2,
                                                     (MethodInfo *)0x0);
                                          pSVar14 = (pTVar1->fields).buttonTeamYellow;
                                          pOVar6 = (Object *)
                                                    func_?(
                                                  TypeInfo__MV__WorldObject__MVTeam,&stack0xffffffe8
                                                  );
                                          iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                             (pOVar6,(MethodInfo *)0x0);
                                          uVar3 = (POPCOUNT((uint)pSVar14 & 0xff) & 1U) == 0;
                                          if (pSVar14 != (SettingsButton *)0x0) {
                                            SettingsButton::SettingsButton_Initialize
                                                      (pSVar14,StringLiteral_team,iVar2,
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
  cVar15 = func_?();
  if (!(bool)uVar3) {
    ppRVar16 = &unaff_EBX[0x9adda5].fields._._.m_RectTransform;
    *(char *)ppRVar16 = *(char *)ppRVar16 + cVar15;
    return;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  ppOVar3 = &(this->fields).currentOutline;
  if ((pOVar2 != (Outline *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pOVar2,0,(MethodInfo *)0x0), unaff_EDI = value,
     value != (Object *)0x0)) {
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
      *ppOVar3 = pOVar2;
      func_?(ppOVar3,pOVar2);
      if (*ppOVar3 != (Outline *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)*ppOVar3,1,(MethodInfo *)0x0);
        this_00 = (pTVar1->fields).settingsBase;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          this = (TeamRequirementSettings *)TypeInfo__System__Convert;
          func_?();
        }
        this = (TeamRequirementSettings *)0x0;
        mscorlib.dll::System::Convert::Convert_ToInt32(unaff_EDI,(MethodInfo *)0x0);
        this = (TeamRequirementSettings *)&this;
        value_00 = (Object *)func_?();
        pTVar1 = (TeamRequirementSettings *)0x0;
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      func_?(value,TypeInfo__MV__WorldObject__MVTeam);
    }
  }
  uVar5 = func_?();
  *(byte *)&unaff_EDI->klass = *(byte *)&unaff_EDI->klass >> 4 | *(char *)&unaff_EDI->klass << 4;
  bVar6 = (byte)uVar5 | *extraout_ECX;
  pcVar7 = (char *)CONCAT31((int3)((uint)uVar5 >> 8),bVar6);
  *pcVar7 = *pcVar7 + bVar6;
  pFVar8 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar8 != (FlagDebriefingControl *)0x0) {
    pAVar9 = (pFVar8->fields).OnFlagDebriefingEnd;
    if (pAVar9 != (Action *)0x0) {
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,(pAVar9->fields)._._.method);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar10 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar10 != (IPlayModeUI *)0x0) {
      func_?(4,TypeInfo__IPlayModeUI,pIVar10,0);
      *(undefined2 *)&(pTVar1->fields).buttonTeamGreenName = 0;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        pOVar2 = (Outline *)
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_01 = (pTVar1->fields).buttonTeamYellow;
        (pTVar1->fields).outlineTeamRed = pOVar2;
        if (this_01 != (SettingsButton *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    ((CanvasGroup *)this_01,0.0,(MethodInfo *)0x0);
          pFVar8 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                              ((MethodInfo *)0x0);
          if (pFVar8 != (FlagDebriefingControl *)0x0) {
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            pAVar9 = (pFVar8->fields).OnFlagCountDownEnd;
            (pFVar8->fields).IsInFlagDebriefing = 0;
            (pFVar8->fields).RunStartTime = fVar11;
            if (pAVar9 != (Action *)0x0) {
              (*(pAVar9->fields)._._.invoke_impl)
                        ((pAVar9->fields)._._.method_code,(pAVar9->fields)._._.method);
            }
            pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if ((pGVar12 != (GameEventManager *)0x0) &&
               (pTVar1 = (TeamRequirementSettings *)(pGVar12->fields).AvatarCommandsPlayMode,
               pTVar1 != (TeamRequirementSettings *)0x0)) {
              key = (String *)0x0;
              pMVar13 = value[2].monitor;
              if (pMVar13 != (MonitorData *)0x0) {
                this = pTVar1;
                (**(code **)(pMVar13 + 0xc))(*(undefined4 *)(pMVar13 + 0x20));
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

