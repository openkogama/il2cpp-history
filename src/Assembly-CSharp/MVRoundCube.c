
/* Void Destroy() */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_Destroy(MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    pEVar2 = (pMVar1->fields).OnResetWorldDone;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    pEVar3 = (EventHandler_1_EventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar2 = (EventHandler_1_EventArgs_ *)0x0;
    if (pEVar3 != (EventHandler_1_EventArgs_ *)0x0) {
      if (pEVar3->klass == TypeInfo__System__EventHandler<System::EventArgs>) {
        pEVar2 = pEVar3;
      }
      pEVar4 = TypeInfo__System__EventHandler<System::EventArgs>;
      if (pEVar2 == (EventHandler_1_EventArgs_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnResetWorldDone = pEVar2;
    pPVar5 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar5 == (PrefabPool *)0x0) ||
       (pWVar6 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar5,(MethodInfo *)0x0),
       pWVar6 == (WinningConditionManager *)0x0)) goto code_?;
    this_01 = MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType_6
                        (pWVar6,
                         TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                        );
    if (this_01 != (TimeAttackFlagReachedClient *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pPVar5 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar5 != (PrefabPool *)0x0) {
        pWVar6 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar5,(MethodInfo *)0x0);
        id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                        (MethodInfo *)0x0);
        if (pWVar6 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                    (pWVar6,(int32_t)id,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Couldn_t_find_TimeLimit_winning_,(MethodInfo *)0x0);
  func_?(this_02,0,MethodInfo__MVRoundCube__Destroy__);
  pEVar3 = extraout_ECX;
  pEVar4 = extraout_EDX;
code_?:
  func_?(pEVar3,pEVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Int32 GetTimeLeft() */

int32_t Assembly-CSharp.dll::MVRoundCube::MVRoundCube_GetTimeLeft
                  (MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_interval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar2 = (int *)func_?();
      iVar3 = *piVar2;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar4,(MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pGVar6 = InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar4,(MethodInfo *)0x0);
          if (pGVar6 != (GameObject *)0x0) {
            iVar3 = (int)(pGVar6->fields)._.m_CachedPtr + (iVar3 * 1000 - iVar5);
            iVar5 = 0;
            if (-1 < iVar3) {
              iVar5 = iVar3;
            }
            return iVar5;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  iVar5 = (*pcVar7)();
  return iVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_Initialize(MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    a = (pMVar1->fields).OnResetWorldDone;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      pEVar4 = TypeInfo__System__EventHandler<System::EventArgs>;
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    *(Delegate **)(unaff_EDI + 0x4c) = pDVar3;
    this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = (WinningConditionManager *)
                PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_01,(MethodInfo *)0x0);
      args = (Object__Array *)func_?(TypeInfo__System__Object,0);
      if (this_02 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition_6
                  (this_02,args,
                   TimeLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeLimitClient>_System__Object____
                  );
        (this->fields).initializedInWorld = 1;
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pDVar2 = extraout_ECX;
  pEVar4 = extraout_EDX;
code_?:
  func_?(pDVar2,pEVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String MakeTimeIntoText(Int32) */

String * Assembly-CSharp.dll::MVRoundCube::MVRoundCube_MakeTimeIntoText
                   (MVRoundCube *this,int32_t time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  fVar2 = (float)time / _UNK_?;
  iVar3 = (int)fVar2 % 0x3c;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                    ((float)(int)fVar2 / _UNK_?,(MethodInfo *)0x0);
  iStack_5 = iVar4;
  if (0x3b < iVar4) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    time = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     ((float)iVar4 / _UNK_?,(MethodInfo *)0x0);
    iVar6 = (int)((ulonglong)((longlong)iStack_5 * 0x77777777) >> 0x20) - iStack_5;
    iStack_5 = iStack_5 + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0x3c;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&time);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)pSVar1,arg1,(Object *)::StringLiteral__,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar7 = TypeInfo__System__String->static_fields->Empty;
  if (iVar3 < 10) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar7,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar8 = (String *)func_?(&stack0xfffffff4,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(pSVar7,pSVar8,(MethodInfo *)0x0);
  pSVar7 = TypeInfo__System__String->static_fields->Empty;
  if (iStack_5 < 10) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar7,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar8 = (String *)func_?(&iStack_5);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar7 = mscorlib.dll::System::String::String_Concat_2(pSVar7,pSVar8,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,pSVar7,::StringLiteral__,pSVar8,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void OnResetWorldDone(Object, EventArgs) */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_OnResetWorldDone
               (MVRoundCube *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (WinningConditionManager *)0x0) {
      pTVar1 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (this_01,
                          TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                         );
      if (pTVar1 != (TimeAttackFlagReachedClient *)0x0) {
        return;
      }
      this_02 = (IsolatedStorageException *)func_?();
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1
                (this_02,StringLiteral_Couldn_t_find_TimeLimit_winning_,(MethodInfo *)0x0);
      func_?();
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVRoundCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube__ctor
               (MVRoundCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVRoundCubePrefab(this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    iVar1 = (this->fields)._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar1 & 0xffffdfff | 0x8000;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRoundCube::MVRoundCube_get_DocumentationType
          (MVRoundCube *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_RoundCube;
}


/* Int32 get_DurationInMilliseconds() */

int32_t Assembly-CSharp.dll::MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                  (MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_interval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pIStack2 = TypeInfo__System__Int32;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pIStack2 = (Int32__Class *)pPVar1;
        piVar3 = (int *)func_?();
        return *piVar3 * 1000;
      }
      goto code_?;
    }
  }
  pIStack2 = (Int32__Class *)0x0;
  func_?();
  pIStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

