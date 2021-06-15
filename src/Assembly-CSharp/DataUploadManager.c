
/* Void HandleDone() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_HandleDone(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__DataUploadManager);
  }
  TypeInfo__DataUploadManager->static_fields->id =
       TypeInfo__DataUploadManager->static_fields->id + 1;
  TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
  if (TypeInfo__DataUploadManager->static_fields->doneNotification != (UnityAction *)0x0) {
    if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__DataUploadManager);
    }
    this = (AvatarMotor_OnActiveBounceDelegate *)
           TypeInfo__DataUploadManager->static_fields->doneNotification;
    if (this == (AvatarMotor_OnActiveBounceDelegate *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this,(MethodInfo *)0x0);
    TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
  }
  return;
}


/* Void OnUploadBytes() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_OnUploadBytes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__DataUploadManager);
  }
  this = TypeInfo__DataUploadManager->static_fields->bytePacker;
  if (this != (BytePacker *)0x0) {
    pOVar1 = (Object *)
             MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                       (this,(MethodInfo *)0x0);
    this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
              TypeInfo__DataUploadManager->static_fields->bytePacker;
    if (this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_00,(MethodInfo *)0x0);
      if (pOVar1 == pOVar2) {
        if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__DataUploadManager);
        }
        TypeInfo__DataUploadManager->static_fields->id =
             TypeInfo__DataUploadManager->static_fields->id + 1;
        TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
        if (TypeInfo__DataUploadManager->static_fields->doneNotification != (UnityAction *)0x0) {
          if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__DataUploadManager);
          }
          this_01 = (AvatarMotor_OnActiveBounceDelegate *)
                    TypeInfo__DataUploadManager->static_fields->doneNotification;
          if (this_01 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
            AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                      (this_01,(MethodInfo *)0x0);
            TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
            return;
          }
          goto code_?;
        }
      }
      else {
        if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
          func_?();
        }
        DataUploadManager_SendChunk((MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__DataUploadManager);
  }
  TypeInfo__DataUploadManager->static_fields->id = 0;
  TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
  TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
  return;
}


/* Void SendChunk() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_SendChunk(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 5000;
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__DataUploadManager);
  }
  pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
  if (pBVar2 != (BytePacker *)0x0) {
    iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                      (pBVar2,(MethodInfo *)0x0);
    pCVar4 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
             TypeInfo__DataUploadManager->static_fields->bytePacker;
    if (pCVar4 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (pCVar4,(MethodInfo *)0x0);
      if (iVar3 - (int)pOVar5 < 5000) {
        if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
        if (pBVar2 == (BytePacker *)0x0) goto code_?;
        iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                          (pBVar2,(MethodInfo *)0x0);
        pCVar4 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                 TypeInfo__DataUploadManager->static_fields->bytePacker;
        if (pCVar4 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
        goto code_?;
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (pCVar4,(MethodInfo *)0x0);
        iVar1 = iVar1 - (int)pOVar5;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__DataUploadManager);
      }
      iVar3 = TypeInfo__DataUploadManager->static_fields->id;
      pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
      if (pBVar2 != (BytePacker *)0x0) {
        uploadData = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                               (pBVar2,iVar1,(MethodInfo *)0x0);
        if (this != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UploadData
                    (this,iVar3,uploadData,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UploadData(Byte[], UnityAction) */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_UploadData
               (Byte__Array *data,UnityAction *doneNotification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]::
          ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                    ((ReadOnlyCollection_1_VoxelHit_ *)0x0,unaff_EBP);
  if (bVar1 == 1) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_UploadData_called_even_though_us,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__DataUploadManager->static_fields->bytePacker != (BytePacker *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_DataUpload_already_in_progress,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = MVGameControllerBase::MVGameControllerBase_get_TextureIntegrityChecker((MethodInfo *)0x0)
    ;
    if (this == (TextureIntegrityChecker *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = AntiHack::TextureIntegrityChecker::TextureIntegrityChecker_VerifyTextureIntegrity
                      (this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
        doneNotification = (UnityAction *)&UNK_?;
        func_?();
      }
      TypeInfo__DataUploadManager->static_fields->doneNotification = doneNotification;
      this_00 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_00,(Byte__Array *)0x0,(MethodInfo *)0x0);
      TypeInfo__DataUploadManager->static_fields->bytePacker = this_00;
      DataUploadManager_SendChunk((MethodInfo *)0x0);
      return;
    }
  }
  return;
}

