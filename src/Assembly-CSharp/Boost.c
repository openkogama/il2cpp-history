
/* Boost(BoostType, String, String, String, String, Boolean) */

void Assembly-CSharp.dll::Boost::Boost__ctor
               (Boost *this,BoostType__Enum type,String *boostKey,String *desc,String *valueDesc,
               String *title,bool allowedForGame,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._Type_k__BackingField = type;
  (this->fields)._BoostKey_k__BackingField = boostKey;
  (this->fields).description = desc;
  (this->fields)._ValueDescription_k__BackingField = valueDesc;
  (this->fields)._EditTitle_k__BackingField = title;
  (this->fields)._AllowedForGame_k__BackingField = allowedForGame;
  return;
}


/* String get_Description() */

String * Assembly-CSharp.dll::Boost::Boost_get_Description(Boost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).description;
  arg0 = Boost_get_Value(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Boost::Boost_get_Value(Boost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVRoundCube *)0x0) {
      pGVar1 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                         ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0);
      if (pGVar1 != (GameBoosterSettingsManager *)0x0) {
        this_02 = (List_1_VoxelHit_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList(pGVar1,(MethodInfo *)0x0);
        pGVar1 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                           ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameBoosterSettingsManager *)0x0) {
          collection = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                       ::GameBoosterSettings::GameBoosterSettingsManager::
                       GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                                 (pGVar1,(MethodInfo *)0x0);
          if (this_02 != (List_1_VoxelHit_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                      (this_02,(IEnumerable_1_VoxelHit_ *)collection,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                      );
            iVar2 = 0;
            while( true ) {
              pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_02,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                                 );
              a = _UNK_?;
              if ((int)pOVar3 <= iVar2) {
                pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
                return pOVar3;
              }
              this_03 = (Collection_1_VoxelHit_ *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                   iVar2,
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                  );
              if (this_03 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              b = (String *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                b = (String *)&UNK_?;
                func_?();
              }
              bVar4 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
              if (bVar4 != 0) break;
              iVar2 = iVar2 + 1;
            }
            this_04 = (GameBoosterSettingWithGoldSetting *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                 iVar2,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                );
            if (this_04 != (GameBoosterSettingWithGoldSetting *)0x0) {
              pKVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                       ::GameBoosterSettings::GameBoosterSettingTypes::
                       GameBoosterSettingWithGoldSetting::
                       GameBoosterSettingWithGoldSetting_get_Setting(this_04,(MethodInfo *)0x0);
              if (pKVar5 != (KogamaSettingValueWrapperBase *)0x0) {
                iVar2 = func_?(5,pKVar5);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar6)();
  return pOVar3;
}

