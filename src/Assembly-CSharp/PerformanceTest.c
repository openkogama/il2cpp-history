
/* Void FixedUpdate() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_FixedUpdate
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__clientTime__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Servertime___);
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    iVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
            PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    fVar4 = (this->fields).clientTime;
    iVar5 = (this->fields).serverStartTime;
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
    fVar8 = (float)(*pcRam_?)();
    iVar9 = (this->fields).debuglogInterval + 1;
    (this->fields).debuglogInterval = iVar9;
    (this->fields).clientTime = fVar8 + fVar4;
    if (0x3b < iVar9) {
      bVar10 = cRam_? == '\0';
      (this->fields).debuglogInterval = 0;
      if (bVar10) {
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
      aRStack_11[0]._pointer._value = (void *)0x0;
      aRStack_11[0]._length = 0;
      aRStack_11[0]._12_4_ = 0;
      pSVar12 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar3 - iVar5,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&(this->fields).clientTime,(MethodInfo *)0x0);
      pSVar12 = mscorlib.dll::System::String::String_Concat_6
                         (StringLiteral_Servertime___,pSVar12,StringLiteral__clientTime__,str3,
                          (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar12,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_Init
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Performancetest_Init);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Performancetest_Init;
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
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_Start
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Performance_Test_Starting);
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
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields)._Peer_k__BackingField, this_00 == (PhotonPeer *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
          PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
  (this->fields).serverStartTime = iVar4;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = StringLiteral_Performance_Test_Starting;
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
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3,pSVar5);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PerformanceTest get_Instance() */

PerformanceTest *
Assembly-CSharp.dll::PerformanceTest::PerformanceTest_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PerformanceTest_MethodInfo__UnityEngine__Object__FindAnyObjectByType<PerformanceTest>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__PerformanceTest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PerformanceTest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PerformanceTest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PerformanceTest->static_fields->_instance;
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
  if (pPVar1 == (PerformanceTest *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar1 = (PerformanceTest *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindAnyObjectByType_1
                       (
                       PerformanceTest_MethodInfo__UnityEngine__Object__FindAnyObjectByType<PerformanceTest>__
                       );
    TypeInfo__PerformanceTest->static_fields->_instance = pPVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__PerformanceTest->static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pPVar1 = TypeInfo__PerformanceTest->static_fields->_instance;
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
  if (pPVar1 != (PerformanceTest *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_PerformanceTest;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (self,name,(MethodInfo *)0x0);
  pIVar7 = TypeRef__PerformanceTest;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pPVar8 = (PerformanceTest *)0x0;
  pPVar1 = pPVar8;
  if (pIVar7 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar7,1);
    pPVar1 = (PerformanceTest *)FUN_?(lVar3 + 0x20);
  }
  if (self == (GameObject *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    pPVar1 = (PerformanceTest *)(*pcVar9)();
    return pPVar1;
  }
  pPVar1 = (PerformanceTest *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                     (self,(Type *)pPVar1,(MethodInfo *)0x0);
  if (pPVar1 != (PerformanceTest *)0x0) {
    bVar10 = (TypeInfo__PerformanceTest->_1).naturalAligment;
    if (((pPVar1->klass->_1).naturalAligment < bVar10) ||
       (bVar6 = true,
       (pPVar1->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
       (Il2CppClass *)TypeInfo__PerformanceTest)) {
      bVar6 = false;
    }
    if (bVar6) {
      pPVar8 = pPVar1;
    }
  }
  TypeInfo__PerformanceTest->static_fields->_instance = pPVar8;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__PerformanceTest->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
code_?:
  return TypeInfo__PerformanceTest->static_fields->_instance;
}

