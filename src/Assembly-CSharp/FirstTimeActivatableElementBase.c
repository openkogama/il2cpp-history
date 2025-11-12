
/* Void DoShow() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_DoShow
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).OnShow.methodPtr)(this,(this->klass->vtable).OnShow.method);
  key = (this->fields).onShowSound;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__get_Item_SoundStyle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 1) {
    return;
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__Styles->static_fields->soundStylesDictionary;
  if ((this_00 == (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0) ||
     (obj = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__get_Item_SoundStyle_
                      ), obj == (Object *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar2 = obj[1].klass;
  if (pOVar2 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException(obj,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pOVar2,0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase_UnRegister(this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  if (this == (FirstTimeActivatableElementBase *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar4 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar4 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar4;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
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


/* Void OnEnable() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnEnable
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if ((this->fields).waitingForDelay == 0) {
    return;
  }
  pIVar1 = FirstTimeActivatableElementBase_ShowDelay(this,(MethodInfo *)0x0);
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
  if (this == (FirstTimeActivatableElementBase *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar6 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar6,pIVar1);
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase_OnFirstTimeState
               (FirstTimeActivatableElementBase *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum latestFirstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableElementBase___OnFirstTimeState_b__33_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (firstTimeState == (FirstTimeState *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (this->fields)._.firstTimeEvent;
  if (iVar2 != -1) {
    pBVar3 = (firstTimeState->fields).bitArray;
    if (pBVar3 == (BitArray *)0x0) goto code_?;
    if ((((pBVar3->fields).m_length <= iVar2) ||
        (bVar4 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                           (pBVar3,iVar2,(MethodInfo *)0x0), bVar4 == 0)) &&
       ((this->fields).isRegistered == 0)) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__FirstTimeActivatableElementBase___OnFirstTimeState_b__33_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
      (this->fields).isRegistered = 1;
      return;
    }
  }
  iVar2 = (this->fields)._.firstTimeEvent;
  if (iVar2 != -1) {
    pBVar3 = (firstTimeState->fields).bitArray;
    if (pBVar3 == (BitArray *)0x0) goto code_?;
    if (((pBVar3->fields).m_length <= iVar2) ||
       (bVar4 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar3,iVar2,(MethodInfo *)0x0), bVar4 == 0)) {
      return;
    }
  }
  FirstTimeActivatableElementBase_UnRegister(this,(MethodInfo *)0x0);
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar5 = (void *)0x0;
  if (this != (FirstTimeActivatableElementBase *)0x0) {
    pvVar5 = (this->fields)._._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,0);
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_Show
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  pFVar1 = this->klass;
  (this->fields)._IsShowing_k__BackingField = 1;
  (*(pFVar1->vtable).OnActivate.methodPtr)();
  if ((this->fields).delayBeforeShown <= 0.0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (*(this->klass->vtable).OnShow.methodPtr)(this,(this->klass->vtable).OnShow.method);
    key = (this->fields).onShowSound;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__get_Item_SoundStyle_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (key == 1) {
      return;
    }
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__Styles->static_fields->soundStylesDictionary;
    if ((this_00 == (Dictionary_2_SoundStyle_UnityEngine_AudioSource_ *)0x0) ||
       (obj = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<SoundStyle,_UnityEngine::AudioSource>__get_Item_SoundStyle_
                        ), obj == (Object *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (Object *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0)
      ;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = obj[1].klass;
    if (pOVar3 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowArgumentNullException(obj,StringLiteral_source,(MethodInfo *)0x0);
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
    (*pcRam_?)(pOVar3,0);
    return;
  }
  pIVar5 = FirstTimeActivatableElementBase_ShowDelay(this,(MethodInfo *)0x0);
  if (pIVar5 == (IEnumerator *)0x0) {
    uVar4 = func_?(&TypeInfo__System__NullReferenceException);
    this_01 = (NullReferenceException *)func_?(uVar4);
    pSVar6 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_01,pSVar6,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (InvalidEnumArgumentException *)func_?(uVar4);
    pSVar6 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_02,pSVar6,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_02,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  if (this == (FirstTimeActivatableElementBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar8 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar8,pIVar5);
  return;
}


/* IEnumerator ShowDelay() */

IEnumerator *
Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_ShowDelay
          (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeActivatableElementBase___ShowDelay_d__26);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__FirstTimeActivatableElementBase___ShowDelay_d__26)
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


/* Void SkipEvent() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_SkipEvent
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableElementBase___SkipEvent_b__38_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_skip_unregistered_even);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isRegistered == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Trying_to_skip_unregistered_even;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatableElementBase___SkipEvent_b__38_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar5 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar4,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar6 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar7 = (longlong)(pLVar6->fields)._size;
    uVar8 = 0;
    if (0 < lVar7) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar6 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar6->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar11 = (pLVar6->fields)._items;
        if (pTVar11 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar11->max_length <= uVar8) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar11->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar4,(BaseEventData *)0x0,this_01,
                           (pMVar5->field7_0x38).rgctx_data[1].method);
        if (bVar12 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar7);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_Start
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeActivatableElementBase_get_IsEventAllowedInMode(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
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
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                    ,0,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pvVar2 = (void *)0x0;
    if (this != (FirstTimeActivatableElementBase *)0x0) {
      pvVar2 = (this->fields)._._._._._.m_CachedPtr;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar2,0);
    return;
  }
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  if (this == (FirstTimeActivatableElementBase *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeState != (FirstTimeState *)0x0) {
    if (this_00 == (UnityAction_2_System_Object_System_Int32_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(this_00->fields)._._.invoke_impl)
              ((this_00->fields)._._.method_code,
               TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,0xffffffff,
               (this_00->fields)._._.method,unaff_RBX);
  }
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)this_00,(MethodInfo *)0x0);
  pAVar6 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar5 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar7 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar5,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar7 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar7;
    pAVar6 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar8 = FUN_?(pDVar5,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
    if (lVar8 == 0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
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
  return;
}


/* Void UnRegister() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase_UnRegister
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableElementBase___UnRegister_b__37_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableElementBase____c___UnRegister_b__37_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableElementBase____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isRegistered != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableElementBase___UnRegister_b__37_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
              );
    (this->fields).isRegistered = 0;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__FirstTimeActivatableElementBase____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FirstTimeActivatableElementBase____c);
    }
    this_01 = TypeInfo__FirstTimeActivatableElementBase____c->static_fields->__9__37_1;
    if (this_01 == (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0) {
      if (*(int *)&(TypeInfo__FirstTimeActivatableElementBase____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FirstTimeActivatableElementBase____c);
      }
      object = TypeInfo__FirstTimeActivatableElementBase____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__FirstTimeActivatableElementBase____c___UnRegister_b__37_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__FirstTimeActivatableElementBase____c->static_fields->__9__37_1 = this_01;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__FirstTimeActivatableElementBase____c->static_fields->__9__37_1 >>
                      0xc);
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
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
              );
  }
  return;
}


/* Void <OnFirstTimeState>b__33_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase__OnFirstTimeState_b__33_0
               (FirstTimeActivatableElementBase *this,IFirstTimeElementActivator *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IFirstTimeElementActivator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator) {
        pVVar5 = &(pIVar3->vtable).RegisterActivatableElement +
                 pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,this,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <SkipEvent>b__38_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase__SkipEvent_b__38_0
               (FirstTimeActivatableElementBase *this,IFirstTimeElementActivator *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <UnRegister>b__37_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase__UnRegister_b__37_0
               (FirstTimeActivatableElementBase *this,IFirstTimeElementActivator *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IFirstTimeElementActivator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator) {
        pVVar5 = &(pIVar3->vtable).RegisterActivatableElement +
                 (pIVar3->interfaceOffsets[uVar2].offset + 1);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,this,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Boolean get_IsBlocked() */

bool Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase_get_IsBlocked
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableElementBase____c__DisplayClass35_0___get_IsBlocked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableElementBase____c__DisplayClass35_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FirstTimeActivatableElementBase____c__DisplayClass35_0)
  ;
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar3 = iRam_? != 0;
  object[1].monitor = (MonitorData *)this;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
  if ((this->fields).checkForStackBlocking == 0) {
    return 0;
  }
  *(undefined1 *)&object[1].klass = 0;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,object,
             MethodInfo__FirstTimeActivatableElementBase____c__DisplayClass35_0___get_IsBlocked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return *(bool *)&object[1].klass;
}


/* Boolean get_IsEventAllowedInMode() */

bool Assembly-CSharp.dll::FirstTimeActivatableElementBase::
     FirstTimeActivatableElementBase_get_IsEventAllowedInMode
               (FirstTimeActivatableElementBase *this,MethodInfo *method)

{
  if ((this->fields).eventAllowedInAnyMode != 0) {
    return 1;
  }
  iVar1 = (this->fields).eventAllowedForMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    return iVar1 == (pGVar2->fields).gameMode;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

