
/* Void Start() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_Start
               (GameSetupOptions *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = GameSetupOptions_get_IsReviveEnabled((MethodInfo *)0x0);
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar1;
  pTVar2 = (this->fields).reviveToggleButton;
  if (TypeInfo__GameSetupOptions->static_fields->isReviveEnabled == 0) {
    if (pTVar2 == (ToggleButtonAnimation *)0x0) goto code_?;
    if (cRam_? == '\0') {
      return;
    }
  }
  else {
    if (pTVar2 == (ToggleButtonAnimation *)0x0) goto code_?;
    if (cRam_? != '\0') {
      return;
    }
  }
  cRam_? = cRam_? == '\0';
  fRam00000048 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = fRam00000028;
  fRam00000034 = fRam00000028;
  fRam00000030 = fRam00000028;
  if (cRam_? == '\0') {
    if (pRRam00000010 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRRam00000010,(MethodInfo *)0x0);
    fRam00000030 = fVar3 + pRVar4->m_Width;
  }
  else {
    if (pRRam00000010 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRRam00000010,(MethodInfo *)0x0);
    fRam00000034 = fVar3 + pRVar4->m_Width;
  }
  fVar3 = fRam00000028;
  fRam0000003c = fRam00000028;
  fRam00000038 = fRam00000028;
  if (cRam_? == '\0') {
    if (pRRam00000010 != (RectTransform *)0x0) {
      pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffec,pRRam00000010,(MethodInfo *)0x0);
      fRam00000038 = fVar3 - pRVar4->m_Width;
code_?:
      fRam00000044 = fRam0000002c;
      fRam00000040 = fRam0000002c;
      if (cRam_? != '\0') {
        fRam00000044 = fRam0000002c + fRam00000024;
        return;
      }
      fRam00000040 = fRam0000002c + fRam00000024;
      return;
    }
  }
  else if (pRRam00000010 != (RectTransform *)0x0) {
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRRam00000010,(MethodInfo *)0x0);
    fRam0000003c = fVar3 - pRVar4->m_Width;
    goto code_?;
  }
code_?:
  uVar5 = func_?(&stack0xffffffe8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ToggleRevive() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_ToggleRevive
               (GameSetupOptions *this,MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__get_Current__
                   );
    func_?(&TypeInfo__GameSetupOptions);
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&StringLiteral_Revive_enabled__);
    func_?(&StringLiteral_AllowRevive);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GameSetupOptions);
  }
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled =
       TypeInfo__GameSetupOptions->static_fields->isReviveEnabled == 0;
  TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVGameOptionDataObject *)0x0) {
      this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (GameOptionSettingsManager *)0x0) {
        this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameOptions::GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
                            (this_02,(MethodInfo *)0x0);
        if (this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffcc,this_03,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                             );
          puStack_1 = (undefined *)0x1;
          RVar5 = pLVar4->_current;
          do {
            do {
              message = RVar5;
              bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                                );
              if (bVar6 == 0) {
                puStack_1 = (undefined *)0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffffbc,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                           ,in_stack_7);
                goto code_?;
              }
              RVar5 = message;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)message,(MethodInfo *)0x0);
            } while (((message == (RegexCharClass_SingleRange)0x0) ||
                     (*(byte *)(*(int *)message + 0xb8) <
                      (
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                      ->_1).naturalAligment)) ||
                    (*(KogamaSettingBoolBase__Class **)
                      (*(int *)(*(int *)message + 100) + -4 +
                      (uint)(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                            ->_1).naturalAligment * 4) !=
                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                    ));
            in_stack_7 = (MethodInfo *)func_?();
            if (in_stack_7 == (MethodInfo *)0x0) goto code_?;
            RVar5.First = 0;
            RVar5.Last = 0;
            bVar6 = mscorlib.dll::System::String::String_op_Equality
                              ((String *)in_stack_7->invoker_method,StringLiteral_AllowRevive
                               ,(MethodInfo *)0x0);
          } while (bVar6 == 0);
          if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00 = in_stack_7;
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
                    ((KogamaSettingBoolBase *)in_stack_7,
                     TypeInfo__GameSetupOptions->static_fields->isReviveEnabled,(MethodInfo *)0x0);
          MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                    (this_01,(KogamaSettingWrapperBase *)in_stack_7,(MethodInfo *)0x0);
          puStack_1 = (undefined *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                     ,method_00);
code_?:
          puStack_1 = (undefined *)0xffffffff;
          MVGameOptionDataObject::MVGameOptionDataObject_Submit(this_01,(MethodInfo *)0x0);
          if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar8 = mscorlib.dll::System::Boolean::Boolean_ToString
                             ((Boolean *)TypeInfo__GameSetupOptions->static_fields,(MethodInfo *)0x0
                             );
          pSVar8 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Revive_enabled__,pSVar8,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar8,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GameSetupOptions() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameSetupOptions);
    cRam_? = '\x01';
  }
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = 1;
  TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 0;
  return;
}


/* Boolean get_IsReviveEnabled() */

bool Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_get_IsReviveEnabled(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__get_Current__
                   );
    func_?(&TypeInfo__GameSetupOptions);
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&StringLiteral_AllowRevive);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GameSetupOptions);
  }
  if (TypeInfo__GameSetupOptions->static_fields->reviveUpdated == 0) {
    if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GameSetupOptions);
    }
    TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 1;
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (MVWorldObjectClientManager *)0x0) {
      this_00 = (MVGameOptionDataObject *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                          (this,
                           MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                          );
      if (this_00 != (MVGameOptionDataObject *)0x0) {
        this_01 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                            (this_00,(MethodInfo *)0x0);
        if (this_01 != (GameOptionSettingsManager *)0x0) {
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameOptions::GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
                              (this_01,(MethodInfo *)0x0);
          if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&pLStack_5,this_02,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                               );
            RVar6 = pLVar4->_current;
            uStack_1 = 1;
            while( true ) {
              do {
                pLStack_5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             &UNK_?;
                bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                                  );
                if (bVar7 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&stack0xffffffc0,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                             ,in_stack_8);
                  uStack_1 = 0xffffffff;
                  if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar7 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
                  *unaff_FS_OFFSET = uStack_3;
                  return bVar7;
                }
              } while ((((RVar6 == (RegexCharClass_SingleRange)0x0) ||
                        (*(byte *)(*(int *)RVar6 + 0xb8) <
                         (
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                         ->_1).naturalAligment)) ||
                       (*(KogamaSettingBoolBase__Class **)
                         (*(int *)(*(int *)RVar6 + 100) + -4 +
                         (uint)(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                               ->_1).naturalAligment * 4) !=
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                       )) || (RVar6 == (RegexCharClass_SingleRange)0x0));
              in_stack_8 = (MethodInfo *)func_?();
              if (in_stack_8 == (MethodInfo *)0x0) break;
              RVar6.First = 0;
              RVar6.Last = 0;
              bVar7 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)in_stack_8->invoker_method,
                                 StringLiteral_AllowRevive,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                pLStack_5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             &UNK_?;
                bVar7 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingBoolBase::
                        KogamaSettingBoolBase_get_ValueBool
                                  ((KogamaSettingBoolBase *)in_stack_8,(MethodInfo *)0x0);
                if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                uStack_1 = 0xffffffff;
                TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar7;
                bVar7 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffffc0,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                           ,in_stack_8);
                *unaff_FS_OFFSET = uStack_3;
                return bVar7;
              }
            }
            func_?();
            func_?();
          }
        }
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    bVar7 = (*pcVar9)();
    return bVar7;
  }
  if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GameSetupOptions);
  }
  bVar7 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
  *unaff_FS_OFFSET = uStack_3;
  return bVar7;
}

