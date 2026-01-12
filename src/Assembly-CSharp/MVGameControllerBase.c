
/* Void AlternatePortTest() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_AlternatePortTest
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Testing_alternate_port_by_settin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Testing_alternate_port_by_settin,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if ((pGVar1 != (GameSessionData *)0x0) &&
     (pSVar2 = (pGVar1->fields).serverIP, pSVar2 != (String *)0x0)) {
    startIndex = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                           (&(pSVar2->fields)._firstChar,0x3a,(pSVar2->fields)._stringLength,
                            (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 != (GameSessionData *)0x0) &&
       (pSVar2 = (pGVar1->fields).serverIP, pSVar2 != (String *)0x0)) {
      pSVar2 = mscorlib.dll::System::String::String_Remove_1(pSVar2,startIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_3[0]._pointer._value = (void *)0x0;
      aRStack_3[0]._length = 0;
      aRStack_3[0]._12_4_ = 0;
      str2 = mscorlib.dll::System::Number::Number_FormatInt32
                       (10000,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_5
                         (pSVar2,::StringLiteral__,str2,(MethodInfo *)0x0);
      if (pGVar1 != (GameSessionData *)0x0) {
        bVar4 = iRam_? != 0;
        (pGVar1->fields).serverIP = pSVar2;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&pGVar1->fields >> 0xc);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ApplicationQuit(QuitBaseCallback) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ApplicationQuit
               (QuitBaseCallback *applicationQuitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Application_quit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)applicationQuitObject;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar6 != (MVGameControllerBase *)0x0) {
      if ((pMVar6->fields).quitHasBeenCalled == 0) {
        (pMVar6->fields).quitHasBeenCalled = 1;
        this = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this,object,
                   MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Awake
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  BrowserComm_MethodInfo__UnityEngine__Component__GetComponentInChildren<BrowserComm>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OverrideMaterials_MethodInfo__UnityEngine__Component__GetComponentInChildren<OverrideMaterials>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&AudioManager_MethodInfo__UnityEngine__Component__GetComponent<AudioManager>__);
    LOCK();
    UNLOCK();
    FUN_?(&LevelLoader_MethodInfo__UnityEngine__Component__GetComponent<LevelLoader>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MVUtils_MethodInfo__UnityEngine__GameObject__AddComponent<MVUtils>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LoadStats);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameControllerBase__OnRTGAppInitialize__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    FUN_?(&PrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PrefabPool>_PrefabPool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Styles_MethodInfo__UnityEngine__Object__Instantiate<Styles>_Styles__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WaterPlaneManager_MethodInfo__UnityEngine__Object__Instantiate<WaterPlaneManager>_WaterPlaneManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTGAppInitializedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeReward);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->instance >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
              (this_01,MVUtils_MethodInfo__UnityEngine__GameObject__AddComponent<MVUtils>__);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Build_Info___Version__3_5_20_0__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    message = StringLiteral_Build_Info___Version__3_5_20_0__;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    PlayerPrefsManager::PlayerPrefsManager_EarlyInitialize((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase___InitRegionDependent_d__162);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    routine = (IEnumerator *)
              FUN_?(TypeInfo__MVGameControllerBase___InitRegionDependent_d__162);
    bVar5 = iRam_? != 0;
    *(undefined4 *)&routine[1].klass = 0;
    routine[2].klass = (IEnumerator__Class *)this;
    if (bVar5) {
      uVar1 = (uint)((ulonglong)(routine + 2) >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    pSVar6 = (this->fields).styles;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar6 = (Styles *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pSVar6,parent,1,
                        Styles_MethodInfo__UnityEngine__Object__Instantiate<Styles>_Styles__UnityEngine__Transform__bool_
                       );
    bVar5 = iRam_? != 0;
    (this->fields).styles = pSVar6;
    if (bVar5) {
      uVar1 = (uint)((ulonglong)&(this->fields).styles >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pLVar7 = (LoadStats *)FUN_?(TypeInfo__LoadStats);
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar8 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    DStackX_8._dateData = 0;
    mscorlib.dll::System::DateTime::DateTime__ctor_6
              (&DStackX_8,0x7b2,1,1,0,0,0,DateTimeKind__Enum_Utc,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = DStackX_8._dateData & 0x3fffffffffffffff;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar9 = (double)(longlong)((DVar8._dateData & 0x3fffffffffffffff) - uVar2) * _UNK_?;
    dVar10 = _UNK_?;
    if ((_UNK_? < dVar9) || (dVar10 = _UNK_?, dVar9 < _UNK_?)) {
      dVar9 = dVar10;
    }
    if (pLVar7 != (LoadStats *)0x0) {
      bVar5 = iRam_? != 0;
      (pLVar7->fields).GameStartTime = dVar9;
      (this->fields).loadStats = pLVar7;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(this->fields).loadStats >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                ((Object *)(this->fields).prefabPool,
                 PrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PrefabPool>_PrefabPool_);
      pLVar11 = (LevelLoader *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           LevelLoader_MethodInfo__UnityEngine__Component__GetComponent<LevelLoader>__
                          );
      bVar5 = iRam_? != 0;
      (this->fields).levelLoader = pLVar11;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(this->fields).levelLoader >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pAVar12 = (AudioManager *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           AudioManager_MethodInfo__UnityEngine__Component__GetComponent<AudioManager>__
                          );
      bVar5 = iRam_? != 0;
      (this->fields).audioManager = pAVar12;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(this->fields).audioManager >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pBVar13 = (BrowserComm *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_GetComponentInChildren_1
                          ((Component *)this,
                           BrowserComm_MethodInfo__UnityEngine__Component__GetComponentInChildren<BrowserComm>__
                          );
      bVar5 = iRam_? != 0;
      (this->fields).browserComm = pBVar13;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(this->fields).browserComm >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pOVar14 = (OverrideMaterials *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_GetComponentInChildren_1
                          ((Component *)this,
                           OverrideMaterials_MethodInfo__UnityEngine__Component__GetComponentInChildren<OverrideMaterials>__
                          );
      bVar5 = iRam_? != 0;
      (this->fields).overrideMaterials = pOVar14;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(this->fields).overrideMaterials >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pTVar15 = (TimeReward *)FUN_?(TypeInfo__TimeReward);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TimeReward__RewardDone);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar16 = (TimeReward_RewardStateBase *)FUN_?(TypeInfo__TimeReward__RewardDone);
      (pTVar15->fields).rewardStateBase = pTVar16;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&pTVar15->fields >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      iVar17 = iRam_?;
      (this->fields).timeReward = pTVar15;
      if (iVar17 != 0) {
        uVar1 = (uint)((ulonglong)&(this->fields).timeReward >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__CheatHandling__ObscuredCheatingDetected__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__CheatHandling__SpeedHackDetected__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pNVar18 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar18,(Object *)0x0,MethodInfo__CheatHandling__SpeedHackDetected__,
                 (MethodInfo *)0x0);
      pSVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
                SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
      if (pSVar19 != (SpeedHackDetector *)0x0) {
        shotsTillCooldown = (pSVar19->fields).coolDown;
        pSVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector
                  ::SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
        if (pSVar19 != (SpeedHackDetector *)0x0) {
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
          SpeedHackDetector_StartDetectionInternal
                    (pSVar19,(UnityAction *)pNVar18,_UNK_?,3,shotsTillCooldown,
                     (MethodInfo *)0x0);
          pNVar18 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar18,(Object *)0x0,MethodInfo__CheatHandling__ObscuredCheatingDetected__,
                     (MethodInfo *)0x0);
          this_02 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                    ObscuredCheatingDetector::ObscuredCheatingDetector_get_GetOrCreateInstance
                              ((MethodInfo *)0x0);
          if (this_02 != (ObscuredCheatingDetector *)0x0) {
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_StartDetectionInternal
                      (this_02,(UnityAction *)pNVar18,(MethodInfo *)0x0);
            pAVar20 = (this->fields).audioBuild;
            if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__AudioEventHandler);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            TypeInfo__AudioEventHandler->static_fields->audioBuild = pAVar20;
            if (iRam_? != 0) {
              uVar1 = (uint)((ulonglong)TypeInfo__AudioEventHandler->static_fields >> 0xc);
              uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
              do {
                uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar3 == *puVar4;
                if (bVar5) {
                  *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
              FUN_?();
            }
            pOVar21 = RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
            b = (Delegate *)FUN_?(TypeInfo__RTG__RTGAppInitializedHandler);
            pMVar22 = MethodInfo__MVGameControllerBase__OnRTGAppInitialize__;
            bVar5 = iRam_? != 0;
            (b->fields).method_ptr =
                 MethodInfo__MVGameControllerBase__OnRTGAppInitialize__->virtualMethodPointer;
            (b->fields).method = pMVar22;
            (b->fields).m_target = (Object *)this;
            if (bVar5) {
              uVar1 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
              uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
              do {
                uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar3 == *puVar4;
                if (bVar5) {
                  *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            uVar23 = pMVar22->parameters_count;
            (b->fields).method_code = b;
            if (((pMVar22->flags & 0x10) == 0) || (uVar23 != 0)) {
              (b->fields).method_code = (b->fields).m_target;
              puVar24 = (b->fields).method_ptr;
            }
            else {
              puVar24 = &UNK_?;
            }
            (b->fields).invoke_impl = puVar24;
            (b->fields).extra_arg = FUN_?;
            if (pOVar21 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__RTG__RTGAppInitializedHandler);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              a = pOVar21[2].klass;
              do {
                pOVar25 = (Object__Class *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)a,b,(MethodInfo *)0x0);
                pOVar26 = (Object__Class *)0x0;
                if (pOVar25 != (Object__Class *)0x0) {
                  if ((RTGAppInitializedHandler__Class *)(pOVar25->_0).image ==
                      TypeInfo__RTG__RTGAppInitializedHandler) {
                    pOVar26 = pOVar25;
                  }
                  if (pOVar26 == (Object__Class *)0x0) {
                    FUN_?(pOVar25);
                    pcVar27 = (code *)swi(3);
                    (*pcVar27)();
                    return;
                  }
                }
                LOCK();
                pOVar25 = pOVar21[2].klass;
                bVar5 = a == pOVar25;
                if (bVar5) {
                  pOVar21[2].klass = pOVar26;
                  pOVar25 = a;
                }
                UNLOCK();
                pOVar26 = a;
                if (!bVar5) {
                  pOVar26 = pOVar25;
                }
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)(pOVar21 + 2) >> 0xc);
                  uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                  do {
                    uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                    puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                bVar5 = pOVar26 != a;
                a = pOVar26;
              } while (bVar5);
              this_00 = (this->fields).themeRepository;
              if (this_00 != (ThemeRepository *)0x0) {
                ThemeRepository::ThemeRepository_Initialize(this_00,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UpdateController::UpdateController_AddUpdateObject
                          ((IUpdatecontrollerSubscriberUpdate *)this,
                           UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MeshDataPool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_03 = (MeshDataPool *)FUN_?(TypeInfo__MeshDataPool);
                MeshDataPool::MeshDataPool__ctor(this_03,(MethodInfo *)0x0);
                bVar5 = iRam_? != 0;
                TypeInfo__MeshDataPool->static_fields->instance = this_03;
                if (bVar5) {
                  uVar1 = (uint)((ulonglong)TypeInfo__MeshDataPool->static_fields >> 0xc);
                  uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                  do {
                    uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                    puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                pMVar28 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (pMVar28 != (MVGameControllerBase *)0x0) {
                  pWVar29 = (WaterPlaneManager *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)(pMVar28->fields).waterPlaneManagerPrefab,
                                       WaterPlaneManager_MethodInfo__UnityEngine__Object__Instantiate<WaterPlaneManager>_WaterPlaneManager_
                                      );
                  bVar5 = iRam_? != 0;
                  (this->fields).waterPlaneManager = pWVar29;
                  if (bVar5) {
                    uVar1 = (uint)((ulonglong)&(this->fields).waterPlaneManager >> 0xc);
                    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                    do {
                      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                      LOCK();
                      bVar5 = uVar3 == *puVar4;
                      if (bVar5) {
                        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pcVar27 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar27 = (code *)FUN_?(&UNK_?);
                    if (pcVar27 == (code *)0x0) {
                      uVar30 = func_?(&UNK_?);
                      FUN_?(uVar30,0);
                      pcVar27 = (code *)swi(3);
                      (*pcVar27)();
                      return;
                    }
                  }
                  pcRam_? = pcVar27;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void CleanUp() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_CleanUp
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameLoader);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MonoBehaviour);
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) goto code_?;
  if (((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pWVar3 = (pMVar2->fields).worldNetwork,
     (pWVar3->fields)._.worldObjectClientManager != (MVWorldObjectClientManagerNetwork *)0x0)) {
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Cleanup
              ((pWVar3->fields)._.worldObjectClientManager,(MethodInfo *)0x0);
    pLVar4 = (pMVar2->fields)._LogicObjectManager_k__BackingField;
    if (pLVar4 == (LogicObjectManagerClient *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(pLVar4->fields)._.logicWorldObjects;
    if (this_00 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
              );
  }
  if ((pMVar2->fields)._MaterialRepository_k__BackingField != (MVMaterialRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVMaterialRepository);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)TypeInfo__MVMaterialRepository->static_fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PricesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__PricesManager->static_fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Component *)
              TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (this_01 == (Component *)0x0) goto code_?;
    bVar10 = (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment;
    if (((this_01->klass->_1).naturalAligment < bVar10) ||
       ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
      FUN_?(this_01);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
    if (pGVar12 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,0,(MethodInfo *)0x0);
  }
  this_02 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_02 != (MainCameraManager *)0x0) &&
     (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_02,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,0,(MethodInfo *)0x0);
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar12 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar12,0,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GameLoader);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
      SceneManager_LoadSceneAsyncNameIndexInternal
                ((String *)0x0,0,(LoadSceneParameters)0x0,1,(MethodInfo *)0x0);
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      iVar14 = (*pcRam_?)();
      UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
      SceneManager_GetSceneAt(iVar14 + -1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GameLoader);
      }
      TypeInfo__GameLoader->static_fields->applicationStartUp = 0;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CleanUpPortal() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_CleanUpPortal
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MonoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_PostResetCleanup((MethodInfo *)0x0);
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
  GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup((MethodInfo *)0x0);
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
      if (pSVar1 == (SpeedHackDetector *)0x0) goto code_?;
      (*(pSVar1->klass->vtable).DisposeInternal.methodPtr)
                (pSVar1,(pSVar1->klass->vtable).DisposeInternal.method);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
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
  if (pOVar2 != (ObscuredCheatingDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar2 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
      if (pOVar2 == (ObscuredCheatingDetector *)0x0) goto code_?;
      (*(pOVar2->klass->vtable).DisposeInternal.methodPtr)
                (pOVar2,(pOVar2->klass->vtable).DisposeInternal.method);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
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
  if (pIVar3 != (InjectionDetector *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__InjectionDetector->static_fields->
               _Instance_k__BackingField;
      if (pIVar3 == (InjectionDetector *)0x0) goto code_?;
      (*(pIVar3->klass->vtable).DisposeInternal.methodPtr)
                (pIVar3,(pIVar3->klass->vtable).DisposeInternal.method);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Component *)TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (this_00 != (Component *)0x0) {
    bVar4 = (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment;
    if (((this_00->klass->_1).naturalAligment < bVar4) ||
       ((this_00->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
      FUN_?(this_00);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (this_00,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
  this_01 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_01 != (MainCameraManager *)0x0) &&
     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar6 == (GameObject *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pvVar7 = (pGVar6->fields)._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar7,0);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DeleteScreenPlayerPrefs() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_DeleteScreenPlayerPrefs
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Screenmanager_Is_Fullscreen_mode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenmanager_Resolution_Height);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenmanager_Resolution_Width);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Is_Fullscreen_mode,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Height,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Screenmanager_Resolution_Width;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = &puStackX_8;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      puStackX_8 = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        puStackX_8 = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = puStackX_8;
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&puStack_2);
  return;
}


/* IntPtr FindWindow(String, String) */

void * Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_FindWindow
                 (String *className,String *windowName,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 10;
    uStack_2 = 10;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 0x10;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  lVar8 = FUN_?(className);
  lVar9 = FUN_?(windowName);
  pvVar10 = (void *)(*pcRam_?)(lVar8,lVar9);
  if (lVar8 != 0) {
    CoTaskMemFree(lVar8);
  }
  if (lVar9 != 0) {
    CoTaskMemFree(lVar9);
  }
  return pvVar10;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_FixedUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._ShuttingDown_k__BackingField != 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  state = UpdateController::UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
    if ((uint)pLVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdateController::UpdateController_FixedUpdateList
              (state,*(List_1_PriorityDataFixedUpdate_ **)((longlong)pLVar3->vector + lVar2 + -0x20)
               ,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ForceEmbedSite(String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ForceEmbedSite
               (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Forcing_embed_site_with_URL__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Forcing_embed_site_with_URL__,url,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if (TypeInfo__MVGameControllerBase->static_fields->instance == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar3 == (MVGameControllerBase *)0x0) ||
     (pEVar4 = (pMVar3->fields).embeddedPlayerConfig, pEVar4 == (EmbeddedPlayerConfig *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__,url,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Uri);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  pUStackX_10 = (Uri *)0x0;
  if (*(int *)&(TypeInfo__System__Uri->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar5 = System.dll::System::Uri::Uri_TryCreate
                     (url,UriKind__Enum_Absolute,&pUStackX_10,(MethodInfo *)0x0);
  if (bVar5 == 0) {
code_?:
    pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__WWWTranscoder);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    host = pSVar1;
    if (url != (String *)0x0) {
      iVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                         (&(url->fields)._firstChar,0x25,(url->fields)._stringLength,
                          (MethodInfo *)0x0);
      pSVar8 = pSVar1;
      if (iVar7 == -1) {
        iVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                           (&(url->fields)._firstChar,0x2b,(url->fields)._stringLength,
                            (MethodInfo *)0x0);
        pSVar8 = (String *)(ulonglong)(iVar7 == -1);
      }
      host = url;
      if ((char)pSVar8 == '\0') {
        if (pEVar6 == (Encoding *)0x0) goto code_?;
        pBVar9 = (Byte__Array *)
                  (*(pEVar6->klass->vtable).GetBytes_1.methodPtr)
                            (pEVar6,url,(pEVar6->klass->vtable).GetBytes_1.method);
        if (*(int *)&(TypeInfo__UnityEngine__WWWTranscoder->_1).field_0x1c == 0) {
          FUN_?();
        }
        pBVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWTranscoder::
                  WWWTranscoder_URLDecode(pBVar9,(MethodInfo *)0x0);
        host = (String *)(*(pEVar6->klass->vtable).GetString.methodPtr)(pEVar6,pBVar9);
      }
    }
    pLVar10 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              *)(pEVar4->fields).kogamaDefaultData.sites;
    if (pLVar10 != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) {
      pRVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                          (pLVar10,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      bVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_IsValidHost
                         (host,(String__Array *)pRVar11,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        iVar7 = (pEVar4->fields).kogamaDefaultData.siteEnum;
        bVar5 = (pEVar4->fields).kogamaDefaultData.showTouristPromotion;
        bVar12 = (pEVar4->fields).kogamaDefaultData.allowsOpenInNewTab;
        bVar13 = (pEVar4->fields).kogamaDefaultData.allowsRedirectToWebpage;
        bVar14 = (pEVar4->fields).kogamaDefaultData.allowsModals;
        (pEVar4->fields).currentSite.sites = (pEVar4->fields).kogamaDefaultData.sites;
        (pEVar4->fields).currentSite.siteEnum = iVar7;
        (pEVar4->fields).currentSite.showTouristPromotion = bVar5;
        (pEVar4->fields).currentSite.allowsOpenInNewTab = bVar12;
        (pEVar4->fields).currentSite.allowsRedirectToWebpage = bVar13;
        (pEVar4->fields).currentSite.allowsModals = bVar14;
        bVar5 = (pEVar4->fields).kogamaDefaultData.allowsFallbackAds;
        bVar12 = (pEVar4->fields).kogamaDefaultData.showPlayButtonAd;
        bVar13 = (pEVar4->fields).kogamaDefaultData.hideGoldShop;
        bVar14 = (pEVar4->fields).kogamaDefaultData.allowInHouseAds;
        bVar15 = (pEVar4->fields).kogamaDefaultData.removeFullscreenButton;
        bVar16 = (pEVar4->fields).kogamaDefaultData.hideSignUp;
        bVar17 = (pEVar4->fields).kogamaDefaultData.noPlayButtonVideoIcon;
        (pEVar4->fields).currentSite.integratedSdk =
             (pEVar4->fields).kogamaDefaultData.integratedSdk;
        (pEVar4->fields).currentSite.allowsFallbackAds = bVar5;
        (pEVar4->fields).currentSite.showPlayButtonAd = bVar12;
        (pEVar4->fields).currentSite.hideGoldShop = bVar13;
        (pEVar4->fields).currentSite.allowInHouseAds = bVar14;
        (pEVar4->fields).currentSite.removeFullscreenButton = bVar15;
        (pEVar4->fields).currentSite.hideSignUp = bVar16;
        (pEVar4->fields).currentSite.noPlayButtonVideoIcon = bVar17;
        if (iRam_? != 0) {
          uVar18 = (uint)((ulonglong)&(pEVar4->fields).currentSite >> 0xc);
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
        return;
      }
      while (pLVar22 = (pEVar4->fields).siteData, pLVar22 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
        uVar18 = (uint)pSVar1;
        if ((pLVar22->fields)._size <= (int)uVar18) {
          return;
        }
        if (pLVar22 == (List_1_EmbeddedSiteConfigData_ *)0x0) goto code_?;
        if ((uint)(pLVar22->fields)._size <= uVar18) goto code_?;
        pEVar23 = (pLVar22->fields)._items;
        if (pEVar23 == (EmbeddedSiteConfigData__Array *)0x0) goto code_?;
        if ((uint)pEVar23->max_length <= uVar18) goto code_?;
        pLVar10 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                  *)pEVar23->vector[(int)uVar18].sites;
        if (pLVar10 == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                       *)0x0) goto code_?;
        pRVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (pLVar10,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        bVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_IsValidHost
                           (host,(String__Array *)pRVar11,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pLVar22 = (pEVar4->fields).siteData;
          if (pLVar22 == (List_1_EmbeddedSiteConfigData_ *)0x0) goto code_?;
          if ((uint)(pLVar22->fields)._size <= uVar18) goto code_?;
          pEVar23 = (pLVar22->fields)._items;
          if (pEVar23 == (EmbeddedSiteConfigData__Array *)0x0) goto code_?;
          if (uVar18 < (uint)pEVar23->max_length) {
            pEVar24 = pEVar23->vector + (int)uVar18;
            uVar25 = *(undefined4 *)((longlong)&pEVar24->sites + 4);
            iVar7 = pEVar24->siteEnum;
            bVar5 = pEVar24->showTouristPromotion;
            bVar12 = pEVar24->allowsOpenInNewTab;
            bVar13 = pEVar24->allowsRedirectToWebpage;
            bVar14 = pEVar24->allowsModals;
            pEVar26 = pEVar23->vector + (int)uVar18;
            bVar15 = pEVar26->integratedSdk;
            bVar16 = pEVar26->allowsFallbackAds;
            bVar17 = pEVar26->showPlayButtonAd;
            bVar27 = pEVar26->hideGoldShop;
            bVar28 = pEVar26->allowInHouseAds;
            bVar29 = pEVar26->removeFullscreenButton;
            bVar30 = pEVar26->hideSignUp;
            bVar31 = pEVar26->noPlayButtonVideoIcon;
            *(undefined4 *)&(pEVar4->fields).currentSite.sites = *(undefined4 *)&pEVar24->sites;
            *(undefined4 *)((longlong)&(pEVar4->fields).currentSite.sites + 4) = uVar25;
            (pEVar4->fields).currentSite.siteEnum = iVar7;
            (pEVar4->fields).currentSite.showTouristPromotion = bVar5;
            (pEVar4->fields).currentSite.allowsOpenInNewTab = bVar12;
            (pEVar4->fields).currentSite.allowsRedirectToWebpage = bVar13;
            (pEVar4->fields).currentSite.allowsModals = bVar14;
            (pEVar4->fields).currentSite.integratedSdk = bVar15;
            (pEVar4->fields).currentSite.allowsFallbackAds = bVar16;
            (pEVar4->fields).currentSite.showPlayButtonAd = bVar17;
            (pEVar4->fields).currentSite.hideGoldShop = bVar27;
            (pEVar4->fields).currentSite.allowInHouseAds = bVar28;
            (pEVar4->fields).currentSite.removeFullscreenButton = bVar29;
            (pEVar4->fields).currentSite.hideSignUp = bVar30;
            (pEVar4->fields).currentSite.noPlayButtonVideoIcon = bVar31;
            func_?(&(pEVar4->fields).currentSite);
            return;
          }
          goto code_?;
        }
        pSVar1 = (String *)(ulonglong)(uVar18 + 1);
      }
      goto code_?;
    }
  }
  else if (pUStackX_10 != (Uri *)0x0) {
    url = System.dll::System::Uri::Uri_get_Host(pUStackX_10,(MethodInfo *)0x0);
    goto code_?;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleDebugShortCuts() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_HandleDebugShortCuts
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Enabling_logging_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Disabling_logging_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x37);
  if (cVar3 != '\0') {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x39);
    if (cVar3 != '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      lVar4 = FUN_?();
      if (lVar4 != 0) {
        iVar5 = FUN_?(3,TypeInfo__UnityEngine__ILogger,lVar4);
        if (iVar5 == 2) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          lVar4 = FUN_?();
          if (lVar4 != 0) {
            FUN_?(4,TypeInfo__UnityEngine__ILogger,lVar4,3);
            pSVar6 = StringLiteral_Enabling_logging_;
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
            pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar7 != (ILogger_1 *)0x0) {
              FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,3,pSVar6);
              return;
            }
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          lVar4 = FUN_?();
          if (lVar4 != 0) {
            iVar5 = FUN_?(3,TypeInfo__UnityEngine__ILogger,lVar4);
            if (iVar5 != 3) {
              return;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Disabling_logging_,(MethodInfo *)0x0);
            plVar8 = (longlong *)FUN_?();
            if (plVar8 != (longlong *)0x0) {
              uVar9 = 0;
              lVar4 = *plVar8;
              if (*(ushort *)(lVar4 + 0x12e) != 0) {
                do {
                  if (*(ILogger_1__Class **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar9 * 0x10)
                      == TypeInfo__UnityEngine__ILogger) {
                    puVar10 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              4) * 0x10 + 0x138 + lVar4);
                    goto code_?;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
              }
              puVar10 = (undefined8 *)FUN_?(plVar8);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar10)(plVar8,2,puVar10[1],(code *)*puVar10);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


/* Void HandleQuitDisconnect() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_HandleQuitDisconnect
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
        (GameSessionData *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__GetRequest);
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
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      path = (pGVar2->fields).disconnectURL;
      this_00 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_00,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_00,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar1->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
      if ((pMVar3->fields)._Peer_k__BackingField == (PhotonPeer *)0x0) {
        return;
      }
      pMVar3 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        if ((pMVar3->fields).connState != 4) {
          return;
        }
        pMVar3 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pPVar4 = (pMVar3->fields)._Peer_k__BackingField, pPVar4 != (PhotonPeer *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar4->klass->vtable).Disconnect.methodPtr)
                    (pPVar4,(pPVar4->klass->vtable).Disconnect.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator InitRegionDependent() */

IEnumerator *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitRegionDependent
          (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase___InitRegionDependent_d__162);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MVGameControllerBase___InitRegionDependent_d__162)
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


/* Void InitStandAlone(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitStandAlone
               (MVGameControllerBase *this,bool developmentMode,MethodInfo *method)

{
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  uVar3 = (undefined4)((ulonglong)in_stack_4 >> 0x20);
  uVar5 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameControllerBase__OnReceivedSessionData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_combined_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_kogamaPackage_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGameControllerBase_DeleteScreenPlayerPrefs((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  TypeInfo__BrowserComm->static_fields->enableBrowserRequest = developmentMode ^ 1;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  iVar8 = (*pcRam_?)();
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  iVar9 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_KoGaMa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar10 = StringLiteral_KoGaMa;
  if (pcRam_? == (code *)0x0) {
    uStack_11 = 10;
    uStack_12 = 10;
    uStack_13 = 0;
    uStack_14 = 2;
    uStack_15 = 0x10;
    uStack_16 = 0;
    pcRam_? = (code *)FUN_?(&puStack_17);
  }
  lVar18 = FUN_?(pSVar10);
  uVar7 = (*pcRam_?)(0,lVar18);
  if (lVar18 != 0) {
    CoTaskMemFree(lVar18);
  }
  if (pcRam_? == (code *)0x0) {
    uStack_11 = 10;
    uStack_12 = 0xc;
    uStack_13 = 0;
    uStack_14 = 2;
    uStack_15 = 0x20;
    uStack_16 = 0;
    pcRam_? = (code *)FUN_?(&puStack_17);
  }
  (*pcRam_?)
            (uVar7,0,0,0,CONCAT44(uVar1,iVar8),CONCAT44(uVar3,iVar9),iVar9 * iVar8 == 0);
  if (developmentMode != 0) {
    (*(this->klass->vtable).StartGame.methodPtr)(this,(this->klass->vtable).StartGame.method);
    return;
  }
  pSVar19 = mscorlib.dll::System::Environment::Environment_GetCommandLineArgs((MethodInfo *)0x0);
  if (pSVar19 != (String__Array *)0x0) {
    ppSVar20 = pSVar19->vector;
    pSVar10 = ::StringLiteral__;
    for (; (int)uVar5 < (int)pSVar19->max_length; uVar5 = uVar5 + 1) {
      if ((uint)pSVar19->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar21 = *ppSVar20;
      pSVar22 = (String__Array *)FUN_?(TypeInfo__System__String);
      if (pSVar22 == (String__Array *)0x0) goto code_?;
      if ((int)pSVar22->max_length == 0) goto code_?;
      pSVar22->vector[0] = StringLiteral_kogamaPackage_;
      if (iRam_? != 0) {
        uVar23 = (uint)((ulonglong)pSVar22->vector >> 0xc);
        puVar24 = (ulonglong *)((ulonglong)((uVar23 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar25 = *puVar24;
          LOCK();
          uVar26 = *puVar24;
          if (uVar25 == uVar26) {
            *puVar24 = uVar25 | 1L << (uVar23 & 0x3f);
          }
          UNLOCK();
        } while (uVar25 != uVar26);
      }
      if ((pSVar21 == (String *)0x0) ||
         (pSVar22 = mscorlib.dll::System::String::String_SplitInternal_1
                             (pSVar21,(String *)0x0,pSVar22,0x7fffffff,StringSplitOptions__Enum_None,
                              (MethodInfo *)0x0), pSVar22 == (String__Array *)0x0))
      goto code_?;
      if ((int)pSVar22->max_length == 2) {
        pSVar10 = mscorlib.dll::System::String::String_Concat_4
                            (pSVar10,pSVar22->vector[1],(MethodInfo *)0x0);
      }
      ppSVar20 = ppSVar20 + 1;
    }
    pSVar21 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_combined_,pSVar10,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar21,(MethodInfo *)0x0)
    ;
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Convert);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar10 == (String *)0x0) {
      uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
      this_02 = (ArgumentNullException *)func_?(uVar7);
      pSVar10 = (String *)func_?(&StringLiteral_s);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_02,pSVar10,(MethodInfo *)0x0);
      uVar7 = func_?(&MethodInfo__System__Convert__FromBase64String_System__String_);
      FUN_?(this_02,uVar7);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    inputLength = (pSVar10->fields)._stringLength;
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar27 = mscorlib.dll::System::Convert::Convert_FromBase64CharPtr
                        (&(pSVar10->fields)._firstChar,inputLength,(MethodInfo *)0x0);
    pEVar28 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar28 != (Encoding *)0x0) {
      pSVar10 = (String *)
                (*(pEVar28->klass->vtable).GetString.methodPtr)
                          (pEVar28,pBVar27,(pEVar28->klass->vtable).GetString.method);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar10,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGameControllerBase__OnReceivedSessionData_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar10,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitWebGL(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitWebGL
               (MVGameControllerBase *this,bool developmentMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameControllerBase__ReceivedLoadStatsCallback_bool__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameControllerBase__StartGameWithSessionData_bool__System__String_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sendLoadStats);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sendPlayerParams);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  TypeInfo__BrowserComm->static_fields->enableExternalCall = developmentMode ^ 1;
  if (developmentMode != 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).StartGame.methodPtr)(this,(this->klass->vtable).StartGame.method);
    return;
  }
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__get_br);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_get_browser_version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Would_have_sent_function__get_br,(MethodInfo *)0x0);
  }
  else {
    pOVar1 = (Object__Array *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                        (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    pSVar2 = JSBridge::JSBridge_BuildInvocationForArguments
                       (StringLiteral_get_browser_version,pOVar1,(MethodInfo *)0x0);
    JSBridge::JSBridge_DoKGMEval(pSVar2,(MethodInfo *)0x0);
  }
  callback = (Action_2_Boolean_String_ *)
             FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(callback,this);
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_sendPlayerParams,callback,(MethodInfo *)0x0);
  pOVar3 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar3,this,
                MethodInfo__MVGameControllerBase__ReceivedLoadStatsCallback_bool__System__String_);
  pSVar2 = StringLiteral_sendLoadStats;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar3,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar4 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar5 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar6 = iRam_? != 0;
    pOVar5[1].klass = pOVar3;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar7 & 0x3f);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar11 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,pOVar5,
                 (InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_callbackId,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_01,(MethodInfo *)0x0);
        pSVar2 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar2,(MethodInfo *)0x0);
        pOVar1 = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (pOVar1 != (Object__Array *)0x0) {
          if ((pSVar4 != (String *)0x0) &&
             (lVar12 = FUN_?(pSVar4,(pOVar1->klass->_0).element_class), lVar12 == 0)) {
            uVar11 = FUN_?();
            FUN_?(uVar11,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FUN_?(pOVar1,0);
          pSVar2 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar2,pOVar1,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar2,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (pOVar3 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar14 = (pOVar3->_0).image;
    str3 = (String *)(*(code *)pIVar14[5].name)(pOVar3,pIVar14[5].nameNoExt);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar2,pSVar4,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Initialize
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 1;
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_LateUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._ShuttingDown_k__BackingField != 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  state = UpdateController::UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto DAT_?;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField == 0)
      goto code_?;
      pMVar4 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 == (WorldNetwork *)0x0)) ||
         (this_00 = (pWVar5->fields)._.worldInventory, this_00 == (MVWorldInventory *)0x0))
      goto DAT_?;
      aiStackX_8[0] = 1;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar6 = (this_00->fields).dirtyRPCM;
      if (pLVar6 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto DAT_?;
      uVar1 = (pLVar6->fields)._size - 1;
      if ((int)uVar1 < 0) goto code_?;
      lVar2 = (longlong)(int)uVar1 * 8 + 0x20;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto DAT_?;
    if ((uint)pLVar3->max_length <= uVar1) break;
    UpdateController::UpdateController_LateUpdateList
              (state,*(List_1_PriorityDataLateUpdate_ **)((longlong)pLVar3->vector + lVar2 + -0x20)
               ,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  do {
    pLVar6 = (this_00->fields).dirtyRPCM;
    if (pLVar6 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto DAT_?;
    if ((uint)(pLVar6->fields)._size <= uVar1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pRVar8 = (pLVar6->fields)._items;
    if (pRVar8 == (RuntimePrototypeCubeModel__Array *)0x0) goto DAT_?;
    if ((uint)pRVar8->max_length <= uVar1) goto code_?;
    lVar9 = *(longlong *)((longlong)pRVar8->vector + lVar2 + -0x20);
    if (lVar9 == 0) goto DAT_?;
    if (*(int *)(lVar9 + 0x40) == 3) {
      this_02 = (RuntimePrototypeCubeModel *)FUN_?((this_00->fields).dirtyRPCM,uVar1);
      if (this_02 == (RuntimePrototypeCubeModel *)0x0) goto DAT_?;
      bVar10 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                         (this_02,aiStackX_8,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pLVar6 = (this_00->fields).dirtyRPCM;
        if (pLVar6 == (List_1_RuntimePrototypeCubeModel_ *)0x0) goto DAT_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar6,uVar1,
                   MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                  );
      }
    }
    lVar2 = lVar2 + -8;
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
code_?:
  bVar10 = MVWorldInventory::MVWorldInventory_GenerateDirty
                     (this_00,MeshGeneratePriority__Enum_Medium,aiStackX_8,(MethodInfo *)0x0);
  if (bVar10 != 0) {
    MVWorldInventory::MVWorldInventory_GenerateDirty
              (this_00,MeshGeneratePriority__Enum_Low,aiStackX_8,(MethodInfo *)0x0);
  }
  pMVar11 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar11 != (MainCameraManager *)0x0) &&
     (pMVar12 = (pMVar11->fields).cameraController, pMVar12 != (MVCameraController *)0x0)) {
    this_01 = (pMVar12->fields).cameraStack;
    pPVar13 = (pMVar11->fields).protectedTransform;
    if ((this_01 != (MVCameraController_CameraStack *)0x0) &&
       (pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (this_01,(MethodInfo *)0x0), pMVar14 != (MVCameraBase *)0x0)) {
      (*(pMVar14->klass->vtable).UpdateCamera.methodPtr)
                (pMVar14,pMVar12,pPVar13,(pMVar14->klass->vtable).UpdateCamera.method);
      pTVar15 = (pMVar11->fields).transitionCamera;
      if (pTVar15 != (TransitionCamera *)0x0) {
        (*(pTVar15->klass->vtable).UpdateCamera.methodPtr)
                  (pTVar15,(pMVar11->fields).cameraController,(pMVar11->fields).protectedTransform,
                   (pTVar15->klass->vtable).UpdateCamera.method);
code_?:
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        FullScreenController::FullScreenController_LateUpdate((MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnApplicationQuit() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnApplicationQuit
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = 1;
  MVGameControllerBase_HandleQuitDisconnect(this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).CleanUp.methodPtr)(this,(this->klass->vtable).CleanUp.method);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnDestroy
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__DrawPlane->static_fields->drawPlaneController = (DrawPlaneControllerUUI *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__DrawPlane->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar6,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BadgeManager);
  }
  TypeInfo__BadgeManager->static_fields->badgeUrls =
       (Dictionary_2_System_Int32_BadgeUrlData_ *)pDVar6;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__BadgeManager->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MeshDataPool->static_fields->instance = (MeshDataPool *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__MeshDataPool->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  LevelingManager::LevelingManager_Destroy((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamedSharedMaterialHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoggerManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__LoggerManager->static_fields->instance = (LoggerManager *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__LoggerManager->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_Destroy((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar6 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar6,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
            );
  if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HighlightManager);
  }
  TypeInfo__HighlightManager->static_fields->highlightDatas =
       (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)pDVar6;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__HighlightManager->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = (FirstTimeState *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__FirstTimeEventManager->static_fields->firstTimeState >>
                   0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  FUN_?(0);
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = (AudioBuild *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AudioEventHandler->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLVar7 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar7 == (List_1_TranslateSoundData_ *)0x0) goto code_?;
  piVar8 = &(pLVar7->fields)._version;
  *piVar8 = *piVar8 + 1;
  (pLVar7->fields)._size = 0;
  pLVar7 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar7 != (List_1_TranslateSoundData_ *)0x0) {
    pTVar9 = (pLVar7->fields)._items;
    if (pTVar9 != (TranslateSoundData__Array *)0x0) {
      if ((pLVar7->fields)._size < (int)((double)(int)pTVar9->max_length * _UNK_?)) {
        FUN_?(pLVar7,(pLVar7->fields)._size,
                      MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__
                      ->klass->rgctx_data[0x1b].rgctxDataDummy);
      }
      this_00 = (this->fields).debugLogHandler;
      if (this_00 != (DebugLogHandler *)0x0) {
        DebugLogHandler::DebugLogHandler_Destroy(this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AwayMonitor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__AwayMonitor->static_fields->instance = (AwayMonitor *)0x0;
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)TypeInfo__AwayMonitor->static_fields >> 0xc);
          uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar3 == *puVar4;
            if (bVar5) {
              *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        TM::TM_Destroy((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        AsyncWWWManager::AsyncWWWManager_Reset((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
          FUN_?();
        }
        UpdateController::UpdateController_Clear((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__Clear__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__StreamingAsset);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
code_?:
          FUN_?();
code_?:
          FUN_?();
        }
        else {
          pcRam_? = pcVar10;
          (*pcRam_?)(1);
          if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__StreamingAsset);
          }
          pHVar12 = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
          if (pHVar12 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
            if ((pHVar12->fields)._lastIndex < 1) {
code_?:
              piVar8 = &(pHVar12->fields)._version;
              *piVar8 = *piVar8 + 1;
              pHVar12 = TypeInfo__StreamingAsset->static_fields->cachedAssetBundles;
              if (pHVar12 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__TrimExcess
                          ((HashSet_1_System_Object_ *)pHVar12,
                           MethodInfo__System__Collections__Generic__HashSet<UnityEngine::Networking::UnityWebRequest>__TrimExcess__
                          );
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__AccessoryDataManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
                  uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                  do {
                    uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                    puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 0;
                TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 0;
                TypeInfo__AccessoryDataManager->static_fields->accessoryShopData =
                     (AccessoryShopDataClient *)0x0;
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)
                                  &TypeInfo__AccessoryDataManager->static_fields->accessoryShopData
                                 >> 0xc);
                  uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                  do {
                    uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                    puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__DataUploadManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                TypeInfo__DataUploadManager->static_fields->id = 0;
                TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->bytePacker
                                 >> 0xc);
                  uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                  do {
                    uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                    puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)
                                  &TypeInfo__DataUploadManager->static_fields->doneNotification >>
                                 0xc);
                  uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                  do {
                    uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                    puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 0;
                UpdateController::UpdateController_RemoveUpdateObject
                          ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
                FUN_?();
                return;
              }
              goto code_?;
            }
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pHVar12->fields)._slots,0,(pHVar12->fields)._lastIndex,
                       (MethodInfo *)0x0);
            pIVar13 = (pHVar12->fields)._buckets;
            if (pIVar13 != (Int32__Array *)0x0) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pHVar12->fields)._buckets,0,(int32_t)pIVar13->max_length,
                         (MethodInfo *)0x0);
              (pHVar12->fields)._count = 0;
              (pHVar12->fields)._lastIndex = 0;
              (pHVar12->fields)._freeList = -1;
              goto code_?;
            }
            goto code_?;
          }
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDrawGizmos() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnDrawGizmos
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0;
  while( true ) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= (int)uVar1)
    {
      return;
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar3 == (BoundingSphere__Array *)0x0) break;
    if ((uint)pBVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_5 = *(undefined8 *)((longlong)&pBVar3->vector[0].position.x + lVar2);
    uStack_6 = *(undefined4 *)((longlong)&pBVar3->vector[0].position.z + lVar2);
    uVar7 = *(undefined4 *)
             ((longlong)&TypeInfo__CullingApiWrapper->static_fields->spheres->vector[0].radius +
             lVar2);
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(&uStack_5,uVar7);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 0x10;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnRTGAppInitialize() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnRTGAppInitialize
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
    FUN_?();
  }
  obj = RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                  (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
  if (obj == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar2 = obj[1].klass;
  if (pOVar2 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
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


/* Void OnReceivedReAuthWebParametersFromHttpRequest(UnityWebRequest) */

void Assembly-CSharp.dll::MVGameControllerBase::
     MVGameControllerBase_OnReceivedReAuthWebParametersFromHttpRequest
               (MVGameControllerBase *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reauth_webParameters_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((www == (UnityWebRequest *)0x0) ||
     (pDVar1 = (www->fields).m_DownloadHandler, pDVar1 == (DownloadHandler *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  str1 = (String *)
         (*(pDVar1->klass->vtable).GetText.methodPtr)(pDVar1,(pDVar1->klass->vtable).GetText.method)
  ;
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Reauth_webParameters_,str1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,1,str1,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WEBPARAMS__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_WEBPARAMS__,str1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  gameSessionData =
       (GameSessionData *)
       Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                 (str1,
                  GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                 );
  if (gameSessionData != (GameSessionData *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).pingURL,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).disconnectURL,(MethodInfo *)0x0);
    FUN_?(gameSessionData);
    PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
    AwayMonitor::AwayMonitor_Initialize((gameSessionData->fields).gameMode,(MethodInfo *)0x0);
    (*(this->klass->vtable).StartGame.methodPtr)(this,(this->klass->vtable).StartGame.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnReceivedSessionData(UnityWebRequest) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnReceivedSessionData
               (MVGameControllerBase *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((www == (UnityWebRequest *)0x0) ||
     (pDVar1 = (www->fields).m_DownloadHandler, pDVar1 == (DownloadHandler *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  str1 = (String *)(*(pDVar1->klass->vtable).GetText.methodPtr)();
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)str1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,1,str1,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WEBPARAMS__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_WEBPARAMS__,str1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  gameSessionData =
       (GameSessionData *)
       Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                 (str1,
                  GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                 );
  if (gameSessionData != (GameSessionData *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).pingURL,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).disconnectURL,(MethodInfo *)0x0);
    FUN_?(gameSessionData);
    PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
    AwayMonitor::AwayMonitor_Initialize((gameSessionData->fields).gameMode,(MethodInfo *)0x0);
    (*(this->klass->vtable).StartGame.methodPtr)(this,(this->klass->vtable).StartGame.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopJoystick() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PopJoystick(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pJVar2 = (pMVar1->fields).joystickControllerStack, pJVar2 == (JoystickControllerStack *)0x0))
  {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Pop,(MethodInfo *)0x0);
  pLVar4 = (pJVar2->fields).controls;
  if (pLVar4 != (List_1_InGameControls_ *)0x0) {
    iVar5 = (pLVar4->fields)._size;
    if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar6 = (pLVar4->fields)._items;
    if (pIVar6 != (InGameControls__Array *)0x0) {
      if ((uint)pIVar6->max_length <= iVar5 - 1U) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = pIVar6->vector[(longlong)iVar5 + -1];
      pLVar4 = (pJVar2->fields).controls;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar4,(pLVar4->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<InGameControls>__RemoveAt_int_);
      if (this != (InGameControls *)0x0) {
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
                  ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
        pLVar4 = (pJVar2->fields).controls;
        if (pLVar4 != (List_1_InGameControls_ *)0x0) {
          iVar5 = (pLVar4->fields)._size;
          if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) goto code_?;
          pIVar6 = (pLVar4->fields)._items;
          if (pIVar6 != (InGameControls__Array *)0x0) {
            if ((uint)pIVar6->max_length <= iVar5 - 1U) goto code_?;
            if ((pIVar6->vector[(longlong)iVar5 + -1] != (InGameControls *)0x0) &&
               (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject
                                   ((Component *)pIVar6->vector[(longlong)iVar5 + -1],
                                    (MethodInfo *)0x0), pGVar7 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,1,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar7 == (GameObject *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pvVar8 = (pGVar7->fields)._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar7,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar8,1);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReceivedNotification_still_hav);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReceivedGameMsg_still_have_sub);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification !=
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedNotification_still_hav,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedGameMsg_still_have_sub,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg >>
                    0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  return;
}


/* Void PostGameMsg(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostGameMsg
               (MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,gameMsgType,gameMsgData,(pMVar1->fields)._._.method)
    ;
  }
  return;
}


/* Void PostGameMsg(MVGameMsgType, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
               (MVGameMsgType__Enum gameMsgType,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_10[0] = 5;
  key = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)message,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,this,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
        (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
      (*(pMVar1->fields)._._.invoke_impl)
                ((pMVar1->fields)._._.method_code,gameMsgType,this,(pMVar1->fields)._._.method,
                 unaff_RDI);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PushJoystick(ControlType) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PushJoystick
               (ControlType__Enum joystickType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (this = (pMVar1->fields).joystickControllerStack, this == (JoystickControllerStack *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pushing_unknown_joystick);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (joystickType == ControlType__Enum_Avatar) {
    original = (this->fields).avatar;
  }
  else if (joystickType == ControlType__Enum_BasicVehicle) {
    original = (this->fields).basicVehicle;
  }
  else {
    if (joystickType != ControlType__Enum_Jetpack) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = StringLiteral_Pushing_unknown_joystick;
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
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
      return;
    }
    original = (this->fields).jetPackControls;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Controls_prefab_not_set_);
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
  if (original == (InGameControls *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Controls_prefab_not_set_,(MethodInfo *)0x0);
    original = (this->fields).avatar;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((original->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                      );
  pLVar5 = (this->fields).controls;
  if (pLVar5 == (List_1_InGameControls_ *)0x0) goto code_?;
  if ((pLVar5->fields)._size != 0) {
    iVar6 = (pLVar5->fields)._size;
    if ((uint)(pLVar5->fields)._size <= iVar6 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar7 = (pLVar5->fields)._items;
    if (pIVar7 == (InGameControls__Array *)0x0) goto code_?;
    if ((uint)pIVar7->max_length <= iVar6 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pIVar7->vector[(longlong)iVar6 + -1] == (InGameControls *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar7->vector[(longlong)iVar6 + -1],(MethodInfo *)0x0),
       pGVar8 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
  }
  if ((this_00 != (Component *)0x0) &&
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,1,(MethodInfo *)0x0);
    pMVar9 = MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_;
    pLVar5 = (this->fields).controls;
    if (pLVar5 != (List_1_InGameControls_ *)0x0) {
      piVar10 = &(pLVar5->fields)._version;
      *piVar10 = *piVar10 + 1;
      pIVar7 = (pLVar5->fields)._items;
      if (pIVar7 != (InGameControls__Array *)0x0) {
        uVar11 = (pLVar5->fields)._size;
        if (uVar11 < (uint)pIVar7->max_length) {
          (pLVar5->fields)._size = uVar11 + 1;
          FUN_?(pIVar7,(longlong)(int)uVar11,this_00);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar5,(Object *)this_00,
                     pMVar9->klass->rgctx_data[0xe].method);
        }
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                          ,pTVar12,0,0,unaff_RDI);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar13 = (obj->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pTVar12 == (Transform *)0x0) {
            pvVar14 = (void *)0x0;
          }
          else {
            pvVar14 = (pTVar12->fields)._._.m_CachedPtr;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar13,pvVar14,0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivedLoadStatsCallback(Boolean, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ReceivedLoadStatsCallback
               (MVGameControllerBase *this,bool ok,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  LoadStats_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<LoadStats>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_load_stats_data);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (ok != 0) {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (data,
                        LoadStats_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<LoadStats>_System__String_
                       );
    if ((pOVar1 != (Object *)0x0) && (pLVar2 = (this->fields).loadStats, pLVar2 != (LoadStats *)0x0)
       ) {
      (pLVar2->fields).DOMReady = (double)pOVar1[1].klass;
      (pLVar2->fields).PluginInit = (double)pOVar1[1].monitor;
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar4 = StringLiteral_Failed_to_get_load_stats_data;
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
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar4);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RegisterJoystickControllerStack(JoystickControllerStack) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterJoystickControllerStack
               (JoystickControllerStack *joystickControllerStack,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pMVar1->fields).joystickControllerStack = joystickControllerStack;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pMVar1->fields).joystickControllerStack >> 0xc);
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
  return;
}


/* Void RegisterOverrideMaterials() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Void RegisterPlayModeController(ModeControllerBase) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterPlayModeController
               (ModeControllerBase *playModeController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pMVar1->fields).modeController = playModeController;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pMVar1->fields).modeController >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField =
       (IPlayModeUI *)playModeController;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField >>
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
  return;
}


/* Void SetGameSessionData(GameSessionData) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetGameSessionData
               (GameSessionData *gameSessionData,MethodInfo *method)

{
  FUN_?();
  PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
  if (gameSessionData == (GameSessionData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (gameSessionData->fields).gameMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AwayMonitor__IdleKickTimes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameMode__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___is_not_accounted);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar3 = (AwayMonitor *)FUN_?(TypeInfo__AwayMonitor);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  bVar5 = cRam_? == '\0';
  (pAVar3->fields).latestResetAFKTime._dateData = DVar4._dateData;
  if (bVar5) {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  (pAVar3->fields).awayCheckFrequency._ticks = 590000000;
  (pAVar3->fields).idleKickEnabled = 1;
  DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (pAVar3->fields).latestMouseMoveTime._dateData = DVar4._dateData;
  TypeInfo__AwayMonitor->static_fields->instance = pAVar3;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__AwayMonitor->static_fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
code_?:
      pAVar3 = TypeInfo__AwayMonitor->static_fields->instance;
      pAVar10 = (AwayMonitor_IdleKickTimes *)FUN_?(TypeInfo__AwayMonitor__IdleKickTimes);
      AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor(pAVar10,5,0xf,(MethodInfo *)0x0);
      if (pAVar3 != (AwayMonitor *)0x0) {
        bVar5 = iRam_? == 0;
        (pAVar3->fields).idleKickTimes = pAVar10;
        if (bVar5) {
          return;
        }
        uVar6 = (uint)((ulonglong)&(pAVar3->fields).idleKickTimes >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
        return;
      }
      goto code_?;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) goto code_?;
      if (iVar2 != 4) {
        EStack_11.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
        EStack_11.monitor = (MonitorData *)0xffffffffffffffff;
        iStack_12 = iVar2;
        pSVar13 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
        pSVar13 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_GameMode__,pSVar13,StringLiteral___is_not_accounted,
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar13,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pAVar3 = TypeInfo__AwayMonitor->static_fields->instance;
  pAVar10 = (AwayMonitor_IdleKickTimes *)FUN_?(TypeInfo__AwayMonitor__IdleKickTimes);
  AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor(pAVar10,0xf,0x1e,(MethodInfo *)0x0);
  if (pAVar3 != (AwayMonitor *)0x0) {
    bVar5 = iRam_? == 0;
    (pAVar3->fields).idleKickTimes = pAVar10;
    if (bVar5) {
      return;
    }
    uVar6 = (uint)((ulonglong)&(pAVar3->fields).idleKickTimes >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetPosition(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetPosition
               (int32_t x,int32_t y,int32_t resX,int32_t resY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_KoGaMa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_KoGaMa;
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 10;
    uStack_3 = 10;
    uStack_4 = 0;
    uStack_5 = 2;
    uStack_6 = 0x10;
    uStack_7 = 0;
    pcRam_? = (code *)FUN_?(&puStack_8);
  }
  lVar9 = FUN_?(pSVar1);
  uVar10 = (*pcRam_?)(0,lVar9);
  if (lVar9 != 0) {
    CoTaskMemFree(lVar9);
  }
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 10;
    uStack_3 = 0xc;
    uStack_4 = 0;
    uStack_5 = 2;
    uStack_6 = 0x20;
    uStack_7 = 0;
    pcRam_? = (code *)FUN_?(&puStack_8);
  }
  (*pcRam_?)(uVar10,0,x,y,resX,resY,resX * resY == 0);
  return;
}


/* Boolean SetWindowPos(IntPtr, Int32, Int32, Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetWindowPos
               (void *hwnd,int32_t hWndInsertAfter,int32_t x,int32_t Y,int32_t cx,int32_t cy,
               int32_t wFlags,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 10;
    uStack_2 = 0xc;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 0x20;
    uStack_6 = 0;
    pcRam_? = (code *)FUN_?(&puStack_7);
  }
  iVar8 = (*pcRam_?)(hwnd,hWndInsertAfter,x,Y,cx,cy,wFlags);
  return iVar8 != 0;
}


/* Void ShutDown() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ShutDown
               (MVGameControllerBase *this,MethodInfo *method)

{
  MVGameControllerBase_HandleQuitDisconnect(this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).CleanUp.methodPtr)(this,(this->klass->vtable).CleanUp.method);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Start
               (MVGameControllerBase *this,MethodInfo *method)

{
  pTVar1 = (this->fields).textureIntegrityChecker;
  if ((pTVar1 == (TextureIntegrityChecker *)0x0) ||
     (this_00 = (pTVar1->fields).materialPlaneRenderer, this_00 == (MaterialPlaneRenderer *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_3._depthStencilFormat_k__BackingField = 0;
  RStack_3._dimension_k__BackingField = 2;
  RStack_3._volumeDepth_k__BackingField = 0;
  RStack_3._mipCount_k__BackingField = 0;
  RStack_3._graphicsFormat = 0;
  RStack_3._stencilFormat_k__BackingField = 0;
  RStack_3._shadowSamplingMode_k__BackingField = 0;
  RStack_3._vrUsage_k__BackingField = 0;
  RStack_3._memoryless_k__BackingField = 0;
  RStack_3._width_k__BackingField = 0x10;
  RStack_3._height_k__BackingField = 0x10;
  RStack_3._msaaSamples_k__BackingField = 1;
  RStack_3._flags = 0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_colorFormat
            (&RStack_3,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
  RStack_3._depthStencilFormat_k__BackingField =
       UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
       RenderTexture_GetDepthStencilFormatLegacy_4
                 (0,RStack_3._shadowSamplingMode_k__BackingField != 2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Experimental__Rendering__GraphicsFormatUtility);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Experimental__Rendering__GraphicsFormatUtility->_1).
               field_0x1c == 0) {
    FUN_?();
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
  value = (*pcRam_?)(RStack_3._graphicsFormat);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
  RenderTextureDescriptor_set_graphicsFormat(&RStack_3,value,(MethodInfo *)0x0);
  iVar5 = RStack_3._memoryless_k__BackingField;
  uVar6 = RStack_3._0_8_;
  uVar7._4_4_ = RStack_3._graphicsFormat;
  uVar7._0_4_ = RStack_3._mipCount_k__BackingField;
  uVar8._4_4_ = RStack_3._depthStencilFormat_k__BackingField;
  uVar8._0_4_ = RStack_3._stencilFormat_k__BackingField;
  uVar9._4_4_ = RStack_3._shadowSamplingMode_k__BackingField;
  uVar9._0_4_ = RStack_3._dimension_k__BackingField;
  uVar10 = CONCAT44(RStack_3._flags,RStack_3._vrUsage_k__BackingField) & 0xfffffffcffffffff;
  RStack_3._volumeDepth_k__BackingField = 1;
  uVar4._4_4_ = 1;
  uVar4._0_4_ = RStack_3._msaaSamples_k__BackingField;
  (this_00->fields).renderTextureDesc._width_k__BackingField = RStack_3._width_k__BackingField;
  (this_00->fields).renderTextureDesc._height_k__BackingField = RStack_3._height_k__BackingField;
  (this_00->fields).renderTextureDesc._msaaSamples_k__BackingField =
       RStack_3._msaaSamples_k__BackingField;
  (this_00->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
  (this_00->fields).renderTextureDesc._mipCount_k__BackingField =
       RStack_3._mipCount_k__BackingField;
  (this_00->fields).renderTextureDesc._graphicsFormat = RStack_3._graphicsFormat;
  (this_00->fields).renderTextureDesc._stencilFormat_k__BackingField =
       RStack_3._stencilFormat_k__BackingField;
  (this_00->fields).renderTextureDesc._depthStencilFormat_k__BackingField =
       RStack_3._depthStencilFormat_k__BackingField;
  (this_00->fields).renderTextureDesc._dimension_k__BackingField =
       RStack_3._dimension_k__BackingField;
  (this_00->fields).renderTextureDesc._shadowSamplingMode_k__BackingField =
       RStack_3._shadowSamplingMode_k__BackingField;
  (this_00->fields).renderTextureDesc._vrUsage_k__BackingField = (int)uVar10;
  (this_00->fields).renderTextureDesc._flags = (int)(uVar10 >> 0x20);
  (this_00->fields).renderTextureDesc._memoryless_k__BackingField =
       RStack_3._memoryless_k__BackingField;
  RStack_3._flags = RStack_3._flags & 0xfffffffc;
  pRVar11 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
  uVar12 = RStack_3._0_8_;
  RStack_3._width_k__BackingField = (int32_t)uVar6;
  RStack_3._height_k__BackingField = SUB84(uVar6,4);
  RStack_13._width_k__BackingField = RStack_3._width_k__BackingField;
  RStack_13._height_k__BackingField = RStack_3._height_k__BackingField;
  RStack_13._memoryless_k__BackingField = iVar5;
  RStack_3._0_8_ = uVar12;
  RStack_13._8_8_ = uVar4;
  RStack_13._16_8_ = uVar7;
  RStack_13._24_8_ = uVar8;
  RStack_13._32_8_ = uVar9;
  RStack_13._40_8_ = uVar10;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
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
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ValidateRenderTextureDesc
            (&RStack_13,(MethodInfo *)0x0);
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
  (*pcRam_?)(pRVar11);
  RStack_3._width_k__BackingField = RStack_13._width_k__BackingField;
  RStack_3._height_k__BackingField = RStack_13._height_k__BackingField;
  RStack_3._msaaSamples_k__BackingField = RStack_13._msaaSamples_k__BackingField;
  RStack_3._volumeDepth_k__BackingField = RStack_13._volumeDepth_k__BackingField;
  RStack_3._dimension_k__BackingField = RStack_13._dimension_k__BackingField;
  RStack_3._shadowSamplingMode_k__BackingField = RStack_13._shadowSamplingMode_k__BackingField;
  RStack_3._vrUsage_k__BackingField = RStack_13._vrUsage_k__BackingField;
  RStack_3._flags = RStack_13._flags;
  RStack_3._mipCount_k__BackingField = RStack_13._mipCount_k__BackingField;
  RStack_3._graphicsFormat = RStack_13._graphicsFormat;
  RStack_3._stencilFormat_k__BackingField = RStack_13._stencilFormat_k__BackingField;
  RStack_3._depthStencilFormat_k__BackingField = RStack_13._depthStencilFormat_k__BackingField;
  RStack_3._memoryless_k__BackingField = RStack_13._memoryless_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar11 == (RenderTexture *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar14 = (pRVar11->fields)._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar11,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar14,&RStack_3);
  bVar15 = iRam_? != 0;
  (this_00->fields).renderTexture = pRVar11;
  if (bVar15) {
    uVar16 = (uint)((ulonglong)&(this_00->fields).renderTexture >> 0xc);
    puVar17 = (ulonglong *)((ulonglong)((uVar16 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar18 = *puVar17;
      LOCK();
      uVar10 = *puVar17;
      if (uVar18 == uVar10) {
        *puVar17 = uVar18 | 1L << (uVar16 & 0x3f);
      }
      UNLOCK();
    } while (uVar18 != uVar10);
  }
  pRVar11 = (this_00->fields).renderTexture;
  if (pRVar11 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
              ((Texture *)pRVar11,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
    pRVar11 = (this_00->fields).renderTexture;
    if (pRVar11 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)pRVar11,FilterMode__Enum_Point,(MethodInfo *)0x0);
      pRVar11 = (this_00->fields).renderTexture;
      if (pRVar11 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                  ((Texture *)pRVar11,1,(MethodInfo *)0x0);
        AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartGame() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_StartGame
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstFrameUpdateActorReady);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVGameControllerStartGame);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_connect);
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
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 0;
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_MVGameControllerStartGame,1,(MethodInfo *)0x0);
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 != (EmbeddedPlayerConfig *)0x0) {
    EmbeddedPlayerConfig::EmbeddedPlayerConfig_Initialize(pEVar1,(MethodInfo *)0x0);
    pRVar2 = (this->fields).regionConfigManager;
    if ((pRVar2 != (RegionConfigManager *)0x0) &&
       (pRVar3 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                            (pRVar2,(MethodInfo *)0x0), pRVar3 != (RegionConfig *)0x0)) {
      if ((pRVar3->fields).TestSetup.testAlternatePort != 0) {
        MVGameControllerBase_AlternatePortTest(this,(MethodInfo *)0x0);
      }
      pRVar2 = (this->fields).regionConfigManager;
      if ((pRVar2 != (RegionConfigManager *)0x0) &&
         (pRVar3 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                              (pRVar2,(MethodInfo *)0x0), pRVar3 != (RegionConfig *)0x0)) {
        photonLoggingConfig = (pRVar3->fields).PhotonLoggingConfig;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar4 != (MVGameControllerBase *)0x0) &&
           (pEVar1 = (pMVar4->fields).embeddedPlayerConfig, pEVar1 != (EmbeddedPlayerConfig *)0x0
           )) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pEVar1->fields).initialized == 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
            EStack_5.sites = (pEVar1->fields).kogamaDefaultData.sites;
            EStack_5.siteEnum = (pEVar1->fields).kogamaDefaultData.siteEnum;
            EStack_5.showTouristPromotion =
                 (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
            EStack_5.allowsOpenInNewTab = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
            EStack_5.allowsRedirectToWebpage =
                 (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
            EStack_5.allowsModals = (pEVar1->fields).kogamaDefaultData.allowsModals;
            uVar6._0_1_ = (pEVar1->fields).kogamaDefaultData.integratedSdk;
            uVar6._1_1_ = (pEVar1->fields).kogamaDefaultData.allowsFallbackAds;
            uVar6._2_1_ = (pEVar1->fields).kogamaDefaultData.showPlayButtonAd;
            uVar6._3_1_ = (pEVar1->fields).kogamaDefaultData.hideGoldShop;
            uVar7 = (pEVar1->fields).kogamaDefaultData.allowInHouseAds;
            uVar8 = (pEVar1->fields).kogamaDefaultData.removeFullscreenButton;
            uVar9 = (pEVar1->fields).kogamaDefaultData.hideSignUp;
            uVar10 = (pEVar1->fields).kogamaDefaultData.noPlayButtonVideoIcon;
            uVar11 = CONCAT11(uVar10,uVar9);
            uVar12 = CONCAT21(uVar11,uVar8);
            uVar6._4_4_ = CONCAT31(uVar12,uVar7);
            uVar13 = (undefined4)uVar6;
            uVar14._4_4_ = uVar6._4_4_;
          }
          else {
            EStack_5.sites = (pEVar1->fields).currentSite.sites;
            EStack_5.siteEnum = (pEVar1->fields).currentSite.siteEnum;
            EStack_5.showTouristPromotion = (pEVar1->fields).currentSite.showTouristPromotion;
            EStack_5.allowsOpenInNewTab = (pEVar1->fields).currentSite.allowsOpenInNewTab;
            EStack_5.allowsRedirectToWebpage =
                 (pEVar1->fields).currentSite.allowsRedirectToWebpage;
            EStack_5.allowsModals = (pEVar1->fields).currentSite.allowsModals;
            uVar14._0_1_ = (pEVar1->fields).currentSite.integratedSdk;
            uVar14._1_1_ = (pEVar1->fields).currentSite.allowsFallbackAds;
            uVar14._2_1_ = (pEVar1->fields).currentSite.showPlayButtonAd;
            uVar14._3_1_ = (pEVar1->fields).currentSite.hideGoldShop;
            uVar15 = (pEVar1->fields).currentSite.allowInHouseAds;
            uVar16 = (pEVar1->fields).currentSite.removeFullscreenButton;
            uVar17 = (pEVar1->fields).currentSite.hideSignUp;
            uVar18 = (pEVar1->fields).currentSite.noPlayButtonVideoIcon;
            uVar19 = CONCAT11(uVar18,uVar17);
            uVar20 = CONCAT21(uVar19,uVar16);
            uVar14._4_4_ = CONCAT31(uVar20,uVar15);
            uVar13 = (undefined4)uVar14;
          }
          uVar21._4_1_ = (char)uVar14._4_4_;
          uVar21._5_1_ = (char)((uint)uVar14._4_4_ >> 8);
          uVar21._6_1_ = (char)((uint)uVar14._4_4_ >> 0x10);
          uVar21._7_1_ = (char)((uint)uVar14._4_4_ >> 0x18);
          uVar21._0_1_ = (char)uVar13;
          uVar21._1_1_ = (char)((uint)uVar13 >> 8);
          uVar21._2_1_ = (char)((uint)uVar13 >> 0x10);
          uVar21._3_1_ = (char)((uint)uVar13 >> 0x18);
          pMVar22 = (MVNetworkGame *)FUN_?(TypeInfo__MVNetworkGame);
          EStack_5._16_8_ = uVar21;
          MVNetworkGame::MVNetworkGame__ctor
                    (pMVar22,photonLoggingConfig,&EStack_5,(MethodInfo *)0x0);
          bVar23 = iRam_? != 0;
          (this->fields).game = pMVar22;
          if (bVar23) {
            uVar24 = (uint)((ulonglong)&(this->fields).game >> 0xc);
            lVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6) * 8;
            do {
              uVar26 = *(ulonglong *)(lVar25 + 0xADDR);
              puVar27 = (ulonglong *)(lVar25 + 0xADDR);
              LOCK();
              bVar23 = uVar26 == *puVar27;
              if (bVar23) {
                *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
          this_00 = (FirstFrameUpdateActorReady *)
                    FUN_?(TypeInfo__FirstFrameUpdateActorReady);
          FirstFrameUpdateActorReady::FirstFrameUpdateActorReady__ctor(this_00,(MethodInfo *)0x0);
          bVar23 = iRam_? != 0;
          (this->fields).firstFrameUpdateActorReady = this_00;
          if (bVar23) {
            uVar24 = (uint)((ulonglong)&(this->fields).firstFrameUpdateActorReady >> 0xc);
            lVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6) * 8;
            do {
              uVar26 = *(ulonglong *)(lVar25 + 0xADDR);
              puVar27 = (ulonglong *)(lVar25 + 0xADDR);
              LOCK();
              bVar23 = uVar26 == *puVar27;
              if (bVar23) {
                *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar4 != (MVGameControllerBase *)0x0) &&
             (pMVar22 = (pMVar4->fields).game, pMVar22 != (MVNetworkGame *)0x0)) {
            bVar28 = MVNetworkGame::MVNetworkGame_Join(pMVar22,(MethodInfo *)0x0);
            if (bVar28 == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Failed_to_connect,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void StartGameWithSessionData(Boolean, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_StartGameWithSessionData
               (MVGameControllerBase *this,bool ok,String *sessionDataJson,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WEBPARAMS__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (ok != 0) {
    message = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WEBPARAMS__,sessionDataJson,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    gameSessionData =
         (GameSessionData *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (sessionDataJson,
                    GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                   );
    if (gameSessionData == (GameSessionData *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).pingURL,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).disconnectURL,(MethodInfo *)0x0);
    FUN_?(gameSessionData);
    PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
    AwayMonitor::AwayMonitor_Initialize((gameSessionData->fields).gameMode,(MethodInfo *)0x0);
    (*(this->klass->vtable).StartGame.methodPtr)(this,(this->klass->vtable).StartGame.method);
  }
  return;
}


/* Void TogglePlayerIndicators() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_TogglePlayerIndicators
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (this = (pMVar1->fields).modeController, this == (ModeControllerBase *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  LocationIndicatorsManager_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicatorsManager>_LocationIndicatorsManager__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = (this->fields).locationIndicatorsManager;
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
  if (pLVar3 != (LocationIndicatorsManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pLVar3 = (this->fields).locationIndicatorsManager;
      if (pLVar3 == (LocationIndicatorsManager *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pLVar3,(MethodInfo *)0x0);
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
      if (pGVar4 != (GameObject *)0x0) {
        pvVar5 = (pGVar4->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,0);
      return;
    }
  }
  pLVar3 = (this->fields).locationIndicatorsManagerPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar3 = (LocationIndicatorsManager *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pLVar3,parent,0,
                      LocationIndicatorsManager_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicatorsManager>_LocationIndicatorsManager__UnityEngine__Transform__bool_
                     );
  bVar7 = iRam_? != 0;
  (this->fields).locationIndicatorsManager = pLVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields).locationIndicatorsManager >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* Boolean TryReauth() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_TryReauth(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameControllerBase__OnReceivedReAuthWebParametersFromHttpRequest_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      piVar2 = &(pMVar1->fields).reAuthTestTries;
      *piVar2 = *piVar2 + -1;
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        if ((pMVar1->fields).reAuthTestTries < 0) {
          return 0;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar1->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           (pPVar4 = (pMVar3->fields)._Peer_k__BackingField, pPVar4 != (PhotonPeer *)0x0)) {
          (*(pPVar4->klass->vtable).Disconnect.methodPtr)
                    (pPVar4,(pPVar4->klass->vtable).Disconnect.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar5 != (GameSessionData *)0x0) {
            path = (pGVar5->fields).reauthURL;
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            this = (UnityAction_1_System_Object_ *)
                   FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>)
            ;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this,(Object *)pMVar1,
                       MethodInfo__MVGameControllerBase__OnReceivedReAuthWebParametersFromHttpRequest_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            this_00 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
            AsyncWebRequest::AsyncWebRequest__ctor
                      (this_00,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                       WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            AsyncWWWManager::AsyncWWWManager_WWWRequest(this_00,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Update() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Update
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._ShuttingDown_k__BackingField != 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  state = UpdateController::UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      MVGameControllerBase_HandleDebugShortCuts(this,(MethodInfo *)0x0);
      return;
    }
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((uint)pLVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdateController::UpdateController_UpdateList
              (state,*(List_1_PriorityDataUpdate_ **)((longlong)pLVar3->vector + lVar2 + -0x20),
               (MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateControllerLateUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MVGameControllerBase__UpdateControllerLateUpdate__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateControllerUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_Update((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game != (MVNetworkGame *)0x0) {
      MVGameControllerBase_UpdateGame(this,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateGame() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateGame
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
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
     (this_01 = (pMVar1->fields).game, this_01 != (MVNetworkGame *)0x0)) {
    MVNetworkGame::MVNetworkGame_Update(this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields)._joinState == 3) {
        (*(this->klass->vtable).UpdateInternal.methodPtr)(this);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AwayMonitor);
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
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
          if (pAVar2 == (AwayMonitor *)0x0) goto code_?;
          AwayMonitor::AwayMonitor_UpdateMouse(pAVar2,(MethodInfo *)0x0);
          pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
          if (pAVar2 == (AwayMonitor *)0x0) goto code_?;
          AwayMonitor::AwayMonitor_UpdateIdle(pAVar2,(MethodInfo *)0x0);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          AwayMonitor::AwayMonitor_InternalUpdate((MethodInfo *)0x0);
        }
        pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
        if (pAVar2 == (AwayMonitor *)0x0) goto code_?;
        AwayMonitor::AwayMonitor_CheckAndResolvePendingKick(pAVar2,(MethodInfo *)0x0);
      }
      if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AudioEventHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AudioEventHandler);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AudioEventHandler);
      }
      pLVar3 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
      if (pLVar3 != (List_1_TranslateSoundData_ *)0x0) {
        uStack_4 = 0;
        uStack_5 = 0;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pLStack_7 >> 0xc);
          uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        lStack_12 = (ulonglong)(uint)(pLVar3->fields)._version << 0x20;
        uStack_13 = 0;
        lStack_14 = lStack_12;
        uStack_15 = 0;
        uStack_16 = 0;
        puStack_17 = (undefined *)0x0;
        uStack_18 = 0;
        ppLStack_19 = &pLStack_20;
        pLStack_7 = pLVar3;
        pLStack_20 = pLVar3;
        while (cVar21 = FUN_?(&pLStack_20,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                                     ), uVar22 = uStack_15, cVar21 != '\0') {
          moveValue = (float)uStack_15;
          fVar23 = (float)uStack_16;
          fVar24 = uStack_16._4_4_;
          fVar25 = puStack_17._0_4_;
          if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AudioEventHandler);
          }
          this_00 = TypeInfo__AudioEventHandler->static_fields->audioBuild;
          if (this_00 == (AudioBuild *)0x0) goto code_?;
          VStack_26.x = fVar23;
          VStack_26.y = fVar24;
          VStack_26.z = fVar25;
          AudioBuild::AudioBuild_Translate
                    (this_00,moveValue,(bool)((ulonglong)uVar22 >> 0x20),&VStack_26,(MethodInfo *)0x0
                    );
        }
        if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AudioEventHandler);
        }
        pLVar3 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
        if (pLVar3 != (List_1_TranslateSoundData_ *)0x0) {
          piVar27 = &(pLVar3->fields)._version;
          *piVar27 = *piVar27 + 1;
          (pLVar3->fields)._size = 0;
          return;
        }
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* MVGameControllerBase() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase__ctor
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FlagDebriefingControl);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoldRewardManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkinnedMeshOptimizeManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SkinnedMeshOptimizeManager *)FUN_?(TypeInfo__SkinnedMeshOptimizeManager);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                        );
  FUN_?(pLVar2,
                MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
               );
  iVar3 = iRam_?;
  (pSVar1->fields).optimizationDataList = pLVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).skinnedMeshOptimizeManager = pSVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).skinnedMeshOptimizeManager >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pFVar9 = (FlagDebriefingControl *)FUN_?(TypeInfo__FlagDebriefingControl);
  bVar8 = iRam_? != 0;
  (this->fields).flagDebriefingControl = pFVar9;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields).flagDebriefingControl >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pGVar10 = (GoldRewardManager *)FUN_?(TypeInfo__GoldRewardManager);
  bVar8 = iRam_? != 0;
  (this->fields).goldRewardManager = pGVar10;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields).goldRewardManager >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  bVar8 = cRam_? == '\0';
  (this->fields).reAuthTestTries = 3;
  if (bVar8) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* IAdManager get_AdManager() */

IAdManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_AdManager(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar2 = (IAdManager *)
             (*(pMVar1->klass->vtable).__unknown.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable).__unknown.method);
    return pIVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (IAdManager *)(*pcVar3)();
  return pIVar2;
}


/* AudioManager get_AudioManager() */

AudioManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_AudioManager(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).audioManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AudioManager *)(*pcVar2)();
  return pAVar3;
}


/* BrowserComm get_BrowserComm() */

BrowserComm *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_BrowserComm(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).browserComm;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar3 = (BrowserComm *)(*pcVar2)();
  return pBVar3;
}


/* Boolean get_DisconnectIsOk() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_DisconnectIsOk
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField;
}


/* IEditModeUI get_EditModeUI() */

IEditModeUI *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_EditModeUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
}


/* EmbeddedPlayerConfig get_EmbeddedPlayerConfig() */

EmbeddedPlayerConfig *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_EmbeddedPlayerConfig
          (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).embeddedPlayerConfig;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pEVar3 = (EmbeddedPlayerConfig *)(*pcVar2)();
  return pEVar3;
}


/* FlagDebriefingControl get_FlagDebriefingControl() */

FlagDebriefingControl *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).flagDebriefingControl;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pFVar3 = (FlagDebriefingControl *)(*pcVar2)();
  return pFVar3;
}


/* MVNetworkGame get_Game() */

MVNetworkGame *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_Game(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).game;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVNetworkGame *)(*pcVar2)();
  return pMVar3;
}


/* GameEventManager get_GameEventManager() */

GameEventManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameEventManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    return (pMVar2->fields).GameEventManager;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GameEventManager *)(*pcVar3)();
  return pGVar4;
}


/* MVGameMode get_GameMode() */

MVGameMode__Enum
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    return (pGVar1->fields).gameMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* GameSessionData get_GameSessionData() */

GameSessionData *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameSessionData
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
}


/* GoldRewardManager get_GoldRewardManager() */

GoldRewardManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).goldRewardManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GoldRewardManager *)(*pcVar2)();
  return pGVar3;
}


/* Boolean get_IsAlive() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsAlive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pMVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Boolean get_IsInitialized() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField;
}


/* Boolean get_IsTouristSession() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    return (pGVar1->fields).profileID < 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* MVJoinState get_JoinState() */

MVJoinState__Enum
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_JoinState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields)._joinState;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* Boolean get_LeavingEditPlayMode() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LeavingEditPlayMode
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField;
}


/* LevelLoader get_LevelLoader() */

LevelLoader *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LevelLoader(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).levelLoader;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (LevelLoader *)(*pcVar2)();
  return pLVar3;
}


/* LoadStats get_LoadStats() */

LoadStats *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LoadStats(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).loadStats;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (LoadStats *)(*pcVar2)();
  return pLVar3;
}


/* MainCameraManager get_MainCameraManager() */

MainCameraManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MainCameraManager *)(*pcVar2)();
    return pMVar3;
  }
  pMVar3 = (pMVar1->fields).mainCameraManager;
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
  if (pMVar3 != (MainCameraManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        return (pMVar1->fields).mainCameraManager;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(&TypeInfo__System__NullReferenceException);
  this = (NullReferenceException *)func_?(uVar4);
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor(this,(MethodInfo *)0x0)
  ;
  uVar4 = func_?(&MethodInfo__MVGameControllerBase__get_MainCameraManager__);
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MainCameraManager *)(*pcVar2)();
  return pMVar3;
}


/* MaterialLoader get_MaterialLoader() */

MaterialLoader *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MaterialLoader *)(*pcVar2)();
    return pMVar3;
  }
  pMVar3 = (pMVar1->fields).materialLoader;
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
  if (pMVar3 != (MaterialLoader *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        return (pMVar1->fields).materialLoader;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(&TypeInfo__System__NullReferenceException);
  this = (NullReferenceException *)func_?(uVar4);
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor(this,(MethodInfo *)0x0)
  ;
  uVar4 = func_?(&MethodInfo__MVGameControllerBase__get_MaterialLoader__);
  FUN_?(this,uVar4);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MaterialLoader *)(*pcVar2)();
  return pMVar3;
}


/* Boolean get_OkToReAuth() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OkToReAuth
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    piVar2 = &(pMVar1->fields).reAuthTestTries;
    *piVar2 = *piVar2 + -1;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      return (byte)((uint)(pMVar1->fields).reAuthTestTries >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Action get_OnFirstFrameUpdateActorReady() */

Action * Assembly-CSharp.dll::MVGameControllerBase::
         MVGameControllerBase_get_OnFirstFrameUpdateActorReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
     pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
    return (pFVar2->fields).callbacks;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pAVar4 = (Action *)(*pcVar3)();
  return pAVar4;
}


/* Action`1[MVJoinState] get_OnJoinStateChanged() */

Action_1_MVJoinState_ *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).onJoinStateChanged;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (Action_1_MVJoinState_ *)(*pcVar2)();
  return pAVar3;
}


/* MVNetworkGame+OperationRequests get_OperationRequests() */

MVNetworkGame_OperationRequests *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OperationRequests
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    return (pMVar2->fields).operationRequests;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVNetworkGame_OperationRequests *)(*pcVar3)();
  return pMVar4;
}


/* IPlayModeUI get_PlayModeUI() */

IPlayModeUI *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_PlayModeUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
}


/* Boolean get_PortalUI() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_PortalUI
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_PortalUI_k__BackingField;
}


/* Boolean get_Quitting() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_Quitting
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField;
}


/* Int32 get_ReAuthTries() */

int32_t Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_ReAuthTries
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).reAuthTestTries;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* RegionConfig get_RegionConfig() */

RegionConfig *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_RegionConfig
          (MVGameControllerBase *this,MethodInfo *method)

{
  this_00 = (this->fields).regionConfigManager;
  if (this_00 == (RegionConfigManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (RegionConfig *)(*pcVar1)();
    return pRVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  RegionConfigNamePair_MethodInfo__System__Linq__Enumerable__FirstOrDefault<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<RegionConfigNamePair,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RegionConfigManager___get_RegionConfig_b__3_0_RegionConfigNamePair_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RegionConfigNamePair__RegionConfigType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionConfigManager_GetRegionCon);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this_00->fields).regionConfigType == 0) {
    RStack_3 = RegionConfigManager::RegionConfigManager_DetectRegionFromEnvironment
                          (this_00,(MethodInfo *)0x0);
    (this_00->fields).regionConfigType = RStack_3;
    EStack_4.klass = (Enum__Class *)TypeInfo__RegionConfigNamePair__RegionConfigType;
    EStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_RegionConfigManager_GetRegionCon,pSVar5,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  }
  pLVar6 = (this_00->fields).expectedRegionValues;
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<RegionConfigNamePair,_bool>)
  ;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,(Object *)this_00,
             MethodInfo__RegionConfigManager___get_RegionConfig_b__3_0_RegionConfigNamePair_,
             (MethodInfo *)0x0);
  pOVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_3
                     ((IEnumerable_1_System_Object_ *)pLVar6,(Func_2_Object_Boolean_ *)this_01,
                      RegionConfigNamePair_MethodInfo__System__Linq__Enumerable__FirstOrDefault<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                     );
  if (pOVar7 != (Object *)0x0) {
    return (RegionConfig *)pOVar7[1].monitor;
  }
  uVar8 = func_?(&TypeInfo__RegionConfigNamePair__RegionConfigType);
  pOVar7 = (Object *)func_?(uVar8);
  pLVar6 = (this_00->fields).expectedRegionValues;
  uVar8 = func_?(&TypeInfo__Extensions);
  func_?(uVar8);
  pSVar5 = Extensions::Extensions_BuildStringRecursive
                     ((IEnumerable *)pLVar6,(String *)0x0,1,(MethodInfo *)0x0);
  format = (String *)func_?(&StringLiteral_RegionConfig_not_found_for_regio);
  pSVar5 = mscorlib.dll::System::String::String_Format_1
                     (format,pOVar7,(Object *)pSVar5,(MethodInfo *)0x0);
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_02 = (Exception *)func_?(uVar8);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar5,(MethodInfo *)0x0);
  uVar8 = func_?(&MethodInfo__RegionConfigManager__get_RegionConfig__);
  FUN_?(this_02,uVar8);
  pcVar1 = (code *)swi(3);
  pRVar2 = (RegionConfig *)(*pcVar1)();
  return pRVar2;
}


/* Boolean get_SeekAdConsent() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SeekAdConsent
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField;
}


/* SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager() */

SkinnedMeshOptimizeManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).skinnedMeshOptimizeManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (SkinnedMeshOptimizeManager *)(*pcVar2)();
  return pSVar3;
}


/* SkyboxManager get_SkyboxManager() */

SkyboxManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SkyboxManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).skyboxManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (SkyboxManager *)(*pcVar2)();
  return pSVar3;
}


/* SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal() */

SpawnRoleDataMediator *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this = (pMVar2->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      return (pMVar3->fields).spawnRoleDataMediator;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (SpawnRoleDataMediator *)(*pcVar4)();
  return pSVar5;
}


/* StaticAssetsConfig get_StaticAssetsConfig() */

StaticAssetsConfig
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_StaticAssetsConfig
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).regionConfigManager, this != (RegionConfigManager *)0x0)) {
    pRVar2 = RegionConfigManager::RegionConfigManager_get_RegionConfig(this,(MethodInfo *)0x0);
    if (pRVar2 != (RegionConfig *)0x0) {
      return (StaticAssetsConfig)(pRVar2->fields).StaticAssetsConfig.url;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  SVar4.url = (String *)(*pcVar3)();
  return (StaticAssetsConfig)SVar4.url;
}


/* StreamingAssetManager get_StreamingAssetManager() */

StreamingAssetManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).streamingAssetManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (StreamingAssetManager *)(*pcVar2)();
  return pSVar3;
}


/* SubscriberCooldownsManager get_SubscriberCooldownsManager() */

SubscriberCooldownsManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SubscriberCooldownsManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).subscriberCooldownsManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (SubscriberCooldownsManager *)(*pcVar2)();
  return pSVar3;
}


/* TextureIntegrityChecker get_TextureIntegrityChecker() */

TextureIntegrityChecker *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_TextureIntegrityChecker
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).textureIntegrityChecker;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pTVar3 = (TextureIntegrityChecker *)(*pcVar2)();
  return pTVar3;
}


/* TimeReward get_TimeReward() */

TimeReward *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_TimeReward(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).timeReward;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pTVar3 = (TimeReward *)(*pcVar2)();
  return pTVar3;
}


/* Boolean get_UsingDevSessionData() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  return 0;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WOCM(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    if ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0) {
      return (MVWorldObjectClientManager *)
             (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    return (MVWorldObjectClientManager *)0x0;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClientManager *)(*pcVar3)();
  return pMVar4;
}


/* WaterPlaneManager get_WaterPlaneManager() */

WaterPlaneManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).waterPlaneManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pWVar3 = (WaterPlaneManager *)(*pcVar2)();
  return pWVar3;
}


/* Boolean get_WebPlayAsTouch() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WebPlayAsTouch
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
}


/* Boolean get_WebPlayAsTouchInitialized() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WebPlayAsTouchInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouchInitialized_k__BackingField;
}


/* Void set_DisconnectIsOk(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_DisconnectIsOk
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = value;
  return;
}


/* Void set_EditModeUI(IEditModeUI) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_EditModeUI
               (IEditModeUI *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField >>
                  0xc);
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


/* Void set_GameSessionData(GameSessionData) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_GameSessionData
               (GameSessionData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
                  >> 0xc);
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


/* Void set_IsInitialized(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_IsInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = value;
  return;
}


/* Void set_JoinState(MVJoinState) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_JoinState
               (MVJoinState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    (pMVar1->fields)._joinState = value;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      pAVar2 = (pMVar1->fields).onJoinStateChanged;
      if (pAVar2 != (Action_1_MVJoinState_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,value,(pAVar2->fields)._._.method);
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_LeavingEditPlayMode(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_LeavingEditPlayMode
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = value;
  return;
}


/* Void set_OnFirstFrameUpdateActorReady(Action) */

void Assembly-CSharp.dll::MVGameControllerBase::
     MVGameControllerBase_set_OnFirstFrameUpdateActorReady(Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
     pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
    bVar3 = iRam_? != 0;
    (pFVar2->fields).callbacks = value;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pFVar2->fields).callbacks >> 0xc);
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
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_OnJoinStateChanged(Action`1[MVJoinState]) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged
               (Action_1_MVJoinState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    bVar2 = iRam_? != 0;
    (pMVar1->fields).onJoinStateChanged = value;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pMVar1->fields).onJoinStateChanged >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      pAVar7 = (pMVar1->fields).onJoinStateChanged;
      if (pAVar7 == (Action_1_MVJoinState_ *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,
                 (TypeInfo__MVGameControllerBase->static_fields->instance->fields)._joinState,
                 (pAVar7->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_PlayModeUI(IPlayModeUI) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_PlayModeUI
               (IPlayModeUI *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField >>
                  0xc);
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


/* Void set_PortalUI(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_PortalUI
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PortalUI_k__BackingField = value;
  return;
}


/* Void set_Quitting(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_Quitting
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = value;
  return;
}


/* Void set_SeekAdConsent(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_SeekAdConsent
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField = value;
  return;
}


/* Void set_WebPlayAsTouch(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_WebPlayAsTouch
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = value;
  return;
}


/* Void set_WebPlayAsTouchInitialized(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_WebPlayAsTouchInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouchInitialized_k__BackingField = value;
  return;
}

