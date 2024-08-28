
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
                       ((Rect *)&stack0xfffffff0,pRRam00000010,(MethodInfo *)0x0);
    fRam00000030 = fVar3 + pRVar4->m_Width;
  }
  else {
    if (pRRam00000010 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xfffffff0,pRRam00000010,(MethodInfo *)0x0);
    fRam00000034 = fVar3 + pRVar4->m_Width;
  }
  fVar3 = fRam00000028;
  fRam0000003c = fRam00000028;
  fRam00000038 = fRam00000028;
  if (cRam_? == '\0') {
    if (pRRam00000010 != (RectTransform *)0x0) {
      pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xfffffff0,pRRam00000010,(MethodInfo *)0x0);
      fRam00000038 = fVar3 - pRVar4->m_Width;
code_?:
      fRam00000044 = fRam0000002c;
      fRam00000040 = fRam0000002c;
      if (cRam_? != '\0') {
        fRam00000044 = fRam00000024 + fRam0000002c;
        return;
      }
      fRam00000040 = fRam00000024 + fRam0000002c;
      return;
    }
  }
  else if (pRRam00000010 != (RectTransform *)0x0) {
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xfffffff0,pRRam00000010,(MethodInfo *)0x0);
    fRam0000003c = fVar3 - pRVar4->m_Width;
    goto code_?;
  }
code_?:
  uVar5 = func_?(&stack0xffffffec);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ToggleRevive() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_ToggleRevive
               (GameSetupOptions *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
          pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffd0,this_03,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                             );
          RVar2 = pLVar1->_current;
          do {
            do {
              do {
                this_04 = RVar2;
                bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                                  );
                if (bVar3 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&stack0xffffffc0,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                             ,in_stack_4);
                  goto code_?;
                }
                RVar2 = this_04;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)this_04,(MethodInfo *)0x0);
              } while (this_04 == (RegexCharClass_SingleRange)0x0);
              bVar5 = (
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                      ->_1).naturalAligment;
            } while ((*(byte *)(*(int *)this_04 + 0xb8) < bVar5) ||
                    (*(KogamaSettingBoolBase__Class **)
                      (*(int *)(*(int *)this_04 + 100) + -4 + (uint)bVar5 * 4) !=
                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                    ));
            bVar5 = (
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                    ->_1).naturalAligment;
            if ((*(byte *)(*(int *)this_04 + 0xb8) < bVar5) ||
               (*(KogamaSettingBoolBase__Class **)
                 (*(int *)(*(int *)this_04 + 100) + -4 + (uint)bVar5 * 4) !=
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
               )) goto code_?;
            this_01 = (MVGameOptionDataObject *)0x0;
            in_stack_4 = (MethodInfo *)StringLiteral_AllowRevive;
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (*(String **)((int)this_04 + 0xc),StringLiteral_AllowRevive,
                               (MethodInfo *)0x0);
          } while (bVar3 == 0);
          if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
          method_00 = (MethodInfo *)CONCAT31((int3)((uint)in_stack_4 >> 8),bVar3);
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
          ::KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
                    ((KogamaSettingBoolBase *)this_04,bVar3,(MethodInfo *)0x0);
          MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                    (this_01,(KogamaSettingWrapperBase *)this_04,(MethodInfo *)0x0);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                     ,method_00);
code_?:
          MVGameOptionDataObject::MVGameOptionDataObject_Submit(this_01,(MethodInfo *)0x0);
          if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar6 = mscorlib.dll::System::Boolean::Boolean_ToString
                             ((Boolean *)TypeInfo__GameSetupOptions->static_fields,(MethodInfo *)0x0
                             );
          uVar7 = 0;
          pSVar6 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Revive_enabled__,pSVar6,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uVar7;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
    if ((((this != (MVWorldObjectClientManager *)0x0) &&
         (this_00 = (MVGameOptionDataObject *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (this,
                               MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                              ), this_00 != (MVGameOptionDataObject *)0x0)) &&
        (this_01 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                             (this_00,(MethodInfo *)0x0),
        this_01 != (GameOptionSettingsManager *)0x0)) &&
       (this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameOptions::GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
                            (this_01,(MethodInfo *)0x0),
       this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      pLVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&pLStack_3,this_02,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                         );
      RVar4 = pLVar2->_current;
      while( true ) {
        do {
          do {
            this_03 = RVar4;
            pLStack_3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         &UNK_?;
            bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                              );
            if (bVar5 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffc4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                         ,in_stack_6);
              if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar5 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
              *unaff_FS_OFFSET = uVar1;
              return bVar5;
            }
            RVar4 = this_03;
          } while (this_03 == (RegexCharClass_SingleRange)0x0);
          bVar7 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                  ->_1).naturalAligment;
          if ((*(byte *)(*(int *)this_03 + 0xb8) < bVar7) ||
             (*(KogamaSettingBoolBase__Class **)
               (*(int *)(*(int *)this_03 + 100) + -4 + (uint)bVar7 * 4) !=
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
             )) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          RVar9.First = 0;
          RVar9.Last = 0;
          if (bVar8) {
            RVar9 = this_03;
          }
        } while (RVar9 == (RegexCharClass_SingleRange)0x0);
        bVar7 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                ->_1).naturalAligment;
        if (((*(byte *)(*(int *)this_03 + 0xb8) < bVar7) ||
            (*(KogamaSettingBoolBase__Class **)
              (*(int *)(*(int *)this_03 + 100) + -4 + (uint)bVar7 * 4) !=
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
            )) || (this_03 == (RegexCharClass_SingleRange)0x0)) break;
        bVar5 = mscorlib.dll::System::String::String_op_Equality
                          (*(String **)((int)this_03 + 0xc),StringLiteral_AllowRevive,
                           (MethodInfo *)0x0);
        if (bVar5 != 0) {
          bVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase_get_ValueBool
                            ((KogamaSettingBoolBase *)this_03,(MethodInfo *)0x0);
          if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar5;
          bVar5 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
          puVar10 = &UNK_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                     ,unaff_EBP);
          *unaff_FS_OFFSET = puVar10;
          return bVar5;
        }
      }
      func_?();
      func_?();
    }
    func_?();
    pcVar11 = (code *)swi(3);
    bVar5 = (*pcVar11)();
    return bVar5;
  }
  if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GameSetupOptions);
  }
  bVar5 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
  *unaff_FS_OFFSET = uVar1;
  return bVar5;
}

