
/* Void Update() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo_Update
               (JoinStatusInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                   );
    func_?(&TypeInfo__JoinStatusInfo);
    func_?(&TypeInfo__JoinUIUpdater);
    func_?(&TypeInfo__MV__Common__MVEventCodes);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__get_Count__
                   );
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_Game);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_CreateGameSnapshot);
    func_?(&StringLiteral_Connection);
    func_?(&StringLiteral_u000Au000A);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      enumVal = (pMVar2->fields).connState;
      if (enumVal != (this->fields).prevConnState) {
        (this->fields).prevConnState = enumVal;
        pSVar3 = TM::TM__(StringLiteral_Connection,(MethodInfo *)0x0);
        pSVar4 = LocalizedEnums::LocalizedEnums__(enumVal,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (pSVar3,::StringLiteral___,pSVar4,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_JoinFlowStatus,pSVar3,(MethodInfo *)0x0);
      }
      while( true ) {
        if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pQVar5 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
        if (pQVar5 == (Queue_1_MV_Common_MVEventCodes_ *)0x0) goto code_?;
        if ((pQVar5->fields)._size < 1) break;
        if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__JoinUIUpdater);
        }
        this_00 = (Queue_1_System_ByteEnum_ *)TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes
        ;
        if (this_00 == (Queue_1_System_ByteEnum_ *)0x0) goto code_?;
        BVar6 = mscorlib.dll::System::Collections::Generic::Queue`1[System::ByteEnum]::
                Queue_1_System_ByteEnum__Dequeue
                          (this_00,
                           MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Dequeue__
                          );
        uVar7 = (uint8_t)BVar6;
        BStack_8 = CONCAT31(BStack_8._1_3_,uVar7);
        if ((TypeInfo__JoinStatusInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = (HashSet_1_System_ByteEnum_ *)
                  TypeInfo__JoinStatusInfo->static_fields->createGameSnapshotEvents;
        if (this_01 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
        bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                HashSet_1_System_ByteEnum__Contains
                          (this_01,BStack_8,
                           MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                          );
        if (bVar9 != 0) {
          if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          StatHatWrapper::StatHatWrapper_Count(StringLiteral_CreateGameSnapshot,1,(MethodInfo *)0x0)
          ;
        }
        if (uVar7 != (this->fields).prevGameState) {
          pSVar3 = TM::TM__(StringLiteral_Game,(MethodInfo *)0x0);
          pSVar4 = LocalizedEnums::LocalizedEnums___1(BStack_8,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_4
                             (pSVar3,::StringLiteral___,pSVar4,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)0xffffffff,(MethodInfo *)(BVar6 & 0xff));
          if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
          (this->fields).prevGameState = uVar7;
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_JoinFlowStatus,pSVar3,(MethodInfo *)0x0);
        }
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        if ((pMVar1->fields)._joinState != 3) {
          return;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (this_02 = (pMVar1->fields).koGaMaSettings, this_02 != (KoGaMaSettingsContainer *)0x0)) {
          pSVar3 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                             (this_02,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_u000Au000A,pSVar3,StringLiteral_u000Au000A,
                              (MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_JoinFlowStatus,pSVar3,(MethodInfo *)0x0);
          if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar9 = HackingToolDetector::HackingToolDetector_get_InstallTracesDetected
                            ((MethodInfo *)0x0);
          if (bVar9 != 0) {
            if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_Warning,
                       TypeInfo__HackingToolDetector->static_fields->CheatWarning,(MethodInfo *)0x0)
            ;
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* JoinStatusInfo() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
    func_?(&TypeInfo__JoinStatusInfo);
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
  if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this,(Object *)0x65,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this,(Object *)0x66,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this,(Object *)0x3d,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    TypeInfo__JoinStatusInfo->static_fields->createGameSnapshotEvents =
         (HashSet_1_MV_Common_MVEventCodes_ *)this;
    func_?(TypeInfo__JoinStatusInfo->static_fields,this);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

