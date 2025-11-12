
/* Boost(BoostType, String, String, String, String, Boolean) */

void Assembly-CSharp.dll::Boost::Boost__ctor
               (Boost *this,BoostType__Enum type,String *boostKey,String *desc,String *valueDesc,
               String *title,bool allowedForGame,MethodInfo *method)

{
  (this->fields)._Type_k__BackingField = type;
  iVar1 = iRam_?;
  (this->fields)._BoostKey_k__BackingField = boostKey;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._BoostKey_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).description = desc;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).description >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._ValueDescription_k__BackingField = valueDesc;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._ValueDescription_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._EditTitle_k__BackingField = title;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._EditTitle_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields)._AllowedForGame_k__BackingField = allowedForGame;
  return;
}


/* String get_Description() */

String * Assembly-CSharp.dll::Boost::Boost_get_Description(Boost *this,MethodInfo *method)

{
  pSVar1 = (this->fields).description;
  arg0 = Boost_get_Value(this,(MethodInfo *)0x0);
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Boost::Boost_get_Value(Boost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
      (this_01 = (MVGameOptionDataObject *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                           (this_00,
                            MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                           ), this_01 != (MVGameOptionDataObject *)0x0)) &&
     (pGVar1 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                          (this_01,(MethodInfo *)0x0), pGVar1 != (GameBoosterSettingsManager *)0x0)
     ) {
    this_02 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              GameBoosterSettings::GameBoosterSettingsManager::
              GameBoosterSettingsManager_get_ActiveSettingsList(pGVar1,(MethodInfo *)0x0);
    pGVar1 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                        (this_01,(MethodInfo *)0x0);
    if ((pGVar1 != (GameBoosterSettingsManager *)0x0) &&
       (collection = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                     GameBoosterSettings::GameBoosterSettingsManager::
                     GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                               (pGVar1,(MethodInfo *)0x0),
       this_02 !=
       (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
        *)0x0)) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__InsertRange
                ((List_1_System_Object_ *)this_02,(this_02->fields)._size,
                 (IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                 ->klass->rgctx_data[0x12].method);
      uVar2 = (this_02->fields)._size;
      pOVar3 = (Object *)0x0;
      lVar4 = 0x20;
      pOVar5 = pOVar3;
      while( true ) {
        lVar6 = lRam_?;
        uVar7 = (uint)pOVar5;
        if ((int)uVar2 <= (int)uVar7) {
          uStackX_18 = 0;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar3 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar3 + 1,&uStackX_18,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar2 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                puVar8 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar9 = *puVar8;
                  LOCK();
                  uVar10 = *puVar8;
                  if (uVar9 == uVar10) {
                    *puVar8 = uVar9 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar9 != uVar10);
              }
            }
          }
          else {
            pOVar3 = (Object *)((ulonglong)uStackX_1c << 0x20);
          }
          return pOVar3;
        }
        if (uVar2 <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          pOVar3 = (Object *)(*pcVar11)();
          return pOVar3;
        }
        pGVar12 = (this_02->fields)._items;
        if (pGVar12 == (GameBoosterSettingWithGoldSetting__Array *)0x0) goto code_?;
        if ((uint)pGVar12->max_length <= uVar7) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          pOVar3 = (Object *)(*pcVar11)();
          return pOVar3;
        }
        lVar6 = *(longlong *)((longlong)pGVar12->vector + lVar4 + -0x20);
        if (lVar6 == 0) goto code_?;
        pSVar13 = (this->fields)._BoostKey_k__BackingField;
        pSVar14 = *(String **)(lVar6 + 0x18);
        if ((pSVar13 == pSVar14) ||
           ((((pSVar13 != (String *)0x0 && (pSVar14 != (String *)0x0)) &&
             ((pSVar13->fields)._stringLength == (pSVar14->fields)._stringLength)) &&
            (bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar13->fields)._firstChar,
                                (uint8_t *)&(pSVar14->fields)._firstChar,
                                (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar15 != 0)))) break;
        pOVar5 = (Object *)(ulonglong)(uVar7 + 1);
        lVar4 = lVar4 + 8;
      }
      this_03 = (GameBoosterSettingWithGoldSetting *)FUN_?(this_02);
      if (((this_03 != (GameBoosterSettingWithGoldSetting *)0x0) &&
          (pKVar16 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting
                     ::GameBoosterSettingWithGoldSetting_get_Setting(this_03,(MethodInfo *)0x0),
          pKVar16 != (KogamaSettingValueWrapperBase *)0x0)) &&
         (lVar4 = (*(pKVar16->klass->vtable).__unknown.methodPtr)
                             (pKVar16,(pKVar16->klass->vtable).__unknown.method), lVar4 != 0)) {
        pOVar3 = (Object *)
                  FUN_?(0,
                                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                ,lVar4);
        return pOVar3;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar11)();
  return pOVar3;
}

