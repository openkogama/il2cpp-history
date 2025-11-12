
/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_DisposeInternal(ActDetectorBase *this,MethodInfo *method)

{
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
  pvVar1 = (void *)0x0;
  if (this != (ActDetectorBase *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar1,0);
  return;
}


/* Boolean Init(ActDetectorBase, String) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_Init
               (ActDetectorBase *this,ActDetectorBase *instance,String *detectorName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___self_destroying__other_instanc);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (instance != (ActDetectorBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((instance->fields)._._._._.m_CachedPtr != (void *)0x0) {
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
      if (this == (ActDetectorBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar1 = (instance->fields)._._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar1 = instance == this;
      }
      if ((!bVar1) && ((instance->fields).keepAlive != 0)) {
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                           ((Object_1 *)this,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral__ACTk__,pSVar2,
                            StringLiteral___self_destroying__other_instanc,(MethodInfo *)0x0);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)pSVar2,(Object_1 *)pGVar3,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)this,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
            ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  return 1;
}


/* Void OnApplicationQuit() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnApplicationQuit(ActDetectorBase *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).DisposeInternal.methodPtr)
            (this,(this->klass->vtable).DisposeInternal.method);
  return;
}


/* Void OnCheatingDetected() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnCheatingDetected(ActDetectorBase *this,MethodInfo *method)

{
  if ((this->fields).detectionAction != (UnityAction *)0x0) {
    pUVar1 = (this->fields).detectionAction;
    (*(pUVar1->fields)._._.invoke_impl)((pUVar1->fields)._._.method_code);
  }
  if ((this->fields).detectionEventHasListener != 0) {
    this_00 = (this->fields).detectionEvent;
    if (this_00 == (UnityEvent *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pAVar3 = this->klass;
  if ((this->fields).autoDispose == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar3->vtable).__unknown_1.methodPtr)(this,(pAVar3->vtable).__unknown_1.method);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar3->vtable).DisposeInternal.methodPtr)(this,(pAVar3->vtable).DisposeInternal.method);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnDestroy(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).__unknown_1.methodPtr)(this);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)(pvVar1);
    if (iVar4 == 0) {
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponentsInChildren<MethodInfo::UnityEngine::Component>______
                         );
      if (pOVar5 == (Object__Array *)0x0) goto code_?;
      if ((int)pOVar5->max_length < 3) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
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
                  ((Object_1 *)pGVar6,0.0,(MethodInfo *)0x0);
        return;
      }
    }
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this,(MethodInfo *)0x0);
    if ((pSVar7 == StringLiteral_Anti_Cheat_Toolkit_Detectors) ||
       ((((pSVar7 != (String *)0x0 && (StringLiteral_Anti_Cheat_Toolkit_Detectors != (String *)0x0))
         && ((pSVar7->fields)._stringLength ==
             (StringLiteral_Anti_Cheat_Toolkit_Detectors->fields)._stringLength)) &&
        (bVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar7->fields)._firstChar,
                            (uint8_t *)
                            &(StringLiteral_Anti_Cheat_Toolkit_Detectors->fields)._firstChar,
                            (longlong)(pSVar7->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar8 != 0)))) {
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          CodeStage__AntiCheat__Detectors__ActDetectorBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<CodeStage::AntiCheat::Detectors::ActDetectorBase>______
                         );
      if (pOVar5 == (Object__Array *)0x0) goto code_?;
      if ((int)pOVar5->max_length < 2) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,0);
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
        pvVar1 = (void *)0x0;
        if (pGVar6 != (GameObject *)0x0) {
          pvVar1 = (pGVar6->fields)._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar1,0);
        return;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnDisable(ActDetectorBase *this,MethodInfo *method)

{
  if ((this->fields).started != 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).__unknown_2.methodPtr)(this,(this->klass->vtable).__unknown_2.method);
    return;
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_OnEnable(ActDetectorBase *this,MethodInfo *method)

{
  if ((this->fields).started == 0) {
    return;
  }
  if ((((this->fields).detectionEventHasListener == 0) &&
      ((this->fields).detectionAction == (UnityAction *)0x0)) &&
     (cVar1 = (*(this->klass->vtable).DetectorHasAdditionalCallbacks.methodPtr)
                        (this,(this->klass->vtable).DetectorHasAdditionalCallbacks.method),
     cVar1 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).__unknown_3.methodPtr)(this,(this->klass->vtable).__unknown_3.method);
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
     ActDetectorBase_Start(ActDetectorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
           detectorsContainer;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                     ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  if ((pSVar3 == StringLiteral_Anti_Cheat_Toolkit_Detectors) ||
     ((((pSVar3 != (String *)0x0 && (StringLiteral_Anti_Cheat_Toolkit_Detectors != (String *)0x0))
       && ((pSVar3->fields)._stringLength ==
           (StringLiteral_Anti_Cheat_Toolkit_Detectors->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar3->fields)._firstChar,
                          (uint8_t *)
                          &(StringLiteral_Anti_Cheat_Toolkit_Detectors->fields)._firstChar,
                          (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer =
         pGVar1;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                     TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields >>
                    0xc);
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
code_?:
  if (((this->fields).autoStart != 0) && ((this->fields).started == 0)) {
    (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  }
  return;
}

