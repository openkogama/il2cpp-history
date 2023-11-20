
/* Void HandleDone() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_HandleDone(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DataUploadManager);
    cRam_? = '\x01';
  }
  TypeInfo__DataUploadManager->static_fields->id =
       TypeInfo__DataUploadManager->static_fields->id + 1;
  TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
  func_?(&TypeInfo__DataUploadManager->static_fields->bytePacker,0);
  if (TypeInfo__DataUploadManager->static_fields->doneNotification != (UnityAction *)0x0) {
    pUVar1 = TypeInfo__DataUploadManager->static_fields->doneNotification;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
    TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
    func_?(&TypeInfo__DataUploadManager->static_fields->doneNotification,0);
  }
  return;
}


/* Void OnUploadBytes() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_OnUploadBytes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker;
  if (pBVar1 != (BytePacker *)0x0) {
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                      (pBVar1,(MethodInfo *)0x0);
    pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker;
    if (pBVar1 != (BytePacker *)0x0) {
      if (iVar2 == (pBVar1->fields)._position) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        TypeInfo__DataUploadManager->static_fields->id =
             TypeInfo__DataUploadManager->static_fields->id + 1;
        TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
        func_?();
        if (TypeInfo__DataUploadManager->static_fields->doneNotification != (UnityAction *)0x0) {
          (*(TypeInfo__DataUploadManager->static_fields->doneNotification->fields)._._.invoke_impl)
                    ();
          TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
          func_?();
          return;
        }
      }
      else {
        DataUploadManager_SendChunk((MethodInfo *)0x0);
      }
      return;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DataUploadManager);
    cRam_? = '\x01';
  }
  TypeInfo__DataUploadManager->static_fields->id = 0;
  TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
  func_?(&TypeInfo__DataUploadManager->static_fields->bytePacker,0);
  TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
  func_?(&TypeInfo__DataUploadManager->static_fields->doneNotification,0);
  return;
}


/* Void SendChunk() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_SendChunk(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DataUploadManager);
    cRam_? = '\x01';
  }
  iVar1 = 5000;
  pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
  if (pBVar2 != (BytePacker *)0x0) {
    iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                      (pBVar2,(MethodInfo *)0x0);
    pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
    if (pBVar2 != (BytePacker *)0x0) {
      if (iVar3 - (pBVar2->fields)._position < 5000) {
        iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                          (TypeInfo__DataUploadManager->static_fields->bytePacker,(MethodInfo *)0x0)
        ;
        pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
        if (pBVar2 == (BytePacker *)0x0) goto code_?;
        iVar1 = iVar1 - (pBVar2->fields)._position;
      }
      this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pBVar2 = TypeInfo__DataUploadManager->static_fields->bytePacker;
      iVar3 = TypeInfo__DataUploadManager->static_fields->id;
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UploadData(Byte[], UnityAction) */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_UploadData
               (Byte__Array *data,UnityAction *doneNotification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__DataUploadManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_DataUpload_already_in_progress);
    func_?(&StringLiteral_UploadData_called_even_though_us);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          VerticalVirtualizationController`1[System::Object]::
          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                    ((VerticalVirtualizationController_1_System_Object_ *)0x0,unaff_EBP);
  if (bVar1 == 1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_UploadData_called_even_though_us,(MethodInfo *)0x0);
  }
  else {
    if (TypeInfo__DataUploadManager->static_fields->bytePacker != (BytePacker *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_DataUpload_already_in_progress,(MethodInfo *)0x0);
      return;
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
      TypeInfo__DataUploadManager->static_fields->doneNotification = doneNotification;
      pDVar3 = TypeInfo__DataUploadManager->static_fields;
      func_?();
      this_00 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_00,(Byte__Array *)&pDVar3->doneNotification,(MethodInfo *)0x0);
      TypeInfo__DataUploadManager->static_fields->bytePacker = this_00;
      func_?(&TypeInfo__DataUploadManager->static_fields->bytePacker,this_00);
      DataUploadManager_SendChunk((MethodInfo *)0x0);
      return;
    }
  }
  return;
}

