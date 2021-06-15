
/* Void FixedUpdate() */

void Assembly-CSharp.dll::PerformanceTest::PerformanceTest_FixedUpdate
               (PerformanceTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 == (MVNetworkGame *)0x0) ||
     (this_01 = (PhotonPeer *)
                AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                          ((AvatarUIHandlerRemote *)this_00,(MethodInfo *)0x0),
     this_01 == (PhotonPeer *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
    PhotonPeer_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    fVar1 = (this->fields).clientTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    piVar3 = &(this->fields).debuglogInterval;
    *piVar3 = *piVar3 + 1;
    (this->fields).clientTime = fVar2 + fVar1;
    if ((this->fields).debuglogInterval < 0x3c) {
      return;
    }
    (this->fields).debuglogInterval = 0;
    args = (Object__Array *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Servertime___ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Servertime___;
    pOVar5 = (Object *)func_?();
    if ((pOVar5 != (Object *)0x0) && (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    if ((StringLiteral__clientTime__ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__clientTime__;
    pOVar5 = (Object *)func_?();
    if ((pOVar5 == (Object *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (PhotonPeer *)
              AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                        ((AvatarUIHandlerRemote *)this_00,(MethodInfo *)0x0);
    if (this_01 != (PhotonPeer *)0x0) {
      iRam_? = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
                     PhotonPeer_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Performance_Test_Starting,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* PerformanceTest get_Instance() */

PerformanceTest *
Assembly-CSharp.dll::PerformanceTest::PerformanceTest_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PerformanceTest->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PerformanceTest->_1).cctor_started == 0)) {
    func_?(TypeInfo__PerformanceTest);
  }
  pPVar1 = TypeInfo__PerformanceTest->static_fields->_instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  pIVar3 = TypeRef__PerformanceTest;
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar1 = (PerformanceTest *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectOfType
                       (pTVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PerformanceTest->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PerformanceTest->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 == (PerformanceTest *)0x0) {
      pPVar5 = (PerformanceTest *)0x0;
    }
    else {
      bVar6 = (TypeInfo__PerformanceTest->_1).naturalAligment;
      if (((pPVar1->klass->_1).naturalAligment < bVar6) ||
         ((pPVar1->klass->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__PerformanceTest))
      {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pPVar5 = (PerformanceTest *)0x0;
      if (bVar7) {
        pPVar5 = pPVar1;
      }
    }
    TypeInfo__PerformanceTest->static_fields->_instance = pPVar5;
  }
  if ((((uint)(TypeInfo__PerformanceTest->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PerformanceTest->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = TypeInfo__PerformanceTest->static_fields->_instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this,StringLiteral_PerformanceTest,(MethodInfo *)0x0);
    pIVar3 = TypeRef__PerformanceTest;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    if (this == (GameObject *)0x0) {
      func_?();
      pcVar8 = (code *)swi(3);
      pPVar1 = (PerformanceTest *)(*pcVar8)();
      return pPVar1;
    }
    pPVar1 = (PerformanceTest *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                       (this,pTVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PerformanceTest->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PerformanceTest->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 == (PerformanceTest *)0x0) {
      pPVar5 = (PerformanceTest *)0x0;
    }
    else {
      bVar6 = (TypeInfo__PerformanceTest->_1).naturalAligment;
      if (((pPVar1->klass->_1).naturalAligment < bVar6) ||
         ((pPVar1->klass->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__PerformanceTest))
      {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pPVar5 = (PerformanceTest *)0x0;
      if (bVar7) {
        pPVar5 = pPVar1;
      }
    }
    TypeInfo__PerformanceTest->static_fields->_instance = pPVar5;
  }
  if ((((uint)(TypeInfo__PerformanceTest->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PerformanceTest->_1).cctor_started == 0)) {
    pPStack9 = TypeInfo__PerformanceTest;
    func_?();
  }
  return TypeInfo__PerformanceTest->static_fields->_instance;
}

