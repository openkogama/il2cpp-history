
/* Boolean AddOperationCodeToPending(MVOperationCodes, Dictionary`2[System.Byte,System.Object]) */

bool Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_AddOperationCodeToPending
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).pendingOperations;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Operation_is_already_pending_,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (this->fields).pendingOperations;
    if (this_01 != (HashSet_1_MV_Common_MVOperationCodes_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
      HashSet_1_MV_Common_MVOperationCodes__Add
                (this_01,operationCode,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                );
      pPVar2 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,operationCode,data);
        return 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsOperationPending(MVOperationCodes) */

bool Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_IsOperationPending
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).pendingOperations;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    return bVar1 != 0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void TryRemovePendingOperation(MVOperationCodes) */

void Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_TryRemovePendingOperation
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).pendingOperations;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar1 != 0) {
      this_01 = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)(this->fields).pendingOperations
      ;
      if (this_01 == (HashSet_1_MV_WorldObject_InteractionPackageType_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::
      InteractionPackageType]::HashSet_1_MV_WorldObject_InteractionPackageType__Remove
                (this_01,operationCode,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* OperationResponsePendingManager(PhotonPeer) */

void Assembly-CSharp.dll::OperationResponsePendingManager::OperationResponsePendingManager__ctor
               (OperationResponsePendingManager *this,PhotonPeer *peer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
            );
  (this->fields).pendingOperations = (HashSet_1_MV_Common_MVOperationCodes_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).peer = peer;
  return;
}

