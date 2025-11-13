
/* IEnumerator AnimationCoroutine(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_AnimationCoroutine
          (MVDoor *this,float from,float to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  *(float *)&pIVar1[2].monitor = from;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = to;
  return pIVar1;
}


/* IEnumerator BeginOpenCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_BeginOpenCoroutine
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Boolean CheckIfOpen() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CheckIfOpen
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  key = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->IsOpen;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      apOStack_2[0] = pOVar1[1].klass;
      apOStack_2[1]._0_4_ = *(undefined4 *)&pOVar1[1].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_InternalDecrypt((ObscuredBool *)apOStack_2,(MethodInfo *)0x0);
      return bVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void CollisionCheck() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CollisionCheck
               (MVDoor *this,MethodInfo *method)

{
  if ((this->fields).collisionCheckRoutine != (IEnumerator *)0x0) {
    pIVar1 = (this->fields).collisionCheckRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_00 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this_00,pIVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57)
  ;
  iVar2 = iRam_?;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).collisionCheckRoutine = pIVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).collisionCheckRoutine >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pIVar1 = (this->fields).collisionCheckRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj != (Coroutines *)0x0) {
    if (pIVar1 == (IEnumerator *)0x0) {
      uVar8 = func_?(&TypeInfo__System__NullReferenceException);
      this_01 = (NullReferenceException *)func_?(uVar8);
      pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_01,pSVar9,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_01,uVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      uVar8 = func_?(&TypeInfo__System__ArgumentException);
      this_02 = (InvalidEnumArgumentException *)func_?(uVar8);
      pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_02,pSVar9,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_02,uVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
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
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pvVar12 = (obj->fields)._._._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar12,pIVar1);
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* IEnumerator CollisionCheckCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CollisionCheckCoroutine
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57)
  ;
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* MVDoor+DoorConfiguration CreateDefaultDoorConfig(DoorType) */

MVDoor_DoorConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CreateDefaultDoorConfig
          (MVDoor_DoorConfiguration *__return_storage_ptr__,DoorType__Enum doorType,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectDocumentationType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->beginOpen = 0;
  __return_storage_ptr__->playersCanOpen = 0;
  __return_storage_ptr__->reverseOpenDirection = 0;
  __return_storage_ptr__->field_0xb = 0;
  __return_storage_ptr__->openValue = 0.0;
  __return_storage_ptr__->closeValue = 0.0;
  __return_storage_ptr__->toggleTime = 0.0;
  __return_storage_ptr__->docType = 0;
  __return_storage_ptr__->doorType = 0;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->Name;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pSVar1 = (String *)
           Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                     (doorType,pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == (String *)0x0) {
    __return_storage_ptr__->name = (String *)0x0;
  }
  else {
    pSVar2 = (String *)0x0;
    if (pSVar1->klass == pSRam0000000182db2520) {
      pSVar2 = pSVar1;
    }
    if (pSVar2 == (String *)0x0) {
      FUN_?(pSVar1,pSRam0000000182db2520);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
      return pMVar4;
    }
    __return_storage_ptr__->name = pSVar2;
    pSVar2 = (String *)0x0;
    if (pSVar1->klass == pSRam0000000182db2520) {
      pSVar2 = pSVar1;
    }
    if (pSVar2 == (String *)0x0) {
      FUN_?(pSVar1);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
      return pMVar4;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)__return_storage_ptr__ >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                     (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                               static_fields->BeginOpen,(MethodInfo *)0x0);
  if (pOVar10 != (Object *)0x0) {
    if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar10,lRam_?);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
      return pMVar4;
    }
    __return_storage_ptr__->beginOpen = *(bool *)&pOVar10[1].klass;
    pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                       (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                 ->static_fields->PlayersCanOpen,(MethodInfo *)0x0);
    if (pOVar10 != (Object *)0x0) {
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar10,lRam_?);
        pcVar3 = (code *)swi(3);
        pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
        return pMVar4;
      }
      __return_storage_ptr__->playersCanOpen = *(bool *)&pOVar10[1].klass;
      pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                         (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                   ->static_fields->ReverseOpenDirection,(MethodInfo *)0x0);
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar10,lRam_?);
          pcVar3 = (code *)swi(3);
          pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
          return pMVar4;
        }
        __return_storage_ptr__->reverseOpenDirection = *(bool *)&pOVar10[1].klass;
        pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                           (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                     ->static_fields->OpenValue,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar10,lRam_?);
            pcVar3 = (code *)swi(3);
            pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
            return pMVar4;
          }
          __return_storage_ptr__->openValue = *(float *)&pOVar10[1].klass;
          pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                             (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                       ->static_fields->CloseValue,(MethodInfo *)0x0);
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar10,lRam_?);
              pcVar3 = (code *)swi(3);
              pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
              return pMVar4;
            }
            __return_storage_ptr__->closeValue = *(float *)&pOVar10[1].klass;
            pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                               (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                         ->static_fields->ToggleTime,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar10,lRam_?);
                pcVar3 = (code *)swi(3);
                pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
                return pMVar4;
              }
              __return_storage_ptr__->toggleTime = *(float *)&pOVar10[1].klass;
              pOVar10 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                                 (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                           ->static_fields->DocType,(MethodInfo *)0x0);
              if (pOVar10 != (Object *)0x0) {
                if ((pOVar10->klass->_0).element_class !=
                    (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) {
                  FUN_?(pOVar10,TypeInfo__MVWorldObjectDocumentationType);
                  pcVar3 = (code *)swi(3);
                  pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
                  return pMVar4;
                }
                __return_storage_ptr__->docType = *(int32_t *)&pOVar10[1].klass;
                __return_storage_ptr__->doorType = doorType;
                return __return_storage_ptr__;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVDoor_DoorConfiguration *)(*pcVar3)();
  return pMVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Destroy
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).useInteractor != (UseInteractor *)0x0) {
    MVDoor_DestroyUseInteractor(this,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    pDVar1 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar1,value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar1 != (Delegate *)0x0) &&
       (lVar3 = FUN_?(pDVar1,TypeInfo__System__Action<EditModeChangeArgs>), lVar3 == 0))
    {
      FUN_?(pDVar1,pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 != (GameEventManager *)0x0)) {
    this_00 = (pGVar7->fields).AvatarCommandsPlayMode;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__
               ,(MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
                (this_00,(Action *)this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UpdateController);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?();
      }
      UpdateController::UpdateController_RemoveUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
      if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy
                  ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
        bVar8 = iRam_? != 0;
        (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar13 = (this->fields)._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar13 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar13->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar13 = (this->fields)._._.gameObject;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar13,0.0,(MethodInfo *)0x0);
        }
      }
      if ((this->fields)._._.initializedFromInventory != 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar5 != (MVGameControllerBase *)0x0) &&
         (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
        pRVar14 = (pMVar6->fields).runtimeVariableNetworkManager;
        item = (this->fields)._._._.id;
        if (pRVar14 != (RuntimeVariableNetworkManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar14->fields).runtimeDataVariables;
          if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
            bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                     HashSet_1_System_Int32Enum__Contains
                               (this_01,item,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar15 != 0) {
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 == (MVNetworkGame *)0x0) ||
                 (pRVar14 = (pMVar6->fields).runtimeVariableNetworkManager,
                 pRVar14 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
              RuntimeVariableNetworkManager::
              RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                        (pRVar14,(this->fields)._._._.id,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
DAT_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyUseInteractor() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_DestroyUseInteractor
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).doorObject;
  if (pMVar1 != (MVDoorObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (this->fields).useInteractor;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
             FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)pUVar3,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
      pMVar1 = (this->fields).doorObject;
      if (pMVar1 != (MVDoorObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (this->fields).useInteractor;
        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                 FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar4,(Object *)pUVar3,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
          pUVar3 = (this->fields).useInteractor;
          if ((pUVar3 != (UseInteractor *)0x0) &&
             (this_00 = (pUVar3->fields).useInteractorVisuals,
             this_00 != (UseInteractorVisualization *)0x0)) {
            UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
                      (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
            bVar5 = iRam_? != 0;
            (this->fields).useInteractor = (UseInteractor *)0x0;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
              puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar8 = *puVar7;
                LOCK();
                uVar9 = *puVar7;
                if (uVar8 == uVar9) {
                  *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (uVar8 != uVar9);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* ValueTuple`2[Single,Single] GetOpenCloseValues() */

ValueTuple_2_Single_Single_
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_GetOpenCloseValues
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).doorConfig.closeValue;
  fVar2 = (this->fields).doorConfig.openValue - fVar1;
  if ((this->fields).doorConfig.reverseOpenDirection != 0) {
    VVar3.Item2 = fVar1;
    VVar3.Item1 = fVar1 - fVar2;
    return VVar3;
  }
  VVar4.Item2 = fVar1;
  VVar4.Item1 = fVar2 + fVar1;
  return VVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Initialize
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__BoxCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
    this_00 = (pGVar3->fields).AvatarCommandsPlayMode;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__
               ,(MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_add_OnEnterPlaymode
                (this_00,(Action *)this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) goto code_?;
        pDVar4 = (Delegate *)FUN_?();
        b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
        FUN_?(b,this);
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar4,b,(MethodInfo *)0x0);
        pAVar5 = TypeInfo__System__Action<EditModeChangeArgs>;
        if ((pDVar4 != (Delegate *)0x0) &&
           (lVar6 = FUN_?(pDVar4,TypeInfo__System__Action<EditModeChangeArgs>),
           lVar6 == 0)) {
          FUN_?(pDVar4,pAVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar8 != (GameSessionData *)0x0) {
        if ((pGVar8->fields).gameMode == 0) {
          pMVar9 = (this->fields).doorObject;
          if (((pMVar9 == (MVDoorObject *)0x0) ||
              (pCVar10 = (pMVar9->fields).useCollider, pCVar10 == (Collider *)0x0)) ||
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pCVar10,(MethodInfo *)0x0),
             pGVar11 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar11,0,(MethodInfo *)0x0);
        }
        this_03 = (Action_2_Int32Enum_Object_ *)
                  FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__WorldObjectTypes__MVDoor__MVDoor__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar12 = LogicClientsideFactory::
                  LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                            ((MVWorldObject *)this,0,
                             (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                             (Action_2_LogicInputState_LogicObjectManager_ *)this_03,
                             (MethodInfo *)0x0);
        bVar13 = iRam_? != 0;
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar12;
        if (bVar13) {
          uVar14 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
          uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
          do {
            uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
            puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar16 == *puVar17;
            if (bVar13) {
              *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        pMVar18 = MVDoor_ReadWorldObjectData(&MStack_19,this,(MethodInfo *)0x0);
        bVar13 = iRam_? != 0;
        uVar20 = *(undefined4 *)((longlong)&pMVar18->name + 4);
        bVar21 = pMVar18->beginOpen;
        bVar22 = pMVar18->playersCanOpen;
        bVar23 = pMVar18->reverseOpenDirection;
        uVar24 = pMVar18->field_0xb;
        fVar25 = pMVar18->openValue;
        fVar26 = pMVar18->closeValue;
        fVar27 = pMVar18->toggleTime;
        iVar28 = pMVar18->docType;
        iVar29 = pMVar18->doorType;
        *(undefined4 *)&(this->fields).doorConfig.name = *(undefined4 *)&pMVar18->name;
        *(undefined4 *)((longlong)&(this->fields).doorConfig.name + 4) = uVar20;
        (this->fields).doorConfig.beginOpen = bVar21;
        (this->fields).doorConfig.playersCanOpen = bVar22;
        (this->fields).doorConfig.reverseOpenDirection = bVar23;
        (this->fields).doorConfig.field_0xb = uVar24;
        (this->fields).doorConfig.openValue = fVar25;
        (this->fields).doorConfig.closeValue = fVar26;
        (this->fields).doorConfig.toggleTime = fVar27;
        (this->fields).doorConfig.docType = iVar28;
        (this->fields).doorConfig.doorType = iVar29;
        if (bVar13) {
          uVar14 = (uint)((ulonglong)&(this->fields).doorConfig >> 0xc);
          uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
          do {
            uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
            puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar16 == *puVar17;
            if (bVar13) {
              *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        (this->fields).storedReverseOpenDirection = (this->fields).doorConfig.reverseOpenDirection;
        (this->fields).storedBeginOpen = (this->fields).doorConfig.beginOpen;
        bVar21 = (this->fields).doorConfig.beginOpen;
        (this->fields).localIsOpen = bVar21;
        if (bVar21 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          routine = (IEnumerator *)
                    FUN_?(
                                 TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62
                                 );
          bVar13 = iRam_? != 0;
          *(undefined4 *)&routine[1].klass = 0;
          routine[2].klass = (IEnumerator__Class *)this;
          if (bVar13) {
            uVar14 = (uint)((ulonglong)(routine + 2) >> 0xc);
            uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
            do {
              uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar16 == *puVar17;
              if (bVar13) {
                *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Coroutines);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
          if (this_01 == (MonoBehaviour *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                    (this_01,routine,(MethodInfo *)0x0);
        }
        if ((this->fields).doorConfig.doorType != 2) {
          return;
        }
        pGVar11 = (this->fields)._._.inputConnectorObject;
        if ((pGVar11 != (GameObject *)0x0) &&
           (pTVar30 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar11,(MethodInfo *)0x0), pTVar30 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar31 = (pTVar30->fields)._._.m_CachedPtr;
          if (pvVar31 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar30,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar32 = func_?(&UNK_?);
            FUN_?(uVar32,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar31);
          pGVar11 = (this->fields)._._.inputConnectorObject;
          if (pGVar11 != (GameObject *)0x0) {
            pTVar30 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar11,(MethodInfo *)0x0);
            uStack_33 = 0;
            uStack_34 = _UNK_?;
            uStack_35 = 0;
            uStack_36 = 0;
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar32 = func_?(&UNK_?);
              FUN_?(uVar32,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(&uStack_33);
            uVar32 = uStack_36;
            if (pTVar30 != (Transform *)0x0) {
              MStack_19.name._0_4_ = (undefined4)uStack_35;
              MStack_19.name._4_4_ = uStack_35._4_4_;
              MStack_19.beginOpen = (bool)uStack_36;
              MStack_19.playersCanOpen = uStack_36._1_1_;
              MStack_19.reverseOpenDirection = uStack_36._2_1_;
              MStack_19._11_1_ = uStack_36._3_1_;
              MStack_19.openValue = uStack_36._4_4_;
              uStack_36 = uVar32;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar31 = (pTVar30->fields)._._.m_CachedPtr;
              if (pvVar31 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar30,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar32 = func_?(&UNK_?);
                FUN_?(uVar32,0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcRam_? = pcVar7;
              (*pcRam_?)(pvVar31,&MStack_19);
              pMVar9 = (this->fields).doorObject;
              if ((pMVar9 != (MVDoorObject *)0x0) &&
                 (pCVar10 = (pMVar9->fields).useCollider, pCVar10 != (Collider *)0x0)) {
                pOVar37 = (Object__Class *)pCVar10->klass;
                bVar38 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
                if (((pOVar37->_1).naturalAligment < bVar38) ||
                   ((pOVar37->_1).typeHierarchy[(ulonglong)bVar38 - 1] !=
                    (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
                  FUN_?(pCVar10);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                bVar38 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
                if (((pOVar37->_1).naturalAligment < bVar38) ||
                   ((pOVar37->_1).typeHierarchy[(ulonglong)bVar38 - 1] !=
                    (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
                  FUN_?(pCVar10);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uStack_33 = (ulonglong)_UNK_?;
                uStack_34 = 0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar31 = (pCVar10->fields)._._.m_CachedPtr;
                if (pvVar31 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar32 = func_?(&UNK_?);
                  FUN_?(uVar32,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar31,&uStack_33);
                pMVar9 = (this->fields).doorObject;
                if ((pMVar9 != (MVDoorObject *)0x0) &&
                   (pCVar10 = (pMVar9->fields).useCollider, pCVar10 != (Collider *)0x0)) {
                  pOVar37 = (Object__Class *)pCVar10->klass;
                  bVar38 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
                  if (((pOVar37->_1).naturalAligment < bVar38) ||
                     ((pOVar37->_1).typeHierarchy[(ulonglong)bVar38 - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
                    FUN_?(pCVar10);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  bVar38 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
                  if (((pOVar37->_1).naturalAligment < bVar38) ||
                     ((pOVar37->_1).typeHierarchy[(ulonglong)bVar38 - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
                    FUN_?(pCVar10);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar31 = (pCVar10->fields)._._.m_CachedPtr;
                  if (pvVar31 != (void *)0x0) {
                    pcVar7 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                      uVar32 = func_?(&UNK_?);
                      FUN_?(uVar32,0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pvVar31);
                    pMVar9 = (this->fields).doorObject;
                    if (((pMVar9 != (MVDoorObject *)0x0) &&
                        (pGVar11 = (pMVar9->fields).useInteractionRotator,
                        pGVar11 != (GameObject *)0x0)) &&
                       (pTVar30 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
                       pTVar30 != (Transform *)0x0)) {
                      uStack_33 = CONCAT44(_UNK_?,_UNK_?);
                      uStack_34 = 0;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar31 = (pTVar30->fields)._._.m_CachedPtr;
                      if (pvVar31 != (void *)0x0) {
                        pcVar7 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)
                           ) {
                          uVar32 = func_?(&UNK_?);
                          FUN_?(uVar32,0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcRam_? = pcVar7;
                        (*pcRam_?)(pvVar31,&uStack_33);
                        return;
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar30,(MethodInfo *)0x0)
                      ;
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                goto code_?;
              }
            }
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_InputStateUpdateCallback
               (MVDoor *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState & ~LogicInputState__Enum_FromHotToCold) ==
      LogicInputState__Enum_FromColdToHot) {
    bVar1 = (this->fields).doorConfig.beginOpen;
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      bVar1 = bVar1 == 0;
    }
    MVDoor_ToggleDoor(this,bVar1 != 0,(MethodInfo *)0x0);
    MVDoor_set_IsOpen(this,bVar1 != 0,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean IntersectsWithDoor(Bounds) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_IntersectsWithDoor
               (MVDoor *this,Bounds *bound,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStackX_20 = 0;
  pMVar1 = (this->fields).doorModelInstance;
  if ((pMVar1 == (MVCubeModelInstance *)0x0) ||
     (method = (MethodInfo *)0x0, (pMVar1->fields)._.chunkInstances == (ChunkInstances *)0x0)) {
    FUN_?();
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException(unaff_RDI,(MethodInfo *)0x0);
code_?:
    plVar3 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar3,method);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    lStackX_8 = FUN_?(0,TypeInfo__System__Collections__IEnumerable);
    uStack_4 = 0;
    plStack_5 = &lStackX_8;
    plStack_6 = &lStackX_20;
    while (lStackX_8 != 0) {
      cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar7 == '\0') {
        lStackX_20 = FUN_?(lStackX_8,TypeInfo__System__IDisposable);
        if (lStackX_20 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
        }
        return 0;
      }
      if (lStackX_8 == 0) goto code_?;
      plVar3 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
      if (plVar3 == (longlong *)0x0) goto code_?;
      method = (MethodInfo *)
               TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ;
      if (*(Il2CppClass **)(*plVar3 + 0x40) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      unaff_RDI = (Object *)plVar3[6];
      if (unaff_RDI == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_8 = 0;
      uStack_9 = 0;
      uStack_10 = 0;
      pOVar11 = unaff_RDI[1].klass;
      if (pOVar11 == (Object__Class *)0x0) goto code_?;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar12;
      (*pcRam_?)(pOVar11,&uStack_8);
      fVar13 = (bound->m_Center).x;
      fVar14 = (bound->m_Center).y;
      fVar15 = (bound->m_Center).z;
      fVar16 = (bound->m_Extents).x;
      uStack_17._0_4_ = (bound->m_Extents).y;
      uStack_17._4_4_ = (bound->m_Extents).z;
      if ((fVar13 + fVar16 < (float)uStack_8 - uStack_9._4_4_) ||
         (uStack_9._4_4_ + (float)uStack_8 < fVar13 - fVar16)) {
code_?:
        bVar18 = false;
      }
      else {
        if ((fVar14 + (float)(undefined4)uStack_17 < uStack_8._4_4_ - (float)uStack_10) ||
           ((float)uStack_10 + uStack_8._4_4_ < fVar14 - (float)(undefined4)uStack_17))
        goto code_?;
        if (fVar15 + (float)uStack_17._4_4_ < (float)uStack_9 - uStack_10._4_4_)
        goto code_?;
        bVar18 = fVar15 - (float)uStack_17._4_4_ <= uStack_10._4_4_ + (float)uStack_9;
      }
      if (bVar18) {
        FUN_?(&plStack_5);
        return 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar19 = (*pcVar12)();
  return bVar19;
}


/* Boolean OnClickHandler(EditorStateMachine, Collider) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnClickHandler
               (MVDoor *this,EditorStateMachine *esm,Collider *collider,MethodInfo *method)

{
  if ((esm == (EditorStateMachine *)0x0) ||
     (this_00 = (esm->fields).selectionController, this_00 == (SelectionController *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  SelectionController::SelectionController_SelectWO
            (this_00,(this->fields)._._._.id,0,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar3 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)(this);
  pMVar4 = 
  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
  ;
  if (cVar3 == '\0') {
code_?:
    cVar3 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
    pMVar4 = 
    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
    ;
    if (cVar3 == '\0') {
code_?:
      cVar3 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)(this);
      pMVar4 = 
      UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
      ;
      if (cVar3 == '\0') {
        return 0;
      }
      pGVar5 = (this->fields)._._.objectConnectorObject;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      if ((
          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                     );
      }
      pCVar6 = (Collider *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_3
                         (pGVar5,0,((pMVar4->field7_0x38).rgctx_data)->method);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (collider != (Collider *)0x0 || pCVar6 != (Collider *)0x0) {
        if (pCVar6 == (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (collider == (Collider *)0x0) goto code_?;
          bVar7 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (collider == (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar7 = (pCVar6->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar7 = collider == pCVar6;
        }
        if (!bVar7) {
          return 0;
        }
      }
      (this->fields)._._.selectedConnector = 3;
      if (esm == (EditorStateMachine *)0x0) goto code_?;
      if ((esm->fields)._.lockState != 0) {
        return 1;
      }
      nextState = EditorEvent__Enum_ESAddObjectLink;
      goto code_?;
    }
    pGVar5 = (this->fields)._._.outputConnectorObject;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar6 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (pGVar5,0,((pMVar4->field7_0x38).rgctx_data)->method);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (collider != (Collider *)0x0 || pCVar6 != (Collider *)0x0) {
      if (pCVar6 == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (collider == (Collider *)0x0) goto code_?;
        bVar7 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (collider == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar7 = (pCVar6->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar7 = collider == pCVar6;
      }
      if (!bVar7) goto code_?;
    }
    (this->fields)._._.selectedConnector = 2;
  }
  else {
    pGVar5 = (this->fields)._._.inputConnectorObject;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar6 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (pGVar5,0,((pMVar4->field7_0x38).rgctx_data)->method);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (collider != (Collider *)0x0 || pCVar6 != (Collider *)0x0) {
      if (pCVar6 == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (collider == (Collider *)0x0) goto code_?;
        bVar7 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (collider == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar7 = (pCVar6->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar7 = collider == pCVar6;
      }
      if (!bVar7) goto code_?;
    }
    (this->fields)._._.selectedConnector = 1;
  }
  if (esm == (EditorStateMachine *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((esm->fields)._.lockState != 0) {
    return 1;
  }
  nextState = EditorEvent__Enum_ESAddLink;
code_?:
  FSMEntity::FSMEntity_PushState_1
            ((FSMEntity *)esm,nextState,EditorEvent__Enum_UndefinedState,(MethodInfo *)0x0);
  return 1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnDataUpdate
               (MVDoor *this,MethodInfo *method)

{
  pMVar1 = MVDoor_ReadWorldObjectData(&MStack_2,this,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  bVar4 = pMVar1->beginOpen;
  bVar5 = pMVar1->playersCanOpen;
  bVar6 = pMVar1->reverseOpenDirection;
  uVar7 = pMVar1->field_0xb;
  fVar8 = pMVar1->openValue;
  fVar9 = pMVar1->closeValue;
  fVar10 = pMVar1->toggleTime;
  iVar11 = pMVar1->docType;
  iVar12 = pMVar1->doorType;
  (this->fields).doorConfig.name = pMVar1->name;
  (this->fields).doorConfig.beginOpen = bVar4;
  (this->fields).doorConfig.playersCanOpen = bVar5;
  (this->fields).doorConfig.reverseOpenDirection = bVar6;
  (this->fields).doorConfig.field_0xb = uVar7;
  (this->fields).doorConfig.openValue = fVar8;
  (this->fields).doorConfig.closeValue = fVar9;
  (this->fields).doorConfig.toggleTime = fVar10;
  (this->fields).doorConfig.docType = iVar11;
  (this->fields).doorConfig.doorType = iVar12;
  if (bVar3) {
    uVar13 = (uint)((ulonglong)&(this->fields).doorConfig >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar15 == *puVar16;
      if (bVar3) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  MVDoor_UpdateUseInteractor(this,(MethodInfo *)0x0);
  bVar4 = (this->fields).doorConfig.beginOpen;
  if (((this->fields).storedBeginOpen != bVar4) &&
     ((this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0)) {
    (this->fields).storedBeginOpen = bVar4;
    pIVar17 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).serverResponseTimeoutRoutine = pIVar17;
    if (bVar3) {
      uVar13 = (uint)((ulonglong)&(this->fields).serverResponseTimeoutRoutine >> 0xc);
      uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar15 == *puVar16;
        if (bVar3) {
          *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    Coroutines::Coroutines_Start((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_01,(this->fields)._._._.id,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
    MVDoor_ToggleDoor(this,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
  }
  bVar4 = (this->fields).doorConfig.reverseOpenDirection;
  if (((this->fields).storedReverseOpenDirection != bVar4) &&
     ((this->fields).storedReverseOpenDirection = bVar4, (this->fields).localIsOpen != 0)) {
    this_00 = (this->fields).doorObject;
    if (this_00 == (MVDoorObject *)0x0) {
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    fVar8 = MVDoorObject::MVDoorObject_GetCurrentValue
                       (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    VVar19 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    fStackX_8 = VVar19.Item1;
    MVDoor_StartDoorAnimation(this,fVar8,fStackX_8,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnEditModeChange
               (MVDoor *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pMVar1 = (this->fields).doorObject;
  if (((pMVar1 == (MVDoorObject *)0x0) ||
      (this_00 = (pMVar1->fields).useCollider, this_00 == (Collider *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,arg.playInEditor,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,arg.playInEditor);
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnIsFiringChanged
               (MVDoor *this,bool isFiring,MethodInfo *method)

{
  if ((this->fields).serverResponseTimeoutRoutine != (IEnumerator *)0x0) {
    pIVar1 = (this->fields).serverResponseTimeoutRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (pMVar2 == (MonoBehaviour *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (pMVar2,pIVar1,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).serverResponseTimeoutRoutine = (IEnumerator *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).serverResponseTimeoutRoutine >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  MVDoor_set_IsOpen(this,isFiring,(MethodInfo *)0x0);
  if (isFiring == (this->fields).localIsOpen) {
    return;
  }
  (this->fields).localIsOpen = isFiring;
  VVar9 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
  fVar10 = VVar9.Item2;
  fVar11 = VVar9.Item1;
  if ((this->fields).localIsOpen != 0) {
    fVar11 = fVar10;
    fVar10 = VVar9.Item1;
  }
  VStack_12.y = unaff_XMM7_Db;
  VStack_12.x = unaff_XMM7_Da;
  VStack_12.z = unaff_XMM7_Dc;
  if ((this->fields).doorAnimationRoutine != (IEnumerator *)0x0) {
    pIVar1 = (this->fields).doorAnimationRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines,fVar11,fVar10,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (pMVar2 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (pMVar2,pIVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  iVar13 = iRam_?;
  *(float *)&pIVar1[2].monitor = fVar11;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = fVar10;
  (this->fields).doorAnimationRoutine = pIVar1;
  if (iVar13 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).doorAnimationRoutine >> 0xc);
    uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pIVar1 = (this->fields).doorAnimationRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (pMVar2 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (pMVar2,pIVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).doorObject;
    if (this_00 != (MVDoorObject *)0x0) {
      iVar13 = (this->fields).doorConfig.doorType;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_TrapDoor);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Door);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SlidingDoor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar13 == 0) {
        pSVar14 = (this_00->fields).doorOpenSoundStream;
        if ((pSVar14 != (StreamedAudioClipManual *)0x0) &&
           (pAVar15 = (this_00->fields).audioSource, pAVar15 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar15,(AudioResource *)(pSVar14->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar15 = (this_00->fields).audioSource;
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar16 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_12.x = 0.0;
            VStack_12.y = 0.0;
            VStack_12.z = 0.0;
            pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar17,&VStack_12);
            if (this_01 != (AudioManager *)0x0) {
              VStack_19.x = VStack_12.x;
              VStack_19.y = VStack_12.y;
              VStack_19.z = VStack_12.z;
              name = StringLiteral_Door;
              goto code_?;
            }
          }
        }
      }
      else if (iVar13 == 1) {
        pSVar14 = (this_00->fields).slidingDoorOpenSoundStream;
        if ((pSVar14 != (StreamedAudioClipManual *)0x0) &&
           (pAVar15 = (this_00->fields).audioSource, pAVar15 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar15,(AudioResource *)(pSVar14->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar15 = (this_00->fields).audioSource;
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar16 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_12.x = 0.0;
            VStack_12.y = 0.0;
            VStack_12.z = 0.0;
            pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar17,&VStack_12);
            if (this_01 != (AudioManager *)0x0) {
              VStack_19.x = VStack_12.x;
              VStack_19.y = VStack_12.y;
              VStack_19.z = VStack_12.z;
              name = StringLiteral_SlidingDoor;
              goto code_?;
            }
          }
        }
      }
      else {
        if (iVar13 != 2) {
          return;
        }
        pSVar14 = (this_00->fields).trapDoorOpenSoundStream;
        if ((pSVar14 != (StreamedAudioClipManual *)0x0) &&
           (pAVar15 = (this_00->fields).audioSource, pAVar15 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar15,(AudioResource *)(pSVar14->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar15 = (this_00->fields).audioSource;
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar16 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_12.x = 0.0;
            VStack_12.y = 0.0;
            VStack_12.z = 0.0;
            pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar17,&VStack_12);
            if (this_01 != (AudioManager *)0x0) {
              VStack_19.x = VStack_12.x;
              VStack_19.y = VStack_12.y;
              VStack_19.z = VStack_12.z;
              name = StringLiteral_TrapDoor;
code_?:
              VStack_12._0_8_ = VStack_19._0_8_;
              VStack_12.z = VStack_19.z;
              AudioManager::AudioManager_Play_2(this_01,name,pAVar15,&VStack_19,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVDoor+DoorConfiguration ReadWorldObjectData() */

MVDoor_DoorConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ReadWorldObjectData
          (MVDoor_DoorConfiguration *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  pSStackX_8 = (String *)0x0;
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->beginOpen = 0;
  __return_storage_ptr__->playersCanOpen = 0;
  __return_storage_ptr__->reverseOpenDirection = 0;
  __return_storage_ptr__->field_0xb = 0;
  __return_storage_ptr__->openValue = 0.0;
  pSStackX_10 = (String *)0x0;
  __return_storage_ptr__->closeValue = 0.0;
  __return_storage_ptr__->toggleTime = 0.0;
  __return_storage_ptr__->docType = 0;
  __return_storage_ptr__->doorType = 0;
  pSStackX_20 = (String *)0x0;
  pSStack_2 = (String *)0x0;
  pMVar3 = MVDoor_CreateDefaultDoorConfig
                      (&MStack_4,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
  uVar5 = *(undefined4 *)((longlong)&pMVar3->name + 4);
  bVar6 = pMVar3->beginOpen;
  bVar7 = pMVar3->playersCanOpen;
  bVar8 = pMVar3->reverseOpenDirection;
  uVar9 = pMVar3->field_0xb;
  fVar10 = pMVar3->openValue;
  fVar11 = pMVar3->closeValue;
  fVar12 = pMVar3->toggleTime;
  iVar13 = pMVar3->docType;
  iVar14 = pMVar3->doorType;
  *(undefined4 *)&__return_storage_ptr__->name = *(undefined4 *)&pMVar3->name;
  *(undefined4 *)((longlong)&__return_storage_ptr__->name + 4) = uVar5;
  __return_storage_ptr__->beginOpen = bVar6;
  __return_storage_ptr__->playersCanOpen = bVar7;
  __return_storage_ptr__->reverseOpenDirection = bVar8;
  __return_storage_ptr__->field_0xb = uVar9;
  __return_storage_ptr__->openValue = fVar10;
  __return_storage_ptr__->closeValue = fVar11;
  __return_storage_ptr__->toggleTime = fVar12;
  __return_storage_ptr__->docType = iVar13;
  __return_storage_ptr__->doorType = iVar14;
  pDVar15 = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__TryGetValue
                       (pDVar15,(Object *)
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                               static_fields->Name,(Object **)&pSStackX_8,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                       );
    if ((bVar6 != 0) && (pSStackX_8 != (String *)0x0)) {
      pSVar16 = pSVar1;
      if (pSStackX_8->klass == pSRam0000000182db2520) {
        pSVar16 = pSStackX_8;
      }
      if ((pSVar16 != (String *)0x0) &&
         (bVar17 = iRam_? != 0, __return_storage_ptr__->name = pSVar16, bVar17)) {
        uVar18 = (uint)((ulonglong)__return_storage_ptr__ >> 0xc);
        puVar19 = (ulonglong *)((ulonglong)((uVar18 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar20 = *puVar19;
          LOCK();
          uVar21 = *puVar19;
          if (uVar20 == uVar21) {
            *puVar19 = uVar20 | 1L << (uVar18 & 0x3f);
          }
          UNLOCK();
        } while (uVar20 != uVar21);
      }
    }
    pDVar15 = (this->fields)._._._.data;
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    }
    if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                         (pDVar15,(Object *)
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                 ->static_fields->BeginOpen,(Object **)&pSStackX_10,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                         );
      if ((bVar6 != 0) && (pSStackX_10 != (String *)0x0)) {
        pSVar16 = pSVar1;
        if (pSStackX_10->klass == pSRam0000000182db24b8) {
          pSVar16 = pSStackX_10;
        }
        if (pSVar16 != (String *)0x0) {
          if ((pSStackX_10->klass->_0).element_class != (pSRam0000000182db24b8->_0).element_class) {
            FUN_?(pSStackX_10);
            pcVar22 = (code *)swi(3);
            pMVar3 = (MVDoor_DoorConfiguration *)(*pcVar22)();
            return pMVar3;
          }
          __return_storage_ptr__->beginOpen = (bool)(pSStackX_10->fields)._stringLength;
        }
      }
      pDVar15 = (this->fields)._._._.data;
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                           (pDVar15,(Object *)
                                   TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                   ->static_fields->PlayersCanOpen,(Object **)&pSStackX_20,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                           );
        if ((bVar6 != 0) && (pSStackX_20 != (String *)0x0)) {
          pSVar16 = pSVar1;
          if (pSStackX_20->klass == pSRam0000000182db24b8) {
            pSVar16 = pSStackX_20;
          }
          if (pSVar16 != (String *)0x0) {
            if ((pSStackX_20->klass->_0).element_class != (pSRam0000000182db24b8->_0).element_class)
            {
              FUN_?(pSStackX_20);
              pcVar22 = (code *)swi(3);
              pMVar3 = (MVDoor_DoorConfiguration *)(*pcVar22)();
              return pMVar3;
            }
            __return_storage_ptr__->playersCanOpen = (bool)(pSStackX_20->fields)._stringLength;
          }
        }
        pDVar15 = (this->fields)._._._.data;
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                             (pDVar15,(Object *)
                                     TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                     ->static_fields->ReverseOpenDirection,(Object **)&pSStack_2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                             );
          if ((bVar6 != 0) && (pSStack_2 != (String *)0x0)) {
            if (pSStack_2->klass == pSRam0000000182db24b8) {
              pSVar1 = pSStack_2;
            }
            if (pSVar1 != (String *)0x0) {
              if ((pSStack_2->klass->_0).element_class != (pSRam0000000182db24b8->_0).element_class
                 ) {
                FUN_?(pSStack_2);
                pcVar22 = (code *)swi(3);
                pMVar3 = (MVDoor_DoorConfiguration *)(*pcVar22)();
                return pMVar3;
              }
              __return_storage_ptr__->reverseOpenDirection =
                   (bool)(pSStack_2->fields)._stringLength;
            }
          }
          return __return_storage_ptr__;
        }
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  pMVar3 = (MVDoor_DoorConfiguration *)(*pcVar22)();
  return pMVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Reset
               (MVDoor *this,MethodInfo *method)

{
  state = (this->fields).doorConfig.beginOpen;
  MVDoor_ToggleDoor(this,state,(MethodInfo *)0x0);
  MVDoor_set_IsOpen(this,state,(MethodInfo *)0x0);
  (this->fields).localIsOpen = state;
  if ((this->fields).serverResponseTimeoutRoutine != (IEnumerator *)0x0) {
    routine = (this->fields).serverResponseTimeoutRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_00 == (MonoBehaviour *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this_00,routine,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).serverResponseTimeoutRoutine = (IEnumerator *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).serverResponseTimeoutRoutine >> 0xc);
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
  return;
}


/* IEnumerator ServerResponseTimeoutRoutine() */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ServerResponseTimeoutRoutine
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___ServerResponseTimeoutRoutine_d__67);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(
                        TypeInfo__WorldObjectTypes__MVDoor__MVDoor___ServerResponseTimeoutRoutine_d__67
                        );
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void SetUseInteractorData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_SetUseInteractorData
               (MVDoor *this,Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).useInteractorData = data;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).useInteractorData >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void StartDoorAnimation(Single, Single) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_StartDoorAnimation
               (MVDoor *this,float from,float to,MethodInfo *method)

{
  VStack_1.y = unaff_XMM7_Db;
  VStack_1.x = unaff_XMM7_Da;
  VStack_1.z = unaff_XMM7_Dc;
  if ((this->fields).doorAnimationRoutine != (IEnumerator *)0x0) {
    pIVar2 = (this->fields).doorAnimationRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (pMVar3 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (pMVar3,pIVar2,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar2 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
  *(undefined4 *)&pIVar2[1].klass = 0;
  pIVar2[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)(pIVar2 + 2) >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  *(float *)&pIVar2[2].monitor = from;
  *(float *)((longlong)&pIVar2[2].monitor + 4) = to;
  (this->fields).doorAnimationRoutine = pIVar2;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).doorAnimationRoutine >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pIVar2 = (this->fields).doorAnimationRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (pMVar3 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (pMVar3,pIVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).doorObject;
    if (this_00 != (MVDoorObject *)0x0) {
      iVar9 = (this->fields).doorConfig.doorType;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_TrapDoor);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Door);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SlidingDoor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar9 == 0) {
        pSVar10 = (this_00->fields).doorOpenSoundStream;
        if ((pSVar10 != (StreamedAudioClipManual *)0x0) &&
           (pAVar11 = (this_00->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar11,(AudioResource *)(pSVar10->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar11 = (this_00->fields).audioSource;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_1.x = 0.0;
            VStack_1.y = 0.0;
            VStack_1.z = 0.0;
            pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13,&VStack_1);
            if (this_01 != (AudioManager *)0x0) {
              VStack_16.x = VStack_1.x;
              VStack_16.y = VStack_1.y;
              VStack_16.z = VStack_1.z;
              name = StringLiteral_Door;
              goto code_?;
            }
          }
        }
      }
      else if (iVar9 == 1) {
        pSVar10 = (this_00->fields).slidingDoorOpenSoundStream;
        if ((pSVar10 != (StreamedAudioClipManual *)0x0) &&
           (pAVar11 = (this_00->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar11,(AudioResource *)(pSVar10->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar11 = (this_00->fields).audioSource;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_1.x = 0.0;
            VStack_1.y = 0.0;
            VStack_1.z = 0.0;
            pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13,&VStack_1);
            if (this_01 != (AudioManager *)0x0) {
              VStack_16.x = VStack_1.x;
              VStack_16.y = VStack_1.y;
              VStack_16.z = VStack_1.z;
              name = StringLiteral_SlidingDoor;
              goto code_?;
            }
          }
        }
      }
      else {
        if (iVar9 != 2) {
          return;
        }
        pSVar10 = (this_00->fields).trapDoorOpenSoundStream;
        if ((pSVar10 != (StreamedAudioClipManual *)0x0) &&
           (pAVar11 = (this_00->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar11,(AudioResource *)(pSVar10->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar11 = (this_00->fields).audioSource;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_1.x = 0.0;
            VStack_1.y = 0.0;
            VStack_1.z = 0.0;
            pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13,&VStack_1);
            if (this_01 != (AudioManager *)0x0) {
              VStack_16.x = VStack_1.x;
              VStack_16.y = VStack_1.y;
              VStack_16.z = VStack_1.z;
              name = StringLiteral_TrapDoor;
code_?:
              VStack_1._0_8_ = VStack_16._0_8_;
              VStack_1.z = VStack_16.z;
              AudioManager::AudioManager_Play_2(this_01,name,pAVar11,&VStack_16,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ToggleDoor(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ToggleDoor
               (MVDoor *this,bool state,MethodInfo *method)

{
  if (state == (this->fields).localIsOpen) {
    return;
  }
  (this->fields).localIsOpen = state;
  VVar1 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
  fVar2 = VVar1.Item2;
  fVar3 = VVar1.Item1;
  if ((this->fields).localIsOpen != 0) {
    fVar3 = fVar2;
    fVar2 = VVar1.Item1;
  }
  VStack_4.y = unaff_XMM7_Db;
  VStack_4.x = unaff_XMM7_Da;
  VStack_4.z = unaff_XMM7_Dc;
  if ((this->fields).doorAnimationRoutine != (IEnumerator *)0x0) {
    pIVar5 = (this->fields).doorAnimationRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines,fVar3,fVar2,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (pMVar6 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (pMVar6,pIVar5,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar5 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
  *(undefined4 *)&pIVar5[1].klass = 0;
  pIVar5[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)(pIVar5 + 2) >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  iVar12 = iRam_?;
  *(float *)&pIVar5[2].monitor = fVar3;
  *(float *)((longlong)&pIVar5[2].monitor + 4) = fVar2;
  (this->fields).doorAnimationRoutine = pIVar5;
  if (iVar12 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).doorAnimationRoutine >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pIVar5 = (this->fields).doorAnimationRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (pMVar6 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (pMVar6,pIVar5,(MethodInfo *)0x0);
    this_00 = (this->fields).doorObject;
    if (this_00 != (MVDoorObject *)0x0) {
      iVar12 = (this->fields).doorConfig.doorType;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_TrapDoor);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Door);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SlidingDoor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar12 == 0) {
        pSVar13 = (this_00->fields).doorOpenSoundStream;
        if ((pSVar13 != (StreamedAudioClipManual *)0x0) &&
           (pAVar14 = (this_00->fields).audioSource, pAVar14 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar14,(AudioResource *)(pSVar13->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar14 = (this_00->fields).audioSource;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_4.x = 0.0;
            VStack_4.y = 0.0;
            VStack_4.z = 0.0;
            pvVar16 = (pTVar15->fields)._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(pvVar16,&VStack_4);
            if (this_01 != (AudioManager *)0x0) {
              VStack_19.x = VStack_4.x;
              VStack_19.y = VStack_4.y;
              VStack_19.z = VStack_4.z;
              name = StringLiteral_Door;
              goto code_?;
            }
          }
        }
      }
      else if (iVar12 == 1) {
        pSVar13 = (this_00->fields).slidingDoorOpenSoundStream;
        if ((pSVar13 != (StreamedAudioClipManual *)0x0) &&
           (pAVar14 = (this_00->fields).audioSource, pAVar14 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar14,(AudioResource *)(pSVar13->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar14 = (this_00->fields).audioSource;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_4.x = 0.0;
            VStack_4.y = 0.0;
            VStack_4.z = 0.0;
            pvVar16 = (pTVar15->fields)._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(pvVar16,&VStack_4);
            if (this_01 != (AudioManager *)0x0) {
              VStack_19.x = VStack_4.x;
              VStack_19.y = VStack_4.y;
              VStack_19.z = VStack_4.z;
              name = StringLiteral_SlidingDoor;
              goto code_?;
            }
          }
        }
      }
      else {
        if (iVar12 != 2) {
          return;
        }
        pSVar13 = (this_00->fields).trapDoorOpenSoundStream;
        if ((pSVar13 != (StreamedAudioClipManual *)0x0) &&
           (pAVar14 = (this_00->fields).audioSource, pAVar14 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar14,(AudioResource *)(pSVar13->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar14 = (this_00->fields).audioSource;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_4.x = 0.0;
            VStack_4.y = 0.0;
            VStack_4.z = 0.0;
            pvVar16 = (pTVar15->fields)._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(pvVar16,&VStack_4);
            if (this_01 != (AudioManager *)0x0) {
              VStack_19.x = VStack_4.x;
              VStack_19.y = VStack_4.y;
              VStack_19.z = VStack_4.z;
              name = StringLiteral_TrapDoor;
code_?:
              VStack_4._0_8_ = VStack_19._0_8_;
              VStack_4.z = VStack_19.z;
              AudioManager::AudioManager_Play_2(this_01,name,pAVar14,&VStack_19,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ToggleDoorColliders(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ToggleDoorColliders
               (MVDoor *this,bool val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,CONCAT71(in_register_00000011,val));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).doorModelInstance;
  if ((pMVar1 == (MVCubeModelInstance *)0x0) ||
     ((pMVar1->fields)._.chunkInstances == (ChunkInstances *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar3 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar3 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar4 == '\0') {
      lVar5 = FUN_?(plVar3,TypeInfo__System__IDisposable);
      if (lVar5 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar5);
      }
      return;
    }
    if (plVar3 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar5 = *plVar3;
    uVar6 = 0;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1) *
                    0x10 + 0x138 + lVar5);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_?(plVar3,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar8 = (longlong *)(*(code *)*puVar7)(plVar3,puVar7[1]);
    if (plVar8 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar9 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar8 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) {
code_?:
      FUN_?(plVar8,pKVar9);
      goto code_?;
    }
    obj = (Object *)plVar8[6];
    if (obj == (Object *)0x0) {
code_?:
      plVar8 = (longlong *)FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar10 = obj[1].klass;
    if (pOVar10 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11);
      goto code_?;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar10,val);
  } while( true );
}


/* Void UpdateBeginOpen() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_UpdateBeginOpen
               (MVDoor *this,MethodInfo *method)

{
  bVar1 = (this->fields).doorConfig.beginOpen;
  if (((this->fields).storedBeginOpen == bVar1) ||
     ((this->fields).serverResponseTimeoutRoutine != (IEnumerator *)0x0)) {
    return;
  }
  (this->fields).storedBeginOpen = bVar1;
  pIVar2 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).serverResponseTimeoutRoutine = pIVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).serverResponseTimeoutRoutine >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  Coroutines::Coroutines_Start((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
            (this_01,(this->fields)._._._.id,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
  bVar1 = (this->fields).storedBeginOpen;
  if (bVar1 == (this->fields).localIsOpen) {
    return;
  }
  (this->fields).localIsOpen = bVar1;
  VVar9 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
  fVar10 = VVar9.Item2;
  fVar11 = VVar9.Item1;
  if ((this->fields).localIsOpen != 0) {
    fVar11 = fVar10;
    fVar10 = VVar9.Item1;
  }
  VStack_12.y = unaff_XMM7_Db;
  VStack_12.x = unaff_XMM7_Da;
  VStack_12.z = unaff_XMM7_Dc;
  if ((this->fields).doorAnimationRoutine != (IEnumerator *)0x0) {
    pIVar2 = (this->fields).doorAnimationRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines,fVar11,fVar10,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar13 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (pMVar13 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (pMVar13,pIVar2,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar2 = (IEnumerator *)
           FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
  *(undefined4 *)&pIVar2[1].klass = 0;
  pIVar2[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)(pIVar2 + 2) >> 0xc);
    uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar5;
      if (bVar3) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  iVar14 = iRam_?;
  *(float *)&pIVar2[2].monitor = fVar11;
  *(float *)((longlong)&pIVar2[2].monitor + 4) = fVar10;
  (this->fields).doorAnimationRoutine = pIVar2;
  if (iVar14 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).doorAnimationRoutine >> 0xc);
    uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar5;
      if (bVar3) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pIVar2 = (this->fields).doorAnimationRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (pMVar13 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (pMVar13,pIVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).doorObject;
    if (this_00 != (MVDoorObject *)0x0) {
      iVar14 = (this->fields).doorConfig.doorType;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_TrapDoor);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Door);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SlidingDoor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar14 == 0) {
        pSVar15 = (this_00->fields).doorOpenSoundStream;
        if ((pSVar15 != (StreamedAudioClipManual *)0x0) &&
           (pAVar16 = (this_00->fields).audioSource, pAVar16 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar16,(AudioResource *)(pSVar15->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar16 = (this_00->fields).audioSource;
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar17 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_12.x = 0.0;
            VStack_12.y = 0.0;
            VStack_12.z = 0.0;
            pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar18 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar18,&VStack_12);
            if (this_02 != (AudioManager *)0x0) {
              VStack_20.x = VStack_12.x;
              VStack_20.y = VStack_12.y;
              VStack_20.z = VStack_12.z;
              name = StringLiteral_Door;
              goto code_?;
            }
          }
        }
      }
      else if (iVar14 == 1) {
        pSVar15 = (this_00->fields).slidingDoorOpenSoundStream;
        if ((pSVar15 != (StreamedAudioClipManual *)0x0) &&
           (pAVar16 = (this_00->fields).audioSource, pAVar16 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar16,(AudioResource *)(pSVar15->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar16 = (this_00->fields).audioSource;
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar17 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_12.x = 0.0;
            VStack_12.y = 0.0;
            VStack_12.z = 0.0;
            pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar18 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar18,&VStack_12);
            if (this_02 != (AudioManager *)0x0) {
              VStack_20.x = VStack_12.x;
              VStack_20.y = VStack_12.y;
              VStack_20.z = VStack_12.z;
              name = StringLiteral_SlidingDoor;
              goto code_?;
            }
          }
        }
      }
      else {
        if (iVar14 != 2) {
          return;
        }
        pSVar15 = (this_00->fields).trapDoorOpenSoundStream;
        if ((pSVar15 != (StreamedAudioClipManual *)0x0) &&
           (pAVar16 = (this_00->fields).audioSource, pAVar16 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                    (pAVar16,(AudioResource *)(pSVar15->fields)._Clip_k__BackingField,
                     (MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar16 = (this_00->fields).audioSource;
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar17 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_12.x = 0.0;
            VStack_12.y = 0.0;
            VStack_12.z = 0.0;
            pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar18 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar18,&VStack_12);
            if (this_02 != (AudioManager *)0x0) {
              VStack_20.x = VStack_12.x;
              VStack_20.y = VStack_12.y;
              VStack_20.z = VStack_12.z;
              name = StringLiteral_TrapDoor;
code_?:
              VStack_12._0_8_ = VStack_20._0_8_;
              VStack_12.z = VStack_20.z;
              AudioManager::AudioManager_Play_2(this_02,name,pAVar16,&VStack_20,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateReverseOpen() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_UpdateReverseOpen
               (MVDoor *this,MethodInfo *method)

{
  bVar1 = (this->fields).doorConfig.reverseOpenDirection;
  if (((this->fields).storedReverseOpenDirection != bVar1) &&
     ((this->fields).storedReverseOpenDirection = bVar1, (this->fields).localIsOpen != 0)) {
    this_00 = (this->fields).doorObject;
    if (this_00 == (MVDoorObject *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    from = MVDoorObject::MVDoorObject_GetCurrentValue
                     (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    VVar3 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    fStackX_8 = VVar3.Item1;
    MVDoor_StartDoorAnimation(this,from,fStackX_8,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateUseInteractor() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_UpdateUseInteractor
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StarRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).useInteractor;
  if ((((this->fields).doorConfig.playersCanOpen & pUVar1 == (UseInteractor *)0x0) == 0) ||
     ((this->fields)._DoorBlueprint_k__BackingField == (MVDoorBlueprint *)0x0)) {
    if ((this->fields).doorConfig.playersCanOpen != 0) {
      if (pUVar1 != (UseInteractor *)0x0) {
        this_05 = (pUVar1->fields).useInteractorVisuals;
        goto code_?;
      }
      if ((this->fields).doorConfig.playersCanOpen != 0) {
        return;
      }
    }
    if (pUVar1 != (UseInteractor *)0x0) {
      MVDoor_DestroyUseInteractor(this,(MethodInfo *)0x0);
    }
  }
  else {
    pMVar2 = (this->fields).doorObject;
    wo = (this->fields)._DoorBlueprint_k__BackingField;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pGVar3 = (pMVar2->fields).useInteractionRotator;
    triggerCollider = (((this->fields).doorObject)->fields).useCollider;
    useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
    FUN_?(useFunction,this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_);
    pUVar1 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
    UseInteractor::UseInteractor__ctor
              (pUVar1,(MVWorldObjectClient *)wo,pGVar3,0,triggerCollider,useFunction,
               (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,1,0,(MethodInfo *)0x0)
    ;
    bVar4 = iRam_? != 0;
    (this->fields).useInteractor = pUVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pTVar9 = (pMVar2->fields).triggerBoxEvents;
    pUVar1 = (this->fields).useInteractor;
    pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar10,(Object *)pUVar1,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar9 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar10,(MethodInfo *)0x0);
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pTVar9 = (pMVar2->fields).triggerBoxEvents;
    pUVar1 = (this->fields).useInteractor;
    pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar10,(Object *)pUVar1,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar9 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
              (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar10,(MethodInfo *)0x0);
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pGVar3 = (pMVar2->fields).useInteractionRotator;
    this_00 = (GameCoinLogic *)FUN_?(TypeInfo__GameCoinLogic);
    GameCoinLogic::GameCoinLogic__ctor(this_00,pGVar3,1,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar1,(UseRequirement *)this_00,(MethodInfo *)0x0)
    ;
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pGVar3 = (pMVar2->fields).useInteractionRotator;
    this_01 = (LevelBasedUseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor(this_01,pGVar3,1,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar1,(UseRequirement *)this_01,(MethodInfo *)0x0)
    ;
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pGVar3 = (pMVar2->fields).useInteractionRotator;
    this_02 = (StarRequirement *)FUN_?(TypeInfo__StarRequirement);
    StarRequirement::StarRequirement__ctor(this_02,pGVar3,1,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar1,(UseRequirement *)this_02,(MethodInfo *)0x0)
    ;
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pGVar3 = (pMVar2->fields).useInteractionRotator;
    this_03 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
    GameRankRequirement::GameRankRequirement__ctor
              (this_03,pGVar3,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar1,(UseRequirement *)this_03,(MethodInfo *)0x0)
    ;
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    pGVar3 = (pMVar2->fields).useInteractionRotator;
    pIVar11 = (Il2CppClass *)
              FUN_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost);
    pMVar12 = MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__;
    bVar4 = iRam_? != 0;
    pIVar11->name =
         (char *)MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__->virtualMethodPointer;
    *(MethodInfo **)&(pIVar11->byval_arg).attrs = pMVar12;
    (pIVar11->byval_arg).data.typeHandle = (Il2CppMetadataTypeHandle)this;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&pIVar11->byval_arg >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    uVar13 = pMVar12->parameters_count;
    pIVar11->element_class = pIVar11;
    if (((pMVar12->flags & 0x10) == 0) || (uVar13 != 0)) {
      pIVar11->element_class = (Il2CppClass *)(pIVar11->byval_arg).data;
      pcVar14 = pIVar11->name;
    }
    else {
      pcVar14 = &UNK_?;
    }
    pIVar11->namespaze = pcVar14;
    *(code **)&(pIVar11->this_arg).attrs = FUN_?;
    useRequirement = (UseRequirement *)FUN_?();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar15 = iRam_?;
    *(undefined4 *)((longlong)&useRequirement[1].monitor + 4) = 0xffffffff;
    useRequirement[1].klass = (UseRequirement__Class *)0x0;
    *(undefined4 *)&useRequirement[1].monitor = 0;
    useRequirement[2].monitor = (MonitorData *)pGVar3;
    if (iVar15 != 0) {
      uVar5 = (uint)((ulonglong)&useRequirement[2].monitor >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
        iVar15 = iRam_?;
      } while (!bVar4);
    }
    useRequirement[3].klass = (UseRequirement__Class *)pIVar11;
    if (iVar15 != 0) {
      uVar5 = (uint)((ulonglong)(useRequirement + 3) >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    *(bool *)&useRequirement[3].monitor = useRequirement[3].klass != (UseRequirement__Class *)0x0;
    this_04 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
            FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    FUN_?(value,useRequirement);
    if (this_04 == (SpawnRoleDataMediator *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled(this_04,value,(MethodInfo *)0x0);
    useRequirement[1].klass =
         (UseRequirement__Class *)
         CONCAT44(*(float *)((longlong)&useRequirement[1].klass + 4) + _UNK_?,
                  SUB84(useRequirement[1].klass,0) + 0.0);
    *(float *)&useRequirement[1].monitor = *(float *)&useRequirement[1].monitor + 0.0;
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar1,useRequirement,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 == (UseInteractor *)0x0) goto code_?;
    this_05 = (pUVar1->fields).useInteractorVisuals;
code_?:
    if (this_05 == (UseInteractorVisualization *)0x0) {
code_?:
      FUN_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_05,(this->fields).useInteractorData,(pUVar1->fields).woOwnerID,
               (MethodInfo *)0x0);
  }
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Use
               (MVDoor *this,int32_t userWoID,MethodInfo *method)

{
  if ((this->fields).serverResponseTimeoutRoutine != (IEnumerator *)0x0) {
    return 1;
  }
  pIVar1 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).serverResponseTimeoutRoutine = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).serverResponseTimeoutRoutine >> 0xc);
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
  pIVar1 = (this->fields).serverResponseTimeoutRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (this_00 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (this_00,pIVar1,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
                (this_01,(this->fields)._._._.id,(this->fields).localIsOpen == 0,(MethodInfo *)0x0);
      MVDoor_ToggleDoor(this,(this->fields).localIsOpen == 0,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* MVDoor(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
               (MVDoor *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_MethodInfo__Extensions__GetValueOrDefault<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectDocumentationType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).doorPrefab,worldObjects,(MethodInfo *)0x0
              );
    piVar2 = &(this->fields)._._.previewLayerMask;
    *piVar2 = *piVar2 | 0x800;
    piVar3 = &(this->fields)._._.interactionFlags;
    *piVar3 = *piVar3 | 0x10000;
    pMVar4 = (MVDoorObject *)(this->fields)._._.component;
    if (pMVar4 == (MVDoorObject *)0x0) {
      (this->fields).doorObject = (MVDoorObject *)0x0;
    }
    else {
      bVar5 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar4->klass)->_1).naturalAligment < bVar5) ||
         ((((ObjectPrefab__Class *)pMVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject)) {
        FUN_?(pMVar4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->fields).doorObject = pMVar4;
      bVar5 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar4->klass)->_1).naturalAligment < bVar5) ||
         ((((ObjectPrefab__Class *)pMVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject)) {
        FUN_?(pMVar4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(this->fields).doorObject >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iVar12 = iRam_?;
    pMVar4 = (this->fields).doorObject;
    if (pMVar4 != (MVDoorObject *)0x0) {
      (pMVar4->fields).doorLogic = this;
      if (iVar12 != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar4->fields).doorLogic >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
          }
          UNLOCK();
          iVar12 = iRam_?;
        } while (!bVar11);
      }
      (this->fields).doorConfig.name = (String *)0x0;
      (this->fields).doorConfig.beginOpen = 0;
      (this->fields).doorConfig.playersCanOpen = 0;
      (this->fields).doorConfig.reverseOpenDirection = 0;
      (this->fields).doorConfig.field_0xb = 0;
      (this->fields).doorConfig.openValue = 0.0;
      (this->fields).doorConfig.closeValue = 0.0;
      (this->fields).doorConfig.toggleTime = 0.0;
      (this->fields).doorConfig.docType = 0;
      (this->fields).doorConfig.doorType = 0;
      if (iVar12 != 0) {
        uVar7 = (uint)((ulonglong)&(this->fields).doorConfig >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      auStackX_10[0] = 7;
      pOVar13 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_10);
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar14 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,pOVar13,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        hashtable = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar5 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar14->klass->_1).naturalAligment < bVar5) ||
             (hashtable = pDVar14,
             (Dictionary_2_System_Object_System_Object___Class *)
             (pDVar14->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar14);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        pSVar15 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->DoorType;
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        doorType = Extensions::Extensions_GetValueOrDefault_2
                             (hashtable,pSVar15,0,
                              Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_MethodInfo__Extensions__GetValueOrDefault<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                             );
        (this->fields).doorConfig.doorType = doorType;
        pSVar15 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->DocType;
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pOVar13 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                            (doorType,pSVar15,(MethodInfo *)0x0);
        if (pOVar13 != (Object *)0x0) {
          if ((pOVar13->klass->_0).element_class !=
              (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) {
            FUN_?(pOVar13,TypeInfo__MVWorldObjectDocumentationType);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this->fields).doorConfig.docType = *(int32_t *)&pOVar13[1].klass;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVDoor+DoorConfiguration get_DoorConfig() */

MVDoor_DoorConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_DoorConfig
          (MVDoor_DoorConfiguration *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  bVar1 = (this->fields).doorConfig.beginOpen;
  bVar2 = (this->fields).doorConfig.playersCanOpen;
  bVar3 = (this->fields).doorConfig.reverseOpenDirection;
  uVar4 = (this->fields).doorConfig.field_0xb;
  fVar5 = (this->fields).doorConfig.openValue;
  fVar6 = (this->fields).doorConfig.closeValue;
  fVar7 = (this->fields).doorConfig.toggleTime;
  iVar8 = (this->fields).doorConfig.docType;
  iVar9 = (this->fields).doorConfig.doorType;
  __return_storage_ptr__->name = (this->fields).doorConfig.name;
  __return_storage_ptr__->beginOpen = bVar1;
  __return_storage_ptr__->playersCanOpen = bVar2;
  __return_storage_ptr__->reverseOpenDirection = bVar3;
  __return_storage_ptr__->field_0xb = uVar4;
  __return_storage_ptr__->openValue = fVar5;
  __return_storage_ptr__->closeValue = fVar6;
  __return_storage_ptr__->toggleTime = fVar7;
  __return_storage_ptr__->docType = iVar8;
  __return_storage_ptr__->doorType = iVar9;
  return __return_storage_ptr__;
}


/* DoorType get_DoorType() */

DoorType__Enum
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_DoorType
          (MVDoor *this,MethodInfo *method)

{
  return (this->fields).doorConfig.doorType;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.125;
  __return_storage_ptr__->y = -0.0625;
  __return_storage_ptr__->z = -1.439;
  return __return_storage_ptr__;
}


/* Quaternion get_InputConnectorRotation() */

Quaternion *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_InputConnectorRotation
          (Quaternion *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  lStack_1 = (ulonglong)_UNK_? << 0x20;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    pQVar7 = (Quaternion *)(*pcVar5)();
    return pQVar7;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&lStack_1,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void set_IsOpen(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_set_IsOpen
               (MVDoor *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
           IsOpen;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_4 = (ulonglong)uVar3 << 0x20;
  uStack_5 = 0x10000;
  lStack_4 = CONCAT71(lStack_4._1_7_,
                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                       cryptoKey);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uStack_5 = CONCAT22(1,CONCAT11(1,value));
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_7 = lStack_4;
  uStack_8 = uStack_5;
  FUN_?(uVar1,pSVar2,&uStack_7);
  return;
}

