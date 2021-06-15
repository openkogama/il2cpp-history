
/* Void Update() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo_Update
               (JoinStatusInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar1,(MethodInfo *)0x0);
    if (pIVar2 == (IKogamaSetting *)(this->fields).prevConnState) goto code_?;
    (this->fields).prevConnState = (int32_t)pIVar2;
    pSVar3 = TM::TM__(StringLiteral_Connection,(MethodInfo *)0x0);
    pSVar4 = LocalizedEnums::LocalizedEnums__((MVConnState__Enum)pIVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar3,::StringLiteral___,pSVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    while( true ) {
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_JoinFlowStatus,pSVar3,(MethodInfo *)0x0);
code_?:
      do {
        if ((((uint)(TypeInfo__JoinUIUpdater->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__JoinUIUpdater->_1).cctor_started == 0)) {
          func_?(TypeInfo__JoinUIUpdater);
        }
        pQVar5 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
        if (pQVar5 == (Queue_1_MV_Common_MVEventCodes_ *)0x0) goto code_?;
        pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                            MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__get_Count__
                           );
        if ((int)pIVar2 < 1) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVar6 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
          if (MVar6 != MVJoinState__Enum_Playing) {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0)
          ;
          if (this_01 != (KoGaMaSettingsContainer *)0x0) {
            pSVar3 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                               (this_01,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_u000Au000A,pSVar3,StringLiteral_u000Au000A,
                                (MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_JoinFlowStatus,pSVar3,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
              func_?();
            }
            bVar7 = HackingToolDetector::HackingToolDetector_get_InstallTracesDetected
                              ((MethodInfo *)0x0);
            if (bVar7 != 0) {
              if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
                func_?();
              }
              pSVar3 = TypeInfo__HackingToolDetector->static_fields->CheatWarning;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                        (MVGameMsgType__Enum_Warning,pSVar3,(MethodInfo *)0x0);
            }
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__JoinUIUpdater->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__JoinUIUpdater->_1).cctor_started == 0)) {
          unaff_EBX = (String *)&UNK_?;
          func_?();
        }
        pQVar5 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
        if (pQVar5 == (Queue_1_MV_Common_MVEventCodes_ *)0x0) goto code_?;
        MVar8 = System.dll::System::Collections::Generic::Queue`1[MV::Common::MVEventCodes]::
                Queue_1_MV_Common_MVEventCodes__Dequeue
                          (pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Dequeue__
                          );
        unaff_EBX = (String *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)MVar8);
        if ((((uint)(TypeInfo__JoinStatusInfo->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__JoinStatusInfo->_1).cctor_started == 0)) {
          unaff_EBX = (String *)&UNK_?;
          func_?();
        }
        this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                  TypeInfo__JoinStatusInfo->static_fields->createGameSnapshotEvents;
        if (this_00 == (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) goto code_?;
        bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                          (this_00,(NativeAdType__Enum)unaff_EBX,
                           MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                          );
        if (bVar7 != 0) {
          if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          unaff_EBX = StringLiteral_CreateGameSnapshot;
          StatHatWrapper::StatHatWrapper_Count(StringLiteral_CreateGameSnapshot,1,(MethodInfo *)0x0)
          ;
        }
      } while ((uint8_t)unaff_EBX == (this->fields).prevGameState);
      pSVar4 = TM::TM__(StringLiteral_Game,(MethodInfo *)0x0);
      pSVar3 = LocalizedEnums::LocalizedEnums___1((MVEventCodes__Enum)unaff_EBX,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar4,::StringLiteral___,pSVar3,(MethodInfo *)0x0);
      iVar9 = func_?();
      if (iVar9 == 0) break;
      key = (String *)func_?(3,iVar9);
      puVar10 = (undefined1 *)func_?(iVar9);
      unaff_EBX = (String *)CONCAT31((int3)((uint)pSVar4 >> 8),*puVar10);
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(key,1,(MethodInfo *)0x0);
      (this->fields).prevGameState = (uint8_t)unaff_EBX;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* JoinStatusInfo() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this,
               MVOperationCodes__Enum_SetMouseSensitivity,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this,MVOperationCodes__Enum_StartSessionTime
               ,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this,MVOperationCodes__Enum_JoinNotification
               ,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    TypeInfo__JoinStatusInfo->static_fields->createGameSnapshotEvents =
         (HashSet_1_MV_Common_MVEventCodes_ *)this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JoinStatusInfo() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo__ctor
               (JoinStatusInfo *this,MethodInfo *method)

{
  (this->fields).prevGameState = 0x24;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

