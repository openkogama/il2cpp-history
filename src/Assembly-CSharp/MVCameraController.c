
/* Void Activate() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Activate
               (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    iStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_2 = -1;
  puStack_4 = &DAT_?;
  iStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_5;
  puStack_6 = &stack0xffffffb4;
  puVar7 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  pCStack_8 = (ChatCommand__Enum__Array *)0x0;
  pDStack_9 = (Dictionary_2_ChatCommand_System_Object___Class *)0x0;
  pMStack_10 = (MonitorData *)0x0;
  pIStack_11 = (Int32__Array *)0x0;
  pLStack_12 = (Link__Array *)0x0;
  func_?();
  this_00 = (pMVar1->fields).cameras;
  puStack_6 = &stack0xffffffb4;
  if ((this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) &&
     (puStack_6 = &stack0xffffffb4,
     this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
    pDVar13 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_14,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                       );
    pDStack_9 = (Dictionary_2_ChatCommand_System_Object___Class *)
                 (pDVar13->host_enumerator).dictionary;
    pMStack_10 = (MonitorData *)(pDVar13->host_enumerator).next;
    pIStack_11 = (Int32__Array *)(pDVar13->host_enumerator).stamp;
    pLStack_12 = (Link__Array *)(pDVar13->host_enumerator).current.key;
    pCStack_8 = (ChatCommand__Enum__Array *)(pDVar13->host_enumerator).current.value;
    iStack_2 = 0;
    while( true ) {
      DStack_14.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
      ;
      DStack_14.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_9;
      cVar15 = func_?();
      if (cVar15 == '\0') {
        iStack_2 = -1;
        DStack_14.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
        ;
        DStack_14.host_enumerator.dictionary =
             (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_9;
        func_?();
        *unaff_FS_OFFSET = iStack_5;
        return;
      }
      DStack_14.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
      ;
      DStack_14.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_9;
      piVar16 = (int *)func_?();
      if (piVar16 == (int *)0x0) break;
      (**(code **)(*piVar16 + 0x130))(piVar16,*(undefined4 *)(*piVar16 + 0x134));
    }
  }
  func_?(0);
  DStack_14.host_enumerator.next = 0;
  DStack_14.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Deactivate
               (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    iStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_2 = -1;
  puStack_4 = &DAT_?;
  iStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_5;
  puStack_6 = &stack0xffffffb4;
  puVar7 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  pCStack_8 = (ChatCommand__Enum__Array *)0x0;
  pDStack_9 = (Dictionary_2_ChatCommand_System_Object___Class *)0x0;
  pMStack_10 = (MonitorData *)0x0;
  pIStack_11 = (Int32__Array *)0x0;
  pLStack_12 = (Link__Array *)0x0;
  func_?();
  this_00 = (pMVar1->fields).cameras;
  puStack_6 = &stack0xffffffb4;
  if ((this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) &&
     (puStack_6 = &stack0xffffffb4,
     this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
    pDVar13 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_14,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                       );
    pDStack_9 = (Dictionary_2_ChatCommand_System_Object___Class *)
                 (pDVar13->host_enumerator).dictionary;
    pMStack_10 = (MonitorData *)(pDVar13->host_enumerator).next;
    pIStack_11 = (Int32__Array *)(pDVar13->host_enumerator).stamp;
    pLStack_12 = (Link__Array *)(pDVar13->host_enumerator).current.key;
    pCStack_8 = (ChatCommand__Enum__Array *)(pDVar13->host_enumerator).current.value;
    iStack_2 = 0;
    while( true ) {
      DStack_14.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
      ;
      DStack_14.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_9;
      cVar15 = func_?();
      if (cVar15 == '\0') {
        iStack_2 = -1;
        DStack_14.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
        ;
        DStack_14.host_enumerator.dictionary =
             (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_9;
        func_?();
        *unaff_FS_OFFSET = iStack_5;
        return;
      }
      DStack_14.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
      ;
      DStack_14.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_9;
      piVar16 = (int *)func_?();
      if (piVar16 == (int *)0x0) break;
      (**(code **)(*piVar16 + 0x138))(piVar16,*(undefined4 *)(*piVar16 + 0x13c));
    }
  }
  func_?(0);
  DStack_14.host_enumerator.next = 0;
  DStack_14.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Object GetCamera[Object]() */

Object * Assembly-CSharp.dll::MVCameraController::MVCameraController_GetCamera
                   (MVCameraController *this,MethodInfo *method)

{
  if ((this->fields).cameraStack != (MVCameraController_CameraStack *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pOVar1 = (Object *)(*(code *)(*method->parameters)->data)();
    return pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Void Initialize(List`1[MVCameraBase]) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Initialize
               (MVCameraController *this,List_1_MVCameraBase_ *cameraBases,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVCameraController_CameraStack *)
            func_?(TypeInfo__MVCameraController__CameraStack);
  MVCameraController+CameraStack::MVCameraController_CameraStack__ctor
            (this_00,cameraBases,this,(MethodInfo *)0x0);
  (this->fields).cameraStack = this_00;
  return;
}


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_PushCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                   Object]::Dictionary_2_CameraType_System_Object__get_Item
                             ((Dictionary_2_CameraType_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
                (this_00,cameraBase,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_PushCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
              (this_00,cameraBase,this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_RemoveCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                   Object]::Dictionary_2_CameraType_System_Object__get_Item
                             ((Dictionary_2_CameraType_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
                (this_00,cameraBase,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_RemoveCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
              (this_00,cameraBase,this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Respawn
               (MVCameraController *this,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pMVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).Reset.method)(pMVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_SetCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      newCamera = (MVCameraBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                  Object]::Dictionary_2_CameraType_System_Object__get_Item
                            ((Dictionary_2_CameraType_System_Object_ *)this_01,cameraType,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                            );
      MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                (this_00,newCamera,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_SetCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
              (this_00,cameraBase,this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCamera(ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_UpdateCamera
               (MVCameraController *this,ProtectedTransform *protectedTransform,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pMVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).UpdateCamera.method)
                (pMVar1,this,protectedTransform,(pMVar1->klass->vtable).Enter.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCameraBase get_CurCamera() */

MVCameraBase *
Assembly-CSharp.dll::MVCameraController::MVCameraController_get_CurCamera
          (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVCameraBase *)(*pcVar2)();
    return pMVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar4 = (pMVar1->fields).activeCameras;
  if (pLVar4 != (List_1_MVCameraBase_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    if (pOVar5 == (Object *)0x0) {
      return (MVCameraBase *)0x0;
    }
    pLVar4 = (pMVar1->fields).activeCameras;
    if (pLVar4 != (List_1_MVCameraBase_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__)
      ;
      pMVar3 = (MVCameraBase *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,
                          (int32_t)((int)&pOVar5[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                         );
      return pMVar3;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVCameraBase *)(*pcVar2)();
  return pMVar3;
}

