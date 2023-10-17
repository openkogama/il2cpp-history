
/* Boost(BoostType, String, String, String, String, Boolean) */

void Assembly-CSharp.dll::Boost::Boost__ctor
               (Boost *this,BoostType__Enum type,String *boostKey,String *desc,String *valueDesc,
               String *title,bool allowedForGame,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._Type_k__BackingField = type;
  (this->fields)._BoostKey_k__BackingField = boostKey;
  func_?(&(this->fields)._BoostKey_k__BackingField,boostKey);
  (this->fields).description = desc;
  func_?(&(this->fields).description,desc);
  (this->fields)._ValueDescription_k__BackingField = valueDesc;
  func_?(&(this->fields)._ValueDescription_k__BackingField,valueDesc);
  (this->fields)._EditTitle_k__BackingField = title;
  func_?(&(this->fields)._EditTitle_k__BackingField,title);
  (this->fields)._AllowedForGame_k__BackingField = allowedForGame;
  return;
}


/* String get_Description() */

String * Assembly-CSharp.dll::Boost::Boost_get_Description(Boost *this,MethodInfo *method)

{
  pSVar1 = (this->fields).description;
  arg0 = Boost_get_Value(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Boost::Boost_get_Value(Boost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVGameOptionDataObject *)0x0) {
      pGVar1 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                         (this_01,(MethodInfo *)0x0);
      if (pGVar1 != (GameBoosterSettingsManager *)0x0) {
        this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList(pGVar1,(MethodInfo *)0x0);
        pGVar1 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                           (this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameBoosterSettingsManager *)0x0) {
          collection = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                       ::GameBoosterSettings::GameBoosterSettingsManager::
                       GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                                 (pGVar1,(MethodInfo *)0x0);
          if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                      (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                               )collection,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                      );
            iVar2 = 0;
            while( true ) {
              a = _UNK_?;
              if ((this_02->fields)._size <= iVar2) {
                pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
                return pOVar3;
              }
              RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this_02,iVar2,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                );
              if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
              bVar5 = mscorlib.dll::System::String::String_op_Equality
                                (a,*(String **)((int)RVar4 + 8),(MethodInfo *)0x0);
              if (bVar5 != 0) break;
              iVar2 = iVar2 + 1;
            }
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_02,iVar2,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                              );
            if (RVar4 != (RegexCharClass_SingleRange)0x0) {
              pKVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                       ::GameBoosterSettings::GameBoosterSettingTypes::
                       GameBoosterSettingWithGoldSetting::
                       GameBoosterSettingWithGoldSetting_get_Setting
                                 ((GameBoosterSettingWithGoldSetting *)RVar4,(MethodInfo *)0x0);
              if (pKVar6 != (KogamaSettingValueWrapperBase *)0x0) {
                iVar2 = func_?(5,pKVar6);
                if (iVar2 != 0) {
                  pOVar3 = (Object *)
                           func_?(0,
                                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                           ,iVar2);
                  return pOVar3;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar7)();
  return pOVar3;
}

