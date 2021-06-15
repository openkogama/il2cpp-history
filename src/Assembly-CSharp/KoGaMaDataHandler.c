
/* Void DeserializeLink(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_DeserializeLink
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  arg0 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
         KogamaDataHandlerWrapper_GetDataParameters
                   (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                    KogamaDataType__Enum_Links,readRuntimeData,(MethodInfo *)0x0);
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,MV::WorldObject::
    KogamaDataType]::UnityAction_2_System_Object_MV_WorldObject_KogamaDataType__Invoke
              ((UnityAction_2_System_Object_MV_WorldObject_KogamaDataType_ *)callBack,(Object *)arg0
               ,KogamaDataType__Enum_Links,
               MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
              );
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DeserializeObjectLink(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_DeserializeObjectLink
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  arg0 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
         KogamaDataHandlerWrapper_GetDataParameters
                   (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                    KogamaDataType__Enum_ObjectLinks,readRuntimeData,(MethodInfo *)0x0);
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,MV::WorldObject::
    KogamaDataType]::UnityAction_2_System_Object_MV_WorldObject_KogamaDataType__Invoke
              ((UnityAction_2_System_Object_MV_WorldObject_KogamaDataType_ *)callBack,(Object *)arg0
               ,KogamaDataType__Enum_ObjectLinks,
               MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
              );
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DeserializePrototype(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType])
    */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_DeserializePrototype
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  arg0 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
         KogamaDataHandlerWrapper_GetDataParameters
                   (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                    KogamaDataType__Enum_Prototypes,0,(MethodInfo *)0x0);
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,MV::WorldObject::
    KogamaDataType]::UnityAction_2_System_Object_MV_WorldObject_KogamaDataType__Invoke
              ((UnityAction_2_System_Object_MV_WorldObject_KogamaDataType_ *)callBack,(Object *)arg0
               ,KogamaDataType__Enum_Prototypes,
               MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
              );
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 DeserializeWorldObject(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

int32_t Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_DeserializeWorldObject
                  (BytePacker *bp,
                  UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                  *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  this = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
         KogamaDataHandlerWrapper_GetDataParameters
                   (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                    KogamaDataType__Enum_WorldObjects,readRuntimeData,(MethodInfo *)0x0);
  key = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                &stack0xfffffffb);
  if ((this == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar1 == (Pool *)0x0)) {
    func_?();
  }
  else if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar2 = (int32_t *)func_?();
    iVar3 = *piVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,MV::WorldObject::
    KogamaDataType]::UnityAction_2_System_Object_MV_WorldObject_KogamaDataType__Invoke
              ((UnityAction_2_System_Object_MV_WorldObject_KogamaDataType_ *)&UNK_?,
               (Object *)this,KogamaDataType__Enum_WorldObjects,
               MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
              );
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void Execute() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_Execute(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  bVar1 = KoGaMaDataHandler_GetPrototypeDataAsync((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    if (TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache0 == (UnityAction *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache0 = (UnityAction *)pUVar2;
    }
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pIVar3 = WaitForFrames::WaitForFrames_Frames
                       (1,TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache0,
                        (MethodInfo *)0x0);
    Coroutines::Coroutines_Start(pIVar3,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  bVar1 = KoGaMaDataHandler_GetWorldObjectDataAsync((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache1 == (UnityAction *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache1 = (UnityAction *)pUVar2;
    }
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar3 = WaitForFrames::WaitForFrames_Frames
                       (1,TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache1,
                        (MethodInfo *)0x0);
    Coroutines::Coroutines_Start(pIVar3,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = KoGaMaDataHandler_GetLinksAsync((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache2 == (UnityAction *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache2 = (UnityAction *)pUVar2;
    }
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar3 = WaitForFrames::WaitForFrames_Frames
                       (1,TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache2,
                        (MethodInfo *)0x0);
    Coroutines::Coroutines_Start(pIVar3,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = KoGaMaDataHandler_GetObjectLinksAsync((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar4 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      if ((pKVar4->fields).waitOneFrameBeforeDoneCallback == 0) {
        if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
          func_?();
        }
        pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar4 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this = (Action_1_UIPushOption_ *)(pKVar4->fields).doneCallback;
          if (this != (Action_1_UIPushOption_ *)0x0) {
            mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                      (this,(pKVar4->fields).rootId,
                       MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
            TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping =
                 (KoGaMaDataHandler_AsyncBookkeeping *)0x0;
            return;
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
          func_?();
        }
        pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar4 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
          (pKVar4->fields).waitOneFrameBeforeDoneCallback = 0;
          if (TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache4 == (UnityAction *)0x0) {
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,
                       (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
              func_?();
            }
            TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache4 = (UnityAction *)pUVar2;
          }
          if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
            func_?();
          }
          pIVar3 = WaitForFrames::WaitForFrames_Frames
                             (1,TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache4,
                              (MethodInfo *)0x0);
          Coroutines::Coroutines_Start(pIVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache3 == (UnityAction *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache3 = (UnityAction *)pUVar2;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar3 = WaitForFrames::WaitForFrames_Frames
                     (1,TypeInfo__KoGaMaDataHandler->static_fields->__f__mg_cache3,(MethodInfo *)0x0
                     );
  Coroutines::Coroutines_Start(pIVar3,(MethodInfo *)0x0);
  return;
}


/* Int32 GetKoGaMaData(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

int32_t Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                  (BytePacker *bp,
                  UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                  *callBack,bool readRuntimeData,MethodInfo *method)

{
  readRuntimeData_00 = readRuntimeData;
  bp_00 = bp;
  _readRuntimeData = (KoGaMaDataHandler__Class *)(uint)readRuntimeData;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  bVar2 = cRam_? == '\0';
  TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
  if (bVar2) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  if (0 < iVar1) {
    do {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      KoGaMaDataHandler_DeserializePrototype(bp,callBack,(MethodInfo *)0x0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bp = (BytePacker *)
       MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  iVar4 = -1;
  if (0 < (int)bp) {
    do {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        bp = (BytePacker *)TypeInfo__KoGaMaDataHandler;
        func_?();
      }
      iVar1 = KoGaMaDataHandler_DeserializeWorldObject
                        (bp_00,callBack,readRuntimeData_00,(MethodInfo *)0x0);
      if (iVar4 == -1) {
        iVar4 = iVar1;
      }
      bp = (BytePacker *)((int)&bp[-1].fields._position + 3);
    } while (bp != (BytePacker *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (bp_00,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        _readRuntimeData = TypeInfo__KoGaMaDataHandler;
        func_?();
      }
      KoGaMaDataHandler_DeserializeLink(bp_00,callBack,(bool)_readRuntimeData,(MethodInfo *)0x0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  _readRuntimeData = (KoGaMaDataHandler__Class *)0x0;
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (bp_00,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      pUVar5 = (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                *)_readRuntimeData;
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      _readRuntimeData = (KoGaMaDataHandler__Class *)callBack;
      method._0_1_ = (bool)pUVar5;
      KoGaMaDataHandler_DeserializeObjectLink(bp_00,callBack,(bool)method,(MethodInfo *)0x0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return (int32_t)bp_00;
}


/* Void GetKoGaMaDataAsync(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean, UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaDataAsync
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,UnityAction_1_System_Int32_ *doneCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping ==
      (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
    method_00 = TypeInfo__KoGaMaDataHandler__AsyncBookkeeping;
    this = (KoGaMaDataHandler_AsyncBookkeeping *)func_?();
    (this->fields).numberOfPrototypes = -1;
    (this->fields).numberOfWorldObjects = -1;
    (this->fields).numberOfLinks = -1;
    (this->fields).numberOfObjectLinks = -1;
    (this->fields).rootId = -1;
    (this->fields).waitOneFrameBeforeDoneCallback = 1;
    (this->fields).workTime = 1.0;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
    (this->fields).bp = bp;
    (this->fields).callBack = callBack;
    (this->fields).readRuntimeData = readRuntimeData;
    (this->fields).doneCallback = doneCallback;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).workStartTime = fVar2;
    TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping = this;
    KoGaMaDataHandler_Execute((MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Already_doing_async_download_,(MethodInfo *)0x0);
  return;
}


/* Void GetLinks(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetLinks
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  if (0 < iVar2) {
    do {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      KoGaMaDataHandler_DeserializeLink(bp,callBack,readRuntimeData,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* Boolean GetLinksAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetLinksAsync(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
  if ((pKVar1->fields).numberOfLinks == -1) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
       (this = (pKVar1->fields).bp, this == (BytePacker *)0x0)) goto code_?;
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (this,(MethodInfo *)0x0);
    if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
    (pKVar1->fields).numberOfLinks = iVar2;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar2 = (pKVar1->fields).deserializedLinks;
    while( true ) {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      if ((pKVar1->fields).numberOfLinks <= iVar2) {
        return 1;
      }
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      KoGaMaDataHandler_DeserializeLink
                ((pKVar1->fields).bp,(pKVar1->fields).callBack,(pKVar1->fields).readRuntimeData,
                 (MethodInfo *)0x0);
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      piVar3 = &(pKVar1->fields).deserializedLinks;
      *piVar3 = *piVar3 + 1;
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      bVar4 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                        (pKVar1,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void GetObjectLinks(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetObjectLinks
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  if (0 < iVar2) {
    do {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      KoGaMaDataHandler_DeserializeObjectLink(bp,callBack,readRuntimeData,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* Boolean GetObjectLinksAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetObjectLinksAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
  if ((pKVar1->fields).numberOfObjectLinks == -1) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
       (this = (pKVar1->fields).bp, this == (BytePacker *)0x0)) goto code_?;
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (this,(MethodInfo *)0x0);
    if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
    (pKVar1->fields).numberOfObjectLinks = iVar2;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar2 = (pKVar1->fields).deserializedObjectLinks;
    while( true ) {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      if ((pKVar1->fields).numberOfObjectLinks <= iVar2) {
        return 1;
      }
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      KoGaMaDataHandler_DeserializeObjectLink
                ((pKVar1->fields).bp,(pKVar1->fields).callBack,(pKVar1->fields).readRuntimeData,
                 (MethodInfo *)0x0);
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      piVar3 = &(pKVar1->fields).deserializedObjectLinks;
      *piVar3 = *piVar3 + 1;
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      bVar4 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                        (pKVar1,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void GetPrototypeData(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType])
    */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetPrototypeData
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  if (0 < iVar2) {
    do {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      KoGaMaDataHandler_DeserializePrototype(bp,callBack,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* Boolean GetPrototypeDataAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetPrototypeDataAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
  if ((pKVar1->fields).numberOfPrototypes == -1) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
       (this = (pKVar1->fields).bp, this == (BytePacker *)0x0)) goto code_?;
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (this,(MethodInfo *)0x0);
    if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
    (pKVar1->fields).numberOfPrototypes = iVar2;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar2 = (pKVar1->fields).deserializedPrototypes;
    while( true ) {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      if ((pKVar1->fields).numberOfPrototypes <= iVar2) {
        return 1;
      }
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      KoGaMaDataHandler_DeserializePrototype
                ((pKVar1->fields).bp,(pKVar1->fields).callBack,(MethodInfo *)0x0);
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      piVar3 = &(pKVar1->fields).deserializedPrototypes;
      *piVar3 = *piVar3 + 1;
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      bVar4 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                        (pKVar1,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Int32 GetWorldObjectData(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

int32_t Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetWorldObjectData
                  (BytePacker *bp,
                  UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                  *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (bp,(MethodInfo *)0x0);
    iVar2 = -1;
    if (0 < iVar1) {
      do {
        if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        iVar3 = KoGaMaDataHandler_DeserializeWorldObject
                          (bp,callBack,readRuntimeData,(MethodInfo *)0x0);
        if (iVar2 == -1) {
          iVar2 = iVar3;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    return iVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Boolean GetWorldObjectDataAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetWorldObjectDataAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
  if ((pKVar1->fields).numberOfWorldObjects == -1) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
       (this = (pKVar1->fields).bp, this == (BytePacker *)0x0)) goto code_?;
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (this,(MethodInfo *)0x0);
    if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
    (pKVar1->fields).numberOfWorldObjects = iVar2;
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar2 = (pKVar1->fields).deserializedWorldObjects;
    while( true ) {
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      if ((pKVar1->fields).numberOfWorldObjects <= iVar2) {
        return 1;
      }
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      iVar3 = KoGaMaDataHandler_DeserializeWorldObject
                        ((pKVar1->fields).bp,(pKVar1->fields).callBack,
                         (pKVar1->fields).readRuntimeData,(MethodInfo *)0x0);
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      if ((pKVar1->fields).rootId == -1) {
        if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
          func_?();
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        (pKVar1->fields).rootId = iVar3;
      }
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      piVar4 = &(pKVar1->fields).deserializedWorldObjects;
      *piVar4 = *piVar4 + 1;
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
      bVar5 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                        (pKVar1,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void HandleService() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_HandleService(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_Diff
                    (TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService,(MethodInfo *)0x0)
  ;
  if (1000 < iVar1) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this == (MVNetworkGame *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVNetworkGame::MVNetworkGame_Service(this,(MethodInfo *)0x0);
    iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      pKStack3 = TypeInfo__KoGaMaDataHandler;
      func_?();
    }
    TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
  }
  return;
}


/* KoGaMaDataHandler() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping =
       (KoGaMaDataHandler_AsyncBookkeeping *)0x0;
  TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion = 0xb;
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
  return;
}


/* Void set_SlowWorldCreation(Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_set_SlowWorldCreation
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping !=
      (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    fVar2 = _UNK_?;
    if (value == 0) {
      fVar2 = _UNK_?;
    }
    if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pKVar1->fields).workTime = fVar2;
  }
  return;
}

