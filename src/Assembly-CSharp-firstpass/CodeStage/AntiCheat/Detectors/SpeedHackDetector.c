
/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Awake(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed_Hack_Detector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene
       + 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).Init.methodPtr)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->
                          static_fields->_Instance_k__BackingField,StringLiteral_Speed_Hack_Detector
                     ,(this->klass->vtable).Init.method);
  if (cVar1 != '\0') {
    FUN_?(this);
  }
  b = (Delegate *)
      FUN_?(
                   TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                   );
  FUN_?(b,this);
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  a = TypeInfo__UnityEngine__SceneManagement__SceneManager->static_fields->sceneLoaded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pUVar3 = 
    TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                *)0x0;
    }
    else {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                *)FUN_?(pDVar2,
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                               );
      if (pUVar4 == (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                     *)0x0) {
        FUN_?(pDVar2,pUVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
    }
    ppUVar6 = &TypeInfo__UnityEngine__SceneManagement__SceneManager->static_fields->sceneLoaded;
    LOCK();
    pUVar7 = *ppUVar6;
    bVar8 = a == pUVar7;
    if (bVar8) {
      *ppUVar6 = pUVar4;
      pUVar7 = a;
    }
    UNLOCK();
    pUVar4 = a;
    if (!bVar8) {
      pUVar4 = pUVar7;
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)ppUVar6 >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    bVar8 = pUVar4 != a;
    a = pUVar4;
  } while (bVar8);
  return;
}


/* Void Dispose() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
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
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
               _Instance_k__BackingField;
      if (pSVar1 != (SpeedHackDetector *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar1->klass->vtable).DisposeInternal.methodPtr)
                  (pSVar1,(pSVar1->klass->vtable).DisposeInternal.method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_DisposeInternal(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_DisposeInternal((ActDetectorBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
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
  if (this != (SpeedHackDetector *)0x0 || pSVar1 != (SpeedHackDetector *)0x0) {
    if (this == (SpeedHackDetector *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pSVar1 == (SpeedHackDetector *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = (pSVar1->fields)._._._._._.m_CachedPtr == (void *)0x0;
    }
    else if (pSVar1 == (SpeedHackDetector *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar3 = pSVar1 == this;
    }
    if (!bVar3) {
      return;
    }
  }
  FUN_?(0);
  return;
}


/* Void OnApplicationPause(Boolean) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnApplicationPause(SpeedHackDetector *this,bool pause,MethodInfo *method)

{
  if (pause == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    (this->fields).ticksOnStart = DVar1._dateData & 0x3fffffffffffffff;
    iVar2 = FUN_?();
    (this->fields).vulnerableTicksOnStart = (longlong)iVar2 * 10000;
    iVar3 = (this->fields).ticksOnStart;
    (this->fields).prevTicks = iVar3;
    (this->fields).prevIntervalTicks = iVar3;
    return;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnDestroy(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_OnDestroy((ActDetectorBase *)this,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene
       + -1;
  return;
}


/* Void OnLevelLoadedCallback() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnLevelLoadedCallback(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.keepAlive == 0) {
    if (TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
        instancesInScene < 2) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).DisposeInternal.methodPtr)
                (this,(this->klass->vtable).DisposeInternal.method);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
             _Instance_k__BackingField;
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
    if (this != (SpeedHackDetector *)0x0 || pSVar1 != (SpeedHackDetector *)0x0) {
      if (this == (SpeedHackDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pSVar1 == (SpeedHackDetector *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = (pSVar1->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pSVar1 == (SpeedHackDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pSVar1 == this;
      }
      if (!bVar3) {
        (*(this->klass->vtable).DisposeInternal.methodPtr)
                  (this,(this->klass->vtable).DisposeInternal.method);
      }
    }
  }
  return;
}


/* Void OnLevelWasLoadedNew(Scene, LoadSceneMode) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnLevelWasLoadedNew
               (SpeedHackDetector *this,Scene scene,LoadSceneMode__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.keepAlive == 0) {
    if (TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
        instancesInScene < 2) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).DisposeInternal.methodPtr)
                (this,(this->klass->vtable).DisposeInternal.method);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
             _Instance_k__BackingField;
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
    if (this != (SpeedHackDetector *)0x0 || pSVar1 != (SpeedHackDetector *)0x0) {
      if (this == (SpeedHackDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pSVar1 == (SpeedHackDetector *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = (pSVar1->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pSVar1 == (SpeedHackDetector *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pSVar1 == this;
      }
      if (!bVar3) {
        (*(this->klass->vtable).DisposeInternal.methodPtr)
                  (this,(this->klass->vtable).DisposeInternal.method);
      }
    }
  }
  return;
}


/* Void PauseDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_PauseDetector(SpeedHackDetector *this,MethodInfo *method)

{
  (this->fields)._.isRunning = 0;
  return;
}


/* Void ResetStartTicks() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_ResetStartTicks(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).ticksOnStart = DVar1._dateData & 0x3fffffffffffffff;
  iVar2 = FUN_?();
  (this->fields).vulnerableTicksOnStart = (longlong)iVar2 * 10000;
  iVar3 = (this->fields).ticksOnStart;
  (this->fields).prevTicks = iVar3;
  (this->fields).prevIntervalTicks = iVar3;
  return;
}


/* Void ResumeDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_ResumeDetector(SpeedHackDetector *this,MethodInfo *method)

{
  if (((this->fields)._.detectionAction != (UnityAction *)0x0) ||
     ((this->fields)._.detectionEventHasListener != 0)) {
    (this->fields)._.isRunning = 1;
  }
  return;
}


/* Void StartDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Speed_Hack_Detector__can_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
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
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
               _Instance_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
               _Instance_k__BackingField;
      if (pSVar2 != (SpeedHackDetector *)0x0) {
        checkInterval = (pSVar2->fields).interval;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
                 _Instance_k__BackingField;
        if (pSVar2 != (SpeedHackDetector *)0x0) {
          falsePositives = (pSVar2->fields).maxFalsePositives;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
                   _Instance_k__BackingField;
          if ((pSVar2 != (SpeedHackDetector *)0x0) && (pSVar1 != (SpeedHackDetector *)0x0)) {
            SpeedHackDetector_StartDetectionInternal
                      (pSVar1,(UnityAction *)0x0,checkInterval,falsePositives,
                       (pSVar2->fields).coolDown,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar4 = StringLiteral__ACTk__Speed_Hack_Detector__can_;
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
  pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar5 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0,pSVar4);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartDetectionAutomatically() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetectionAutomatically(SpeedHackDetector *this,MethodInfo *method)

{
  SpeedHackDetector_StartDetectionInternal
            (this,(UnityAction *)0x0,(this->fields).interval,(this->fields).maxFalsePositives,
             (this->fields).coolDown,(MethodInfo *)0x0);
  return;
}


/* Void StartDetectionInternal(UnityAction, Single, Byte, Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetectionInternal
               (SpeedHackDetector *this,UnityAction *callback,float checkInterval,
               uint8_t falsePositives,int32_t shotsTillCooldown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Speed_Hack_Detector__disa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Speed_Hack_Detector__alre);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Speed_Hack_Detector__has_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ACTk__Speed_Hack_Detector__was_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning == 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = (this->fields)._.detectionEventHasListener;
      if (callback == (UnityAction *)0x0) {
        if (bVar1 == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                    ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__was_,(Object_1 *)this,
                     (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,0,(MethodInfo *)0x0);
          return;
        }
      }
      else if (bVar1 != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__has_,(Object_1 *)this,
                   (MethodInfo *)0x0);
      }
      bVar2 = iRam_? != 0;
      (this->fields)._.detectionAction = callback;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
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
      (this->fields).coolDown = shotsTillCooldown;
      (this->fields).interval = checkInterval;
      (this->fields).maxFalsePositives = falsePositives;
      SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
      (this->fields).currentFalsePositives = 0;
      (this->fields).currentCooldownShots = 0;
      (this->fields)._.isRunning = 1;
      (this->fields)._.started = 1;
      return;
    }
    message = StringLiteral__ACTk__Speed_Hack_Detector__disa;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Speed_Hack_Detector__disa;
    }
  }
  else {
    message = StringLiteral__ACTk__Speed_Hack_Detector__alre;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral__ACTk__Speed_Hack_Detector__alre;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
            ((Object *)message,(Object_1 *)this,(MethodInfo *)0x0);
  return;
}


/* Void StartDetection(UnityAction) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_1(UnityAction *callback,MethodInfo *method)

{
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    checkInterval = (pSVar1->fields).interval;
    pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
    if (pSVar1 != (SpeedHackDetector *)0x0) {
      falsePositives = (pSVar1->fields).maxFalsePositives;
      pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
      if (pSVar1 != (SpeedHackDetector *)0x0) {
        shotsTillCooldown = (pSVar1->fields).coolDown;
        pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
        if (pSVar1 != (SpeedHackDetector *)0x0) {
          SpeedHackDetector_StartDetectionInternal
                    (pSVar1,callback,checkInterval,falsePositives,shotsTillCooldown,
                     (MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetection(UnityAction, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_2(UnityAction *callback,float interval,MethodInfo *method)

{
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 == (SpeedHackDetector *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  falsePositives = (pSVar1->fields).maxFalsePositives;
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    shotsTillCooldown = (pSVar1->fields).coolDown;
    pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
    if (pSVar1 != (SpeedHackDetector *)0x0) {
      SpeedHackDetector_StartDetectionInternal
                (pSVar1,callback,interval,falsePositives,shotsTillCooldown,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetection(UnityAction, Single, Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_3
               (UnityAction *callback,float interval,uint8_t maxFalsePositives,MethodInfo *method)

{
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    shotsTillCooldown = (pSVar1->fields).coolDown;
    pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
    if (pSVar1 != (SpeedHackDetector *)0x0) {
      SpeedHackDetector_StartDetectionInternal
                (pSVar1,callback,interval,maxFalsePositives,shotsTillCooldown,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetection(UnityAction, Single, Byte, Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_4
               (UnityAction *callback,float interval,uint8_t maxFalsePositives,int32_t coolDown,
               MethodInfo *method)

{
  this = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (this != (SpeedHackDetector *)0x0) {
    SpeedHackDetector_StartDetectionInternal
              (this,callback,interval,maxFalsePositives,coolDown,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
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
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
               _Instance_k__BackingField;
      if (pSVar1 != (SpeedHackDetector *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar1->klass->vtable).StopDetectionInternal.methodPtr)
                  (pSVar1,(pSVar1->klass->vtable).StopDetectionInternal.method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void StopDetectionInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StopDetectionInternal(SpeedHackDetector *this,MethodInfo *method)

{
  if ((this->fields)._.started != 0) {
    bVar1 = iRam_? != 0;
    (this->fields)._.detectionAction = (UnityAction *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
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
    (this->fields)._.isRunning = 0;
    (this->fields)._.started = 0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Update(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning != 0) {
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = DVar1._dateData & 0x3fffffffffffffff;
    if (uVar2 - (this->fields).prevTicks < 0x989681) {
      fVar3 = (this->fields).interval * _UNK_?;
      (this->fields).prevTicks = uVar2;
      if ((longlong)fVar3 <= (longlong)(uVar2 - (this->fields).prevIntervalTicks)) {
        iVar4 = FUN_?();
        uVar5 = (this->fields).currentFalsePositives;
        if (_UNK_? <
            (float)((uint)(float)(longlong)
                                 ((((longlong)iVar4 * 10000 - (this->fields).vulnerableTicksOnStart)
                                  + (this->fields).ticksOnStart) - uVar2) & _UNK_?)) {
          bVar6 = uVar5 + 1;
          (this->fields).currentFalsePositives = bVar6;
          if (bVar6 <= (this->fields).maxFalsePositives) {
            (this->fields).currentCooldownShots = 0;
            SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
            (this->fields).prevIntervalTicks = uVar2;
            return;
          }
          (*(this->klass->vtable).OnCheatingDetected.methodPtr)
                    (this,(this->klass->vtable).OnCheatingDetected.method);
        }
        else if (((uVar5 != 0) && (0 < (this->fields).coolDown)) &&
                (iVar4 = (this->fields).currentCooldownShots + 1,
                (this->fields).currentCooldownShots = iVar4, (this->fields).coolDown <= iVar4)) {
          (this->fields).prevIntervalTicks = uVar2;
          (this->fields).currentFalsePositives = 0;
          return;
        }
        (this->fields).prevIntervalTicks = uVar2;
        return;
      }
    }
    else {
      SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* SpeedHackDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector__ctor(SpeedHackDetector *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).interval = 1.0;
  (this->fields).maxFalsePositives = 3;
  (this->fields).coolDown = 0x1e;
  (this->fields)._.autoStart = 1;
  (this->fields)._.keepAlive = 1;
  (this->fields)._.autoDispose = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* SpeedHackDetector get_GetOrCreateInstance() */

SpeedHackDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
SpeedHackDetector_get_GetOrCreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CodeStage__AntiCheat__Detectors__SpeedHackDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::SpeedHackDetector>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
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
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pGVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
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
  if (pGVar2 == (GameObject *)0x0) {
code_?:
    pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar2,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer =
         pGVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)
                     TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields >>
                    0xc);
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
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pGVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
           detectorsContainer;
  if (pGVar2 == (GameObject *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pSVar1 = (SpeedHackDetector *)(*pcVar8)();
    return pSVar1;
  }
  pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                     (pGVar2,
                      CodeStage__AntiCheat__Detectors__SpeedHackDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::SpeedHackDetector>__
                     );
  FUN_?(pOVar9);
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
         _Instance_k__BackingField;
}


/* SpeedHackDetector get_Instance() */

SpeedHackDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
SpeedHackDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
         _Instance_k__BackingField;
}


/* Void set_Instance(SpeedHackDetector) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_set_Instance(SpeedHackDetector *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
  _Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
                    _Instance_k__BackingField >> 0xc);
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
  return;
}

