
/* Void DeserializeLink(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_DeserializeLink
               (BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
    pDVar1 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
             BytePackerFunctionsVersion11_GetLinkDataParameters(bp,(MethodInfo *)0x0);
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    (*(callBack->fields)._._.invoke_impl)
              ((callBack->fields)._._.method_code,pDVar1,2,(callBack->fields)._._.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__KoGaMaDataHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    iVar2 = TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService;
    iVar3 = FUN_?();
    if (1000 < iVar3 - iVar2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (this = (pMVar4->fields).game, this == (MVNetworkGame *)0x0)) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      MVNetworkGame::MVNetworkGame_Service(this,(MethodInfo *)0x0);
      iVar6 = FUN_?();
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar6;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
    pDVar1 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
             BytePackerFunctionsVersion11_GetObjectLinkDataParameters(bp,(MethodInfo *)0x0);
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    (*(callBack->fields)._._.invoke_impl)
              ((callBack->fields)._._.method_code,pDVar1,3,(callBack->fields)._._.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__KoGaMaDataHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    iVar2 = TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService;
    iVar3 = FUN_?();
    if (1000 < iVar3 - iVar2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (this = (pMVar4->fields).game, this == (MVNetworkGame *)0x0)) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      MVNetworkGame::MVNetworkGame_Service(this,(MethodInfo *)0x0);
      iVar6 = FUN_?();
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar6;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
    pDVar1 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
             BytePackerFunctionsVersion11_GetPrototypeDataParameters(bp,(MethodInfo *)0x0);
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  if (callBack !=
      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
       *)0x0) {
    (*(callBack->fields)._._.invoke_impl)
              ((callBack->fields)._._.method_code,pDVar1,0,(callBack->fields)._._.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__KoGaMaDataHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    iVar2 = TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService;
    iVar3 = FUN_?();
    if (1000 < iVar3 - iVar2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (this = (pMVar4->fields).game, this == (MVNetworkGame *)0x0)) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      MVNetworkGame::MVNetworkGame_Service(this,(MethodInfo *)0x0);
      iVar6 = FUN_?();
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar6;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  key = (Dictionary_2_System_Object_System_Object_ *)0x0;
  this = key;
  if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
    this = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
           BytePackerFunctionsVersion11_GetWorldObjectDataParameters
                     (bp,readRuntimeData,(MethodInfo *)0x0);
  }
  pWVar1 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  uStackX_18 = 0;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
      key = (Dictionary_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      FUN_?(&key->fields,&uStackX_18,(longlong)(int)(pWVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&key->fields >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
  }
  else {
    key = (Dictionary_2_System_Object_System_Object_ *)((ulonglong)uStackX_19 << 8);
  }
  if ((this != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ),
     callBack !=
     (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
      *)0x0)) {
    (*(callBack->fields)._._.invoke_impl)
              ((callBack->fields)._._.method_code,this,1,(callBack->fields)._._.method);
    KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
    if (pOVar7 != (Object *)0x0) {
      if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar7);
        pcVar8 = (code *)swi(3);
        iVar9 = (*pcVar8)();
        return iVar9;
      }
      return *(int32_t *)&pOVar7[1].klass;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Void Execute() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_Execute(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__KoGaMaDataHandler__Execute__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = KoGaMaDataHandler_GetPrototypeDataAsync((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
    pIVar3 = WaitForFrames::WaitForFrames_WithCallback(1,(UnityAction *)pNVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj = TypeInfo__Coroutines->static_fields->instance;
    if (obj == (Coroutines *)0x0) goto code_?;
  }
  else {
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = KoGaMaDataHandler_GetWorldObjectDataAsync((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar1 = KoGaMaDataHandler_GetLinksAsync((MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar1 = KoGaMaDataHandler_GetObjectLinksAsync((MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
            FUN_?();
          }
          pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
          if (pKVar4 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
code_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pKVar4->fields).waitOneFrameBeforeDoneCallback == 0) {
            if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
            if ((pKVar4 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) &&
               (pUVar6 = (pKVar4->fields).doneCallback, pUVar6 != (UnityAction_1_System_Int32_ *)0x0
               )) {
              (*(pUVar6->fields)._._.invoke_impl)
                        ((pUVar6->fields)._._.method_code,(pKVar4->fields).rootId,
                         (pUVar6->fields)._._.method);
              TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping =
                   (KoGaMaDataHandler_AsyncBookkeeping *)0x0;
              if (iRam_? != 0) {
                uVar7 = (uint)((ulonglong)TypeInfo__KoGaMaDataHandler->static_fields >> 0xc);
                puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar9 = *puVar8;
                  LOCK();
                  uVar10 = *puVar8;
                  if (uVar9 == uVar10) {
                    *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar9 != uVar10);
              }
              return;
            }
            goto code_?;
          }
          if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
            FUN_?();
          }
          pKVar4 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
          if (pKVar4 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) goto code_?;
          (pKVar4->fields).waitOneFrameBeforeDoneCallback = 0;
        }
      }
    }
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)0x0,MethodInfo__KoGaMaDataHandler__Execute__,(MethodInfo *)0x0);
    pIVar3 = WaitForFrames::WaitForFrames_WithCallback(1,(UnityAction *)pNVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj = TypeInfo__Coroutines->static_fields->instance;
    if (obj == (Coroutines *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pIVar3 == (IEnumerator *)0x0) {
    uVar11 = func_?(&TypeInfo__System__NullReferenceException);
    this = (NullReferenceException *)func_?(uVar11);
    pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this,pSVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this,uVar11);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    uVar11 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar11);
    pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,pSVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_00,uVar11);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar13 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar13,pIVar3);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = FUN_?();
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar1 = (*pcVar2)();
    return iVar1;
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar4 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::
                 BytePackerFunctionsVersion11_GetPrototypeDataParameters(bp,(MethodInfo *)0x0);
      }
      else {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto DAT_?;
      (*(callBack->fields)._._.invoke_impl)((callBack->fields)._._.method_code,pDVar4,0);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = -1;
  if (0 < (int)uVar5) {
    uVar6 = (ulonglong)uVar5;
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar1 = KoGaMaDataHandler_DeserializeWorldObject
                        (bp,callBack,readRuntimeData,(MethodInfo *)0x0);
      if (iVar3 == -1) {
        iVar3 = iVar1;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar4 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::BytePackerFunctionsVersion11_GetLinkDataParameters
                           (bp,(MethodInfo *)0x0);
      }
      else {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto DAT_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar4,2,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar4 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::
                 BytePackerFunctionsVersion11_GetObjectLinkDataParameters(bp,(MethodInfo *)0x0);
      }
      else {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto DAT_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar4,3,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return iVar3;
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
    FUN_?(&TypeInfo__KoGaMaDataHandler__AsyncBookkeeping);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Already_doing_async_download_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping ==
      (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    iVar1 = FUN_?();
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar1;
    pKVar2 = (KoGaMaDataHandler_AsyncBookkeeping *)
             FUN_?(TypeInfo__KoGaMaDataHandler__AsyncBookkeeping);
    (pKVar2->fields).bp = bp;
    (pKVar2->fields).numberOfPrototypes = -1;
    (pKVar2->fields).numberOfWorldObjects = -1;
    (pKVar2->fields).numberOfLinks = -1;
    (pKVar2->fields).numberOfObjectLinks = -1;
    (pKVar2->fields).rootId = -1;
    (pKVar2->fields).waitOneFrameBeforeDoneCallback = 1;
    (pKVar2->fields).workTime = 1.0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(pKVar2->fields).bp >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    iVar8 = iRam_?;
    (pKVar2->fields).callBack = callBack;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&(pKVar2->fields).callBack >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar8 = iRam_?;
      } while (!bVar7);
    }
    (pKVar2->fields).readRuntimeData = readRuntimeData;
    (pKVar2->fields).doneCallback = doneCallback;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&(pKVar2->fields).doneCallback >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    fVar11 = (float)(*pcRam_?)();
    (pKVar2->fields).workStartTime = fVar11;
    TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping = pKVar2;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)TypeInfo__KoGaMaDataHandler->static_fields >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    KoGaMaDataHandler_Execute((MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Already_doing_async_download_,(MethodInfo *)0x0);
  }
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
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar4 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::BytePackerFunctionsVersion11_GetLinkDataParameters
                           (bp,(MethodInfo *)0x0);
      }
      else {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar4,2,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* Boolean GetLinksAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetLinksAsync(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfLinks == -1) {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (pBVar2 = (pKVar1->fields).bp, pBVar2 == (BytePacker *)0x0)) goto code_?;
      iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (pBVar2,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfLinks = iVar3;
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar3 = (pKVar1->fields).deserializedLinks;
      while( true ) {
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfLinks <= iVar3) {
          return 1;
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        pBVar2 = (pKVar1->fields).bp;
        pUVar4 = (pKVar1->fields).callBack;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__KoGaMaDataHandler);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
          pDVar5 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                   BytePackerFunctionsVersion11::BytePackerFunctionsVersion11_GetLinkDataParameters
                             (pBVar2,(MethodInfo *)0x0);
        }
        else {
          pDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        if (pUVar4 == (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                       *)0x0) break;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,pDVar5,2,(pUVar4->fields)._._.method);
        KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        piVar6 = &(pKVar1->fields).deserializedLinks;
        *piVar6 = *piVar6 + 1;
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        bVar7 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                          (pKVar1,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar4 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::
                 BytePackerFunctionsVersion11_GetObjectLinkDataParameters(bp,(MethodInfo *)0x0);
      }
      else {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar4,3,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* Boolean GetObjectLinksAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetObjectLinksAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfObjectLinks == -1) {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (pBVar2 = (pKVar1->fields).bp, pBVar2 == (BytePacker *)0x0)) goto code_?;
      iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (pBVar2,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfObjectLinks = iVar3;
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar3 = (pKVar1->fields).deserializedObjectLinks;
      while( true ) {
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfObjectLinks <= iVar3) {
          return 1;
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        pBVar2 = (pKVar1->fields).bp;
        pUVar4 = (pKVar1->fields).callBack;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__KoGaMaDataHandler);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
          pDVar5 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                   BytePackerFunctionsVersion11::
                   BytePackerFunctionsVersion11_GetObjectLinkDataParameters
                             (pBVar2,(MethodInfo *)0x0);
        }
        else {
          pDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        if (pUVar4 == (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                       *)0x0) break;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,pDVar5,3,(pUVar4->fields)._._.method);
        KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        piVar6 = &(pKVar1->fields).deserializedObjectLinks;
        *piVar6 = *piVar6 + 1;
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        bVar7 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                          (pKVar1,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar4 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::
                 BytePackerFunctionsVersion11_GetPrototypeDataParameters(bp,(MethodInfo *)0x0);
      }
      else {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (callBack ==
          (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
           *)0x0) goto code_?;
      (*(callBack->fields)._._.invoke_impl)
                ((callBack->fields)._._.method_code,pDVar4,0,(callBack->fields)._._.method);
      KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* Boolean GetPrototypeDataAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetPrototypeDataAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfPrototypes == -1) {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (pBVar2 = (pKVar1->fields).bp, pBVar2 == (BytePacker *)0x0)) goto code_?;
      iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (pBVar2,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfPrototypes = iVar3;
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar3 = (pKVar1->fields).deserializedPrototypes;
      while( true ) {
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfPrototypes <= iVar3) {
          return 1;
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        pBVar2 = (pKVar1->fields).bp;
        pUVar4 = (pKVar1->fields).callBack;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__KoGaMaDataHandler);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
          pDVar5 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                   BytePackerFunctionsVersion11::
                   BytePackerFunctionsVersion11_GetPrototypeDataParameters(pBVar2,(MethodInfo *)0x0)
          ;
        }
        else {
          pDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
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
        bVar7 = KoGaMaDataHandler+AsyncBookkeeping::KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
                          (pKVar1,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar4 = -1;
  if (0 < (int)uVar3) {
    uVar5 = (ulonglong)uVar3;
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar2 = KoGaMaDataHandler_DeserializeWorldObject
                        (bp,callBack,readRuntimeData,(MethodInfo *)0x0);
      if (iVar4 == -1) {
        iVar4 = iVar2;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return iVar4;
}


/* Boolean GetWorldObjectDataAsync() */

bool Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_GetWorldObjectDataAsync
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
  if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if ((pKVar1->fields).numberOfWorldObjects == -1) {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__KoGaMaDataHandler);
      }
      pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
      if ((pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) ||
         (this = (pKVar1->fields).bp, this == (BytePacker *)0x0)) goto code_?;
      iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (this,(MethodInfo *)0x0);
      (pKVar1->fields).numberOfWorldObjects = iVar2;
    }
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__KoGaMaDataHandler);
    }
    pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar1 != (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      iVar2 = (pKVar1->fields).deserializedWorldObjects;
      while( true ) {
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).numberOfWorldObjects <= iVar2) {
          return 1;
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
        }
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        iVar3 = KoGaMaDataHandler_DeserializeWorldObject
                          ((pKVar1->fields).bp,
                           (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->fields).
                           callBack,(TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping->
                                    fields).readRuntimeData,(MethodInfo *)0x0);
        pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
        if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
        if ((pKVar1->fields).rootId == -1) {
          if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__KoGaMaDataHandler);
          }
          pKVar1 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
          if (pKVar1 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) break;
          (pKVar1->fields).rootId = iVar3;
        }
        if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__KoGaMaDataHandler);
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void HandleService() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_HandleService(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__KoGaMaDataHandler);
  }
  iVar1 = TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService;
  iVar2 = FUN_?();
  if (1000 < iVar2 - iVar1) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar3 == (MVGameControllerBase *)0x0) ||
       (this = (pMVar3->fields).game, this == (MVNetworkGame *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MVNetworkGame::MVNetworkGame_Service(this,(MethodInfo *)0x0);
    iVar5 = FUN_?();
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar5;
  }
  return;
}


/* KoGaMaDataHandler() */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping =
       (KoGaMaDataHandler_AsyncBookkeeping *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__KoGaMaDataHandler->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion = 0xb;
  iVar5 = FUN_?();
  TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar5;
  return;
}


/* Void set_SlowWorldCreation(Boolean) */

void Assembly-CSharp.dll::KoGaMaDataHandler::KoGaMaDataHandler_set_SlowWorldCreation
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping !=
      (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
    if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar1 = _UNK_?;
    if (value != 0) {
      fVar1 = _UNK_?;
    }
    pKVar2 = TypeInfo__KoGaMaDataHandler->static_fields->asyncBookkeeping;
    if (pKVar2 == (KoGaMaDataHandler_AsyncBookkeeping *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pKVar2->fields).workTime = fVar1;
  }
  return;
}

