
/* Void FixedUpdate() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_FixedUpdate
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral__clientTime__);
    func_?(&StringLiteral_Servertime___);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
    PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    fVar2 = (this->fields).clientTime;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    iVar4 = (this->fields).debuglogInterval + 1;
    (this->fields).debuglogInterval = iVar4;
    (this->fields).clientTime = fVar3 + fVar2;
    if (0x3b < iVar4) {
      (this->fields).debuglogInterval = 0;
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&(this->fields).clientTime,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Servertime___,pSVar5,StringLiteral__clientTime__,str3,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_Init
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Performancetest_Init);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Performancetest_Init,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_Start
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppSStack_1 = &StringLiteral_Performance_Test_Starting;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    iVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
            PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    (this->fields).serverStartTime = iVar3;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Performance_Test_Starting,(MethodInfo *)0x0);
    return;
  }
  uVar4 = func_?(&ppSStack_1);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PerformanceTest get_Instance() */

PerformanceTest *
Assembly-CSharp.dll::PerformanceTest::PerformanceTest_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeRef__PerformanceTest);
    func_?(&TypeInfo__PerformanceTest);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_PerformanceTest);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PerformanceTest->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  pIVar3 = TypeRef__PerformanceTest;
  if (bVar2 != 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pPVar1 = (PerformanceTest *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectOfType
                       (pTVar4,(MethodInfo *)0x0);
    if (pPVar1 == (PerformanceTest *)0x0) {
      TypeInfo__PerformanceTest->static_fields->_instance = (PerformanceTest *)0x0;
    }
    else {
      if (((pPVar1->klass->_1).typeHierarchyDepth <
           (TypeInfo__PerformanceTest->_1).typeHierarchyDepth) ||
         ((pPVar1->klass->_1).typeHierarchy[(TypeInfo__PerformanceTest->_1).typeHierarchyDepth - 1]
          != (Il2CppClass *)TypeInfo__PerformanceTest)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pPVar6 = (PerformanceTest *)0x0;
      if (bVar5) {
        pPVar6 = pPVar1;
      }
      TypeInfo__PerformanceTest->static_fields->_instance = pPVar6;
    }
    func_?();
  }
  pPVar1 = TypeInfo__PerformanceTest->static_fields->_instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this = (GameObject *)func_?();
    if (this == (GameObject *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      pPVar1 = (PerformanceTest *)(*pcVar7)();
      return pPVar1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this,StringLiteral_PerformanceTest,(MethodInfo *)0x0);
    pIVar3 = TypeRef__PerformanceTest;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    pPVar1 = (PerformanceTest *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                       (this,pTVar4,(MethodInfo *)0x0);
    if (pPVar1 == (PerformanceTest *)0x0) {
      TypeInfo__PerformanceTest->static_fields->_instance = (PerformanceTest *)0x0;
      pPStack8 = (PerformanceTest *)0x0;
    }
    else {
      if (((pPVar1->klass->_1).typeHierarchyDepth <
           (TypeInfo__PerformanceTest->_1).typeHierarchyDepth) ||
         ((pPVar1->klass->_1).typeHierarchy[(TypeInfo__PerformanceTest->_1).typeHierarchyDepth - 1]
          != (Il2CppClass *)TypeInfo__PerformanceTest)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pPVar6 = (PerformanceTest *)0x0;
      if (bVar5) {
        pPVar6 = pPVar1;
      }
      TypeInfo__PerformanceTest->static_fields->_instance = pPVar6;
      if (((pPVar1->klass->_1).typeHierarchyDepth <
           (TypeInfo__PerformanceTest->_1).typeHierarchyDepth) ||
         ((pPVar1->klass->_1).typeHierarchy[(TypeInfo__PerformanceTest->_1).typeHierarchyDepth - 1]
          != (Il2CppClass *)TypeInfo__PerformanceTest)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pPStack8 = (PerformanceTest *)0x0;
      if (bVar5) {
        pPStack8 = pPVar1;
      }
    }
    pPStack9 = TypeInfo__PerformanceTest->static_fields;
    func_?();
  }
  return TypeInfo__PerformanceTest->static_fields->_instance;
}

