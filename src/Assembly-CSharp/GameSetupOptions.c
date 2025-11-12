
/* Void Start() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_Start
               (GameSetupOptions *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameSetupOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = GameSetupOptions_get_IsReviveEnabled((MethodInfo *)0x0);
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar1;
  pTVar2 = (this->fields).reviveToggleButton;
  if (TypeInfo__GameSetupOptions->static_fields->isReviveEnabled == 0) {
    if (pTVar2 == (ToggleButtonAnimation *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar2->fields).isToggleOn == 0) {
      return;
    }
    (pTVar2->fields).isToggleOn = 0;
  }
  else {
    if (pTVar2 == (ToggleButtonAnimation *)0x0) goto code_?;
    if ((pTVar2->fields).isToggleOn != 0) {
      return;
    }
    (pTVar2->fields).isToggleOn = 1;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  fVar6 = (pTVar2->fields).toggleOffOriginalPositionX;
  pRVar7 = (pTVar2->fields).toggleOffMaskTransform;
  (pTVar2->fields).interpolateToggleMaskStartPositionX = fVar6;
  (pTVar2->fields).interpolateToggleMaskNewPositionX = (pTVar2->fields).toggleOffOriginalPositionX;
  (pTVar2->fields).interpolationStartTime = fVar5;
  if ((pTVar2->fields).isToggleOn == 0) {
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8);
    (pTVar2->fields).interpolateToggleMaskStartPositionX = fVar6 + 0.0;
  }
  else {
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8);
    (pTVar2->fields).interpolateToggleMaskNewPositionX = fVar6 + 0.0;
  }
  fVar6 = (pTVar2->fields).toggleOffOriginalPositionX;
  pRVar7 = (pTVar2->fields).toggleOffMaskTransform;
  (pTVar2->fields).interpolateToggleContentStartPositionX = fVar6;
  (pTVar2->fields).interpolateToggleContentNewPositionX =
       (pTVar2->fields).toggleOffOriginalPositionX;
  if ((pTVar2->fields).isToggleOn == 0) {
    if (pRVar7 == (RectTransform *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    puStack_10 = (undefined *)0x0;
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8,&uStack_9);
    (pTVar2->fields).interpolateToggleContentStartPositionX = fVar6 - puStack_10._0_4_;
  }
  else {
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    puStack_10 = (undefined *)0x0;
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8,&uStack_9);
    (pTVar2->fields).interpolateToggleContentNewPositionX = fVar6 - puStack_10._0_4_;
  }
  fVar6 = (pTVar2->fields).toggleButtonOriginalPositionX;
  (pTVar2->fields).interpolateToggleButtonNewPositionX = fVar6;
  (pTVar2->fields).interpolateToggleButtonStartPositionX = fVar6;
  fVar6 = (pTVar2->fields).toggleButtonMoveAmount + (pTVar2->fields).toggleButtonOriginalPositionX;
  if ((pTVar2->fields).isToggleOn == 0) {
    (pTVar2->fields).interpolateToggleButtonStartPositionX = fVar6;
  }
  else {
    (pTVar2->fields).interpolateToggleButtonNewPositionX = fVar6;
  }
  return;
}


/* Void ToggleRevive() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_ToggleRevive
               (GameSetupOptions *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupOptions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Revive_enabled__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AllowRevive);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GameSetupOptions);
  }
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled =
       TypeInfo__GameSetupOptions->static_fields->isReviveEnabled == 0;
  TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((this_00 != (MVWorldObjectClientManager *)0x0) &&
       (this_01 = (MVGameOptionDataObject *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                            (this_00,
                             MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                            ), this_01 != (MVGameOptionDataObject *)0x0)) &&
      (this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                           (this_01,(MethodInfo *)0x0), this_02 != (GameOptionSettingsManager *)0x0)
      ) && (pLVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                      GameOptions::GameOptionSettingsManager::
                      GameOptionSettingsManager_get_GetOptions(this_02,(MethodInfo *)0x0),
           pLVar1 !=
           (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
            *)0x0)) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    pKVar10 = unaff_RBX;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    do {
      do {
        do {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_9,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                            );
          unaff_RBX = (KogamaSettingBoolBase *)LStack_9._current;
          if (bVar11 == 0) goto code_?;
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)unaff_RBX,(MethodInfo *)0x0);
          pKVar10 = unaff_RBX;
        } while (unaff_RBX == (KogamaSettingBoolBase *)0x0);
        pKVar12 = (KogamaSettingBoolBase__Class *)((Object *)unaff_RBX)->klass;
        bVar13 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                ->_1).naturalAligment;
      } while (((pKVar12->_1).naturalAligment < bVar13) ||
              ((pKVar12->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
               (Il2CppClass *)
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
              ));
      bVar13 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
              ->_1).naturalAligment;
      if (((pKVar12->_1).naturalAligment < bVar13) ||
         ((pKVar12->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
         )) goto code_?;
      pSVar14 = (((KogamaSettingBoolBase__Fields *)((longlong)unaff_RBX + 0x10))->_)._.key;
    } while ((pSVar14 != StringLiteral_AllowRevive) &&
            (((pSVar14 == (String *)0x0 || (StringLiteral_AllowRevive == (String *)0x0)) ||
             (((pSVar14->fields)._stringLength != (StringLiteral_AllowRevive->fields)._stringLength
              || (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar14->fields)._firstChar,
                                     (uint8_t *)&(StringLiteral_AllowRevive->fields)._firstChar,
                                     (longlong)(pSVar14->fields)._stringLength * 2,(MethodInfo *)0x0
                                    ), bVar11 == 0))))));
    if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GameSetupOptions);
    }
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
              (unaff_RBX,TypeInfo__GameSetupOptions->static_fields->isReviveEnabled,
               (MethodInfo *)0x0);
    pSVar15 = (this_01->fields).settingsManager;
    if (pSVar15 == (SettingsManager *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
    ::SettingsManager_UpdateSetting(pSVar15,(KogamaSettingWrapperBase *)unaff_RBX,(MethodInfo *)0x0);
code_?:
    pSVar15 = (this_01->fields).settingsManager;
    unaff_RBX = pKVar10;
    if (pSVar15 != (SettingsManager *)0x0) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
      SettingsManager::SettingsManager_Submit(pSVar15,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
                ((this_01->fields)._._.data,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pGVar16 = TypeInfo__GameSetupOptions->static_fields;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_False);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_True);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar14 = StringLiteral_False;
      if (pGVar16->isReviveEnabled != 0) {
        pSVar14 = StringLiteral_True;
      }
      pSVar14 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Revive_enabled__,pSVar14,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar14,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(unaff_RBX);
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* GameSetupOptions() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameSetupOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = 1;
  TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 0;
  return;
}


/* Boolean get_IsReviveEnabled() */

bool Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_get_IsReviveEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupOptions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AllowRevive);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__GameSetupOptions->static_fields->reviveUpdated == 0) {
    if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 1;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((((this_00 != (MVWorldObjectClientManager *)0x0) &&
         (this_01 = (MVGameOptionDataObject *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (this_00,
                               MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                              ), this_01 != (MVGameOptionDataObject *)0x0)) &&
        (this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                             (this_01,(MethodInfo *)0x0),
        this_02 != (GameOptionSettingsManager *)0x0)) &&
       (LStack_1._list =
             (List_1_System_Object_ *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameOptions::GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
                       (this_02,(MethodInfo *)0x0),
       (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
        *)LStack_1._list !=
       (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
        *)0x0)) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)
                    (uint)(((List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                             *)LStack_1._list)->fields)._version << 0x20);
      uStack_8 = 0;
      LStack_1._8_8_ = pLStack_7;
      LStack_1._current = (Object *)0x0;
      uStack_3 = 0;
      pLStack_7 = &LStack_1;
      while( true ) {
        do {
          do {
            bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__MoveNext__
                              );
            this = LStack_1._current;
            if (bVar9 == 0) {
              if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__GameSetupOptions);
              }
              return TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
            }
          } while ((KogamaSettingBoolBase *)LStack_1._current == (KogamaSettingBoolBase *)0x0);
          pKVar10 = (KogamaSettingBoolBase__Class *)(LStack_1._current)->klass;
          bVar11 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                  ->_1).naturalAligment;
        } while ((((pKVar10->_1).naturalAligment < bVar11) ||
                 ((pKVar10->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 )) || ((KogamaSettingBoolBase *)LStack_1._current == (KogamaSettingBoolBase *)0x0)
                );
        bVar11 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                ->_1).naturalAligment;
        if (((pKVar10->_1).naturalAligment < bVar11) ||
           ((pKVar10->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
           )) break;
        pSVar12 = (((KogamaSettingBoolBase__Fields *)((longlong)LStack_1._current + 0x10))->_)._.key
        ;
        if ((pSVar12 == StringLiteral_AllowRevive) ||
           ((((pSVar12 != (String *)0x0 && (StringLiteral_AllowRevive != (String *)0x0)) &&
             ((pSVar12->fields)._stringLength == (StringLiteral_AllowRevive->fields)._stringLength))
            && (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar12->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_AllowRevive->fields)._firstChar,
                                   (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
               bVar9 != 0)))) {
          bVar9 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase_get_ValueBool
                            ((KogamaSettingBoolBase *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__GameSetupOptions);
          }
          TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar9;
          return TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
        }
      }
      FUN_?(LStack_1._current);
      FUN_?();
      pcVar13 = (code *)swi(3);
      bVar9 = (*pcVar13)();
      return bVar9;
    }
    FUN_?();
    pcVar13 = (code *)swi(3);
    bVar9 = (*pcVar13)();
    return bVar9;
  }
  if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
    FUN_?();
  }
  return TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
}

