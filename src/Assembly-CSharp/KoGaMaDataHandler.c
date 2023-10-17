
/* Void DeserializeLink(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_DeserializeLink
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
  KogamaDataHandlerWrapper_GetDataParameters
            (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
             KogamaDataType__Enum_Links,readRuntimeData,(MethodInfo *)0x0);
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    (*(callBack->fields)._._.invoke_impl)();
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
  KogamaDataHandlerWrapper_GetDataParameters
            (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
             KogamaDataType__Enum_ObjectLinks,readRuntimeData,(MethodInfo *)0x0);
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    (*(callBack->fields)._._.invoke_impl)();
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
  KogamaDataHandlerWrapper_GetDataParameters
            (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
             KogamaDataType__Enum_Prototypes,0,(MethodInfo *)0x0);
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    (*(callBack->fields)._._.invoke_impl)();
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  this = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
         KogamaDataHandlerWrapper_GetDataParameters
                   (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                    KogamaDataType__Enum_WorldObjects,readRuntimeData,(MethodInfo *)0x0);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (callBack !=
        (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
         *)0x0) {
      (*(callBack->fields)._._.invoke_impl)();
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar2 = (int32_t *)func_?();
          return *piVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void Execute() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_Execute(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__KoGaMaDataHandler__Execute__);
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  bVar1 = KoGaMaDataHandler_GetPrototypeDataAsync((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
      pIVar3 = WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)pNVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
      if (this != (MonoBehaviour *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  (this,pIVar3,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  bVar1 = KoGaMaDataHandler_GetWorldObjectDataAsync((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = KoGaMaDataHandler_GetLinksAsync((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = KoGaMaDataHandler_GetObjectLinksAsync((MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar4 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
        if ((pKVar4->fields).waitOneFrameBeforeDoneCallback == 0) {
          if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
          if ((pKVar4 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) &&
             (pUVar5 = (pKVar4->fields).doneCallback, pUVar5 != (UnityAction_1_System_Int32_ *)0x0))
          {
            (*(pUVar5->fields)._._.invoke_impl)
                      ((pUVar5->fields)._._.method_code,(pKVar4->fields).rootId);
            TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping =
                 (KoGaMaDataHandler_AsyncBookkeeping *)0x0;
            func_?(TypeInfo__KoGaMaDataHandler->static_fields,0);
            return;
          }
          goto code_?;
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar4 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
        (pKVar4->fields).waitOneFrameBeforeDoneCallback = 0;
      }
    }
  }
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
    pIVar3 = WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)pNVar2,(MethodInfo *)0x0);
    Coroutines::Coroutines_Start(pIVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  bp_00 = bp;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  bVar2 = cRam_? == '\0';
  TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
  if (bVar2) {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__KoGaMaDataHandler);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pDVar5 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
               KogamaDataHandlerWrapper_GetDataParameters
                         (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                          KogamaDataType__Enum_Prototypes,0,(MethodInfo *)0x0);
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar5,0,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  bp = (BytePacker *)
       MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
  iVar4 = -1;
  if (0 < (int)bp) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      iVar1 = KoGaMaDataHandler_DeserializeWorldObject
                        (bp_00,callBack,readRuntimeData,(MethodInfo *)0x0);
      if (iVar4 == -1) {
        iVar4 = iVar1;
      }
      bp = (BytePacker *)((int)&bp[-1].fields._position + 3);
    } while (bp != (BytePacker *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (bp_00,(MethodInfo *)0x0);
  bp = (BytePacker *)0x0;
  if (0 < iVar1) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__KoGaMaDataHandler);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pDVar5 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
               KogamaDataHandlerWrapper_GetDataParameters
                         (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp_00,
                          KogamaDataType__Enum_Links,readRuntimeData,(MethodInfo *)0x0);
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar5,2,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      bp = (BytePacker *)((int)&bp->klass + 1);
    } while ((int)bp < iVar1);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (bp_00,(MethodInfo *)0x0);
  bp = (BytePacker *)0x0;
  if (0 < iVar1) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__KoGaMaDataHandler);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pDVar5 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
               KogamaDataHandlerWrapper_GetDataParameters
                         (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp_00,
                          KogamaDataType__Enum_ObjectLinks,readRuntimeData,(MethodInfo *)0x0);
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar5,3,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      bp = (BytePacker *)((int)&bp->klass + 1);
    } while ((int)bp < iVar1);
  }
  return iVar4;
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
    func_?(&TypeInfo__KoGaMaDataHandler__AsyncBookkeeping);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&StringLiteral_Already_doing_async_download_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping ==
      (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
    value = (KoGaMaDataHandler_AsyncBookkeeping *)
            func_?(TypeInfo__KoGaMaDataHandler__AsyncBookkeeping);
    if (value != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      (value->fields).numberOfPrototypes = -1;
      (value->fields).numberOfWorldObjects = -1;
      (value->fields).numberOfLinks = -1;
      (value->fields).numberOfObjectLinks = -1;
      (value->fields).rootId = -1;
      (value->fields).waitOneFrameBeforeDoneCallback = 1;
      (value->fields).workTime = 1.0;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,unaff_retaddr);
      (value->fields).bp = bp;
      func_?(&(value->fields).bp,bp);
      (value->fields).callBack = callBack;
      func_?(&(value->fields).callBack,callBack);
      (value->fields).readRuntimeData = readRuntimeData;
      (value->fields).doneCallback = doneCallback;
      func_?(&(value->fields).doneCallback,doneCallback);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (value->fields).workStartTime = fVar2;
      TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping = value;
      func_?(TypeInfo__KoGaMaDataHandler->static_fields,value);
      KoGaMaDataHandler_Execute((MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__KoGaMaDataHandler);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
      KogamaDataHandlerWrapper_GetDataParameters
                (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                 KogamaDataType__Enum_Links,readRuntimeData,(MethodInfo *)0x0);
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)((callBack->fields)._._.method_code);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return;
}


/* Boolean GetLinksAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetLinksAsync(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfLinks == -1) {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (pBVar2 = (pKVar1->fields).bp, pBVar2 == (BytePacker *)0x0)) goto code_?;
      iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (pBVar2,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfLinks = iVar3;
    }
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar3 = (pKVar1->fields).deserializedLinks;
      while( true ) {
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfLinks <= iVar3) {
          return 1;
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        pBVar2 = (pKVar1->fields).bp;
        pUVar4 = (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).callBack;
        bVar5 = (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).
                readRuntimeData;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__KoGaMaDataHandler);
          cRam_? = '\x01';
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pDVar6 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
                 KogamaDataHandlerWrapper_GetDataParameters
                           (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,pBVar2,
                            KogamaDataType__Enum_Links,bVar5,(MethodInfo *)0x0);
        if (pUVar4 == (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                       *)0x0) break;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,pDVar6,2,(pUVar4->fields)._._.method);
        KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        piVar7 = &(pKVar1->fields).deserializedLinks;
        *piVar7 = *piVar7 + 1;
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                           ((MethodInfo *)0x0);
        fVar9 = fVar8 - (pKVar1->fields).workStartTime;
        pfVar10 = &(pKVar1->fields).workTime;
        if (*pfVar10 <= fVar9 && fVar9 != *pfVar10) {
          (pKVar1->fields).workStartTime = fVar8;
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar5 = (*pcVar11)();
  return bVar5;
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__KoGaMaDataHandler);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
      KogamaDataHandlerWrapper_GetDataParameters
                (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                 KogamaDataType__Enum_ObjectLinks,readRuntimeData,(MethodInfo *)0x0);
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)((callBack->fields)._._.method_code);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  return;
}


/* Boolean GetObjectLinksAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetObjectLinksAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfObjectLinks == -1) {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (pBVar2 = (pKVar1->fields).bp, pBVar2 == (BytePacker *)0x0)) goto code_?;
      iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (pBVar2,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfObjectLinks = iVar3;
    }
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar3 = (pKVar1->fields).deserializedObjectLinks;
      while( true ) {
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfObjectLinks <= iVar3) {
          return 1;
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        pBVar2 = (pKVar1->fields).bp;
        pUVar4 = (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).callBack;
        bVar5 = (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).
                readRuntimeData;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__KoGaMaDataHandler);
          cRam_? = '\x01';
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pDVar6 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
                 KogamaDataHandlerWrapper_GetDataParameters
                           (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,pBVar2,
                            KogamaDataType__Enum_ObjectLinks,bVar5,(MethodInfo *)0x0);
        if (pUVar4 == (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                       *)0x0) break;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,pDVar6,3,(pUVar4->fields)._._.method);
        KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        piVar7 = &(pKVar1->fields).deserializedObjectLinks;
        *piVar7 = *piVar7 + 1;
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                           ((MethodInfo *)0x0);
        fVar9 = fVar8 - (pKVar1->fields).workStartTime;
        pfVar10 = &(pKVar1->fields).workTime;
        if (*pfVar10 <= fVar9 && fVar9 != *pfVar10) {
          (pKVar1->fields).workStartTime = fVar8;
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar5 = (*pcVar11)();
  return bVar5;
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__KoGaMaDataHandler);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
      KogamaDataHandlerWrapper_GetDataParameters
                (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                 KogamaDataType__Enum_Prototypes,0,(MethodInfo *)0x0);
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)((callBack->fields)._._.method_code);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0);
  }
  return;
}


/* Boolean GetPrototypeDataAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetPrototypeDataAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfPrototypes == -1) {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (pBVar2 = (pKVar1->fields).bp, pBVar2 == (BytePacker *)0x0)) goto code_?;
      iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (pBVar2,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfPrototypes = iVar3;
    }
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar3 = (pKVar1->fields).deserializedPrototypes;
      while( true ) {
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfPrototypes <= iVar3) {
          return 1;
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        pBVar2 = (pKVar1->fields).bp;
        pUVar4 = (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).callBack;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__KoGaMaDataHandler);
          cRam_? = '\x01';
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pDVar5 = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
                 KogamaDataHandlerWrapper_GetDataParameters
                           (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,pBVar2,
                            KogamaDataType__Enum_Prototypes,0,(MethodInfo *)0x0);
        if (pUVar4 == (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                       *)0x0) break;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,pDVar5,0,(pUVar4->fields)._._.method);
        KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        piVar6 = &(pKVar1->fields).deserializedPrototypes;
        *piVar6 = *piVar6 + 1;
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                           ((MethodInfo *)0x0);
        fVar8 = fVar7 - (pKVar1->fields).workStartTime;
        pfVar9 = &(pKVar1->fields).workTime;
        if (*pfVar9 <= fVar8 && fVar8 != *pfVar9) {
          (pKVar1->fields).workStartTime = fVar7;
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    func_?();
    pIVar1 = extraout_ECX;
code_?:
    func_?(unaff_ESI,pIVar1);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar5 = 0;
  iStack_6 = -1;
  iVar3 = -1;
  if (0 < iVar4) {
    do {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__KoGaMaDataHandler);
        func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        cRam_? = '\x01';
      }
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      this = MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
             KogamaDataHandlerWrapper_GetDataParameters
                       (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion,bp,
                        KogamaDataType__Enum_WorldObjects,readRuntimeData,(MethodInfo *)0x0);
      uStack_7 = 0;
      key = (Object *)
            func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_7);
      if ((this == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (this,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ),
         callBack ==
         (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
          *)0x0)) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,this,1,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      if (unaff_ESI == (Object *)0x0) goto code_?;
      pIVar1 = TypeInfo__System__Int32;
      if ((unaff_ESI->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar8 = (int32_t *)func_?(unaff_ESI);
      if (iStack_6 == -1) {
        iStack_6 = *piVar8;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iStack_6;
    } while (iVar5 < iVar4);
  }
  return iVar3;
}


/* Boolean GetWorldObjectDataAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetWorldObjectDataAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfWorldObjects == -1) {
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (this = (pKVar1->fields).bp, this == (BytePacker *)0x0)) goto code_?;
      iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (this,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfWorldObjects = iVar2;
    }
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar2 = (pKVar1->fields).deserializedWorldObjects;
      while( true ) {
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfWorldObjects <= iVar2) {
          return 1;
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        iVar3 = KoGaMaDataHandler_DeserializeWorldObject
                          ((pKVar1->fields).bp,(pKVar1->fields).callBack,
                           (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).
                           readRuntimeData,(MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).rootId == -1) {
          if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
          if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
          (pKVar1->fields).rootId = iVar3;
        }
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
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
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void HandleService() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_HandleService(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__KoGaMaDataHandler);
  }
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_Diff
                    (TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService,(MethodInfo *)0x0)
  ;
  if (1000 < iVar1) {
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this == (MVNetworkGame *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVNetworkGame::MVNetworkGame_Service(this,(MethodInfo *)0x0);
    iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__KoGaMaDataHandler);
    cRam_? = '\x01';
  }
  TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping =
       (KoGaMaDataHandler_AsyncBookkeeping *)0x0;
  func_?(TypeInfo__KoGaMaDataHandler->static_fields,0);
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
    pKStack_1 = (KoGaMaDataHandler__Class *)&TypeInfo__KoGaMaDataHandler;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    pKStack_1 = TypeInfo__KoGaMaDataHandler;
    func_?();
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping !=
      (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      pKStack_1 = TypeInfo__KoGaMaDataHandler;
      func_?();
    }
    pKVar2 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    fVar3 = _UNK_?;
    if (value != 0) {
      fVar3 = _UNK_?;
    }
    if (pKVar2 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      pKStack_1 = (KoGaMaDataHandler__Class *)&stack0xfffffffc;
      uVar4 = func_?(auStack_5);
      func_?(uVar4);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pKVar2->fields).workTime = fVar3;
  }
  return;
}

