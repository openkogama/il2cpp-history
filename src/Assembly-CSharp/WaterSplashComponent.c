
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Initialize
               (WaterSplashComponent *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IMovable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).movingObject = obj;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).movingObject >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (obj == (IMovable *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pfVar7 = (float *)FUN_?(auStack_8,1,TypeInfo__IMovable,obj);
  fVar9 = pfVar7[1];
  fVar10 = pfVar7[2];
  fVar11 = pfVar7[3];
  fVar12 = pfVar7[4];
  fVar13 = pfVar7[5];
  (this->fields).bounds.m_Center.x = *pfVar7;
  (this->fields).bounds.m_Center.y = fVar9;
  (this->fields).bounds.m_Center.z = fVar10;
  (this->fields).bounds.m_Extents.x = fVar11;
  (this->fields).bounds.m_Extents.y = fVar12;
  (this->fields).bounds.m_Extents.z = fVar13;
  uVar14 = (this->fields).bounds.m_Center.x;
  uVar15 = (this->fields).bounds.m_Center.y;
  fVar10 = (this->fields).bounds.m_Center.z;
  puVar16 = (undefined8 *)FUN_?(auStack_17,2,TypeInfo__IMovable,obj);
  uVar18 = *puVar16;
  fVar9 = *(float *)(puVar16 + 1);
  (this->fields).offset.x = (float)uVar14 - (float)uVar18;
  (this->fields).offset.y = (float)uVar15 - (float)((ulonglong)uVar18 >> 0x20);
  (this->fields).offset.z = fVar10 - fVar9;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar19 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar19 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar6 = (code *)FUN_?(&UNK_?);
    if (pcVar6 == (code *)0x0) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar19,1);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Start
               (WaterSplashComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pWVar3 = (pMVar2->fields).waterPlaneManager, pWVar3 == (WaterPlaneManager *)0x0))
      goto code_?;
      bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pWVar3 = (pMVar2->fields).waterPlaneManager, pWVar3 != (WaterPlaneManager *)0x0)) &&
       ((pWVar3->fields).splashController != (SplashController *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SplashController);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SplashController);
      }
      TypeInfo__SplashController->static_fields->currentObjectID =
           TypeInfo__SplashController->static_fields->currentObjectID + 1;
      (this->fields).waterObjectID = TypeInfo__SplashController->static_fields->currentObjectID;
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (WaterSplashComponent *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar6 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar6,0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Update
               (WaterSplashComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IMovable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 != (WaterPlaneManager *)0x0)) {
    bVar3 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((this->fields).movingObject != (IMovable *)0x0) {
      puVar4 = (undefined8 *)FUN_?(&VStack_5,2,TypeInfo__IMovable);
      uVar6 = (this->fields).offset.x;
      uVar7 = (this->fields).offset.y;
      fVar8 = (this->fields).offset.z;
      aBStack_9[0].m_Center._0_8_ = *puVar4;
      fVar10 = *(float *)(puVar4 + 1);
      bVar11 = cRam_? == '\0';
      (this->fields).bounds.m_Center.x = (float)uVar6 + (float)aBStack_9[0].m_Center._0_8_;
      (this->fields).bounds.m_Center.y = (float)uVar7 + SUB84(aBStack_9[0].m_Center._0_8_,4);
      (this->fields).bounds.m_Center.z = fVar8 + fVar10;
      if (bVar11) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 != (WaterPlaneManager *)0x0)) {
        this_00 = (pWVar2->fields).splashController;
        uVar12._0_4_ = (this->fields).bounds.m_Extents.y;
        uVar12._4_4_ = (this->fields).bounds.m_Extents.z;
        uVar13._0_4_ = (this->fields).bounds.m_Center.x;
        uVar13._4_4_ = (this->fields).bounds.m_Center.y;
        uVar14 = *(undefined8 *)&(this->fields).bounds.m_Center.z;
        if (((this->fields).movingObject != (IMovable *)0x0) &&
           (puVar4 = (undefined8 *)FUN_?(aBStack_9,0,TypeInfo__IMovable),
           this_00 != (SplashController *)0x0)) {
          VStack_5._0_8_ = *puVar4;
          VStack_5.z = *(float *)(puVar4 + 1);
          aBStack_9[0].m_Center._0_8_ = uVar13;
          aBStack_9[0]._8_8_ = uVar14;
          aBStack_9[0].m_Extents._4_8_ = uVar12;
          SplashController::SplashController_WaterSplash
                    (this_00,aBStack_9,&VStack_5,(this->fields).waterObjectID,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

